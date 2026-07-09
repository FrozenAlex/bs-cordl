#pragma once
// IWYU pragma private; include "GlobalNamespace/DefaultUnityXRHapticsHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "GlobalNamespace/zzzz__DefaultUnityXRHapticsHandler_def.hpp"
#include "GlobalNamespace/zzzz__IUnityXRHapticsHandler_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DefaultUnityXRHapticsHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DefaultUnityXRHapticsHandler::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::DefaultUnityXRHapticsHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57157d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DefaultUnityXRHapticsHandler*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultUnityXRHapticsHandler.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DefaultUnityXRHapticsHandler::*)()>(&::GlobalNamespace::DefaultUnityXRHapticsHandler::Destroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57157dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DefaultUnityXRHapticsHandler*>(), { "Destroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultUnityXRHapticsHandler.TriggerHapticPulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DefaultUnityXRHapticsHandler::*)(float_t, float_t)>(
    &::GlobalNamespace::DefaultUnityXRHapticsHandler::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x57157e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DefaultUnityXRHapticsHandler*>(), { "TriggerHapticPulse", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultUnityXRHapticsHandler.StopHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DefaultUnityXRHapticsHandler::*)()>(&::GlobalNamespace::DefaultUnityXRHapticsHandler::StopHaptics)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5715858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DefaultUnityXRHapticsHandler*>(), { "StopHaptics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultUnityXRHapticsHandler.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DefaultUnityXRHapticsHandler::*)()>(&::GlobalNamespace::DefaultUnityXRHapticsHandler::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57158d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DefaultUnityXRHapticsHandler*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::DefaultUnityXRHapticsHandler::__cordl_internal_get__node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::DefaultUnityXRHapticsHandler::__cordl_internal_get__node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr void GlobalNamespace::DefaultUnityXRHapticsHandler::__cordl_internal_set__node(::UnityEngine::XR::XRNode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____node = value;
}
inline void GlobalNamespace::DefaultUnityXRHapticsHandler::_ctor(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DefaultUnityXRHapticsHandler*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void GlobalNamespace::DefaultUnityXRHapticsHandler::Destroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DefaultUnityXRHapticsHandler*>(), { "Destroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DefaultUnityXRHapticsHandler::TriggerHapticPulse(float_t strength, float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DefaultUnityXRHapticsHandler*>(), { "TriggerHapticPulse", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strength, duration);
}
inline void GlobalNamespace::DefaultUnityXRHapticsHandler::StopHaptics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DefaultUnityXRHapticsHandler*>(), { "StopHaptics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DefaultUnityXRHapticsHandler::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DefaultUnityXRHapticsHandler*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultUnityXRHapticsHandler* GlobalNamespace::DefaultUnityXRHapticsHandler::New_ctor(::UnityEngine::XR::XRNode node) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DefaultUnityXRHapticsHandler*>(node));
}
/// @brief Convert operator to "::GlobalNamespace::IUnityXRHapticsHandler"
constexpr GlobalNamespace::DefaultUnityXRHapticsHandler::operator ::GlobalNamespace::IUnityXRHapticsHandler*() noexcept {
  return static_cast<::GlobalNamespace::IUnityXRHapticsHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IUnityXRHapticsHandler"
constexpr ::GlobalNamespace::IUnityXRHapticsHandler* GlobalNamespace::DefaultUnityXRHapticsHandler::i___GlobalNamespace__IUnityXRHapticsHandler() noexcept {
  return static_cast<::GlobalNamespace::IUnityXRHapticsHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::DefaultUnityXRHapticsHandler::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::DefaultUnityXRHapticsHandler::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultUnityXRHapticsHandler::DefaultUnityXRHapticsHandler() {}
