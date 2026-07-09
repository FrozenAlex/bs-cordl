#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKControllerState.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKControllerState_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKControllerState.get_empty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKControllerState (*)()>(&::LIV::SDK::Unity::SDKControllerState::get_empty)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x577220c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKControllerState>(), { "get_empty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKControllerState.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LIV::SDK::Unity::SDKControllerState::*)()>(&::LIV::SDK::Unity::SDKControllerState::ToString)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5772258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKControllerState>(), { ::i2c::class_of<::LIV::SDK::Unity::SDKControllerState>(), 3 }));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKControllerState LIV::SDK::Unity::SDKControllerState::get_empty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKControllerState>(), { "get_empty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKControllerState>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKControllerState::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LIV::SDK::Unity::SDKControllerState>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "hmdposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "hmdrotation", ty: "::LIV::SDK::Unity::SDKQuaternion",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "calibrationcameraposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "calibrationcamerarotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "camerarotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftposition", ty:
// "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftrotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "rightposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightrotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "",
// def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKControllerState::SDKControllerState(::LIV::SDK::Unity::SDKVector3 hmdposition, ::LIV::SDK::Unity::SDKQuaternion hmdrotation,
                                                                    ::LIV::SDK::Unity::SDKVector3 calibrationcameraposition, ::LIV::SDK::Unity::SDKQuaternion calibrationcamerarotation,
                                                                    ::LIV::SDK::Unity::SDKVector3 cameraposition, ::LIV::SDK::Unity::SDKQuaternion camerarotation,
                                                                    ::LIV::SDK::Unity::SDKVector3 leftposition, ::LIV::SDK::Unity::SDKQuaternion leftrotation,
                                                                    ::LIV::SDK::Unity::SDKVector3 rightposition, ::LIV::SDK::Unity::SDKQuaternion rightrotation) noexcept {
  this->hmdposition = hmdposition;
  this->hmdrotation = hmdrotation;
  this->calibrationcameraposition = calibrationcameraposition;
  this->calibrationcamerarotation = calibrationcamerarotation;
  this->cameraposition = cameraposition;
  this->camerarotation = camerarotation;
  this->leftposition = leftposition;
  this->leftrotation = leftrotation;
  this->rightposition = rightposition;
  this->rightrotation = rightrotation;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKControllerState::SDKControllerState() {}
