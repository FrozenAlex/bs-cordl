#pragma once
// IWYU pragma private; include "GlobalNamespace/DeactivateAnimatorOnInputFocusCapture.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DeactivateAnimatorOnInputFocusCapture_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(&::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::Start)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x570cc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(&::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::OnDestroy)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x570ceb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture.HandleInputFocusCaptured
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(
    &::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusCaptured)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x570ce70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>(), { "HandleInputFocusCaptured", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture.HandleInputFocusReleased
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(
    &::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusReleased)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x570d094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>(), { "HandleInputFocusReleased", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(&::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x570d0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__cordl_internal_get__animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__cordl_internal_get__animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animator = value;
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrPlatformHelper = value;
}
constexpr bool& GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__cordl_internal_get__wasEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasEnabled;
}
constexpr bool const& GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__cordl_internal_get__wasEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasEnabled;
}
constexpr void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__cordl_internal_set__wasEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasEnabled = value;
}
inline void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusCaptured() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>(), { "HandleInputFocusCaptured", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusReleased() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>(), { "HandleInputFocusReleased", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture* GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::DeactivateAnimatorOnInputFocusCapture() {}
