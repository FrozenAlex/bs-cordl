#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "Analytics/Model/zzzz__TelemetryModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformationSetupData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11::*)()>(
    &::GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x57efbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57effb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::LevelScenesTransitionSetupDataSO>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stopwatch_5__2", ty: "::System::Diagnostics::Stopwatch*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LevelScenesTransitionSetupDataSO> __4__this,
    ::System::Diagnostics::Stopwatch* _stopwatch_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_stopwatch_5__2 = _stopwatch_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11::LevelScenesTransitionSetupDataSO__BeforeScenesWillBeActivatedAsync_d__11() {}
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupDataSO.get_transformedBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (::GlobalNamespace::LevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::LevelScenesTransitionSetupDataSO::get_transformedBeatmapData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57efab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), { "get_transformedBeatmapData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupDataSO.get_gameplayCoreSceneSetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayCoreSceneSetupData* (::GlobalNamespace::LevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::LevelScenesTransitionSetupDataSO::get_gameplayCoreSceneSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57efac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), { "get_gameplayCoreSceneSetupData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupDataSO.set_gameplayCoreSceneSetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::GameplayCoreSceneSetupData*)>(
    &::GlobalNamespace::LevelScenesTransitionSetupDataSO::set_gameplayCoreSceneSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57efad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(),
                                                             { "set_gameplayCoreSceneSetupData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupDataSO.get_gameplayAdditionalInformationSetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayAdditionalInformationSetupData* (::GlobalNamespace::LevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::LevelScenesTransitionSetupDataSO::get_gameplayAdditionalInformationSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57efad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), { "get_gameplayAdditionalInformationSetupData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupDataSO.set_gameplayAdditionalInformationSetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::GameplayAdditionalInformationSetupData*)>(
    &::GlobalNamespace::LevelScenesTransitionSetupDataSO::set_gameplayAdditionalInformationSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57efae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(),
                                                             { "set_gameplayAdditionalInformationSetupData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformationSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupDataSO.BeforeScenesWillBeActivatedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::LevelScenesTransitionSetupDataSO::BeforeScenesWillBeActivatedAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x57efae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupDataSO.BeforeScenesWillBeActivated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::LevelScenesTransitionSetupDataSO::BeforeScenesWillBeActivated)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57efb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::LevelScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57efbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupDataSO.__n__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::LevelScenesTransitionSetupDataSO::__n__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57efbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), { "<>n__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Analytics::Model::TelemetryModel*& GlobalNamespace::LevelScenesTransitionSetupDataSO::__cordl_internal_get__telemetryModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryModel;
}
constexpr ::Analytics::Model::TelemetryModel* const& GlobalNamespace::LevelScenesTransitionSetupDataSO::__cordl_internal_get__telemetryModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryModel;
}
constexpr void GlobalNamespace::LevelScenesTransitionSetupDataSO::__cordl_internal_set__telemetryModel(::Analytics::Model::TelemetryModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____telemetryModel = value;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::LevelScenesTransitionSetupDataSO::__cordl_internal_get__gameplayCoreSceneSetupData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayCoreSceneSetupData_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& GlobalNamespace::LevelScenesTransitionSetupDataSO::__cordl_internal_get__gameplayCoreSceneSetupData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayCoreSceneSetupData_k__BackingField;
}
constexpr void GlobalNamespace::LevelScenesTransitionSetupDataSO::__cordl_internal_set__gameplayCoreSceneSetupData_k__BackingField(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayCoreSceneSetupData_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData*&
GlobalNamespace::LevelScenesTransitionSetupDataSO::__cordl_internal_get__gameplayAdditionalInformationSetupData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayAdditionalInformationSetupData_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData* const&
GlobalNamespace::LevelScenesTransitionSetupDataSO::__cordl_internal_get__gameplayAdditionalInformationSetupData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayAdditionalInformationSetupData_k__BackingField;
}
constexpr void
GlobalNamespace::LevelScenesTransitionSetupDataSO::__cordl_internal_set__gameplayAdditionalInformationSetupData_k__BackingField(::GlobalNamespace::GameplayAdditionalInformationSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayAdditionalInformationSetupData_k__BackingField = value;
}
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::LevelScenesTransitionSetupDataSO::get_transformedBeatmapData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), { "get_transformedBeatmapData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayCoreSceneSetupData* GlobalNamespace::LevelScenesTransitionSetupDataSO::get_gameplayCoreSceneSetupData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), { "get_gameplayCoreSceneSetupData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayCoreSceneSetupData*>(this, ___internal_method);
}
inline void GlobalNamespace::LevelScenesTransitionSetupDataSO::set_gameplayCoreSceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(),
                                                           { "set_gameplayCoreSceneSetupData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayAdditionalInformationSetupData* GlobalNamespace::LevelScenesTransitionSetupDataSO::get_gameplayAdditionalInformationSetupData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), { "get_gameplayAdditionalInformationSetupData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayAdditionalInformationSetupData*>(this, ___internal_method);
}
inline void GlobalNamespace::LevelScenesTransitionSetupDataSO::set_gameplayAdditionalInformationSetupData(::GlobalNamespace::GameplayAdditionalInformationSetupData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(),
                                                           { "set_gameplayAdditionalInformationSetupData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformationSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LevelScenesTransitionSetupDataSO::BeforeScenesWillBeActivatedAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::LevelScenesTransitionSetupDataSO::BeforeScenesWillBeActivated() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LevelScenesTransitionSetupDataSO::__n__0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>(), { "<>n__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelScenesTransitionSetupDataSO* GlobalNamespace::LevelScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelScenesTransitionSetupDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelScenesTransitionSetupDataSO::LevelScenesTransitionSetupDataSO() {}
