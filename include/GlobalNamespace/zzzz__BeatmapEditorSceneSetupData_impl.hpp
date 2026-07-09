#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEditorSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorSceneSetupData.get_levelDirPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapEditorSceneSetupData::*)()>(&::GlobalNamespace::BeatmapEditorSceneSetupData::get_levelDirPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57ed390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorSceneSetupData*>(), { "get_levelDirPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorSceneSetupData.get_levelAssetPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapEditorSceneSetupData::*)()>(&::GlobalNamespace::BeatmapEditorSceneSetupData::get_levelAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57ed398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorSceneSetupData*>(), { "get_levelAssetPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEditorSceneSetupData::*)(::StringW, ::StringW)>(&::GlobalNamespace::BeatmapEditorSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57ed3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorSceneSetupData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_get__levelDirPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelDirPath;
}
constexpr ::StringW const& GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_get__levelDirPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelDirPath;
}
constexpr void GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_set__levelDirPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelDirPath = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_get__levelAssetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAssetPath;
}
constexpr ::StringW const& GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_get__levelAssetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAssetPath;
}
constexpr void GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_set__levelAssetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelAssetPath = value;
}
inline ::StringW GlobalNamespace::BeatmapEditorSceneSetupData::get_levelDirPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorSceneSetupData*>(), { "get_levelDirPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapEditorSceneSetupData::get_levelAssetPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorSceneSetupData*>(), { "get_levelAssetPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEditorSceneSetupData::_ctor(::StringW levelDirPath, ::StringW levelAssetPath) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorSceneSetupData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelDirPath, levelAssetPath);
}
inline ::GlobalNamespace::BeatmapEditorSceneSetupData* GlobalNamespace::BeatmapEditorSceneSetupData::New_ctor(::StringW levelDirPath, ::StringW levelAssetPath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapEditorSceneSetupData*>(levelDirPath, levelAssetPath));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorSceneSetupData::BeatmapEditorSceneSetupData() {}
