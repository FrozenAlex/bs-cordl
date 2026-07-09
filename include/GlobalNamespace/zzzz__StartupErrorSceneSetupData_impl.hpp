#pragma once
// IWYU pragma private; include "GlobalNamespace/StartupErrorSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__StartupErrorSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StartupErrorSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartupErrorSceneSetupData::*)(::StringW, ::StringW)>(&::GlobalNamespace::StartupErrorSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57ee7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorSceneSetupData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr ::StringW const& GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr void GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_set_title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___title = value;
}
constexpr ::StringW& GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_get_subtitle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtitle;
}
constexpr ::StringW const& GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_get_subtitle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtitle;
}
constexpr void GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_set_subtitle(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subtitle = value;
}
inline void GlobalNamespace::StartupErrorSceneSetupData::_ctor(::StringW title, ::StringW subtitle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorSceneSetupData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, title, subtitle);
}
inline ::GlobalNamespace::StartupErrorSceneSetupData* GlobalNamespace::StartupErrorSceneSetupData::New_ctor(::StringW title, ::StringW subtitle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StartupErrorSceneSetupData*>(title, subtitle));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StartupErrorSceneSetupData::StartupErrorSceneSetupData() {}
