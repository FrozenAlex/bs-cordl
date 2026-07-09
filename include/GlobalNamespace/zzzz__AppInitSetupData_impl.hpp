#pragma once
// IWYU pragma private; include "GlobalNamespace/AppInitSetupData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AppInitSetupData_RunMode::AppInitSetupData_RunMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInitSetupData_RunMode::AppInitSetupData_RunMode() {}
constexpr ::GlobalNamespace::AppInitSetupData_RunMode GlobalNamespace::AppInitSetupData_RunMode::Game{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::AppInitSetupData_RunMode GlobalNamespace::AppInitSetupData_RunMode::PlayTest{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::AppInitSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInitSetupData::*)()>(&::GlobalNamespace::AppInitSetupData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x324776c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AppInitSetupData_RunMode& GlobalNamespace::AppInitSetupData::__cordl_internal_get_runMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runMode;
}
constexpr ::GlobalNamespace::AppInitSetupData_RunMode const& GlobalNamespace::AppInitSetupData::__cordl_internal_get_runMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runMode;
}
constexpr void GlobalNamespace::AppInitSetupData::__cordl_internal_set_runMode(::GlobalNamespace::AppInitSetupData_RunMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___runMode = value;
}
inline void GlobalNamespace::AppInitSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AppInitSetupData* GlobalNamespace::AppInitSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AppInitSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInitSetupData::AppInitSetupData() {}
