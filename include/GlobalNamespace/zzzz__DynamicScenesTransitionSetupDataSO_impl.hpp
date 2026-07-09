#pragma once
// IWYU pragma private; include "GlobalNamespace/DynamicScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__DynamicScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DynamicScenesTransitionSetupDataSO.SetScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicScenesTransitionSetupDataSO::*)(::ArrayW<::StringW>, ::ArrayW<::GlobalNamespace::SceneSetupData*>)>(
    &::GlobalNamespace::DynamicScenesTransitionSetupDataSO::SetScenes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324ec78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DynamicScenesTransitionSetupDataSO*>(),
                                                             { "SetScenes", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::DynamicScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324ec88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DynamicScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DynamicScenesTransitionSetupDataSO::SetScenes(::ArrayW<::StringW> scenes, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DynamicScenesTransitionSetupDataSO*>(),
                                                           { "SetScenes", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenes, sceneSetupData);
}
inline void GlobalNamespace::DynamicScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DynamicScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DynamicScenesTransitionSetupDataSO* GlobalNamespace::DynamicScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DynamicScenesTransitionSetupDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicScenesTransitionSetupDataSO::DynamicScenesTransitionSetupDataSO() {}
