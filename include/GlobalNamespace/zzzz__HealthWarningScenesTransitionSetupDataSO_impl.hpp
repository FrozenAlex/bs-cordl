#pragma once
// IWYU pragma private; include "GlobalNamespace/HealthWarningScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO::*)(::GlobalNamespace::HealthWarningSceneSetupData*)>(
    &::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57ef9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::HealthWarningSceneSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57efaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HealthWarningScenesTransitionSetupDataSO::Init(::GlobalNamespace::HealthWarningSceneSetupData* healthWarningSceneSetupData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::GlobalNamespace::HealthWarningSceneSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, healthWarningSceneSetupData);
}
inline void GlobalNamespace::HealthWarningScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* GlobalNamespace::HealthWarningScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO::HealthWarningScenesTransitionSetupDataSO() {}
