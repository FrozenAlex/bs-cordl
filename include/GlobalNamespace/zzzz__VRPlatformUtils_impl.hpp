#pragma once
// IWYU pragma private; include "GlobalNamespace/VRPlatformUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VRPlatformUtils_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRPlatformUtils.TriggerValueDefaultImplementation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::VRPlatformUtils::TriggerValueDefaultImplementation)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5715bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "TriggerValueDefaultImplementation", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRPlatformUtils.GetMenuButtonDefaultImplementation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::VRPlatformUtils::GetMenuButtonDefaultImplementation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x571545c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "GetMenuButtonDefaultImplementation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRPlatformUtils.GetMenuButtonDownDefaultImplementation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::VRPlatformUtils::GetMenuButtonDownDefaultImplementation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x57154d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "GetMenuButtonDownDefaultImplementation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRPlatformUtils.GetAnyJoystickMaxAxisDefaultImplementation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::IVRPlatformHelper*)>(
    &::GlobalNamespace::VRPlatformUtils::GetAnyJoystickMaxAxisDefaultImplementation)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5715c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(),
                                                             { "GetAnyJoystickMaxAxisDefaultImplementation", {}, { ::i2c::type_of<::GlobalNamespace::IVRPlatformHelper*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRPlatformUtils.StopXR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IVerboseLogger*)>(&::GlobalNamespace::VRPlatformUtils::StopXR)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5715d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "StopXR", {}, { ::i2c::type_of<::GlobalNamespace::IVerboseLogger*>() } })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::VRPlatformUtils::TriggerValueDefaultImplementation(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "TriggerValueDefaultImplementation", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::VRPlatformUtils::GetMenuButtonDefaultImplementation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "GetMenuButtonDefaultImplementation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::VRPlatformUtils::GetMenuButtonDownDefaultImplementation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "GetMenuButtonDownDefaultImplementation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::VRPlatformUtils::GetAnyJoystickMaxAxisDefaultImplementation(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "GetAnyJoystickMaxAxisDefaultImplementation", {}, { ::i2c::type_of<::GlobalNamespace::IVRPlatformHelper*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, vrPlatformHelper);
}
inline void GlobalNamespace::VRPlatformUtils::StopXR(::GlobalNamespace::IVerboseLogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "StopXR", {}, { ::i2c::type_of<::GlobalNamespace::IVerboseLogger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logger);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRPlatformUtils::VRPlatformUtils() {}
