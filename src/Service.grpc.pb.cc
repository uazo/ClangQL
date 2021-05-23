// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: Service.proto

#include "Service.pb.h"
#include "Service.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace clang {
namespace clangd {
namespace remote {
namespace v1 {

static const char* SymbolIndex_method_names[] = {
  "/clang.clangd.remote.v1.SymbolIndex/Lookup",
  "/clang.clangd.remote.v1.SymbolIndex/FuzzyFind",
  "/clang.clangd.remote.v1.SymbolIndex/Refs",
  "/clang.clangd.remote.v1.SymbolIndex/Relations",
};

std::unique_ptr< SymbolIndex::Stub> SymbolIndex::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SymbolIndex::Stub> stub(new SymbolIndex::Stub(channel));
  return stub;
}

SymbolIndex::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Lookup_(SymbolIndex_method_names[0], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_FuzzyFind_(SymbolIndex_method_names[1], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_Refs_(SymbolIndex_method_names[2], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_Relations_(SymbolIndex_method_names[3], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::clang::clangd::remote::LookupReply>* SymbolIndex::Stub::LookupRaw(::grpc::ClientContext* context, const ::clang::clangd::remote::LookupRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::clang::clangd::remote::LookupReply>::Create(channel_.get(), rpcmethod_Lookup_, context, request);
}

void SymbolIndex::Stub::experimental_async::Lookup(::grpc::ClientContext* context, const ::clang::clangd::remote::LookupRequest* request, ::grpc::experimental::ClientReadReactor< ::clang::clangd::remote::LookupReply>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::clang::clangd::remote::LookupReply>::Create(stub_->channel_.get(), stub_->rpcmethod_Lookup_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::clang::clangd::remote::LookupReply>* SymbolIndex::Stub::AsyncLookupRaw(::grpc::ClientContext* context, const ::clang::clangd::remote::LookupRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::clang::clangd::remote::LookupReply>::Create(channel_.get(), cq, rpcmethod_Lookup_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::clang::clangd::remote::LookupReply>* SymbolIndex::Stub::PrepareAsyncLookupRaw(::grpc::ClientContext* context, const ::clang::clangd::remote::LookupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::clang::clangd::remote::LookupReply>::Create(channel_.get(), cq, rpcmethod_Lookup_, context, request, false, nullptr);
}

::grpc::ClientReader< ::clang::clangd::remote::FuzzyFindReply>* SymbolIndex::Stub::FuzzyFindRaw(::grpc::ClientContext* context, const ::clang::clangd::remote::FuzzyFindRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::clang::clangd::remote::FuzzyFindReply>::Create(channel_.get(), rpcmethod_FuzzyFind_, context, request);
}

void SymbolIndex::Stub::experimental_async::FuzzyFind(::grpc::ClientContext* context, const ::clang::clangd::remote::FuzzyFindRequest* request, ::grpc::experimental::ClientReadReactor< ::clang::clangd::remote::FuzzyFindReply>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::clang::clangd::remote::FuzzyFindReply>::Create(stub_->channel_.get(), stub_->rpcmethod_FuzzyFind_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::clang::clangd::remote::FuzzyFindReply>* SymbolIndex::Stub::AsyncFuzzyFindRaw(::grpc::ClientContext* context, const ::clang::clangd::remote::FuzzyFindRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::clang::clangd::remote::FuzzyFindReply>::Create(channel_.get(), cq, rpcmethod_FuzzyFind_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::clang::clangd::remote::FuzzyFindReply>* SymbolIndex::Stub::PrepareAsyncFuzzyFindRaw(::grpc::ClientContext* context, const ::clang::clangd::remote::FuzzyFindRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::clang::clangd::remote::FuzzyFindReply>::Create(channel_.get(), cq, rpcmethod_FuzzyFind_, context, request, false, nullptr);
}

::grpc::ClientReader< ::clang::clangd::remote::RefsReply>* SymbolIndex::Stub::RefsRaw(::grpc::ClientContext* context, const ::clang::clangd::remote::RefsRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::clang::clangd::remote::RefsReply>::Create(channel_.get(), rpcmethod_Refs_, context, request);
}

void SymbolIndex::Stub::experimental_async::Refs(::grpc::ClientContext* context, const ::clang::clangd::remote::RefsRequest* request, ::grpc::experimental::ClientReadReactor< ::clang::clangd::remote::RefsReply>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::clang::clangd::remote::RefsReply>::Create(stub_->channel_.get(), stub_->rpcmethod_Refs_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::clang::clangd::remote::RefsReply>* SymbolIndex::Stub::AsyncRefsRaw(::grpc::ClientContext* context, const ::clang::clangd::remote::RefsRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::clang::clangd::remote::RefsReply>::Create(channel_.get(), cq, rpcmethod_Refs_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::clang::clangd::remote::RefsReply>* SymbolIndex::Stub::PrepareAsyncRefsRaw(::grpc::ClientContext* context, const ::clang::clangd::remote::RefsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::clang::clangd::remote::RefsReply>::Create(channel_.get(), cq, rpcmethod_Refs_, context, request, false, nullptr);
}

::grpc::ClientReader< ::clang::clangd::remote::RelationsReply>* SymbolIndex::Stub::RelationsRaw(::grpc::ClientContext* context, const ::clang::clangd::remote::RelationsRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::clang::clangd::remote::RelationsReply>::Create(channel_.get(), rpcmethod_Relations_, context, request);
}

void SymbolIndex::Stub::experimental_async::Relations(::grpc::ClientContext* context, const ::clang::clangd::remote::RelationsRequest* request, ::grpc::experimental::ClientReadReactor< ::clang::clangd::remote::RelationsReply>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::clang::clangd::remote::RelationsReply>::Create(stub_->channel_.get(), stub_->rpcmethod_Relations_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::clang::clangd::remote::RelationsReply>* SymbolIndex::Stub::AsyncRelationsRaw(::grpc::ClientContext* context, const ::clang::clangd::remote::RelationsRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::clang::clangd::remote::RelationsReply>::Create(channel_.get(), cq, rpcmethod_Relations_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::clang::clangd::remote::RelationsReply>* SymbolIndex::Stub::PrepareAsyncRelationsRaw(::grpc::ClientContext* context, const ::clang::clangd::remote::RelationsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::clang::clangd::remote::RelationsReply>::Create(channel_.get(), cq, rpcmethod_Relations_, context, request, false, nullptr);
}

SymbolIndex::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SymbolIndex_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< SymbolIndex::Service, ::clang::clangd::remote::LookupRequest, ::clang::clangd::remote::LookupReply>(
          [](SymbolIndex::Service* service,
             ::grpc::ServerContext* ctx,
             const ::clang::clangd::remote::LookupRequest* req,
             ::grpc::ServerWriter<::clang::clangd::remote::LookupReply>* writer) {
               return service->Lookup(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SymbolIndex_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< SymbolIndex::Service, ::clang::clangd::remote::FuzzyFindRequest, ::clang::clangd::remote::FuzzyFindReply>(
          [](SymbolIndex::Service* service,
             ::grpc::ServerContext* ctx,
             const ::clang::clangd::remote::FuzzyFindRequest* req,
             ::grpc::ServerWriter<::clang::clangd::remote::FuzzyFindReply>* writer) {
               return service->FuzzyFind(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SymbolIndex_method_names[2],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< SymbolIndex::Service, ::clang::clangd::remote::RefsRequest, ::clang::clangd::remote::RefsReply>(
          [](SymbolIndex::Service* service,
             ::grpc::ServerContext* ctx,
             const ::clang::clangd::remote::RefsRequest* req,
             ::grpc::ServerWriter<::clang::clangd::remote::RefsReply>* writer) {
               return service->Refs(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SymbolIndex_method_names[3],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< SymbolIndex::Service, ::clang::clangd::remote::RelationsRequest, ::clang::clangd::remote::RelationsReply>(
          [](SymbolIndex::Service* service,
             ::grpc::ServerContext* ctx,
             const ::clang::clangd::remote::RelationsRequest* req,
             ::grpc::ServerWriter<::clang::clangd::remote::RelationsReply>* writer) {
               return service->Relations(ctx, req, writer);
             }, this)));
}

SymbolIndex::Service::~Service() {
}

::grpc::Status SymbolIndex::Service::Lookup(::grpc::ServerContext* context, const ::clang::clangd::remote::LookupRequest* request, ::grpc::ServerWriter< ::clang::clangd::remote::LookupReply>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SymbolIndex::Service::FuzzyFind(::grpc::ServerContext* context, const ::clang::clangd::remote::FuzzyFindRequest* request, ::grpc::ServerWriter< ::clang::clangd::remote::FuzzyFindReply>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SymbolIndex::Service::Refs(::grpc::ServerContext* context, const ::clang::clangd::remote::RefsRequest* request, ::grpc::ServerWriter< ::clang::clangd::remote::RefsReply>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SymbolIndex::Service::Relations(::grpc::ServerContext* context, const ::clang::clangd::remote::RelationsRequest* request, ::grpc::ServerWriter< ::clang::clangd::remote::RelationsReply>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace clang
}  // namespace clangd
}  // namespace remote
}  // namespace v1
