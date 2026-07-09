#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusNetworkPlayerModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
CORDL_MODULE_EXPORT(OculusNetworkPlayerModel)
// Forward declare root types
namespace GlobalNamespace {
class OculusNetworkPlayerModel;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OculusNetworkPlayerModel*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusNetworkPlayerModel*, "", "OculusNetworkPlayerModel");
// Dependencies PlatformNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusNetworkPlayerModel
class CORDL_TYPE OculusNetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
public:
  // Declarations
  static inline ::GlobalNamespace::OculusNetworkPlayerModel* New_ctor();

  /// @brief Method .ctor, addr 0x5b93054, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusNetworkPlayerModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusNetworkPlayerModel(OculusNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusNetworkPlayerModel(OculusNetworkPlayerModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21286 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OculusNetworkPlayerModel) == 0xa8, "Size mismatch!");

} // namespace GlobalNamespace
