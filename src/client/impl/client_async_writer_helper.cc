// Licensed under the Apache License, Version 2.0.
// Author: Jin Qing (http://blog.csdn.net/jq0123)

#include "client_async_writer_helper.h"

#include <cassert>     // for assert()

#include "client_send_msg_cqtag.h"  // for ClientSendMsgCqTag
#include <grpc_cb_core/common/status.h>                      // for Status::ok()

namespace grpc_cb_core {

// Todo: thread-safe

ClientAsyncWriterHelper::ClientAsyncWriterHelper(
    const CallSptr& call_sptr, const EndCb& end_cb)
    : call_sptr_(call_sptr), end_cb_(end_cb) {
  assert(call_sptr);
  assert(end_cb);
}

ClientAsyncWriterHelper::~ClientAsyncWriterHelper() {}

bool ClientAsyncWriterHelper::Queue(const std::string& msg) {
  if (aborted_)  // Maybe reader failed.
    return false;
  if (is_queue_ended_)
    return true;  // ignore

  // cache messages
  msg_queue_.push(msg);
  if (is_writing_) return true;
  return WriteNext();
}

void ClientAsyncWriterHelper::QueueEnd() {
  if (is_queue_ended_) return;
  if (aborted_) return;
  is_queue_ended_ = true;
  if (is_writing_) return;  // call end_cb() in OnWritten()
  assert(msg_queue_.empty());
  end_cb_();
}

bool ClientAsyncWriterHelper::WriteNext() {
  assert(!is_writing_);
  assert(!msg_queue_.empty());

  if (aborted_) return false;  // Maybe reader failed.
  is_writing_ = true;
  const std::string& msg = msg_queue_.front();
  msg_queue_.pop();  // may empty now but is_writing_

  assert(call_sptr_);
  auto* tag = new ClientSendMsgCqTag(call_sptr_);
  auto sptr = shared_from_this();
  tag->SetCompleteCb([sptr](bool success) {
      sptr->OnWritten(success);
  });
  if (tag->Start(msg))
    return true;

  delete tag;
  status_.SetInternalError("Failed to write client stream.");
  end_cb_();  // error end
  return false;
}

void ClientAsyncWriterHelper::OnWritten(bool success) {
  assert(status_.ok());
  assert(is_writing_);
  is_writing_ = false;
  if (!success) {
    status_.SetInternalError("ClientSendMsgCqTag failed in ClientAsyncWriterHelper.");
    end_cb_();  // error end
    return;
  }
  if (!msg_queue_.empty()) {
    WriteNext();
    return;
  }

  if (is_queue_ended_)
    end_cb_();  // normal end
}

}  // namespace grpc_cb_core
