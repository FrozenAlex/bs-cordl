#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57ef15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                            { "add_didFinishEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57ef658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                            { "remove_didFinishEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_gameMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_gameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f27ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_gameMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_gameMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::StringW)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_gameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f27b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "set_gameMode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_beatmapKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57f27bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_beatmapKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_beatmapKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57f27c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                           { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_beatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevel* (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_beatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f27d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_beatmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_beatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_beatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f27dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                           { "set_beatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_practiceSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PracticeSettings* (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_practiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f27e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_practiceSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_practiceSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::PracticeSettings*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_practiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f27ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                           { "set_practiceSettings", {}, { ::i2c::type_of<::GlobalNamespace::PracticeSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_usingOverrideColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_usingOverrideColorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f27f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_usingOverrideColorScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_usingOverrideColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(bool)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_usingOverrideColorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f27fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "set_usingOverrideColorScheme", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_colorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f2804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_colorScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_colorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::ColorScheme*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f280c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                           { "set_colorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_usingOverrideEnvironment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_usingOverrideEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f2814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_usingOverrideEnvironment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_usingOverrideEnvironment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(bool)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_usingOverrideEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f281c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "set_usingOverrideEnvironment", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_targetEnvironmentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_targetEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f2824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_targetEnvironmentInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_targetEnvironmentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::EnvironmentInfoSO*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_targetEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f282c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                           { "set_targetEnvironmentInfo", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_originalEnvironmentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_originalEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f2834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_originalEnvironmentInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_originalEnvironmentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::EnvironmentInfoSO*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_originalEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f283c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                           { "set_originalEnvironmentInfo", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f2844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_gameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f284c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                           { "set_gameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(
    ::StringW, ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::OverrideEnvironmentSettings*, ::GlobalNamespace::ColorScheme*, bool,
    ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, ::GlobalNamespace::EnvironmentsListModel*,
    ::GlobalNamespace::AudioClipAsyncLoader*, ::GlobalNamespace::SettingsManager*, ::GlobalNamespace::GameplayAdditionalInformation*, ::GlobalNamespace::BeatmapDataLoader*,
    ::GlobalNamespace::BeatmapLevelsEntitlementModel*, ::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::IBeatmapLevelData*,
    ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData>)>(&::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x57ecee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                         { "Init",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                             ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                             ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                                             ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::SettingsManager*>(),
                                             ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                             ::i2c::type_of<::GlobalNamespace::BeatmapLevelsEntitlementModel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                             ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::LevelCompletionResults*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Finish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57f2abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                           { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.GetEnvironmentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>, bool> (*)(
    ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::OverrideEnvironmentSettings*, ::GlobalNamespace::EnvironmentsListModel*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::GetEnvironmentInfo)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x57f2854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                             { "GetEnvironmentInfo",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.GetEnvironmentOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (*)(::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::OverrideEnvironmentSettings*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::GetEnvironmentOverride)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x57f2ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                            { "GetEnvironmentOverride", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.GetColorInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<bool, ::GlobalNamespace::ColorScheme*> (*)(
    ::GlobalNamespace::ColorScheme*, bool, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::EnvironmentInfoSO*, bool)>(&::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::GetColorInfo)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x57f2a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                             { "GetColorInfo",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f2bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*&
GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* const&
GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::StringW& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__gameMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameMode_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__gameMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameMode_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__gameMode_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameMode_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__beatmapKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__beatmapKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__beatmapLevel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__beatmapLevel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__beatmapLevel_k__BackingField(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevel_k__BackingField = value;
}
constexpr ::GlobalNamespace::PracticeSettings*& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__practiceSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceSettings_k__BackingField;
}
constexpr ::GlobalNamespace::PracticeSettings* const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__practiceSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceSettings_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__practiceSettings_k__BackingField(::GlobalNamespace::PracticeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____practiceSettings_k__BackingField = value;
}
constexpr bool& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__usingOverrideColorScheme_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideColorScheme_k__BackingField;
}
constexpr bool const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__usingOverrideColorScheme_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideColorScheme_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__usingOverrideColorScheme_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usingOverrideColorScheme_k__BackingField = value;
}
constexpr ::GlobalNamespace::ColorScheme*& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__colorScheme_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme_k__BackingField;
}
constexpr ::GlobalNamespace::ColorScheme* const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__colorScheme_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__colorScheme_k__BackingField(::GlobalNamespace::ColorScheme* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorScheme_k__BackingField = value;
}
constexpr bool& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__usingOverrideEnvironment_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideEnvironment_k__BackingField;
}
constexpr bool const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__usingOverrideEnvironment_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideEnvironment_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__usingOverrideEnvironment_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usingOverrideEnvironment_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__targetEnvironmentInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetEnvironmentInfo_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__targetEnvironmentInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetEnvironmentInfo_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__targetEnvironmentInfo_k__BackingField(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetEnvironmentInfo_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__originalEnvironmentInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalEnvironmentInfo_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__originalEnvironmentInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalEnvironmentInfo_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__originalEnvironmentInfo_k__BackingField(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalEnvironmentInfo_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__gameplayModifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__gameplayModifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiers_k__BackingField = value;
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::add_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
          { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::remove_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                          { "remove_didFinishEvent",
                            {},
                            { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_gameMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_gameMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_gameMode(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "set_gameMode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_beatmapKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_beatmapKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                         { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_beatmapLevel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_beatmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                         { "set_beatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PracticeSettings* GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_practiceSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_practiceSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PracticeSettings*>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_practiceSettings(::GlobalNamespace::PracticeSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                         { "set_practiceSettings", {}, { ::i2c::type_of<::GlobalNamespace::PracticeSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_usingOverrideColorScheme() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_usingOverrideColorScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_usingOverrideColorScheme(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "set_usingOverrideColorScheme", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_colorScheme() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_colorScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_colorScheme(::GlobalNamespace::ColorScheme* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                         { "set_colorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_usingOverrideEnvironment() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_usingOverrideEnvironment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_usingOverrideEnvironment(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "set_usingOverrideEnvironment", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_targetEnvironmentInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_targetEnvironmentInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_targetEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                         { "set_targetEnvironmentInfo", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_originalEnvironmentInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_originalEnvironmentInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_originalEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                         { "set_originalEnvironmentInfo", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_gameplayModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { "get_gameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                         { "set_gameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Init(
    ::StringW gameMode, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings,
    ::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
    ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation,
    ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                       { "Init",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                           ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                           ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                                           ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::SettingsManager*>(),
                                           ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                           ::i2c::type_of<::GlobalNamespace::BeatmapLevelsEntitlementModel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                           ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode, beatmapKey, beatmapLevel, overrideEnvironmentSettings, playerOverrideColorScheme, playerOverrideLightshowColors,
                                                   gameplayModifiers, playerSpecificSettings, practiceSettings, environmentsListModel, audioClipAsyncLoader, settingsManager,
                                                   gameplayAdditionalInformation, beatmapDataLoader, beatmapLevelsEntitlementModel, beatmapLevelsModel, beatmapLevelData, recordingToolData);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Finish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                         { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCompletionResults);
}
inline ::System::ValueTuple_3<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>, bool>
GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::GetEnvironmentInfo(::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                              ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings,
                                                                              ::GlobalNamespace::EnvironmentsListModel* environmentsListModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                           { "GetEnvironmentInfo",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                               ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>, bool>>(
      nullptr, ___internal_method, beatmapKey, beatmapLevel, overrideEnvironmentSettings, environmentsListModel);
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO>
GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::GetEnvironmentOverride(::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo,
                                                                                  ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                          { "GetEnvironmentOverride", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>(nullptr, ___internal_method, targetEnvironmentInfo, overrideEnvironmentSettings);
}
inline ::System::ValueTuple_2<bool, ::GlobalNamespace::ColorScheme*>
GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::GetColorInfo(::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors,
                                                                        ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme, ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo,
                                                                        bool usingOverrideEnvironment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                           { "GetColorInfo",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(),
                                                               ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool, ::GlobalNamespace::ColorScheme*>>(nullptr, ___internal_method, playerOverrideColorScheme, playerOverrideLightshowColors,
                                                                                                            beatmapOverrideColorScheme, targetEnvironmentInfo, usingOverrideEnvironment);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::StandardLevelScenesTransitionSetupDataSO() {}
