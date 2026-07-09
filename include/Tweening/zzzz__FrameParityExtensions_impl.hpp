#pragma once
// IWYU pragma private; include "Tweening/FrameParityExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Tweening/zzzz__FrameParityExtensions_def.hpp"
#include "Tweening/zzzz__FrameParity_def.hpp"
//  Writing Method size for method: ::Tweening::FrameParityExtensions.GetSwitchedParity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tweening::FrameParity (*)(::Tweening::FrameParity)>(&::Tweening::FrameParityExtensions::GetSwitchedParity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63070d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::FrameParityExtensions*>(), { "GetSwitchedParity", {}, { ::i2c::type_of<::Tweening::FrameParity>() } })));
    return ___internal_method;
  }
};
inline ::Tweening::FrameParity Tweening::FrameParityExtensions::GetSwitchedParity(::Tweening::FrameParity frameParity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::FrameParityExtensions*>(), { "GetSwitchedParity", {}, { ::i2c::type_of<::Tweening::FrameParity>() } })));
  return ::cordl_internals::RunMethodRethrow<::Tweening::FrameParity>(nullptr, ___internal_method, frameParity);
}
// Ctor Parameters []
constexpr ::Tweening::FrameParityExtensions::FrameParityExtensions() {}
