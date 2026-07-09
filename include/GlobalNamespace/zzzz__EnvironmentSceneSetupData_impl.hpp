#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentSceneSetupData::*)(::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::BeatmapLevel*, bool)>(
    &::GlobalNamespace::EnvironmentSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57ed3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSceneSetupData*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_get_hideBranding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideBranding;
}
constexpr bool const& GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_get_hideBranding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideBranding;
}
constexpr void GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_set_hideBranding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hideBranding = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_get_environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_get_environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr void GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_set_environmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentInfo = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevel = value;
}
inline void GlobalNamespace::EnvironmentSceneSetupData::_ctor(::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::BeatmapLevel* beatmapLevel, bool hideBranding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSceneSetupData*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, environmentInfo, beatmapLevel, hideBranding);
}
inline ::GlobalNamespace::EnvironmentSceneSetupData* GlobalNamespace::EnvironmentSceneSetupData::New_ctor(::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
                                                                                                          ::GlobalNamespace::BeatmapLevel* beatmapLevel, bool hideBranding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentSceneSetupData*>(environmentInfo, beatmapLevel, hideBranding));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentSceneSetupData::EnvironmentSceneSetupData() {}
