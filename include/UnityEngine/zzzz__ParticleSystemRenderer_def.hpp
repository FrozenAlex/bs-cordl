#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemRenderer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct ParticleSystemBakeMeshOptions;
}
namespace UnityEngine {
struct ParticleSystemBakeTextureOptions;
}
namespace UnityEngine {
struct ParticleSystemMeshDistribution;
}
namespace UnityEngine {
struct ParticleSystemRenderMode;
}
namespace UnityEngine {
struct ParticleSystemRenderSpace;
}
namespace UnityEngine {
struct ParticleSystemRenderer_BakeTextureOutput;
}
namespace UnityEngine {
struct ParticleSystemSortMode;
}
namespace UnityEngine {
struct ParticleSystemVertexStream;
}
namespace UnityEngine {
struct ParticleSystemVertexStreams;
}
namespace UnityEngine {
struct SpriteMaskInteraction;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystemRenderer;
}
namespace UnityEngine {
struct ParticleSystemRenderer_BakeTextureOutput;
}
// Write type traits
MARK_REF_T(::UnityEngine::ParticleSystemRenderer*);
MARK_VAL_T(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystemRenderer*, "UnityEngine", "ParticleSystemRenderer");
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput, "UnityEngine", "ParticleSystemRenderer/BakeTextureOutput");
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemRenderer/BakeTextureOutput
struct CORDL_TYPE ParticleSystemRenderer_BakeTextureOutput {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemRenderer_BakeTextureOutput();

  // Ctor Parameters [CppParam { name: "vertices", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::UnityW<::UnityEngine::Texture2D>",
  // modifiers: "", def_value: None }]
  constexpr ParticleSystemRenderer_BakeTextureOutput(::UnityW<::UnityEngine::Texture2D> vertices, ::UnityW<::UnityEngine::Texture2D> indices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21101 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field vertices, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> vertices;

  /// @brief Field indices, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> indices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput, indices) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput) == 0x10, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ParticleSystemRenderer
class CORDL_TYPE ParticleSystemRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  using BakeTextureOutput = ::UnityEngine::ParticleSystemRenderer_BakeTextureOutput;

  __declspec(property(get = get_activeTrailVertexStreamsCount)) int32_t activeTrailVertexStreamsCount;

  __declspec(property(get = get_activeVertexStreamsCount)) int32_t activeVertexStreamsCount;

  __declspec(property(get = get_alignment, put = set_alignment)) ::UnityEngine::ParticleSystemRenderSpace alignment;

  __declspec(property(get = get_allowRoll, put = set_allowRoll)) bool allowRoll;

  __declspec(property(get = get_cameraVelocityScale, put = set_cameraVelocityScale)) float_t cameraVelocityScale;

  __declspec(property(get = get_enableGPUInstancing, put = set_enableGPUInstancing)) bool enableGPUInstancing;

  __declspec(property(get = get_flip, put = set_flip)) ::UnityEngine::Vector3 flip;

  __declspec(property(get = get_freeformStretching, put = set_freeformStretching)) bool freeformStretching;

  __declspec(property(get = get_lengthScale, put = set_lengthScale)) float_t lengthScale;

  __declspec(property(get = get_maskInteraction, put = set_maskInteraction)) ::UnityEngine::SpriteMaskInteraction maskInteraction;

  __declspec(property(get = get_maxParticleSize, put = set_maxParticleSize)) float_t maxParticleSize;

  __declspec(property(get = get_mesh, put = set_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_meshCount)) int32_t meshCount;

  __declspec(property(get = get_meshDistribution, put = set_meshDistribution)) ::UnityEngine::ParticleSystemMeshDistribution meshDistribution;

  __declspec(property(get = get_minParticleSize, put = set_minParticleSize)) float_t minParticleSize;

  __declspec(property(get = get_normalDirection, put = set_normalDirection)) float_t normalDirection;

  __declspec(property(put = set_oldTrailMaterial)) ::UnityW<::UnityEngine::Material> oldTrailMaterial;

  __declspec(property(get = get_pivot, put = set_pivot)) ::UnityEngine::Vector3 pivot;

  __declspec(property(get = get_renderMode, put = set_renderMode)) ::UnityEngine::ParticleSystemRenderMode renderMode;

  __declspec(property(get = get_rotateWithStretchDirection, put = set_rotateWithStretchDirection)) bool rotateWithStretchDirection;

  __declspec(property(get = get_shadowBias, put = set_shadowBias)) float_t shadowBias;

  __declspec(property(get = get_sortMode, put = set_sortMode)) ::UnityEngine::ParticleSystemSortMode sortMode;

  __declspec(property(get = get_sortingFudge, put = set_sortingFudge)) float_t sortingFudge;

  __declspec(property(get = get_trailMaterial, put = set_trailMaterial)) ::UnityW<::UnityEngine::Material> trailMaterial;

  __declspec(property(get = get_velocityScale, put = set_velocityScale)) float_t velocityScale;

  /// @brief Method AreVertexStreamsEnabled, addr 0x6b62d3c, size 0x1c, virtual false, abstract: false, final false
  inline bool AreVertexStreamsEnabled(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method BakeMesh, addr 0x6b63478, size 0x158, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeMesh, addr 0x6b63464, size 0x14, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform);

  /// @brief Method BakeMesh, addr 0x6b6623c, size 0x38, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeMesh, addr 0x6b63424, size 0x40, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, bool useTransform);

  /// @brief Method BakeMesh_Injected, addr 0x6b66274, size 0x5c, virtual false, abstract: false, final false
  static inline void BakeMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, ::System::IntPtr camera, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeTexture, addr 0x6b6639c, size 0xac, virtual false, abstract: false, final false
  inline int32_t BakeTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTexture, addr 0x6b66714, size 0x40, virtual false, abstract: false, final false
  inline int32_t BakeTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::by_ref<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::Camera* camera,
                             ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTexture, addr 0x6b666b0, size 0x64, virtual false, abstract: false, final false
  inline int32_t BakeTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::by_ref<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTexture, addr 0x6b66364, size 0x38, virtual false, abstract: false, final false
  inline int32_t BakeTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTextureInternal, addr 0x6b66754, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderer_BakeTextureOutput BakeTextureInternal(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Texture2D* indicesTexture, ::UnityEngine::Camera* camera,
                                                                                     ::UnityEngine::ParticleSystemBakeTextureOptions options, ::by_ref<int32_t> indexCount);

  /// @brief Method BakeTextureInternal_Injected, addr 0x6b668c8, size 0x84, virtual false, abstract: false, final false
  static inline void BakeTextureInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr verticesTexture, ::System::IntPtr indicesTexture, ::System::IntPtr camera,
                                                  ::UnityEngine::ParticleSystemBakeTextureOptions options, ::by_ref<int32_t> indexCount,
                                                  ::by_ref<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput> ret);

