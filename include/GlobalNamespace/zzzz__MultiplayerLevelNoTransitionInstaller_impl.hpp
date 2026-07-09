#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLevelNoTransitionInstaller.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelNoTransitionInstaller_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelNoTransitionInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelNoTransitionInstaller::*)()>(&::GlobalNamespace::MultiplayerLevelNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57ec444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelNoTransitionInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerLevelNoTransitionInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelNoTransitionInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLevelNoTransitionInstaller* GlobalNamespace::MultiplayerLevelNoTransitionInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLevelNoTransitionInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLevelNoTransitionInstaller::MultiplayerLevelNoTransitionInstaller() {}
