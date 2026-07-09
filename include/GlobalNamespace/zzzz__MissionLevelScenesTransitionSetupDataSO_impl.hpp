#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*)>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57ef39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(),
                            { "add_didFinishEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*)>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57ef898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(),
                            { "remove_didFinishEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO.get_missionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::get_missionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f2348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), { "get_missionId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO.set_missionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)(::StringW)>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::set_missionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f2350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), { "set_missionId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO.get_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::get_beatmapKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57f2358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), { "get_beatmapKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO.set_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::set_beatmapKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57f2364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(),
                                                                                           { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)(
    ::StringW, ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::ArrayW<::GlobalNamespace::MissionObjective*>, ::GlobalNamespace::ColorScheme*, bool,
    ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::EnvironmentsListModel*, ::GlobalNamespace::AudioClipAsyncLoader*,
    ::GlobalNamespace::SettingsManager*, ::GlobalNamespace::BeatmapDataLoader*, ::StringW, ::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::IBeatmapLevelData*)>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x57ebfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(),
                                                { "Init",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                    ::i2c::type_of<::ArrayW<::GlobalNamespace::MissionObjective*>>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                    ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(), ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                    ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::MissionCompletionResults*)>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::Finish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57f2370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(),
                                                                                           { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f2398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*&
GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* const&
GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::StringW& GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::__cordl_internal_get__missionId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::__cordl_internal_get__missionId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionId_k__BackingField;
}
constexpr void GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::__cordl_internal_set__missionId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionId_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::__cordl_internal_get__beatmapKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::__cordl_internal_get__beatmapKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr void GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::__cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey_k__BackingField = value;
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::add_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(),
                          { "add_didFinishEvent",
                            {},
                            { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::remove_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(),
                          { "remove_didFinishEvent",
                            {},
                            { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::get_missionId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), { "get_missionId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::set_missionId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), { "set_missionId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::get_beatmapKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), { "get_beatmapKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::Init(::StringW missionId, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                           ::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives, ::GlobalNamespace::ColorScheme* playerOverrideColorScheme,
                                                                           bool playerOverrideLightshowColors, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                           ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                           ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                                                           ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::SettingsManager* settingsManager,
                                                                           ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::StringW backButtonText,
                                                                           ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(),
                                              { "Init",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                  ::i2c::type_of<::ArrayW<::GlobalNamespace::MissionObjective*>>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                  ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(), ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                  ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionId, beatmapKey, beatmapLevel, missionObjectives, playerOverrideColorScheme, playerOverrideLightshowColors,
                                                   gameplayModifiers, playerSpecificSettings, environmentsListModel, audioClipAsyncLoader, settingsManager, beatmapDataLoader, backButtonText,
                                                   beatmapLevelsModel, beatmapLevelData);
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::Finish(::GlobalNamespace::MissionCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(),
                                                                                         { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCompletionResults);
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::MissionLevelScenesTransitionSetupDataSO() {}
