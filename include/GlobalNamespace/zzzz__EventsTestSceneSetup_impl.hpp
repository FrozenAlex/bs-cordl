#pragma once
// IWYU pragma private; include "GlobalNamespace/EventsTestSceneSetup.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__EventsTestSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EventsTestSceneSetup.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestSceneSetup::*)()>(&::GlobalNamespace::EventsTestSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0xec4;
  constexpr static std::size_t addrs = 0x57e97c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestSceneSetup*>(), { ::i2c::class_of<::GlobalNamespace::EventsTestSceneSetup*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestSceneSetup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestSceneSetup::*)()>(&::GlobalNamespace::EventsTestSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57ea684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestSceneSetup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::EventsTestSceneSetup::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& GlobalNamespace::EventsTestSceneSetup::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::EventsTestSceneSetup::__cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneSetupData = value;
}
inline void GlobalNamespace::EventsTestSceneSetup::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EventsTestSceneSetup*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EventsTestSceneSetup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestSceneSetup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EventsTestSceneSetup* GlobalNamespace::EventsTestSceneSetup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EventsTestSceneSetup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventsTestSceneSetup::EventsTestSceneSetup() {}
