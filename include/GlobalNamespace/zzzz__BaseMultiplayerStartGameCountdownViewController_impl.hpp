#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseMultiplayerStartGameCountdownViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__BaseMultiplayerStartGameCountdownViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayerData_def.hpp"
#include "GlobalNamespace/zzzz__ModifiersSelectionView_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController.add_playerActiveStateChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(::System::Action_1<bool>*)>(
    &::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::add_playerActiveStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57a25c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(),
                                                                                           { "add_playerActiveStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController.remove_playerActiveStateChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(::System::Action_1<bool>*)>(
    &::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::remove_playerActiveStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57a2688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(),
                                                                                           { "remove_playerActiveStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController.SetLevelGameplaySetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(
    &::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::SetLevelGameplaySetupData)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x57a2748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(),
                                                                                           { "SetLevelGameplaySetupData", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController.SetLobbyPlayerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(::GlobalNamespace::ILobbyPlayerData*)>(
    &::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::SetLobbyPlayerData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x57a28a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::DidActivate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x57a296c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(bool, bool)>(
    &::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57a2a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)()>(
    &::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57a2a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)()>(
    &::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x57a2a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController._DidActivate_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(bool)>(
    &::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::_DidActivate_b__9_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x57a2aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(), { "<DidActivate>b__9_0", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView>& GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_get__beatmapSelectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSelectionView;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView> const& GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_get__beatmapSelectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSelectionView;
}
constexpr void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_set__beatmapSelectionView(::UnityW<::GlobalNamespace::BeatmapSelectionView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapSelectionView = value;
}
constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView>& GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_get__modifiersSelectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersSelectionView;
}
constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView> const& GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_get__modifiersSelectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersSelectionView;
}
constexpr void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_set__modifiersSelectionView(::UnityW<::GlobalNamespace::ModifiersSelectionView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiersSelectionView = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_get__spectateToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectateToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_get__spectateToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectateToggle;
}
constexpr void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_set__spectateToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spectateToggle = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_get_playerActiveStateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerActiveStateChangedEvent;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_get_playerActiveStateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerActiveStateChangedEvent;
}
constexpr void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_set_playerActiveStateChangedEvent(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerActiveStateChangedEvent = value;
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::HMUI::ToggleBinder* const& GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::__cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleBinder = value;
}
inline void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::add_playerActiveStateChangedEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(),
                                                                                         { "add_playerActiveStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::remove_playerActiveStateChangedEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(),
                                                                                         { "remove_playerActiveStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::SetLevelGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(),
                                                                                         { "SetLevelGameplaySetupData", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelGameplaySetupData);
}
inline void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::SetLobbyPlayerData(::GlobalNamespace::ILobbyPlayerData* lobbyPlayerData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyPlayerData);
}
inline void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::_DidActivate_b__9_0(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>(), { "<DidActivate>b__9_0", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController* GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::BaseMultiplayerStartGameCountdownViewController() {}
