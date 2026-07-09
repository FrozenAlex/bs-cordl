#pragma once
// IWYU pragma private; include "GlobalNamespace/DynamicScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DynamicScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class SceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class DynamicScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DynamicScenesTransitionSetupDataSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DynamicScenesTransitionSetupDataSO*, "", "DynamicScenesTransitionSetupDataSO");
// Dependencies ScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: DynamicScenesTransitionSetupDataSO
class CORDL_TYPE DynamicScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
  // Declarations
  static inline ::GlobalNamespace::DynamicScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method SetScenes, addr 0x324ec78, size 0x8, virtual false, abstract: false, final false
  inline void SetScenes(::ArrayW<::StringW> scenes, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData);

  /// @brief Method .ctor, addr 0x324ec88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicScenesTransitionSetupDataSO(DynamicScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicScenesTransitionSetupDataSO(DynamicScenesTransitionSetupDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21388 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DynamicScenesTransitionSetupDataSO) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
