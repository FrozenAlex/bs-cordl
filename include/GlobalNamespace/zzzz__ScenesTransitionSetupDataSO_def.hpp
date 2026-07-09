#pragma once
// IWYU pragma private; include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class SceneSetupData;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScenesTransitionSetupDataSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScenesTransitionSetupDataSO*, "", "ScenesTransitionSetupDataSO");
// Dependencies PersistentScriptableObject, SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScenesTransitionSetupDataSO
class CORDL_TYPE ScenesTransitionSetupDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _sceneSetupDataArray, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupDataArray, put = __cordl_internal_set__sceneSetupDataArray)) ::ArrayW<::GlobalNamespace::SceneSetupData*> _sceneSetupDataArray;

  /// @brief Field <scenes>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scenes_k__BackingField, put = __cordl_internal_set__scenes_k__BackingField)) ::ArrayW<::StringW> _scenes_k__BackingField;

  __declspec(property(get = get_scenes, put = set_scenes)) ::ArrayW<::StringW> scenes;

  /// @brief Method BeforeScenesWillBeActivated, addr 0x324eca0, size 0x4, virtual true, abstract: false, final false
  inline void BeforeScenesWillBeActivated();

  /// @brief Method BeforeScenesWillBeActivatedAsync, addr 0x324eca4, size 0x94, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BeforeScenesWillBeActivatedAsync();

  /// @brief Method Init, addr 0x324ec80, size 0x8, virtual false, abstract: false, final false
  inline void Init(::ArrayW<::StringW> newScenes, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData);

  /// @brief Method Init, addr 0x324ebdc, size 0x7c, virtual false, abstract: false, final false
  inline void Init(::StringW scene, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData);

  /// @brief Method InstallBindings, addr 0x324bf68, size 0x148, virtual false, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::ScenesTransitionSetupDataSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*> const& __cordl_internal_get__sceneSetupDataArray() const;

  constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*>& __cordl_internal_get__sceneSetupDataArray();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get__scenes_k__BackingField() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get__scenes_k__BackingField();

  constexpr void __cordl_internal_set__sceneSetupDataArray(::ArrayW<::GlobalNamespace::SceneSetupData*> value);

  constexpr void __cordl_internal_set__scenes_k__BackingField(::ArrayW<::StringW> value);

  /// @brief Method .ctor, addr 0x324ec60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_scenes, addr 0x324ec90, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_scenes();

  /// @brief Method set_scenes, addr 0x324ec98, size 0x8, virtual false, abstract: false, final false
  inline void set_scenes(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScenesTransitionSetupDataSO(ScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScenesTransitionSetupDataSO(ScenesTransitionSetupDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21389 };

  /// @brief Field <scenes>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW> ____scenes_k__BackingField;

  /// @brief Field _sceneSetupDataArray, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SceneSetupData*> ____sceneSetupDataArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScenesTransitionSetupDataSO, ____scenes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenesTransitionSetupDataSO, ____sceneSetupDataArray) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScenesTransitionSetupDataSO) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
