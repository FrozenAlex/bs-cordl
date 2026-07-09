#pragma once
// IWYU pragma private; include "SFB/ExtensionFilter.hpp"
#include "SFB/zzzz__ExtensionFilter_def.hpp"
//  Writing Method size for method: ::SFB::ExtensionFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SFB::ExtensionFilter::*)(::StringW, ::ArrayW<::StringW>)>(&::SFB::ExtensionFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5839598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::SFB::ExtensionFilter>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void SFB::ExtensionFilter::_ctor(::StringW filterName, ::ArrayW<::StringW> filterExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::SFB::ExtensionFilter>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, filterName, filterExtensions);
}
// Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_extensions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::SFB::ExtensionFilter::ExtensionFilter(::StringW _name, ::ArrayW<::StringW> _extensions) noexcept {
  this->_name = _name;
  this->_extensions = _extensions;
}
// Ctor Parameters []
constexpr ::SFB::ExtensionFilter::ExtensionFilter() {}
