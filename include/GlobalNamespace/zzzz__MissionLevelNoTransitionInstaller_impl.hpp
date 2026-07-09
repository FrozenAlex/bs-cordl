#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelNoTransitionInstaller.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_impl.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelNoTransitionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelNoTransitionInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelNoTransitionInstaller::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MissionLevelNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x57ebe98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelNoTransitionInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MissionLevelNoTransitionInstaller*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelNoTransitionInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelNoTransitionInstaller::*)()>(&::GlobalNamespace::MissionLevelNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57ec440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelNoTransitionInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__beatmapLevelSo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelSo;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__beatmapLevelSo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelSo;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_set__beatmapLevelSo(::UnityW<::GlobalNamespace::BeatmapLevelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelSo = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristic = value;
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficulty;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDifficulty = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__colorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__colorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_set__colorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorScheme = value;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*>& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__missionObjectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectives;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*> const& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__missionObjectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectives;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_set__missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjectives = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiers = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerSpecificSettings = value;
}
constexpr ::StringW& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__backButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButtonText;
}
constexpr ::StringW const& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__backButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButtonText;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_set__backButtonText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backButtonText = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_set__scenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
inline void GlobalNamespace::MissionLevelNoTransitionInstaller::InstallBindings(::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionLevelNoTransitionInstaller*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void GlobalNamespace::MissionLevelNoTransitionInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelNoTransitionInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelNoTransitionInstaller* GlobalNamespace::MissionLevelNoTransitionInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionLevelNoTransitionInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelNoTransitionInstaller::MissionLevelNoTransitionInstaller() {}
