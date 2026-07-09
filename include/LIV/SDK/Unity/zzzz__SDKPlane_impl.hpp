#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKPlane.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPlane_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPlane.op_Implicit___LIV__SDK__Unity__SDKPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKPlane (*)(::UnityEngine::Plane)>(&::LIV::SDK::Unity::SDKPlane::op_Implicit___LIV__SDK__Unity__SDKPlane)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5770eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKPlane>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Plane>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPlane.get_empty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKPlane (*)()>(&::LIV::SDK::Unity::SDKPlane::get_empty)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5770ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKPlane>(), { "get_empty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPlane.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LIV::SDK::Unity::SDKPlane::*)()>(&::LIV::SDK::Unity::SDKPlane::ToString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5770edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKPlane>(), { ::i2c::class_of<::LIV::SDK::Unity::SDKPlane>(), 3 }));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKPlane LIV::SDK::Unity::SDKPlane::op_Implicit___LIV__SDK__Unity__SDKPlane(::UnityEngine::Plane v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKPlane>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Plane>() } })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKPlane>(nullptr, ___internal_method, v);
}
inline ::LIV::SDK::Unity::SDKPlane LIV::SDK::Unity::SDKPlane::get_empty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKPlane>(), { "get_empty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKPlane>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKPlane::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LIV::SDK::Unity::SDKPlane>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "normal", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value:
// Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKPlane::SDKPlane(float_t distance, ::LIV::SDK::Unity::SDKVector3 normal) noexcept {
  this->distance = distance;
  this->normal = normal;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKPlane::SDKPlane() {}
