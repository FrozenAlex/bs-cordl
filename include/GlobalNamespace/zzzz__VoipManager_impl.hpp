#pragma once
// IWYU pragma private; include "GlobalNamespace/VoipManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VoipManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoipManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoipManager::*)()>(&::GlobalNamespace::VoipManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b97734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VoipManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VoipManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VoipManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VoipManager* GlobalNamespace::VoipManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoipManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoipManager::VoipManager() {}
