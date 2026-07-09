#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKTexture.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_COLOR_SPACE_impl.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_DEVICE_impl.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_FORMAT_impl.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_ID_impl.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_TYPE_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTexture_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKTexture.get_empty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKTexture (*)()>(&::LIV::SDK::Unity::SDKTexture::get_empty)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x576b93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKTexture>(), { "get_empty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKTexture.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LIV::SDK::Unity::SDKTexture::*)()>(&::LIV::SDK::Unity::SDKTexture::ToString)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5771b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKTexture>(), { ::i2c::class_of<::LIV::SDK::Unity::SDKTexture>(), 3 }));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKTexture LIV::SDK::Unity::SDKTexture::get_empty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKTexture>(), { "get_empty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKTexture>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKTexture::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LIV::SDK::Unity::SDKTexture>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "id", ty: "::LIV::SDK::Unity::TEXTURE_ID", modifiers: "", def_value: Some("{}") }, CppParam { name: "texturePtr", ty: "::System::IntPtr", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "SharedHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "device", ty: "::LIV::SDK::Unity::TEXTURE_DEVICE", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "dummy", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::LIV::SDK::Unity::TEXTURE_TYPE", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "format", ty: "::LIV::SDK::Unity::TEXTURE_FORMAT", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorSpace", ty:
// "::LIV::SDK::Unity::TEXTURE_COLOR_SPACE", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKTexture::SDKTexture(::LIV::SDK::Unity::TEXTURE_ID id, ::System::IntPtr texturePtr, ::System::IntPtr SharedHandle, ::LIV::SDK::Unity::TEXTURE_DEVICE device,
                                                    int32_t dummy, ::LIV::SDK::Unity::TEXTURE_TYPE type, ::LIV::SDK::Unity::TEXTURE_FORMAT format, ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE colorSpace,
                                                    int32_t width, int32_t height) noexcept {
  this->id = id;
  this->texturePtr = texturePtr;
  this->SharedHandle = SharedHandle;
  this->device = device;
  this->dummy = dummy;
  this->type = type;
  this->format = format;
  this->colorSpace = colorSpace;
  this->width = width;
  this->height = height;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKTexture::SDKTexture() {}
