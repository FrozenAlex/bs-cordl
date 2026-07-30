#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectRendererFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MainEffectRendererFeature)
namespace GlobalNamespace {
class MainEffectController;
}
namespace GlobalNamespace {
class MainEffectPostRenderPass;
}
namespace GlobalNamespace {
class MainEffectPreRenderPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectRendererFeature;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MainEffectRendererFeature*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectRendererFeature*, "", "MainEffectRendererFeature");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectRendererFeature
class CORDL_TYPE MainEffectRendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  /// @brief Field _postRenderPass, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__postRenderPass, put = __cordl_internal_set__postRenderPass)) ::GlobalNamespace::MainEffectPostRenderPass* _postRenderPass;

  /// @brief Field _preRenderPass, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__preRenderPass, put = __cordl_internal_set__preRenderPass)) ::GlobalNamespace::MainEffectPreRenderPass* _preRenderPass;

  /// @brief Method AddRenderPasses, addr 0x5f3f114, size 0x40, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x5f3efa0, size 0x8c, virtual true, abstract: false, final false
  inline void Create();

  /// @brief Method GetEnabledController, addr 0x5f3f158, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::MainEffectController> GetEnabledController(::UnityEngine::Camera* camera);

  static inline ::GlobalNamespace::MainEffectRendererFeature* New_ctor();

  /// @brief Method ResolveController, addr 0x5f3f154, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::MainEffectController> ResolveController(::UnityEngine::Camera* camera);

  constexpr ::GlobalNamespace::MainEffectPostRenderPass* const& __cordl_internal_get__postRenderPass() const;

  constexpr ::GlobalNamespace::MainEffectPostRenderPass*& __cordl_internal_get__postRenderPass();

  constexpr ::GlobalNamespace::MainEffectPreRenderPass* const& __cordl_internal_get__preRenderPass() const;

  constexpr ::GlobalNamespace::MainEffectPreRenderPass*& __cordl_internal_get__preRenderPass();

  constexpr void __cordl_internal_set__postRenderPass(::GlobalNamespace::MainEffectPostRenderPass* value);

  constexpr void __cordl_internal_set__preRenderPass(::GlobalNamespace::MainEffectPreRenderPass* value);

  /// @brief Method .ctor, addr 0x5f3f214, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectRendererFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectRendererFeature(MainEffectRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectRendererFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectRendererFeature(MainEffectRendererFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20884 };

  /// @brief Field kMainEffectBloomTextureName offset 0xffffffff size 0x8
  static constexpr ::ConstString kMainEffectBloomTextureName{ u"_MainEffectBloomTexture" };

  /// @brief Field _preRenderPass, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MainEffectPreRenderPass* ____preRenderPass;

  /// @brief Field _postRenderPass, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MainEffectPostRenderPass* ____postRenderPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectRendererFeature, ____preRenderPass) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectRendererFeature, ____postRenderPass) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainEffectRendererFeature) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
