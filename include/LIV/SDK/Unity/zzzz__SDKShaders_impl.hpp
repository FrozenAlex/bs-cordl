#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKShaders.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKShaders_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKShaders.StartRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LIV::SDK::Unity::SDKShaders::StartRendering)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x576df28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKShaders*>(), { "StartRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKShaders.StopRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LIV::SDK::Unity::SDKShaders::StopRendering)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x576e158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKShaders*>(), { "StopRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKShaders.StartForegroundRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LIV::SDK::Unity::SDKShaders::StartForegroundRendering)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x576e37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKShaders*>(), { "StartForegroundRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKShaders.StopForegroundRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LIV::SDK::Unity::SDKShaders::StopForegroundRendering)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x576e424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKShaders*>(), { "StopForegroundRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKShaders.StartBackgroundRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LIV::SDK::Unity::SDKShaders::StartBackgroundRendering)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x576df70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKShaders*>(), { "StartBackgroundRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKShaders.StopBackgroundRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LIV::SDK::Unity::SDKShaders::StopBackgroundRendering)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x576e110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKShaders*>(), { "StopBackgroundRendering", {}, {} })));
    return ___internal_method;
  }
};
inline void LIV::SDK::Unity::SDKShaders::setStaticF_LIV_COLOR_MASK(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LIV_COLOR_MASK", ::LIV::SDK::Unity::SDKShaders*>(std::forward<int32_t>(value));
}
inline int32_t LIV::SDK::Unity::SDKShaders::getStaticF_LIV_COLOR_MASK() {
  return ::cordl_internals::getStaticField<int32_t, "LIV_COLOR_MASK", ::LIV::SDK::Unity::SDKShaders*>();
}
inline void LIV::SDK::Unity::SDKShaders::setStaticF_LIV_TESSELLATION_PROPERTY(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LIV_TESSELLATION_PROPERTY", ::LIV::SDK::Unity::SDKShaders*>(std::forward<int32_t>(value));
}
inline int32_t LIV::SDK::Unity::SDKShaders::getStaticF_LIV_TESSELLATION_PROPERTY() {
  return ::cordl_internals::getStaticField<int32_t, "LIV_TESSELLATION_PROPERTY", ::LIV::SDK::Unity::SDKShaders*>();
}
inline void LIV::SDK::Unity::SDKShaders::setStaticF_LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY", ::LIV::SDK::Unity::SDKShaders*>(std::forward<int32_t>(value));
}
inline int32_t LIV::SDK::Unity::SDKShaders::getStaticF_LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY() {
  return ::cordl_internals::getStaticField<int32_t, "LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY", ::LIV::SDK::Unity::SDKShaders*>();
}
inline void LIV::SDK::Unity::SDKShaders::StartRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKShaders*>(), { "StartRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void LIV::SDK::Unity::SDKShaders::StopRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKShaders*>(), { "StopRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void LIV::SDK::Unity::SDKShaders::StartForegroundRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKShaders*>(), { "StartForegroundRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void LIV::SDK::Unity::SDKShaders::StopForegroundRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKShaders*>(), { "StopForegroundRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void LIV::SDK::Unity::SDKShaders::StartBackgroundRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKShaders*>(), { "StartBackgroundRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void LIV::SDK::Unity::SDKShaders::StopBackgroundRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKShaders*>(), { "StopBackgroundRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKShaders::SDKShaders() {}
