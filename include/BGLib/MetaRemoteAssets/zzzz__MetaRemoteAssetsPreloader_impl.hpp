#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MetaRemoteAssetsPreloader.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncPreloader_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsPreloader_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsPreloader_def.hpp"
#include "GlobalNamespace/zzzz__NetworkConfigSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36b7b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c._PreloadAsync_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::_PreloadAsync_b__1_0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x36b7b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>(),
                                                             { "<PreloadAsync>b__1_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::setStaticF___9(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c* value) {
  ::cordl_internals::setStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*, "<>9", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>(
      std::forward<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>(value));
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*, "<>9", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::setStaticF___9__1_0(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>*, "<>9__1_0",
                                    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>(
      std::forward<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>*, "<>9__1_0",
                                           ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::_PreloadAsync_b__1_0(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>(),
                                                           { "<PreloadAsync>b__1_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, locator);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::MetaRemoteAssetsPreloader___c() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x36b7c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36b812c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1::MetaRemoteAssetsPreloader__PreloadAsync_d__1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__1::MetaRemoteAssetsPreloader__PreloadAsync_d__1() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader.PreloadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::PreloadAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x36b76c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>(),
                                                                                          { ::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader.ApplyAddressablesOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::ApplyAddressablesOverrides)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x36b7778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>(), { "ApplyAddressablesOverrides", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader.WebRequestOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::WebRequestOverride)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x36b7878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>(),
                                                                                           { "WebRequestOverride", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36b7b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::__cordl_internal_get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::__cordl_internal_get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::__cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____networkConfig = value;
}
inline ::System::Threading::Tasks::Task* BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::PreloadAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::ApplyAddressablesOverrides() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>(), { "ApplyAddressablesOverrides", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::WebRequestOverride(::UnityEngine::Networking::UnityWebRequest* request) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>(),
                                                                                         { "WebRequestOverride", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader* BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>());
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::MetaRemoteAssetsPreloader() {}
