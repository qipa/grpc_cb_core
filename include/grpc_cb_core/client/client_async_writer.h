// Licensed under the Apache License, Version 2.0.
// Author: Jin Qing (http://blog.csdn.net/jq0123)

#ifndef GRPC_CB_CORE_CLIENT_ASYNC_WRITER_H
#define GRPC_CB_CORE_CLIENT_ASYNC_WRITER_H

#include <cstdint>  // for int64_t
#include <string>

#include <grpc_cb_core/client/channel_sptr.h>           // for ChannelSptr
#include <grpc_cb_core/client/close_cb.h>               // for CloseCb
#include <grpc_cb_core/common/completion_queue_sptr.h>  // for CompletionQueueSptr
#include <grpc_cb_core/common/support/config.h>         // for GRPC_FINAL

namespace grpc_cb_core {

class ClientAsyncWriterImplWrapper;
class Status;

// Copyable. Thread-safe.
class ClientAsyncWriter GRPC_FINAL {
 public:
  ClientAsyncWriter(const ChannelSptr& channel, const std::string& method,
                    const CompletionQueueSptr& cq_sptr, int64_t timeout_ms);

  // Todo: Get queue size()
  // Todo: SyncGetInitMd();

  bool Write(const std::string& request) const;
  void Close(const CloseCb& close_cb = nullptr);

  // Todo: Use a default CloseHandler if no Close()?

 private:
  const std::shared_ptr<ClientAsyncWriterImplWrapper> impl_sptr_;  // Easy to copy.
};  // class ClientAsyncWriter

}  // namespace grpc_cb_core

#endif  // GRPC_CB_CORE_CLIENT_ASYNC_WRITER_H