  /// @brief Method BakeTextureNoIndicesInternal, addr 0x6b66448, size 0x1fc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> BakeTextureNoIndicesInternal(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Camera* camera,
                                                                         ::UnityEngine::ParticleSystemBakeTextureOptions options, ::by_ref<int32_t> indexCount);

  /// @brief Method BakeTextureNoIndicesInternal_Injected, addr 0x6b66644, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::IntPtr BakeTextureNoIndicesInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr verticesTexture, ::System::IntPtr camera,
                                                                       ::UnityEngine::ParticleSystemBakeTextureOptions options, ::by_ref<int32_t> indexCount);

  /// @brief Method BakeTrailsMesh, addr 0x6b63624, size 0x158, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeTrailsMesh, addr 0x6b63610, size 0x14, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform);

  /// @brief Method BakeTrailsMesh, addr 0x6b662d0, size 0x38, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeTrailsMesh, addr 0x6b635d0, size 0x40, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(::UnityEngine::Mesh* mesh, bool useTransform);

  /// @brief Method BakeTrailsMesh_Injected, addr 0x6b66308, size 0x5c, virtual false, abstract: false, final false
  static inline void BakeTrailsMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, ::System::IntPtr camera, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeTrailsTexture, addr 0x6b669b0, size 0x40, virtual false, abstract: false, final false
  inline int32_t BakeTrailsTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::by_ref<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::Camera* camera,
                                   ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTrailsTexture, addr 0x6b6694c, size 0x64, virtual false, abstract: false, final false
  inline int32_t BakeTrailsTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::by_ref<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTrailsTextureInternal, addr 0x6b669f0, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderer_BakeTextureOutput BakeTrailsTextureInternal(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Texture2D* indicesTexture,
                                                                                           ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeTextureOptions options,
                                                                                           ::by_ref<int32_t> indexCount);

  /// @brief Method BakeTrailsTextureInternal_Injected, addr 0x6b66b64, size 0x84, virtual false, abstract: false, final false
  static inline void BakeTrailsTextureInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr verticesTexture, ::System::IntPtr indicesTexture, ::System::IntPtr camera,
                                                        ::UnityEngine::ParticleSystemBakeTextureOptions options, ::by_ref<int32_t> indexCount,
                                                        ::by_ref<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput> ret);

  /// @brief Method DisableVertexStreams, addr 0x6b62d34, size 0x8, virtual false, abstract: false, final false
  inline void DisableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method EnableVertexStreams, addr 0x6b62150, size 0x8, virtual false, abstract: false, final false
  inline void EnableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method GetActiveTrailVertexStreams, addr 0x6b66fac, size 0x200, virtual false, abstract: false, final false
  inline void GetActiveTrailVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method GetActiveTrailVertexStreams_Injected, addr 0x6b671ac, size 0x44, virtual false, abstract: false, final false
  static inline void GetActiveTrailVertexStreams_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> streams);

  /// @brief Method GetActiveVertexStreams, addr 0x6b63024, size 0x200, virtual false, abstract: false, final false
  inline void GetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method GetActiveVertexStreams_Injected, addr 0x6b66c68, size 0x44, virtual false, abstract: false, final false
  static inline void GetActiveVertexStreams_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> streams);

  /// @brief Method GetEnabledVertexStreams, addr 0x6b62fa0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemVertexStreams GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method GetMeshWeightings, addr 0x6b65e1c, size 0x190, virtual false, abstract: false, final false
  inline int32_t GetMeshWeightings(::by_ref<::ArrayW<float_t>> weightings);

  /// @brief Method GetMeshWeightings_Injected, addr 0x6b65fac, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetMeshWeightings_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> weightings);

  /// @brief Method GetMeshes, addr 0x6b65bf0, size 0xbc, virtual false, abstract: false, final false
  inline int32_t GetMeshes(::by_ref<::ArrayW<::UnityEngine::Mesh*>> meshes);

  /// @brief Method GetMeshes_Injected, addr 0x6b65cac, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetMeshes_Injected(::System::IntPtr _unity_self, ::by_ref<::ArrayW<::UnityEngine::Mesh*>> meshes);

  /// @brief Method Internal_GetEnabledVertexStreams, addr 0x6b62d58, size 0x248, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemVertexStreams Internal_GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method Internal_SetVertexStreams, addr 0x6b62158, size 0xbdc, virtual false, abstract: false, final false
  inline void Internal_SetVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams, bool enabled);

  static inline ::UnityEngine::ParticleSystemRenderer* New_ctor();

  /// @brief Method SetActiveTrailVertexStreams, addr 0x6b66d68, size 0x200, virtual false, abstract: false, final false
  inline void SetActiveTrailVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method SetActiveTrailVertexStreams_Injected, addr 0x6b66f68, size 0x44, virtual false, abstract: false, final false
  static inline void SetActiveTrailVertexStreams_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> streams);

  /// @brief Method SetActiveVertexStreams, addr 0x6b63224, size 0x200, virtual false, abstract: false, final false
  inline void SetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method SetActiveVertexStreams_Injected, addr 0x6b66c24, size 0x44, virtual false, abstract: false, final false
  static inline void SetActiveVertexStreams_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> streams);

  /// @brief Method SetMeshWeightings, addr 0x6b6616c, size 0x14, virtual false, abstract: false, final false
  inline void SetMeshWeightings(::ArrayW<float_t> weightings);

  /// @brief Method SetMeshWeightings, addr 0x6b65ff0, size 0x128, virtual false, abstract: false, final false
  inline void SetMeshWeightings(::ArrayW<float_t> weightings, int32_t size);

  /// @brief Method SetMeshWeightings_Injected, addr 0x6b66118, size 0x54, virtual false, abstract: false, final false
  static inline void SetMeshWeightings_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> weightings, int32_t size);

  /// @brief Method SetMeshes, addr 0x6b65e08, size 0x14, virtual false, abstract: false, final false
  inline void SetMeshes(::ArrayW<::UnityEngine::Mesh*> meshes);

  /// @brief Method SetMeshes, addr 0x6b65cf0, size 0xc4, virtual false, abstract: false, final false
  inline void SetMeshes(::ArrayW<::UnityEngine::Mesh*> meshes, int32_t size);

  /// @brief Method SetMeshes_Injected, addr 0x6b65db4, size 0x54, virtual false, abstract: false, final false
  static inline void SetMeshes_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Mesh*> meshes, int32_t size);

  /// @brief Method .ctor, addr 0x6b671f0, size 0x6f0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeTrailVertexStreamsCount, addr 0x6b66cac, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_activeTrailVertexStreamsCount();

  /// @brief Method get_activeTrailVertexStreamsCount_Injected, addr 0x6b66d2c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_activeTrailVertexStreamsCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_activeVertexStreamsCount, addr 0x6b62fa4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_activeVertexStreamsCount();

  /// @brief Method get_activeVertexStreamsCount_Injected, addr 0x6b66be8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_activeVertexStreamsCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_alignment, addr 0x6b6377c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderSpace get_alignment();

  /// @brief Method get_alignment_Injected, addr 0x6b637fc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystemRenderSpace get_alignment_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_allowRoll, addr 0x6b654b0, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowRoll();

  /// @brief Method get_allowRoll_Injected, addr 0x6b65530, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowRoll_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cameraVelocityScale, addr 0x6b640ec, size 0x80, virtual false, abstract: false, final false
  inline float_t get_cameraVelocityScale();

  /// @brief Method get_cameraVelocityScale_Injected, addr 0x6b6416c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_cameraVelocityScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enableGPUInstancing, addr 0x6b65320, size 0x80, virtual false, abstract: false, final false
  inline bool get_enableGPUInstancing();

  /// @brief Method get_enableGPUInstancing_Injected, addr 0x6b653a0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableGPUInstancing_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_flip, addr 0x6b64c3c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_flip();

  /// @brief Method get_flip_Injected, addr 0x6b64cdc, size 0x44, virtual false, abstract: false, final false
  static inline void get_flip_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_freeformStretching, addr 0x6b65640, size 0x80, virtual false, abstract: false, final false
  inline bool get_freeformStretching();

  /// @brief Method get_freeformStretching_Injected, addr 0x6b656c0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_freeformStretching_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_lengthScale, addr 0x6b63dbc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_lengthScale();

  /// @brief Method get_lengthScale_Injected, addr 0x6b63e3c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_lengthScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maskInteraction, addr 0x6b64dfc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction();

  /// @brief Method get_maskInteraction_Injected, addr 0x6b64e7c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxParticleSize, addr 0x6b648e4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxParticleSize();

  /// @brief Method get_maxParticleSize_Injected, addr 0x6b64964, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxParticleSize_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_mesh, addr 0x6b65960, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_meshCount, addr 0x6b66180, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_meshCount();

  /// @brief Method get_meshCount_Injected, addr 0x6b66200, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_meshCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_meshDistribution, addr 0x6b63a9c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemMeshDistribution get_meshDistribution();

  /// @brief Method get_meshDistribution_Injected, addr 0x6b63b1c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystemMeshDistribution get_meshDistribution_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_mesh_Injected, addr 0x6b65ab0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_mesh_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_minParticleSize, addr 0x6b6474c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_minParticleSize();

  /// @brief Method get_minParticleSize_Injected, addr 0x6b647cc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_minParticleSize_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_normalDirection, addr 0x6b64284, size 0x80, virtual false, abstract: false, final false
  inline float_t get_normalDirection();

  /// @brief Method get_normalDirection_Injected, addr 0x6b64304, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_normalDirection_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pivot, addr 0x6b64a7c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivot();

  /// @brief Method get_pivot_Injected, addr 0x6b64b1c, size 0x44, virtual false, abstract: false, final false
  static inline void get_pivot_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_renderMode, addr 0x6b6390c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderMode get_renderMode();

  /// @brief Method get_renderMode_Injected, addr 0x6b6398c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystemRenderMode get_renderMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rotateWithStretchDirection, addr 0x6b657d0, size 0x80, virtual false, abstract: false, final false
  inline bool get_rotateWithStretchDirection();

  /// @brief Method get_rotateWithStretchDirection_Injected, addr 0x6b65850, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_rotateWithStretchDirection_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shadowBias, addr 0x6b6441c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_shadowBias();

  /// @brief Method get_shadowBias_Injected, addr 0x6b6449c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_shadowBias_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortMode, addr 0x6b63c2c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemSortMode get_sortMode();

  /// @brief Method get_sortMode_Injected, addr 0x6b63cac, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystemSortMode get_sortMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingFudge, addr 0x6b645b4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_sortingFudge();

  /// @brief Method get_sortingFudge_Injected, addr 0x6b64634, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_sortingFudge_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_trailMaterial, addr 0x6b64f8c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_trailMaterial();

  /// @brief Method get_trailMaterial_Injected, addr 0x6b650dc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_trailMaterial_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocityScale, addr 0x6b63f54, size 0x80, virtual false, abstract: false, final false
  inline float_t get_velocityScale();

  /// @brief Method get_velocityScale_Injected, addr 0x6b63fd4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_velocityScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_alignment, addr 0x6b63838, size 0x90, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::ParticleSystemRenderSpace value);

  /// @brief Method set_alignment_Injected, addr 0x6b638c8, size 0x44, virtual false, abstract: false, final false
  static inline void set_alignment_Injected(::System::IntPtr _unity_self, ::UnityEngine::ParticleSystemRenderSpace value);

  /// @brief Method set_allowRoll, addr 0x6b6556c, size 0x90, virtual false, abstract: false, final false
  inline void set_allowRoll(bool value);

  /// @brief Method set_allowRoll_Injected, addr 0x6b655fc, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowRoll_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_cameraVelocityScale, addr 0x6b641a8, size 0x90, virtual false, abstract: false, final false
  inline void set_cameraVelocityScale(float_t value);

  /// @brief Method set_cameraVelocityScale_Injected, addr 0x6b64238, size 0x4c, virtual false, abstract: false, final false
  static inline void set_cameraVelocityScale_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_enableGPUInstancing, addr 0x6b653dc, size 0x90, virtual false, abstract: false, final false
  inline void set_enableGPUInstancing(bool value);

  /// @brief Method set_enableGPUInstancing_Injected, addr 0x6b6546c, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableGPUInstancing_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_flip, addr 0x6b64d20, size 0x98, virtual false, abstract: false, final false
  inline void set_flip(::UnityEngine::Vector3 value);

  /// @brief Method set_flip_Injected, addr 0x6b64db8, size 0x44, virtual false, abstract: false, final false
  static inline void set_flip_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_freeformStretching, addr 0x6b656fc, size 0x90, virtual false, abstract: false, final false
  inline void set_freeformStretching(bool value);

  /// @brief Method set_freeformStretching_Injected, addr 0x6b6578c, size 0x44, virtual false, abstract: false, final false
  static inline void set_freeformStretching_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_lengthScale, addr 0x6b63e78, size 0x90, virtual false, abstract: false, final false
  inline void set_lengthScale(float_t value);

  /// @brief Method set_lengthScale_Injected, addr 0x6b63f08, size 0x4c, virtual false, abstract: false, final false
  static inline void set_lengthScale_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maskInteraction, addr 0x6b64eb8, size 0x90, virtual false, abstract: false, final false
  inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_maskInteraction_Injected, addr 0x6b64f48, size 0x44, virtual false, abstract: false, final false
  static inline void set_maskInteraction_Injected(::System::IntPtr _unity_self, ::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_maxParticleSize, addr 0x6b649a0, size 0x90, virtual false, abstract: false, final false
  inline void set_maxParticleSize(float_t value);

  /// @brief Method set_maxParticleSize_Injected, addr 0x6b64a30, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxParticleSize_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_mesh, addr 0x6b65aec, size 0xc0, virtual false, abstract: false, final false
  inline void set_mesh(::UnityEngine::Mesh* value);

  /// @brief Method set_meshDistribution, addr 0x6b63b58, size 0x90, virtual false, abstract: false, final false
  inline void set_meshDistribution(::UnityEngine::ParticleSystemMeshDistribution value);

  /// @brief Method set_meshDistribution_Injected, addr 0x6b63be8, size 0x44, virtual false, abstract: false, final false
  static inline void set_meshDistribution_Injected(::System::IntPtr _unity_self, ::UnityEngine::ParticleSystemMeshDistribution value);

  /// @brief Method set_mesh_Injected, addr 0x6b65bac, size 0x44, virtual false, abstract: false, final false
  static inline void set_mesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_minParticleSize, addr 0x6b64808, size 0x90, virtual false, abstract: false, final false
  inline void set_minParticleSize(float_t value);

  /// @brief Method set_minParticleSize_Injected, addr 0x6b64898, size 0x4c, virtual false, abstract: false, final false
  static inline void set_minParticleSize_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_normalDirection, addr 0x6b64340, size 0x90, virtual false, abstract: false, final false
  inline void set_normalDirection(float_t value);

  /// @brief Method set_normalDirection_Injected, addr 0x6b643d0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_normalDirection_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_oldTrailMaterial, addr 0x6b6521c, size 0xc0, virtual false, abstract: false, final false
  inline void set_oldTrailMaterial(::UnityEngine::Material* value);

  /// @brief Method set_oldTrailMaterial_Injected, addr 0x6b652dc, size 0x44, virtual false, abstract: false, final false
  static inline void set_oldTrailMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_pivot, addr 0x6b64b60, size 0x98, virtual false, abstract: false, final false
  inline void set_pivot(::UnityEngine::Vector3 value);

  /// @brief Method set_pivot_Injected, addr 0x6b64bf8, size 0x44, virtual false, abstract: false, final false
  static inline void set_pivot_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_renderMode, addr 0x6b639c8, size 0x90, virtual false, abstract: false, final false
  inline void set_renderMode(::UnityEngine::ParticleSystemRenderMode value);

  /// @brief Method set_renderMode_Injected, addr 0x6b63a58, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::ParticleSystemRenderMode value);

  /// @brief Method set_rotateWithStretchDirection, addr 0x6b6588c, size 0x90, virtual false, abstract: false, final false
  inline void set_rotateWithStretchDirection(bool value);

  /// @brief Method set_rotateWithStretchDirection_Injected, addr 0x6b6591c, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotateWithStretchDirection_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_shadowBias, addr 0x6b644d8, size 0x90, virtual false, abstract: false, final false
  inline void set_shadowBias(float_t value);

  /// @brief Method set_shadowBias_Injected, addr 0x6b64568, size 0x4c, virtual false, abstract: false, final false
  static inline void set_shadowBias_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_sortMode, addr 0x6b63ce8, size 0x90, virtual false, abstract: false, final false
  inline void set_sortMode(::UnityEngine::ParticleSystemSortMode value);

  /// @brief Method set_sortMode_Injected, addr 0x6b63d78, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::ParticleSystemSortMode value);

  /// @brief Method set_sortingFudge, addr 0x6b64670, size 0x90, virtual false, abstract: false, final false
  inline void set_sortingFudge(float_t value);

  /// @brief Method set_sortingFudge_Injected, addr 0x6b64700, size 0x4c, virtual false, abstract: false, final false
  static inline void set_sortingFudge_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_trailMaterial, addr 0x6b65118, size 0xc0, virtual false, abstract: false, final false
  inline void set_trailMaterial(::UnityEngine::Material* value);

  /// @brief Method set_trailMaterial_Injected, addr 0x6b651d8, size 0x44, virtual false, abstract: false, final false
  static inline void set_trailMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_velocityScale, addr 0x6b64010, size 0x90, virtual false, abstract: false, final false
  inline void set_velocityScale(float_t value);

  /// @brief Method set_velocityScale_Injected, addr 0x6b640a0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_velocityScale_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemRenderer(ParticleSystemRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemRenderer(ParticleSystemRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21102 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ParticleSystemRenderer) == 0x18, "Size mismatch!");

} // namespace UnityEngine
