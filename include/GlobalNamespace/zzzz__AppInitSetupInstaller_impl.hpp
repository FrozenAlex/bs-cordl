#pragma once
// IWYU pragma private; include "GlobalNamespace/AppInitSetupInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupInstaller_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AppInitSetupInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInitSetupInstaller::*)()>(&::GlobalNamespace::AppInitSetupInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x36ac8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitSetupInstaller*>(), { ::i2c::class_of<::GlobalNamespace::AppInitSetupInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitSetupInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInitSetupInstaller::*)()>(&::GlobalNamespace::AppInitSetupInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36ac94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitSetupInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AppInitSetupInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AppInitSetupInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AppInitSetupInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitSetupInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AppInitSetupInstaller* GlobalNamespace::AppInitSetupInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AppInitSetupInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInitSetupInstaller::AppInitSetupInstaller() {}
