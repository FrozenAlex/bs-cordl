#pragma once
// IWYU pragma private; include "UnityEngine/GL.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GL)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine {
class GL;
}
// Write type traits
MARK_REF_T(::UnityEngine::GL*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GL*, "UnityEngine", "GL");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GL
class CORDL_TYPE GL : public ::System::Object {
public:
  // Declarations
  /// @brief Method Begin, addr 0x6a81a08, size 0x3c, virtual false, abstract: false, final false
  static inline void Begin(int32_t mode);

  /// @brief Method Clear, addr 0x6a81b40, size 0x8, virtual false, abstract: false, final false
  static inline void Clear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor);

  /// @brief Method Clear, addr 0x6a81b3c, size 0x4, virtual false, abstract: false, final false
  static inline void Clear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth);

  /// @brief Method Color, addr 0x6a81564, size 0x58, virtual false, abstract: false, final false
  static inline void Color(::UnityEngine::Color c);

  /// @brief Method End, addr 0x6a81a44, size 0x28, virtual false, abstract: false, final false
  static inline void End();

  /// @brief Method Flush, addr 0x6a816ac, size 0x28, virtual false, abstract: false, final false
  static inline void Flush();

  /// @brief Method GLClear, addr 0x6a81a6c, size 0x6c, virtual false, abstract: false, final false
  static inline void GLClear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth);

  /// @brief Method GLClear_Injected, addr 0x6a81ad8, size 0x64, virtual false, abstract: false, final false
  static inline void GLClear_Injected(bool clearDepth, bool clearColor, ::by_ref<::UnityEngine::Color> backgroundColor, float_t depth);

  /// @brief Method GLLoadPixelMatrixScript, addr 0x6a81958, size 0x58, virtual false, abstract: false, final false
  static inline void GLLoadPixelMatrixScript(float_t left, float_t right, float_t bottom, float_t top);

  /// @brief Method GetGPUProjectionMatrix, addr 0x6a81888, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGPUProjectionMatrix(::UnityEngine::Matrix4x4 proj, bool renderIntoTexture);

  /// @brief Method GetGPUProjectionMatrix_Injected, addr 0x6a81904, size 0x54, virtual false, abstract: false, final false
  static inline void GetGPUProjectionMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4> proj, bool renderIntoTexture, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method ImmediateColor, addr 0x6a8150c, size 0x58, virtual false, abstract: false, final false
  static inline void ImmediateColor(float_t r, float_t g, float_t b, float_t a);

  /// @brief Method LoadOrtho, addr 0x6a817e8, size 0x28, virtual false, abstract: false, final false
  static inline void LoadOrtho();

  /// @brief Method LoadPixelMatrix, addr 0x6a819b0, size 0x58, virtual false, abstract: false, final false
  static inline void LoadPixelMatrix(float_t left, float_t right, float_t bottom, float_t top);

  /// @brief Method LoadProjectionMatrix, addr 0x6a81810, size 0x3c, virtual false, abstract: false, final false
  static inline void LoadProjectionMatrix(::UnityEngine::Matrix4x4 mat);

  /// @brief Method LoadProjectionMatrix_Injected, addr 0x6a8184c, size 0x3c, virtual false, abstract: false, final false
  static inline void LoadProjectionMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4> mat);

  /// @brief Method PopMatrix, addr 0x6a817c0, size 0x28, virtual false, abstract: false, final false
  static inline void PopMatrix();

  /// @brief Method PushMatrix, addr 0x6a81798, size 0x28, virtual false, abstract: false, final false
  static inline void PushMatrix();

  /// @brief Method SetViewMatrix, addr 0x6a816d4, size 0x3c, virtual false, abstract: false, final false
  static inline void SetViewMatrix(::UnityEngine::Matrix4x4 m);

  /// @brief Method SetViewMatrix_Injected, addr 0x6a81710, size 0x3c, virtual false, abstract: false, final false
  static inline void SetViewMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4> m);

  /// @brief Method TexCoord2, addr 0x6a814c8, size 0x44, virtual false, abstract: false, final false
  static inline void TexCoord2(float_t x, float_t y);

  /// @brief Method TexCoord3, addr 0x6a81478, size 0x50, virtual false, abstract: false, final false
  static inline void TexCoord3(float_t x, float_t y, float_t z);

  /// @brief Method Vertex3, addr 0x6a81428, size 0x50, virtual false, abstract: false, final false
  static inline void Vertex3(float_t x, float_t y, float_t z);

  /// @brief Method Viewport, addr 0x6a81b48, size 0x44, virtual false, abstract: false, final false
  static inline void Viewport(::UnityEngine::Rect pixelRect);

  /// @brief Method Viewport_Injected, addr 0x6a81b8c, size 0x3c, virtual false, abstract: false, final false
  static inline void Viewport_Injected(::by_ref<::UnityEngine::Rect> pixelRect);

  /// @brief Method get_invertCulling, addr 0x6a81648, size 0x28, virtual false, abstract: false, final false
  static inline bool get_invertCulling();

  /// @brief Method get_sRGBWrite, addr 0x6a815e4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_sRGBWrite();

  /// @brief Method get_wireframe, addr 0x6a815bc, size 0x28, virtual false, abstract: false, final false
  static inline bool get_wireframe();

  /// @brief Method set_invertCulling, addr 0x6a81670, size 0x3c, virtual false, abstract: false, final false
  static inline void set_invertCulling(bool value);

  /// @brief Method set_modelview, addr 0x6a8174c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_modelview(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_sRGBWrite, addr 0x6a8160c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_sRGBWrite(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GL();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GL", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GL(GL&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GL", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GL(GL const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10111 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GL) == 0x10, "Size mismatch!");

} // namespace UnityEngine
