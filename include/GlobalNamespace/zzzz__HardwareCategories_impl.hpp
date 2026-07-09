#pragma once
// IWYU pragma private; include "GlobalNamespace/HardwareCategories.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HardwareCategories_def.hpp"
#include "GlobalNamespace/zzzz__HardwareCategory_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HardwareCategories.GetHardwareCategoryWithEditorOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HardwareCategory (*)()>(&::GlobalNamespace::HardwareCategories::GetHardwareCategoryWithEditorOverride)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31f82dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(), { "GetHardwareCategoryWithEditorOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HardwareCategories.GetHardwareCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HardwareCategory (*)()>(&::GlobalNamespace::HardwareCategories::GetHardwareCategory)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x31f82e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(), { "GetHardwareCategory", {}, {} })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::HardwareCategory GlobalNamespace::HardwareCategories::GetHardwareCategoryWithEditorOverride() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(), { "GetHardwareCategoryWithEditorOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HardwareCategory>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::HardwareCategory GlobalNamespace::HardwareCategories::GetHardwareCategory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(), { "GetHardwareCategory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HardwareCategory>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HardwareCategories::HardwareCategories() {}
