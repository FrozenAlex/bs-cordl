#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendsViewController.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayersViewController_impl.hpp"
#include "GlobalNamespace/zzzz__FriendsViewController_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FriendsViewController.get_myPartyTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendsViewController::*)()>(&::GlobalNamespace::FriendsViewController::get_myPartyTitle)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58e9ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), { ::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsViewController.get_otherPlayersTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendsViewController::*)()>(&::GlobalNamespace::FriendsViewController::get_otherPlayersTitle)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58e9f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), { ::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsViewController.get_networkPlayerModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::INetworkPlayerModel* (::GlobalNamespace::FriendsViewController::*)()>(
    &::GlobalNamespace::FriendsViewController::get_networkPlayerModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e9f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), { ::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsViewController.NetworkPlayersViewControllerDidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendsViewController::*)(bool, bool)>(
    &::GlobalNamespace::FriendsViewController::NetworkPlayersViewControllerDidActivate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x58e9f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), { ::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendsViewController::*)(bool, bool)>(&::GlobalNamespace::FriendsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58ea1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), { ::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendsViewController::*)()>(&::GlobalNamespace::FriendsViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58ea218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), { ::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsViewController.HandleOpenPartyToggleChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendsViewController::*)(bool)>(&::GlobalNamespace::FriendsViewController::HandleOpenPartyToggleChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58ea240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), { "HandleOpenPartyToggleChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsViewController.RefreshParty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendsViewController::*)(bool)>(&::GlobalNamespace::FriendsViewController::RefreshParty)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x58ea078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), { "RefreshParty", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendsViewController::*)()>(&::GlobalNamespace::FriendsViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ea250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::FriendsViewController::__cordl_internal_get__enableOpenPartyToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableOpenPartyToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::FriendsViewController::__cordl_internal_get__enableOpenPartyToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableOpenPartyToggle;
}
constexpr void GlobalNamespace::FriendsViewController::__cordl_internal_set__enableOpenPartyToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableOpenPartyToggle = value;
}
constexpr ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>& GlobalNamespace::FriendsViewController::__cordl_internal_get__networkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkPlayerModel;
}
constexpr ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> const& GlobalNamespace::FriendsViewController::__cordl_internal_get__networkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkPlayerModel;
}
constexpr void GlobalNamespace::FriendsViewController::__cordl_internal_set__networkPlayerModel(::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____networkPlayerModel = value;
}
constexpr ::GlobalNamespace::INetworkConfig*& GlobalNamespace::FriendsViewController::__cordl_internal_get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::GlobalNamespace::INetworkConfig* const& GlobalNamespace::FriendsViewController::__cordl_internal_get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void GlobalNamespace::FriendsViewController::__cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____networkConfig = value;
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::FriendsViewController::__cordl_internal_get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::HMUI::ToggleBinder* const& GlobalNamespace::FriendsViewController::__cordl_internal_get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::FriendsViewController::__cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleBinder = value;
}
constexpr bool& GlobalNamespace::FriendsViewController::__cordl_internal_get__allowAnyoneToJoin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowAnyoneToJoin;
}
constexpr bool const& GlobalNamespace::FriendsViewController::__cordl_internal_get__allowAnyoneToJoin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowAnyoneToJoin;
}
constexpr void GlobalNamespace::FriendsViewController::__cordl_internal_set__allowAnyoneToJoin(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowAnyoneToJoin = value;
}
inline ::StringW GlobalNamespace::FriendsViewController::get_myPartyTitle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FriendsViewController::get_otherPlayersTitle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::FriendsViewController::get_networkPlayerModel() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayerModel*>(this, ___internal_method);
}
inline void GlobalNamespace::FriendsViewController::NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy);
}
inline void GlobalNamespace::FriendsViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::FriendsViewController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendsViewController::HandleOpenPartyToggleChanged(bool openParty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), { "HandleOpenPartyToggleChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, openParty);
}
inline void GlobalNamespace::FriendsViewController::RefreshParty(bool overrideHide) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), { "RefreshParty", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overrideHide);
}
inline void GlobalNamespace::FriendsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FriendsViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendsViewController* GlobalNamespace::FriendsViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendsViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendsViewController::FriendsViewController() {}
