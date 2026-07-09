#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelAnalytics.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelAnalytics_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__IGameplayEventsDispatcher_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelAnalytics.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelAnalytics::*)()>(&::GlobalNamespace::MissionLevelAnalytics::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5776af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelAnalytics*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelAnalytics.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelAnalytics::*)()>(&::GlobalNamespace::MissionLevelAnalytics::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5776b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelAnalytics*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelAnalytics.HandleMissionLevelDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelAnalytics::*)(
    ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*)>(&::GlobalNamespace::MissionLevelAnalytics::HandleMissionLevelDidFinishEvent)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x5776c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelAnalytics*>(),
                                         { "HandleMissionLevelDidFinishEvent",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelAnalytics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelAnalytics::*)()>(&::GlobalNamespace::MissionLevelAnalytics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5777024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelAnalytics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& GlobalNamespace::MissionLevelAnalytics::__cordl_internal_get__missionLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& GlobalNamespace::MissionLevelAnalytics::__cordl_internal_get__missionLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MissionLevelAnalytics::__cordl_internal_set__missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::MissionLevelAnalytics::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& GlobalNamespace::MissionLevelAnalytics::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::MissionLevelAnalytics::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsModel = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*& GlobalNamespace::MissionLevelAnalytics::__cordl_internal_get__gameplayEventsDispatcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayEventsDispatcher;
}
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* const& GlobalNamespace::MissionLevelAnalytics::__cordl_internal_get__gameplayEventsDispatcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayEventsDispatcher;
}
constexpr void GlobalNamespace::MissionLevelAnalytics::__cordl_internal_set__gameplayEventsDispatcher(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayEventsDispatcher = value;
}
inline void GlobalNamespace::MissionLevelAnalytics::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelAnalytics*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelAnalytics::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelAnalytics*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelAnalytics::HandleMissionLevelDidFinishEvent(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                                                                     ::GlobalNamespace::MissionCompletionResults* missionCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelAnalytics*>(),
                                              { "HandleMissionLevelDidFinishEvent",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionLevelScenesTransitionSetupData, missionCompletionResults);
}
inline void GlobalNamespace::MissionLevelAnalytics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelAnalytics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelAnalytics* GlobalNamespace::MissionLevelAnalytics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionLevelAnalytics*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelAnalytics::MissionLevelAnalytics() {}
