// Licensed under the Apache License, Version 2.0.
// Author: Jin Qing (http://blog.csdn.net/jq0123)

#ifndef GRPC_CB_CORE_COMMON_DO_NEXT_COMPLETION_H
#define GRPC_CB_CORE_COMMON_DO_NEXT_COMPLETION_H

namespace grpc_cb_core {

class CompletionQueueForNext;

// Blocking go next and complete.
// Return false if completion queue is shut down.
bool DoNextCompletion(CompletionQueueForNext& cq4n);

}  // namespace grpv_cb
#endif  // GRPC_CB_CORE_COMMON_DO_NEXT_COMPLETION_H
