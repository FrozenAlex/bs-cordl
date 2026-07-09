#pragma once
// IWYU pragma private; include "GlobalNamespace/ShaderWarmupScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::*)(::GlobalNamespace::ShaderWarmupSceneSetupData*)>(
    &::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57f26e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::ShaderWarmupSceneSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f27a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::Init(::GlobalNamespace::ShaderWarmupSceneSetupData* shaderWarmupSceneSetupData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::GlobalNamespace::ShaderWarmupSceneSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shaderWarmupSceneSetupData);
}
inline void GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO* GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::ShaderWarmupScenesTransitionSetupDataSO() {}
