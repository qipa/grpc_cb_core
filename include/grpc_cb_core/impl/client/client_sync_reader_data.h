#ifndef GRPC_CB_CORE_IMPL_CLINET_CLIENT_SYNC_READER_DATA_H
#define GRPC_CB_CORE_IMPL_CLINET_CLIENT_SYNC_READER_DATA_H

#include <memory>  // for shared_ptr<>

#include <grpc_cb_core/impl/call_sptr.h>              // for CallSptr
#include <grpc_cb_core/impl/cqueue_for_pluck_sptr.h>  // for CQueueFforPluckSptr
#include <grpc_cb_core/status.h>                      // for Status
#include <grpc_cb_core/status_callback.h>             // for StatusCallback

namespace grpc_cb_core {

// Todo: Delete it.

// Wrap all data in shared struct pointer to make copy quick.
template <class Response>
struct ClientSyncReaderData {
    CQueueForPluckSptr cq4p_sptr;
    CallSptr call_sptr;
    Status status;

    using MsgCallback = std::function<void(const Response&)>;
    MsgCallback on_msg;
    StatusCallback on_status;
};

template <class Response>
using ClientSyncReaderDataSptr = std::shared_ptr<ClientSyncReaderData<Response>>;

}  // namespace grpc_cb_core
#endif  // GRPC_CB_CORE_IMPL_CLINET_CLIENT_SYNC_READER_DATA_H
