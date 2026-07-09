#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKResolution.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKResolution.get_zero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKResolution (*)()>(&::LIV::SDK::Unity::SDKResolution::get_zero)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576be54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKResolution>(), { "get_zero", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKResolution.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LIV::SDK::Unity::SDKResolution::*)()>(&::LIV::SDK::Unity::SDKResolution::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5770094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKResolution>(), { ::i2c::class_of<::LIV::SDK::Unity::SDKResolution>(), 3 }));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKResolution LIV::SDK::Unity::SDKResolution::get_zero() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKResolution>(), { "get_zero", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKResolution>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKResolution::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LIV::SDK::Unity::SDKResolution>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKResolution::SDKResolution(int32_t width, int32_t height) noexcept {
  this->width = width;
  this->height = height;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKResolution::SDKResolution() {}
