#pragma once
// IWYU pragma private; include "GlobalNamespace/LightmappingSceneSetup.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__LightmappingSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelNoTransitionInstallerData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightmappingSceneSetup.get_colorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ColorSchemeSO> (::GlobalNamespace::LightmappingSceneSetup::*)()>(
    &::GlobalNamespace::LightmappingSceneSetup::get_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57eab78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmappingSceneSetup*>(), { "get_colorScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmappingSceneSetup.set_colorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightmappingSceneSetup::*)(::GlobalNamespace::ColorSchemeSO*)>(
    &::GlobalNamespace::LightmappingSceneSetup::set_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57eab80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmappingSceneSetup*>(), { "set_colorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemeSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmappingSceneSetup.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightmappingSceneSetup::*)()>(&::GlobalNamespace::LightmappingSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0x10f4;
  constexpr static std::size_t addrs = 0x57eab88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmappingSceneSetup*>(), { ::i2c::class_of<::GlobalNamespace::LightmappingSceneSetup*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmappingSceneSetup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightmappingSceneSetup::*)()>(&::GlobalNamespace::LightmappingSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57ebd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmappingSceneSetup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& GlobalNamespace::LightmappingSceneSetup::__cordl_internal_get__beatmapLevelSo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelSo;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& GlobalNamespace::LightmappingSceneSetup::__cordl_internal_get__beatmapLevelSo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelSo;
}
constexpr void GlobalNamespace::LightmappingSceneSetup::__cordl_internal_set__beatmapLevelSo(::UnityW<::GlobalNamespace::BeatmapLevelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelSo = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& GlobalNamespace::LightmappingSceneSetup::__cordl_internal_get__beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& GlobalNamespace::LightmappingSceneSetup::__cordl_internal_get__beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr void GlobalNamespace::LightmappingSceneSetup::__cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristic = value;
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::LightmappingSceneSetup::__cordl_internal_get__beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::LightmappingSceneSetup::__cordl_internal_get__beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficulty;
}
constexpr void GlobalNamespace::LightmappingSceneSetup::__cordl_internal_set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDifficulty = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& GlobalNamespace::LightmappingSceneSetup::__cordl_internal_get__colorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& GlobalNamespace::LightmappingSceneSetup::__cordl_internal_get__colorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme;
}
constexpr void GlobalNamespace::LightmappingSceneSetup::__cordl_internal_set__colorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorScheme = value;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData>& GlobalNamespace::LightmappingSceneSetup::__cordl_internal_get__standardLevelNoTransitionInstallerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelNoTransitionInstallerData;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> const& GlobalNamespace::LightmappingSceneSetup::__cordl_internal_get__standardLevelNoTransitionInstallerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelNoTransitionInstallerData;
}
constexpr void GlobalNamespace::LightmappingSceneSetup::__cordl_internal_set__standardLevelNoTransitionInstallerData(::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelNoTransitionInstallerData = value;
}
inline ::UnityW<::GlobalNamespace::ColorSchemeSO> GlobalNamespace::LightmappingSceneSetup::get_colorScheme() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmappingSceneSetup*>(), { "get_colorScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ColorSchemeSO>>(this, ___internal_method);
}
inline void GlobalNamespace::LightmappingSceneSetup::set_colorScheme(::GlobalNamespace::ColorSchemeSO* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmappingSceneSetup*>(), { "set_colorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemeSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LightmappingSceneSetup::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightmappingSceneSetup*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightmappingSceneSetup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmappingSceneSetup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightmappingSceneSetup* GlobalNamespace::LightmappingSceneSetup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightmappingSceneSetup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightmappingSceneSetup::LightmappingSceneSetup() {}
