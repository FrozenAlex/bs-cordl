#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformNetworkPlayerModel.hpp"
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig::*)()>(
    &::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b9308c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig* GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig*>());
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>>"
constexpr GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig::operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<
    ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>>*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>>"
constexpr ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>>*
GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig::i___GlobalNamespace__INetworkPlayerModelPartyConfig_1___UnityW___GlobalNamespace__PlatformNetworkPlayerModel__() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig::PlatformNetworkPlayerModel_CreatePartyConfig() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformNetworkPlayerModel.get_friends
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::PlatformNetworkPlayerModel::*)()>(
    &::GlobalNamespace::PlatformNetworkPlayerModel::get_friends)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b93064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformNetworkPlayerModel*>(), { "get_friends", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformNetworkPlayerModel.DestroyPartyConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformNetworkPlayerModel::*)()>(&::GlobalNamespace::PlatformNetworkPlayerModel::DestroyPartyConnection)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b93074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::PlatformNetworkPlayerModel*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformNetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformNetworkPlayerModel::*)()>(&::GlobalNamespace::PlatformNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b9305c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformNetworkPlayerModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::PlatformNetworkPlayerModel::get_friends() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformNetworkPlayerModel*>(), { "get_friends", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformNetworkPlayerModel::DestroyPartyConnection() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlatformNetworkPlayerModel*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformNetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformNetworkPlayerModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformNetworkPlayerModel* GlobalNamespace::PlatformNetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformNetworkPlayerModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformNetworkPlayerModel::PlatformNetworkPlayerModel() {}
