#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusNetworkPlayerModel.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_impl.hpp"
#include "GlobalNamespace/zzzz__OculusNetworkPlayerModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b93054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusNetworkPlayerModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusNetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusNetworkPlayerModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusNetworkPlayerModel* GlobalNamespace::OculusNetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusNetworkPlayerModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayerModel() {}
