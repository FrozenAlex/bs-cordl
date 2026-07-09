#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamNetworkPlayerModel.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_impl.hpp"
#include "GlobalNamespace/zzzz__SteamNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SteamNetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamNetworkPlayerModel::*)()>(&::GlobalNamespace::SteamNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b94154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamNetworkPlayerModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SteamNetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamNetworkPlayerModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SteamNetworkPlayerModel* GlobalNamespace::SteamNetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamNetworkPlayerModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
constexpr GlobalNamespace::SteamNetworkPlayerModel::operator ::GlobalNamespace::INetworkPlayerModel*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModel"
constexpr ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::SteamNetworkPlayerModel::i___GlobalNamespace__INetworkPlayerModel() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamNetworkPlayerModel::SteamNetworkPlayerModel() {}
