#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKQuaternion.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKQuaternion.get_identity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKQuaternion (*)()>(&::LIV::SDK::Unity::SDKQuaternion::get_identity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57702b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(), { "get_identity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKQuaternion.op_Implicit___UnityEngine__Quaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::LIV::SDK::Unity::SDKQuaternion)>(&::LIV::SDK::Unity::SDKQuaternion::op_Implicit___UnityEngine__Quaternion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57702c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(), { "op_Implicit", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKQuaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKQuaternion.op_Implicit___LIV__SDK__Unity__SDKQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKQuaternion (*)(::UnityEngine::Quaternion)>(
    &::LIV::SDK::Unity::SDKQuaternion::op_Implicit___LIV__SDK__Unity__SDKQuaternion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x576f6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKQuaternion.Euler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKQuaternion (*)(float_t, float_t, float_t)>(&::LIV::SDK::Unity::SDKQuaternion::Euler)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x57702cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(), { "Euler", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKQuaternion.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKQuaternion (*)(::LIV::SDK::Unity::SDKQuaternion, ::LIV::SDK::Unity::SDKQuaternion)>(
    &::LIV::SDK::Unity::SDKQuaternion::op_Multiply)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x577037c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKQuaternion>(), ::i2c::type_of<::LIV::SDK::Unity::SDKQuaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKQuaternion.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKVector3 (*)(::LIV::SDK::Unity::SDKQuaternion, ::LIV::SDK::Unity::SDKVector3)>(
    &::LIV::SDK::Unity::SDKQuaternion::op_Multiply)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x57703f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKQuaternion>(), ::i2c::type_of<::LIV::SDK::Unity::SDKVector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKQuaternion.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LIV::SDK::Unity::SDKQuaternion::*)()>(&::LIV::SDK::Unity::SDKQuaternion::ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5770494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(), { ::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(), 3 }));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKQuaternion LIV::SDK::Unity::SDKQuaternion::get_identity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(), { "get_identity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKQuaternion>(nullptr, ___internal_method);
}
inline ::UnityEngine::Quaternion LIV::SDK::Unity::SDKQuaternion::op_Implicit___UnityEngine__Quaternion(::LIV::SDK::Unity::SDKQuaternion v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(), { "op_Implicit", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKQuaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, v);
}
inline ::LIV::SDK::Unity::SDKQuaternion LIV::SDK::Unity::SDKQuaternion::op_Implicit___LIV__SDK__Unity__SDKQuaternion(::UnityEngine::Quaternion v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKQuaternion>(nullptr, ___internal_method, v);
}
inline ::LIV::SDK::Unity::SDKQuaternion LIV::SDK::Unity::SDKQuaternion::Euler(float_t pitch, float_t yaw, float_t roll) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(), { "Euler", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKQuaternion>(nullptr, ___internal_method, pitch, yaw, roll);
}
inline ::LIV::SDK::Unity::SDKQuaternion LIV::SDK::Unity::SDKQuaternion::op_Multiply(::LIV::SDK::Unity::SDKQuaternion lhs, ::LIV::SDK::Unity::SDKQuaternion rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKQuaternion>(), ::i2c::type_of<::LIV::SDK::Unity::SDKQuaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKQuaternion>(nullptr, ___internal_method, lhs, rhs);
}
inline ::LIV::SDK::Unity::SDKVector3 LIV::SDK::Unity::SDKQuaternion::op_Multiply(::LIV::SDK::Unity::SDKQuaternion lhs, ::LIV::SDK::Unity::SDKVector3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKQuaternion>(), ::i2c::type_of<::LIV::SDK::Unity::SDKVector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKVector3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::StringW LIV::SDK::Unity::SDKQuaternion::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LIV::SDK::Unity::SDKQuaternion>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKQuaternion::SDKQuaternion(float_t x, float_t y, float_t z, float_t w) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
  this->w = w;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKQuaternion::SDKQuaternion() {}
