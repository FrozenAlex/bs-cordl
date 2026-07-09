#pragma once
// IWYU pragma private; include "GlobalNamespace/IUnityXRHapticsHandler.hpp"
#include "GlobalNamespace/zzzz__IUnityXRHapticsHandler_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IUnityXRHapticsHandler.TriggerHapticPulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IUnityXRHapticsHandler::*)(float_t, float_t)>(&::GlobalNamespace::IUnityXRHapticsHandler::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IUnityXRHapticsHandler*>(), { ::i2c::class_of<::GlobalNamespace::IUnityXRHapticsHandler*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IUnityXRHapticsHandler.StopHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IUnityXRHapticsHandler::*)()>(&::GlobalNamespace::IUnityXRHapticsHandler::StopHaptics)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IUnityXRHapticsHandler*>(), { ::i2c::class_of<::GlobalNamespace::IUnityXRHapticsHandler*>(), 1 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IUnityXRHapticsHandler::TriggerHapticPulse(float_t strength, float_t duration) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IUnityXRHapticsHandler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strength, duration);
}
inline void GlobalNamespace::IUnityXRHapticsHandler::StopHaptics() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IUnityXRHapticsHandler*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::IUnityXRHapticsHandler::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::IUnityXRHapticsHandler::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
