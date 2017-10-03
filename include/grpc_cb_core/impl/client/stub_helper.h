// Licensed under the Apache License, Version 2.0.
// Author: Jin Qing (http://blog.csdn.net/jq0123)

#ifndef GRPC_CB_CORE_IMPL_CLIENT_STUB_HELPER_H
#define GRPC_CB_CORE_IMPL_CLIENT_STUB_HELPER_H

// DEL #include <google/protobuf/message.h>  // for Message

#include <grpc_cb_core/service_stub.h>  // for ServiceStub
#include <grpc_cb_core/status.h>  // for Status
#include <grpc_cb_core/status_callback.h>  // for ErrorCallback
#include <grpc_cb_core/impl/client/wrap_response_callback.h>  // for WrapResponseCallback()

namespace grpc_cb_core {

// Helper to request stub.
class StubHelper {
public:
    StubHelper(ServiceStub& stub) : stub_(stub) {}

public:
    using Message = ::google::protobuf::Message;

    template <class Response>
    inline Status SyncRequest(const std::string& method,
        const Message& request, Response* response);

    template <class Response>
    inline void AsyncRequest(const std::string& method,
        const Message& request,
        const std::function<void (const Response&)>& cb,
        const ErrorCallback& ecb);

private:
    ServiceStub& stub_;
};  // StubHelper

template <class Response>
Status StubHelper::SyncRequest(const std::string& method,
    const Message& request, Response* response) {
  std::string resp_str;
  Status status = stub_.SyncRequest(method,
      request.SerializeAsString(), resp_str);
  if (!status.ok() || !response)
    return status;
  if (response->ParseFromString(resp_str))
    return status;
  return status.InternalError("Failed to parse response.");
}

template <class Response>
void StubHelper::AsyncRequest(const std::string& method,
    const Message& request,
    const std::function<void (const Response&)>& cb,
    const ErrorCallback& ecb) {
  stub_.AsyncRequest(method, request.SerializeAsString(),
      WrapResponseCallback(cb, ecb), ecb);
}

}  // namespace grpc_cb_core
#endif  // GRPC_CB_CORE_IMPL_CLIENT_STUB_HELPER_H