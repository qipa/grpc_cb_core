// Licensed under the Apache License, Version 2.0.
// Author: Jin Qing (http://blog.csdn.net/jq0123)

#ifndef GRPC_CB_CORE_IMPL_CLIENT_CLIENT_SYNC_WRITER__HELPER_H
#define GRPC_CB_CORE_IMPL_CLIENT_CLIENT_SYNC_WRITER__HELPER_H

#include <cassert>     // for assert()
#include <string>

#include <grpc_cb_core/client/impl/client_send_msg_cqtag.h>  // for ClientSendMsgCqTag
#include <grpc_cb_core/common/call_sptr.h>              // for CallSptr
#include <grpc_cb_core/common/impl/cqueue_for_pluck.h>  // for Pluck()
#include <grpc_cb_core/common/status.h>                 // for Status

namespace grpc_cb_core {
namespace ClientSyncWriterHelper {

// Todo: SyncGetInitMd();

inline bool SyncWrite(
    const CallSptr& call_sptr,
    const CQueueForPluckSptr& cq4p_sptr,
    const std::string& request,
    Status& status) {
  assert(call_sptr);
  assert(cq4p_sptr);
  if (!status.ok())
    return false;

  ClientSendMsgCqTag tag(call_sptr);
  if (tag.Start(request)) {
    cq4p_sptr->Pluck(&tag);
    return true;
  }

  status.SetInternalError("Failed to write client stream.");
  return false;
}  // SyncWrite()

}  // namespace ClientSyncWriterHelper
}  // namespace grpc_cb_core

#endif  // GRPC_CB_CORE_IMPL_CLIENT_CLIENT_SYNC_WRITER__HELPER_H
