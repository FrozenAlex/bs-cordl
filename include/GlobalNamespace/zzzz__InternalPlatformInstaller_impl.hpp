#pragma once
// IWYU pragma private; include "GlobalNamespace/InternalPlatformInstaller.hpp"
#include "Zenject/zzzz__Installer_3_impl.hpp"
#include "GlobalNamespace/zzzz__InternalPlatformInstaller_def.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModelInitialDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InternalPlatformInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InternalPlatformInstaller::*)(
    ::GlobalNamespace::AppInitSetupData*, ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*)>(&::GlobalNamespace::InternalPlatformInstaller::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36b67a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InternalPlatformInstaller*>(),
                            { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::AppInitSetupData*>(), ::i2c::type_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InternalPlatformInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InternalPlatformInstaller::*)()>(&::GlobalNamespace::InternalPlatformInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x36b6810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::InternalPlatformInstaller*>(), { ::i2c::class_of<::GlobalNamespace::InternalPlatformInstaller*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InternalPlatformInstaller.BindAnalyticsModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InternalPlatformInstaller::*)()>(&::GlobalNamespace::InternalPlatformInstaller::BindAnalyticsModel)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x36b6830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InternalPlatformInstaller*>(), { "BindAnalyticsModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InternalPlatformInstaller.BindBeatmapDataAssetFileModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InternalPlatformInstaller::*)()>(&::GlobalNamespace::InternalPlatformInstaller::BindBeatmapDataAssetFileModel)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x36b6990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InternalPlatformInstaller*>(), { "BindBeatmapDataAssetFileModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InternalPlatformInstaller.BindAdditionalContentModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InternalPlatformInstaller::*)()>(&::GlobalNamespace::InternalPlatformInstaller::BindAdditionalContentModel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x36b6904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InternalPlatformInstaller*>(), { "BindAdditionalContentModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InternalPlatformInstaller.BindMockPlatformAdditionalContentModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InternalPlatformInstaller::*)()>(
    &::GlobalNamespace::InternalPlatformInstaller::BindMockPlatformAdditionalContentModel)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x36b6a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InternalPlatformInstaller*>(), { "BindMockPlatformAdditionalContentModel", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::InternalPlatformInstaller::__cordl_internal_get__isTest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTest;
}
constexpr bool const& GlobalNamespace::InternalPlatformInstaller::__cordl_internal_get__isTest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTest;
}
constexpr void GlobalNamespace::InternalPlatformInstaller::__cordl_internal_set__isTest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isTest = value;
}
constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>&
GlobalNamespace::InternalPlatformInstaller::__cordl_internal_get__mockPlatformAdditionalContentModelInitialData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mockPlatformAdditionalContentModelInitialData;
}
constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> const&
GlobalNamespace::InternalPlatformInstaller::__cordl_internal_get__mockPlatformAdditionalContentModelInitialData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mockPlatformAdditionalContentModelInitialData;
}
constexpr void
GlobalNamespace::InternalPlatformInstaller::__cordl_internal_set__mockPlatformAdditionalContentModelInitialData(::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mockPlatformAdditionalContentModelInitialData = value;
}
inline void GlobalNamespace::InternalPlatformInstaller::_ctor(::GlobalNamespace::AppInitSetupData* appInitSetupData,
                                                              ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InternalPlatformInstaller*>(),
                          { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::AppInitSetupData*>(), ::i2c::type_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, appInitSetupData, mockPlatformAdditionalContentModelInitialData);
}
inline void GlobalNamespace::InternalPlatformInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::InternalPlatformInstaller*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InternalPlatformInstaller::BindAnalyticsModel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InternalPlatformInstaller*>(), { "BindAnalyticsModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InternalPlatformInstaller::BindBeatmapDataAssetFileModel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InternalPlatformInstaller*>(), { "BindBeatmapDataAssetFileModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InternalPlatformInstaller::BindAdditionalContentModel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InternalPlatformInstaller*>(), { "BindAdditionalContentModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InternalPlatformInstaller::BindMockPlatformAdditionalContentModel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InternalPlatformInstaller*>(), { "BindMockPlatformAdditionalContentModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InternalPlatformInstaller*
GlobalNamespace::InternalPlatformInstaller::New_ctor(::GlobalNamespace::AppInitSetupData* appInitSetupData,
                                                     ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InternalPlatformInstaller*>(appInitSetupData, mockPlatformAdditionalContentModelInitialData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InternalPlatformInstaller::InternalPlatformInstaller() {}
