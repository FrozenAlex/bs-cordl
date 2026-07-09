#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayLevelSceneTransitionEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayLevelSceneTransitionEvents_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.add_anyGameplayLevelDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(::System::Action*)>(
    &::GlobalNamespace::GameplayLevelSceneTransitionEvents::add_anyGameplayLevelDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57eee38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                                                           { "add_anyGameplayLevelDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.remove_anyGameplayLevelDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(::System::Action*)>(
    &::GlobalNamespace::GameplayLevelSceneTransitionEvents::remove_anyGameplayLevelDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57eeee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                                                           { "remove_anyGameplayLevelDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*)>(
    &::GlobalNamespace::GameplayLevelSceneTransitionEvents::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x57eef90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)()>(&::GlobalNamespace::GameplayLevelSceneTransitionEvents::Finalize)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x57ef45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.HandleStandardLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleStandardLevelDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57ef958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
            { "HandleStandardLevelDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.HandleMultiplayerLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MultiplayerResultsData*)>(
        &::GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMultiplayerLevelDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57ef990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                         { "HandleMultiplayerLevelDidFinish",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.HandleMultiplayerLevelDidDisconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::DisconnectedReason)>(
        &::GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMultiplayerLevelDidDisconnect)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57ef9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                { "HandleMultiplayerLevelDidDisconnect",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>(), ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.HandleMissionLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(
    ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*)>(&::GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMissionLevelDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57ef9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
            { "HandleMissionLevelDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.InvokeAnyGameplayLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)()>(
    &::GlobalNamespace::GameplayLevelSceneTransitionEvents::InvokeAnyGameplayLevelDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57ef974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(), { "InvokeAnyGameplayLevelDidFinish", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get__standardLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const&
GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get__standardLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_set__standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelScenesTransitionSetupData = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get__missionLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const&
GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get__missionLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_set__missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionLevelScenesTransitionSetupData = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>&
GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const&
GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerLevelScenesTransitionSetupData = value;
}
constexpr ::System::Action*& GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get_anyGameplayLevelDidFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyGameplayLevelDidFinishEvent;
}
constexpr ::System::Action* const& GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get_anyGameplayLevelDidFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyGameplayLevelDidFinishEvent;
}
constexpr void GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_set_anyGameplayLevelDidFinishEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anyGameplayLevelDidFinishEvent = value;
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::add_anyGameplayLevelDidFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                                                         { "add_anyGameplayLevelDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::remove_anyGameplayLevelDidFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                                                         { "remove_anyGameplayLevelDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::_ctor(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                                                       ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                                                       ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standardLevelScenesTransitionSetupData, missionLevelScenesTransitionSetupData, multiplayerLevelScenesTransitionSetupData);
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleStandardLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                                                                              ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
          { "HandleStandardLevelDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standardLevelScenesTransitionSetupData, levelCompletionResults);
}
inline void
GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                                                                     ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                       { "HandleMultiplayerLevelDidFinish",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerLevelScenesTransitionSetupData, multiplayerResultsData);
}
inline void
GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                                                                         ::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                              { "HandleMultiplayerLevelDidDisconnect",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>(), ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerLevelScenesTransitionSetupData, disconnectedReason);
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMissionLevelDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                                                                             ::GlobalNamespace::MissionCompletionResults* missionCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
          { "HandleMissionLevelDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionLevelScenesTransitionSetupData, missionCompletionResults);
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::InvokeAnyGameplayLevelDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(), { "InvokeAnyGameplayLevelDidFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayLevelSceneTransitionEvents*
GlobalNamespace::GameplayLevelSceneTransitionEvents::New_ctor(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                                              ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                                              ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(standardLevelScenesTransitionSetupData, missionLevelScenesTransitionSetupData,
                                                                                                                  multiplayerLevelScenesTransitionSetupData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents::GameplayLevelSceneTransitionEvents() {}
