#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityScenesHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityScenesHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityScenesHelper.SetActiveRootObjectsInScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, bool)>(&::GlobalNamespace::UnityScenesHelper::SetActiveRootObjectsInScene)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x326aa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityScenesHelper*>(),
                                                             { "SetActiveRootObjectsInScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnityScenesHelper::SetActiveRootObjectsInScene(::UnityEngine::SceneManagement::Scene scene, bool active) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityScenesHelper*>(),
                                                           { "SetActiveRootObjectsInScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, active);
}
template <typename T>
inline void GlobalNamespace::UnityScenesHelper::GetComponentsInScene(::UnityEngine::SceneManagement::Scene scene, ::System::Collections::Generic::List_1<T>* components, bool includeInactive) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityScenesHelper*>(),
                                              { "GetComponentsInScene",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, components, includeInactive);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityScenesHelper::UnityScenesHelper() {}
