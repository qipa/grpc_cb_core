// Licensed under the Apache License, Version 2.0.
// Author: Jin Qing (http://blog.csdn.net/jq0123)

#ifndef GRPC_CB_CORE_CLIENT_ASYNC_READER_H
#define GRPC_CB_CORE_CLIENT_ASYNC_READER_H

#include <cstdint>  // for int64_t
#include <functional>  // for std::function
#include <string>

#include <grpc_cb_core/impl/channel_sptr.h>                      // for ChannelSptr
#include <grpc_cb_core/impl/client/client_async_read_handler.h>  // for ClientAsyncReadHandler
#include <grpc_cb_core/impl/client/client_async_reader_impl.h>  // for ClientAsyncReaderImpl
#include <grpc_cb_core/impl/completion_queue_sptr.h>  // for CompletionQueueSptr
#include <grpc_cb_core/status_callback.h>             // for StatusCallback

namespace grpc_cb_core {

// Copyable. Thread-safe.
template <class Response>
class ClientAsyncReader GRPC_FINAL {
 public:
  ClientAsyncReader(const ChannelSptr& channel, const std::string& method,
                    const std::string& request,
                    const CompletionQueueSptr& cq_sptr, int64_t timeout_ms)
      : impl_sptr_(new ClientAsyncReaderImpl(channel, method, request, cq_sptr,
                                             timeout_ms)) {}

 public:
  using OnMsg = std::function<void(const Response&)>;  // XXX
  void ReadEach(const OnMsg& on_msg,
      const StatusCallback& on_status = StatusCallback()) const {
    class ReadHandler : public ClientAsyncReadHandler {
     public:
      explicit ReadHandler(const OnMsg& on_msg) : on_msg_(on_msg) {}
      Message& GetMsg() GRPC_OVERRIDE { return msg_; }
      void HandleMsg() GRPC_OVERRIDE { if (on_msg_) on_msg_(msg_); }
     private:
      OnMsg on_msg_;
      Response msg_;
    };

    auto handler_sptr = std::make_shared<ReadHandler>(on_msg);
    impl_sptr_->SetReadHandler(handler_sptr);
    impl_sptr_->SetOnStatus(on_status);
    impl_sptr_->Start();
  }

 private:
  const std::shared_ptr<ClientAsyncReaderImpl> impl_sptr_;
};  // class ClientAsyncReader<>

}  // namespace grpc_cb_core
#endif  // GRPC_CB_CORE_CLIENT_ASYNC_READER_H
