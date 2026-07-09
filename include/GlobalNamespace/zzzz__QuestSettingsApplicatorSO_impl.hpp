#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestSettingsApplicatorSO.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_impl.hpp"
#include "GlobalNamespace/zzzz__QuestSettingsApplicatorSO_def.hpp"
#include "BeatSaber/Settings/zzzz__QuestSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__SceneType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuestSettingsApplicatorSO.ApplyGraphicSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestSettingsApplicatorSO::*)(::by_ref<::BeatSaber::Settings::Settings>, ::GlobalNamespace::SceneType)>(
    &::GlobalNamespace::QuestSettingsApplicatorSO::ApplyGraphicSettings)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x57df3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestSettingsApplicatorSO*>(), { ::i2c::class_of<::GlobalNamespace::QuestSettingsApplicatorSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestSettingsApplicatorSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestSettingsApplicatorSO::*)()>(&::GlobalNamespace::QuestSettingsApplicatorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57dfa48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestSettingsApplicatorSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestSettingsApplicatorSO._ApplyGraphicSettings_g__ConvertProcessorPerformanceLevel_0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel, ::by_ref<::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel>)>(
    &::GlobalNamespace::QuestSettingsApplicatorSO::_ApplyGraphicSettings_g__ConvertProcessorPerformanceLevel_0_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57dfa2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestSettingsApplicatorSO*>(),
                                                                                           { "<ApplyGraphicSettings>g__ConvertProcessorPerformanceLevel|0_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel>(),
                                                                                               ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuestSettingsApplicatorSO::ApplyGraphicSettings(::by_ref<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::SceneType sceneType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::QuestSettingsApplicatorSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, sceneType);
}
inline void GlobalNamespace::QuestSettingsApplicatorSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestSettingsApplicatorSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::QuestSettingsApplicatorSO::_ApplyGraphicSettings_g__ConvertProcessorPerformanceLevel_0_0(::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel settings,
                                                                                                                      ::by_ref<::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestSettingsApplicatorSO*>(), { "<ApplyGraphicSettings>g__ConvertProcessorPerformanceLevel|0_0",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel>(),
                                                                                                             ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, settings, result);
}
inline ::GlobalNamespace::QuestSettingsApplicatorSO* GlobalNamespace::QuestSettingsApplicatorSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuestSettingsApplicatorSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestSettingsApplicatorSO::QuestSettingsApplicatorSO() {}
