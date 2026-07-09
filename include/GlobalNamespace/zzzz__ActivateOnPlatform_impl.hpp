#pragma once
// IWYU pragma private; include "GlobalNamespace/ActivateOnPlatform.hpp"
#include "GlobalNamespace/zzzz__VRPlatformSDK_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ActivateOnPlatform_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ActivateOnPlatform.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActivateOnPlatform::*)()>(&::GlobalNamespace::ActivateOnPlatform::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x570cb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ActivateOnPlatform*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActivateOnPlatform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActivateOnPlatform::*)()>(&::GlobalNamespace::ActivateOnPlatform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x570cc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ActivateOnPlatform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::VRPlatformSDK& GlobalNamespace::ActivateOnPlatform::__cordl_internal_get__vrPlatformSdk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformSdk;
}
constexpr ::GlobalNamespace::VRPlatformSDK const& GlobalNamespace::ActivateOnPlatform::__cordl_internal_get__vrPlatformSdk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformSdk;
}
constexpr void GlobalNamespace::ActivateOnPlatform::__cordl_internal_set__vrPlatformSdk(::GlobalNamespace::VRPlatformSDK value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrPlatformSdk = value;
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::ActivateOnPlatform::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& GlobalNamespace::ActivateOnPlatform::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::ActivateOnPlatform::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrPlatformHelper = value;
}
inline void GlobalNamespace::ActivateOnPlatform::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ActivateOnPlatform*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ActivateOnPlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ActivateOnPlatform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ActivateOnPlatform* GlobalNamespace::ActivateOnPlatform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ActivateOnPlatform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ActivateOnPlatform::ActivateOnPlatform() {}
