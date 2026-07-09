#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberInit.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_impl.hpp"
#include "GlobalNamespace/zzzz__AppInit_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberInit_def.hpp"
#include "Analytics/Model/zzzz__TelemetryModel_def.hpp"
#include "BeatSaber/Destinations/zzzz__Destination_def.hpp"
#include "BeatSaber/Destinations/zzzz__InitialDestinationController_def.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__LazyInject_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberInit.get_settingsApplicator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SettingsApplicatorSO> (::GlobalNamespace::BeatSaberInit::*)()>(
    &::GlobalNamespace::BeatSaberInit::get_settingsApplicator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36acb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), { "get_settingsApplicator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberInit.RepeatableSetupAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::BeatSaberInit::*)()>(&::GlobalNamespace::BeatSaberInit::RepeatableSetupAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x36acb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), { ::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberInit.TransitionToNextSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::BeatSaberInit::*)()>(&::GlobalNamespace::BeatSaberInit::TransitionToNextSceneAsync)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x36acd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), { ::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberInit.PreloadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::BeatSaberInit::*)()>(&::GlobalNamespace::BeatSaberInit::PreloadAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x36acebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), { ::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberInit.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberInit::*)()>(&::GlobalNamespace::BeatSaberInit::InstallBindings)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x36acf84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), { ::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberInit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberInit::*)()>(&::GlobalNamespace::BeatSaberInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36af08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberInit._TransitionToNextSceneAsync_g__GetDestinationOverride_13_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Destinations::Destination* (::GlobalNamespace::BeatSaberInit::*)()>(
    &::GlobalNamespace::BeatSaberInit::_TransitionToNextSceneAsync_g__GetDestinationOverride_13_0)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x36acd5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), { "<TransitionToNextSceneAsync>g__GetDestinationOverride|13_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainSystemInit>& GlobalNamespace::BeatSaberInit::__cordl_internal_get__mainSystemInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSystemInit;
}
constexpr ::UnityW<::GlobalNamespace::MainSystemInit> const& GlobalNamespace::BeatSaberInit::__cordl_internal_get__mainSystemInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSystemInit;
}
constexpr void GlobalNamespace::BeatSaberInit::__cordl_internal_set__mainSystemInit(::UnityW<::GlobalNamespace::MainSystemInit> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainSystemInit = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& GlobalNamespace::BeatSaberInit::__cordl_internal_get__questSettingsApplicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____questSettingsApplicator;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& GlobalNamespace::BeatSaberInit::__cordl_internal_get__questSettingsApplicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____questSettingsApplicator;
}
constexpr void GlobalNamespace::BeatSaberInit::__cordl_internal_set__questSettingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____questSettingsApplicator = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& GlobalNamespace::BeatSaberInit::__cordl_internal_get__standaloneSettingsApplicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standaloneSettingsApplicator;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& GlobalNamespace::BeatSaberInit::__cordl_internal_get__standaloneSettingsApplicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standaloneSettingsApplicator;
}
constexpr void GlobalNamespace::BeatSaberInit::__cordl_internal_set__standaloneSettingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standaloneSettingsApplicator = value;
}
constexpr ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>*& GlobalNamespace::BeatSaberInit::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* const& GlobalNamespace::BeatSaberInit::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::BeatSaberInit::__cordl_internal_set__playerDataModel(::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::UnityW<::BeatSaber::Destinations::InitialDestinationController>& GlobalNamespace::BeatSaberInit::__cordl_internal_get__initialDestinationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialDestinationController;
}
constexpr ::UnityW<::BeatSaber::Destinations::InitialDestinationController> const& GlobalNamespace::BeatSaberInit::__cordl_internal_get__initialDestinationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialDestinationController;
}
constexpr void GlobalNamespace::BeatSaberInit::__cordl_internal_set__initialDestinationController(::UnityW<::BeatSaber::Destinations::InitialDestinationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialDestinationController = value;
}
constexpr ::Analytics::Model::TelemetryModel*& GlobalNamespace::BeatSaberInit::__cordl_internal_get__telemetryModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryModel;
}
constexpr ::Analytics::Model::TelemetryModel* const& GlobalNamespace::BeatSaberInit::__cordl_internal_get__telemetryModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryModel;
}
constexpr void GlobalNamespace::BeatSaberInit::__cordl_internal_set__telemetryModel(::Analytics::Model::TelemetryModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____telemetryModel = value;
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& GlobalNamespace::BeatSaberInit::__cordl_internal_get_commandLineArguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandLineArguments;
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& GlobalNamespace::BeatSaberInit::__cordl_internal_get_commandLineArguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandLineArguments;
}
constexpr void GlobalNamespace::BeatSaberInit::__cordl_internal_set_commandLineArguments(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___commandLineArguments = value;
}
inline ::UnityW<::GlobalNamespace::SettingsApplicatorSO> GlobalNamespace::BeatSaberInit::get_settingsApplicator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), { "get_settingsApplicator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SettingsApplicatorSO>>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::BeatSaberInit::RepeatableSetupAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::BeatSaberInit::TransitionToNextSceneAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::BeatSaberInit::PreloadAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberInit::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Destinations::Destination* GlobalNamespace::BeatSaberInit::_TransitionToNextSceneAsync_g__GetDestinationOverride_13_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberInit*>(), { "<TransitionToNextSceneAsync>g__GetDestinationOverride|13_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Destinations::Destination*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatSaberInit* GlobalNamespace::BeatSaberInit::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatSaberInit*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberInit::BeatSaberInit() {}
