#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/FeatureAsyncPreloader.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncPreloader_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__FeatureAsyncPreloader_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncPreloader_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__FeatureAsyncPreloader_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c::*)()>(&::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32506ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c._PreloadAsync_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c::*)(::BGLib::AppFlow::Initialization::AsyncPreloader*)>(
        &::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c::_PreloadAsync_b__1_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32506f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c*>(),
                                                                                           { "<PreloadAsync>b__1_0", {}, { ::i2c::type_of<::BGLib::AppFlow::Initialization::AsyncPreloader*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c::setStaticF___9(::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c* value) {
  ::cordl_internals::setStaticField<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c*, "<>9", ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c*>(
      std::forward<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c*>(value));
}
inline ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c* BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c*, "<>9", ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c*>();
}
inline void
BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c::setStaticF___9__1_0(::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>*, "<>9__1_0",
                                    ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c*>(
      std::forward<::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>*>(value));
}
inline ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>*
BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>*, "<>9__1_0",
                                           ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c*>();
}
inline void BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c::_PreloadAsync_b__1_0(::BGLib::AppFlow::Initialization::AsyncPreloader* preloader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c*>(),
                                                                                         { "<PreloadAsync>b__1_0", {}, { ::i2c::type_of<::BGLib::AppFlow::Initialization::AsyncPreloader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, preloader);
}
inline ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c* BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader___c::FeatureAsyncPreloader___c() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1::*)()>(
    &::BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x90c;
  constexpr static std::size_t addrs = 0x3250710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x325101c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>*>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1::FeatureAsyncPreloader__PreloadAsync_d__1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader__PreloadAsync_d__1::FeatureAsyncPreloader__PreloadAsync_d__1() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader.PreloadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BGLib::AppFlow::Initialization::FeatureAsyncPreloader::*)()>(
    &::BGLib::AppFlow::Initialization::FeatureAsyncPreloader::PreloadAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32505e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader*>(),
                                                                                          { ::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::FeatureAsyncPreloader::*)()>(&::BGLib::AppFlow::Initialization::FeatureAsyncPreloader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3250694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::FeatureAsyncPreloader::PreloadAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::FeatureAsyncPreloader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader* BGLib::AppFlow::Initialization::FeatureAsyncPreloader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader::FeatureAsyncPreloader() {}
