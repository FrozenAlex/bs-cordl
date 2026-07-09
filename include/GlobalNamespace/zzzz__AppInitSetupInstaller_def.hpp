#pragma once
// IWYU pragma private; include "GlobalNamespace/AppInitSetupInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(AppInitSetupInstaller)
// Forward declare root types
namespace GlobalNamespace {
class AppInitSetupInstaller;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AppInitSetupInstaller*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AppInitSetupInstaller*, "", "AppInitSetupInstaller");
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: AppInitSetupInstaller
class CORDL_TYPE AppInitSetupInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x36ac8d8, size 0x74, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::AppInitSetupInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x36ac94c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInitSetupInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppInitSetupInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInitSetupInstaller(AppInitSetupInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInitSetupInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInitSetupInstaller(AppInitSetupInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20922 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AppInitSetupInstaller) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
