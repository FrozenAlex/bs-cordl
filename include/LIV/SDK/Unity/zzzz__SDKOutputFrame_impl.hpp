#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKOutputFrame.hpp"
#include "LIV/SDK/Unity/zzzz__RENDERING_PIPELINE_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTrackedSpace_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKOutputFrame.get_empty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKOutputFrame (*)()>(&::LIV::SDK::Unity::SDKOutputFrame::get_empty)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x576c214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKOutputFrame>(), { "get_empty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKOutputFrame.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LIV::SDK::Unity::SDKOutputFrame::*)()>(&::LIV::SDK::Unity::SDKOutputFrame::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5771850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKOutputFrame>(), { ::i2c::class_of<::LIV::SDK::Unity::SDKOutputFrame>(), 3 }));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKOutputFrame LIV::SDK::Unity::SDKOutputFrame::get_empty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKOutputFrame>(), { "get_empty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKOutputFrame>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKOutputFrame::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LIV::SDK::Unity::SDKOutputFrame>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "renderingPipeline", ty: "::LIV::SDK::Unity::RENDERING_PIPELINE", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedSpace", ty:
// "::LIV::SDK::Unity::SDKTrackedSpace", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKOutputFrame::SDKOutputFrame(::LIV::SDK::Unity::RENDERING_PIPELINE renderingPipeline, ::LIV::SDK::Unity::SDKTrackedSpace trackedSpace) noexcept {
  this->renderingPipeline = renderingPipeline;
  this->trackedSpace = trackedSpace;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKOutputFrame::SDKOutputFrame() {}
