#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKPriority.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPriority_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPriority.get_empty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKPriority (*)()>(&::LIV::SDK::Unity::SDKPriority::get_empty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5770fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKPriority>(), { "get_empty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPriority.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LIV::SDK::Unity::SDKPriority::*)()>(&::LIV::SDK::Unity::SDKPriority::ToString)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5770fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKPriority>(), { ::i2c::class_of<::LIV::SDK::Unity::SDKPriority>(), 3 }));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKPriority LIV::SDK::Unity::SDKPriority::get_empty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKPriority>(), { "get_empty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKPriority>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKPriority::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LIV::SDK::Unity::SDKPriority>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "pose", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipPlane", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "stage", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "resolution", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "feature", ty: "int8_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "nearFarAdjustment", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "groundPlane", ty: "int8_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "reserved2", ty: "int8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKPriority::SDKPriority(int8_t pose, int8_t clipPlane, int8_t stage, int8_t resolution, int8_t feature, int8_t nearFarAdjustment, int8_t groundPlane,
                                                      int8_t reserved2) noexcept {
  this->pose = pose;
  this->clipPlane = clipPlane;
  this->stage = stage;
  this->resolution = resolution;
  this->feature = feature;
  this->nearFarAdjustment = nearFarAdjustment;
  this->groundPlane = groundPlane;
  this->reserved2 = reserved2;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKPriority::SDKPriority() {}
