#pragma once
// IWYU pragma private; include "System/Threading/CancellationTokenSource_LinkedNCancellationTokenSource.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_LinkedNCancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
inline void GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::setStaticF_s_linkedTokenCancelDelegate(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_linkedTokenCancelDelegate", ::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::getStaticF_s_linkedTokenCancelDelegate() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_linkedTokenCancelDelegate", ::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*>();
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::CancellationTokenSource_LinkedNCancellationTokenSource() {}
