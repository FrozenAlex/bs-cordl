#pragma once
// IWYU pragma private; include "GlobalNamespace/MainSettingsAsyncLoader.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_impl.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_impl.hpp"
#include "BeatSaber/Settings/zzzz__Settings_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__MainSettingsAsyncLoader_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerConfigSO_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__NetworkConfigSO_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9::*)()>(
    &::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x36b43a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36b4694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainSettingsAsyncLoader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty:
// "::GlobalNamespace::SettingsManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Settings::Settings>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Zenject::DiContainer* container, ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> __4__this,
    ::GlobalNamespace::SettingsManager* __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Settings::Settings> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->container = container;
  this->__4__this = __4__this;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader.get_isRunningFromTests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MainSettingsAsyncLoader::*)()>(&::GlobalNamespace::MainSettingsAsyncLoader::get_isRunningFromTests)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x36b39d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { "get_isRunningFromTests", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader::*)(
    ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*, ::Zenject::DiContainer*)>(&::GlobalNamespace::MainSettingsAsyncLoader::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x36b39f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { ::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader.LoadResourcesBeforeInstallAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::MainSettingsAsyncLoader::*)(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*, ::Zenject::DiContainer*)>(
        &::GlobalNamespace::MainSettingsAsyncLoader::LoadResourcesBeforeInstallAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x36b3ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { ::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader::*)()>(&::GlobalNamespace::MainSettingsAsyncLoader::InstallBindings)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x36b3b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { ::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader.InstallBindingsThatRelyOnSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader::*)()>(&::GlobalNamespace::MainSettingsAsyncLoader::InstallBindingsThatRelyOnSettings)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x36b3cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { "InstallBindingsThatRelyOnSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader::*)()>(&::GlobalNamespace::MainSettingsAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36b437c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____networkConfig = value;
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__hapticFeedbackControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__hapticFeedbackControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackControllerPrefab;
}
constexpr void GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_set__hapticFeedbackControllerPrefab(::UnityW<::GlobalNamespace::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticFeedbackControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerConfigSO>& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__audioManagerConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManagerConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerConfigSO> const& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__audioManagerConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManagerConfig;
}
constexpr void GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_set__audioManagerConfig(::UnityW<::GlobalNamespace::AudioManagerConfigSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioManagerConfig = value;
}
constexpr ::GlobalNamespace::AppInitSetupData*& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__setupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupData;
}
constexpr ::GlobalNamespace::AppInitSetupData* const& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__setupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupData;
}
constexpr void GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_set__setupData(::GlobalNamespace::AppInitSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setupData = value;
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__commandLineParserResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineParserResult;
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__commandLineParserResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineParserResult;
}
constexpr void GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_set__commandLineParserResult(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commandLineParserResult = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__settingManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__settingManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingManager;
}
constexpr void GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_set__settingManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingManager = value;
}
inline bool GlobalNamespace::MainSettingsAsyncLoader::get_isRunningFromTests() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { "get_isRunningFromTests", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsAsyncLoader::LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, registry, container);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MainSettingsAsyncLoader::LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry,
                                                                                                                   ::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, registry, container);
}
inline void GlobalNamespace::MainSettingsAsyncLoader::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsAsyncLoader::InstallBindingsThatRelyOnSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { "InstallBindingsThatRelyOnSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsAsyncLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainSettingsAsyncLoader* GlobalNamespace::MainSettingsAsyncLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainSettingsAsyncLoader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSettingsAsyncLoader::MainSettingsAsyncLoader() {}
