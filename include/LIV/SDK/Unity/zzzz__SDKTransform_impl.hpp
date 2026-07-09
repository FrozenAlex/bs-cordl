#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKTransform.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTransform_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKTransform.get_empty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKTransform (*)()>(&::LIV::SDK::Unity::SDKTransform::get_empty)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x577149c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKTransform>(), { "get_empty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKTransform.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LIV::SDK::Unity::SDKTransform::*)()>(&::LIV::SDK::Unity::SDKTransform::ToString)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5771f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKTransform>(), { ::i2c::class_of<::LIV::SDK::Unity::SDKTransform>(), 3 }));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKTransform LIV::SDK::Unity::SDKTransform::get_empty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKTransform>(), { "get_empty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKTransform>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKTransform::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LIV::SDK::Unity::SDKTransform>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "localPosition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "localRotation", ty:
// "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "localScale", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKTransform::SDKTransform(::LIV::SDK::Unity::SDKVector3 localPosition, ::LIV::SDK::Unity::SDKQuaternion localRotation,
                                                        ::LIV::SDK::Unity::SDKVector3 localScale) noexcept {
  this->localPosition = localPosition;
  this->localRotation = localRotation;
  this->localScale = localScale;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKTransform::SDKTransform() {}
