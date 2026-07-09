#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKApplicationOutput.hpp"
#include "LIV/SDK/Unity/zzzz__FEATURES_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKApplicationOutput_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKApplicationOutput.get_empty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKApplicationOutput (*)()>(&::LIV::SDK::Unity::SDKApplicationOutput::get_empty)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x576ac44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKApplicationOutput>(), { "get_empty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKApplicationOutput.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LIV::SDK::Unity::SDKApplicationOutput::*)()>(&::LIV::SDK::Unity::SDKApplicationOutput::ToString)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x577121c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKApplicationOutput>(), { ::i2c::class_of<::LIV::SDK::Unity::SDKApplicationOutput>(), 3 }));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKApplicationOutput LIV::SDK::Unity::SDKApplicationOutput::get_empty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKApplicationOutput>(), { "get_empty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKApplicationOutput>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKApplicationOutput::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LIV::SDK::Unity::SDKApplicationOutput>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "supportedFeatures", ty: "::LIV::SDK::Unity::FEATURES", modifiers: "", def_value: Some("{}") }, CppParam { name: "engineName", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "engineVersion", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "applicationName", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "applicationVersion", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "xrDeviceName", ty: "::StringW", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "graphicsAPI", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdkID", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "sdkVersion", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKApplicationOutput::SDKApplicationOutput(::LIV::SDK::Unity::FEATURES supportedFeatures, ::StringW engineName, ::StringW engineVersion, ::StringW applicationName,
                                                                        ::StringW applicationVersion, ::StringW xrDeviceName, ::StringW graphicsAPI, ::StringW sdkID, ::StringW sdkVersion) noexcept {
  this->supportedFeatures = supportedFeatures;
  this->engineName = engineName;
  this->engineVersion = engineVersion;
  this->applicationName = applicationName;
  this->applicationVersion = applicationVersion;
  this->xrDeviceName = xrDeviceName;
  this->graphicsAPI = graphicsAPI;
  this->sdkID = sdkID;
  this->sdkVersion = sdkVersion;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKApplicationOutput::SDKApplicationOutput() {}
