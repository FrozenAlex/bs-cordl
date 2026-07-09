#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorTypeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColorTypeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorTypeExtensions.Opposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorType (*)(::GlobalNamespace::ColorType)>(&::GlobalNamespace::ColorTypeExtensions::Opposite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x31c8b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTypeExtensions*>(), { "Opposite", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ColorType GlobalNamespace::ColorTypeExtensions::Opposite(::GlobalNamespace::ColorType colorType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTypeExtensions*>(), { "Opposite", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType>(nullptr, ___internal_method, colorType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorTypeExtensions::ColorTypeExtensions() {}
