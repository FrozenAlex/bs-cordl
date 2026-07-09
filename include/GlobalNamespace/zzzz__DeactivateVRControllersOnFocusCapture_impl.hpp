#pragma once
// IWYU pragma private; include "GlobalNamespace/DeactivateVRControllersOnFocusCapture.hpp"
#include "GlobalNamespace/zzzz__VRController_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DeactivateVRControllersOnFocusCapture_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeactivateVRControllersOnFocusCapture.get_loggerPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DeactivateVRControllersOnFocusCapture::*)()>(
    &::GlobalNamespace::DeactivateVRControllersOnFocusCapture::get_loggerPrefix)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x570d0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateVRControllersOnFocusCapture*>(), { "get_loggerPrefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeactivateVRControllersOnFocusCapture.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeactivateVRControllersOnFocusCapture::*)()>(&::GlobalNamespace::DeactivateVRControllersOnFocusCapture::Start)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x570d0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateVRControllersOnFocusCapture*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeactivateVRControllersOnFocusCapture.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeactivateVRControllersOnFocusCapture::*)()>(&::GlobalNamespace::DeactivateVRControllersOnFocusCapture::OnDestroy)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x570d5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateVRControllersOnFocusCapture*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeactivateVRControllersOnFocusCapture.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeactivateVRControllersOnFocusCapture::*)()>(&::GlobalNamespace::DeactivateVRControllersOnFocusCapture::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x570d7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateVRControllersOnFocusCapture*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeactivateVRControllersOnFocusCapture.UpdateVRControllerActiveState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeactivateVRControllersOnFocusCapture::*)()>(
    &::GlobalNamespace::DeactivateVRControllersOnFocusCapture::UpdateVRControllerActiveState)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x570d364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateVRControllersOnFocusCapture*>(), { "UpdateVRControllerActiveState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeactivateVRControllersOnFocusCapture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeactivateVRControllersOnFocusCapture::*)()>(&::GlobalNamespace::DeactivateVRControllersOnFocusCapture::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x570d7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateVRControllersOnFocusCapture*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRController>>& GlobalNamespace::DeactivateVRControllersOnFocusCapture::__cordl_internal_get__vrControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrControllers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRController>> const& GlobalNamespace::DeactivateVRControllersOnFocusCapture::__cordl_internal_get__vrControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrControllers;
}
constexpr void GlobalNamespace::DeactivateVRControllersOnFocusCapture::__cordl_internal_set__vrControllers(::ArrayW<::UnityW<::GlobalNamespace::VRController>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrControllers = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::DeactivateVRControllersOnFocusCapture::__cordl_internal_get__vrControllerGameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrControllerGameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::DeactivateVRControllersOnFocusCapture::__cordl_internal_get__vrControllerGameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrControllerGameObjects;
}
constexpr void GlobalNamespace::DeactivateVRControllersOnFocusCapture::__cordl_internal_set__vrControllerGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrControllerGameObjects = value;
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::DeactivateVRControllersOnFocusCapture::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& GlobalNamespace::DeactivateVRControllersOnFocusCapture::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::DeactivateVRControllersOnFocusCapture::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrPlatformHelper = value;
}
inline ::StringW GlobalNamespace::DeactivateVRControllersOnFocusCapture::get_loggerPrefix() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateVRControllersOnFocusCapture*>(), { "get_loggerPrefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::DeactivateVRControllersOnFocusCapture::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateVRControllersOnFocusCapture*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeactivateVRControllersOnFocusCapture::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateVRControllersOnFocusCapture*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeactivateVRControllersOnFocusCapture::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateVRControllersOnFocusCapture*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeactivateVRControllersOnFocusCapture::UpdateVRControllerActiveState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateVRControllersOnFocusCapture*>(), { "UpdateVRControllerActiveState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeactivateVRControllersOnFocusCapture::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateVRControllersOnFocusCapture*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DeactivateVRControllersOnFocusCapture* GlobalNamespace::DeactivateVRControllersOnFocusCapture::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeactivateVRControllersOnFocusCapture*>());
}
/// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
constexpr GlobalNamespace::DeactivateVRControllersOnFocusCapture::operator ::GlobalNamespace::IVerboseLogger*() noexcept {
  return static_cast<::GlobalNamespace::IVerboseLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVerboseLogger"
constexpr ::GlobalNamespace::IVerboseLogger* GlobalNamespace::DeactivateVRControllersOnFocusCapture::i___GlobalNamespace__IVerboseLogger() noexcept {
  return static_cast<::GlobalNamespace::IVerboseLogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeactivateVRControllersOnFocusCapture::DeactivateVRControllersOnFocusCapture() {}
