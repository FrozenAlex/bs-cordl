#pragma once
// IWYU pragma private; include "UnityEngine/LineRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LineRenderer)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class LineRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::LineRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LineRenderer
class CORDL_TYPE LineRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  __declspec(property(put = set_endWidth)) float_t endWidth;

  __declspec(property(put = set_positionCount)) int32_t positionCount;

  __declspec(property(get = get_startWidth, put = set_startWidth)) float_t startWidth;

  __declspec(property(put = set_useWorldSpace)) bool useWorldSpace;

  static inline ::UnityEngine::LineRenderer* New_ctor();

  /// @brief Method SetPosition, addr 0x6a851f4, size 0xa8, virtual false, abstract: false, final false
  inline void SetPosition(int32_t index, ::UnityEngine::Vector3 position);

  /// @brief Method SetPosition_Injected, addr 0x6a8529c, size 0x54, virtual false, abstract: false, final false
  static inline void SetPosition_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Vector3> position);

  /// @brief Method .ctor, addr 0x6a852f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_startWidth, addr 0x6a84dd8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_startWidth();

  /// @brief Method get_startWidth_Injected, addr 0x6a84e58, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startWidth_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_endWidth, addr 0x6a84f70, size 0x90, virtual false, abstract: false, final false
  inline void set_endWidth(float_t value);

  /// @brief Method set_endWidth_Injected, addr 0x6a85000, size 0x4c, virtual false, abstract: false, final false
  static inline void set_endWidth_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_positionCount, addr 0x6a85120, size 0x90, virtual false, abstract: false, final false
  inline void set_positionCount(int32_t value);

  /// @brief Method set_positionCount_Injected, addr 0x6a851b0, size 0x44, virtual false, abstract: false, final false
  static inline void set_positionCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_startWidth, addr 0x6a84e94, size 0x90, virtual false, abstract: false, final false
  inline void set_startWidth(float_t value);

  /// @brief Method set_startWidth_Injected, addr 0x6a84f24, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startWidth_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_useWorldSpace, addr 0x6a8504c, size 0x90, virtual false, abstract: false, final false
  inline void set_useWorldSpace(bool value);

  /// @brief Method set_useWorldSpace_Injected, addr 0x6a850dc, size 0x44, virtual false, abstract: false, final false
  static inline void set_useWorldSpace_Injected(::System::IntPtr _unity_self, bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LineRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LineRenderer(LineRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LineRenderer(LineRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10126 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LineRenderer) == 0x18, "Size mismatch!");

} // namespace UnityEngine
