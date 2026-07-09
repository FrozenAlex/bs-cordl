#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolSettingsNoTransitionInstaller.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettingsNoTransitionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettingsNoTransitionInstaller_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3::*)()>(
    &::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x57ec740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57ec9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "setupData", ty: "::GlobalNamespace::RecordingToolSceneSetupData*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller>", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::RecordingToolSceneSetupData* setupData,
    ::UnityW<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->setupData = setupData;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3() {}
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x57ec448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller.WaitForTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::*)(::GlobalNamespace::RecordingToolSceneSetupData*)>(
        &::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::WaitForTransition)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57ec678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>(),
                                                                                           { "WaitForTransition", {}, { ::i2c::type_of<::GlobalNamespace::RecordingToolSceneSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::*)()>(
    &::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57ec73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO>& GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__cordl_internal_get__scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> const&
GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__cordl_internal_get__scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr void
GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__cordl_internal_set__scenesTransitionSetupData(::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::RecordingToolManager*& GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__cordl_internal_get__recordingToolManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolManager;
}
constexpr ::GlobalNamespace::RecordingToolManager* const& GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__cordl_internal_get__recordingToolManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolManager;
}
constexpr void GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__cordl_internal_set__recordingToolManager(::GlobalNamespace::RecordingToolManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordingToolManager = value;
}
inline void GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::InstallBindings(::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::WaitForTransition(::GlobalNamespace::RecordingToolSceneSetupData* setupData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>(),
                                                                                         { "WaitForTransition", {}, { ::i2c::type_of<::GlobalNamespace::RecordingToolSceneSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, setupData);
}
inline void GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller* GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::RecordingToolSettingsNoTransitionInstaller() {}
