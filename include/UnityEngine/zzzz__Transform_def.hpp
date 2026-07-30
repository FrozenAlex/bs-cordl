#pragma once
// IWYU pragma private; include "UnityEngine/Transform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Transform)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RotationOrder;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
class Transform_Enumerator;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Transform_Enumerator;
}
// Write type traits
MARK_REF_T(::UnityEngine::Transform*);
MARK_REF_T(::UnityEngine::Transform_Enumerator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Transform*, "UnityEngine", "Transform");
DEFINE_IL2CPP_CLASS(::UnityEngine::Transform_Enumerator*, "UnityEngine", "Transform/Enumerator");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Transform/Enumerator
class CORDL_TYPE Transform_Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Field currentIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_currentIndex, put = __cordl_internal_set_currentIndex)) int32_t currentIndex;

  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_outer, put = __cordl_internal_set_outer)) ::UnityW<::UnityEngine::Transform> outer;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x6af3414, size 0x34, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Transform_Enumerator* New_ctor(::UnityEngine::Transform* outer);

  /// @brief Method Reset, addr 0x6af3448, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_currentIndex() const;

  constexpr int32_t& __cordl_internal_get_currentIndex();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_outer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_outer();

  constexpr void __cordl_internal_set_currentIndex(int32_t value);

  constexpr void __cordl_internal_set_outer(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x6af2b3c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* outer);

  /// @brief Method get_Current, addr 0x6af33f8, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Transform_Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Transform_Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Transform_Enumerator(Transform_Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Transform_Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Transform_Enumerator(Transform_Enumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10395 };

  /// @brief Field outer, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___outer;

  /// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___currentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Transform_Enumerator, ___outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Transform_Enumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Transform_Enumerator) == 0x20, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Transform
class CORDL_TYPE Transform : public ::UnityEngine::Component {
public:
  // Declarations
  using Enumerator = ::UnityEngine::Transform_Enumerator;

  __declspec(property(get = get_childCount)) int32_t childCount;

  __declspec(property(get = get_constrainProportionsScale, put = set_constrainProportionsScale)) bool constrainProportionsScale;

  __declspec(property(get = get_eulerAngles, put = set_eulerAngles)) ::UnityEngine::Vector3 eulerAngles;

  __declspec(property(get = get_forward, put = set_forward)) ::UnityEngine::Vector3 forward;

  __declspec(property(get = get_hasChanged, put = set_hasChanged)) bool hasChanged;

  __declspec(property(get = get_hierarchyCapacity, put = set_hierarchyCapacity)) int32_t hierarchyCapacity;

  __declspec(property(get = get_hierarchyCount)) int32_t hierarchyCount;

  __declspec(property(get = get_localEulerAngles, put = set_localEulerAngles)) ::UnityEngine::Vector3 localEulerAngles;

  __declspec(property(get = get_localPosition, put = set_localPosition)) ::UnityEngine::Vector3 localPosition;

  __declspec(property(get = get_localRotation, put = set_localRotation)) ::UnityEngine::Quaternion localRotation;

  __declspec(property(get = get_localScale, put = set_localScale)) ::UnityEngine::Vector3 localScale;

  __declspec(property(get = get_localToWorldMatrix)) ::UnityEngine::Matrix4x4 localToWorldMatrix;

  __declspec(property(get = get_lossyScale)) ::UnityEngine::Vector3 lossyScale;

  __declspec(property(get = get_parent, put = set_parent)) ::UnityW<::UnityEngine::Transform> parent;

  __declspec(property(get = get_parentInternal, put = set_parentInternal)) ::UnityW<::UnityEngine::Transform> parentInternal;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_right, put = set_right)) ::UnityEngine::Vector3 right;

  __declspec(property(get = get_root)) ::UnityW<::UnityEngine::Transform> root;

  __declspec(property(get = get_rotation, put = set_rotation)) ::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_rotationOrder, put = set_rotationOrder)) ::UnityEngine::RotationOrder rotationOrder;

  __declspec(property(get = get_up, put = set_up)) ::UnityEngine::Vector3 up;

  __declspec(property(get = get_worldToLocalMatrix)) ::UnityEngine::Matrix4x4 worldToLocalMatrix;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method DetachChildren, addr 0x6af1e94, size 0x78, virtual false, abstract: false, final false
  inline void DetachChildren();

  /// @brief Method DetachChildren_Injected, addr 0x6af1f0c, size 0x3c, virtual false, abstract: false, final false
  static inline void DetachChildren_Injected(::System::IntPtr _unity_self);

  /// @brief Method Find, addr 0x6af2630, size 0x58, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> Find(::StringW n);

  /// @brief Method FindChild, addr 0x6af2ae0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> FindChild(::StringW n);

  /// @brief Method FindRelativeTransformWithPath, addr 0x6af2344, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> FindRelativeTransformWithPath(::StringW path, bool isActiveOnly);

  /// @brief Method FindRelativeTransformWithPath_Injected, addr 0x6af25dc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindRelativeTransformWithPath_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path, bool isActiveOnly);

  /// @brief Method GetChild, addr 0x6af2d34, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetChild(int32_t index);

  /// @brief Method GetChildCount, addr 0x6af2ec8, size 0x78, virtual false, abstract: false, final false
  inline int32_t GetChildCount();

  /// @brief Method GetChildCount_Injected, addr 0x6af2f40, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetChildCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetChild_Injected, addr 0x6af2e84, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetChild_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetEnumerator, addr 0x6af2ae4, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetLocalEulerAngles, addr 0x6aee6c4, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLocalEulerAngles(::UnityEngine::RotationOrder order);

  /// @brief Method GetLocalEulerAngles_Injected, addr 0x6aee76c, size 0x54, virtual false, abstract: false, final false
  static inline void GetLocalEulerAngles_Injected(::System::IntPtr _unity_self, ::UnityEngine::RotationOrder order, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetLocalPositionAndRotation, addr 0x6aefb04, size 0x90, virtual false, abstract: false, final false
  inline void GetLocalPositionAndRotation(::by_ref<::UnityEngine::Vector3> localPosition, ::by_ref<::UnityEngine::Quaternion> localRotation);

  /// @brief Method GetLocalPositionAndRotation_Injected, addr 0x6aefb94, size 0x54, virtual false, abstract: false, final false
  static inline void GetLocalPositionAndRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> localPosition, ::by_ref<::UnityEngine::Quaternion> localRotation);

  /// @brief Method GetParent, addr 0x6aef468, size 0x148, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetParent();

  /// @brief Method GetParent_Injected, addr 0x6aef5b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetParent_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPositionAndRotation, addr 0x6aefa20, size 0x90, virtual false, abstract: false, final false
  inline void GetPositionAndRotation(::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Quaternion> rotation);

  /// @brief Method GetPositionAndRotation_Injected, addr 0x6aefab0, size 0x54, virtual false, abstract: false, final false
  static inline void GetPositionAndRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Quaternion> rotation);

  /// @brief Method GetRoot, addr 0x6af1c5c, size 0x148, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetRoot();

  /// @brief Method GetRoot_Injected, addr 0x6af1da4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetRoot_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetRotationOrderInternal, addr 0x6aef068, size 0x78, virtual false, abstract: false, final false
  inline int32_t GetRotationOrderInternal();

  /// @brief Method GetRotationOrderInternal_Injected, addr 0x6aef16c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetRotationOrderInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetSiblingIndex, addr 0x6af2290, size 0x78, virtual false, abstract: false, final false
  inline int32_t GetSiblingIndex();

  /// @brief Method GetSiblingIndex_Injected, addr 0x6af2308, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetSiblingIndex_Injected(::System::IntPtr _unity_self);

  /// @brief Method Internal_LookAt, addr 0x6af04c4, size 0x9c, virtual false, abstract: false, final false
  inline void Internal_LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp);

  /// @brief Method Internal_LookAt_Injected, addr 0x6af05e0, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_LookAt_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> worldPosition, ::by_ref<::UnityEngine::Vector3> worldUp);

  /// @brief Method InverseTransformDirection, addr 0x6af095c, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3 direction);

  /// @brief Method InverseTransformDirection, addr 0x6af0a54, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformDirection(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformDirection_Injected, addr 0x6af0a00, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformDirection_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> direction, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformDirections, addr 0x6af0bd0, size 0xd8, virtual false, abstract: false, final false
  inline void InverseTransformDirections(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method InverseTransformDirections, addr 0x6af0ca8, size 0x80, virtual false, abstract: false, final false
  inline void InverseTransformDirections(::System::Span_1<::UnityEngine::Vector3> directions);

  /// @brief Method InverseTransformDirectionsInternal, addr 0x6af0a58, size 0x124, virtual false, abstract: false, final false
  inline void InverseTransformDirectionsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method InverseTransformDirectionsInternal_Injected, addr 0x6af0b7c, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformDirectionsInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> directions,
                                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformedDirections);

  /// @brief Method InverseTransformPoint, addr 0x6af188c, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3 position);

  /// @brief Method InverseTransformPoint, addr 0x6af1984, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformPoint(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformPoint_Injected, addr 0x6af1930, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformPoints, addr 0x6af1b00, size 0xd8, virtual false, abstract: false, final false
  inline void InverseTransformPoints(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method InverseTransformPoints, addr 0x6af1bd8, size 0x80, virtual false, abstract: false, final false
  inline void InverseTransformPoints(::System::Span_1<::UnityEngine::Vector3> positions);

  /// @brief Method InverseTransformPointsInternal, addr 0x6af1988, size 0x124, virtual false, abstract: false, final false
  inline void InverseTransformPointsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method InverseTransformPointsInternal_Injected, addr 0x6af1aac, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformPointsInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> positions,
                                                             ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformedPositions);

  /// @brief Method InverseTransformVector, addr 0x6af10f4, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformVector(::UnityEngine::Vector3 vector);

  /// @brief Method InverseTransformVector, addr 0x6af11ec, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformVector(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformVector_Injected, addr 0x6af1198, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformVector_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> vector, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformVectors, addr 0x6af1368, size 0xd8, virtual false, abstract: false, final false
  inline void InverseTransformVectors(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method InverseTransformVectors, addr 0x6af1440, size 0x80, virtual false, abstract: false, final false
  inline void InverseTransformVectors(::System::Span_1<::UnityEngine::Vector3> vectors);

  /// @brief Method InverseTransformVectorsInternal, addr 0x6af11f0, size 0x124, virtual false, abstract: false, final false
  inline void InverseTransformVectorsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method InverseTransformVectorsInternal_Injected, addr 0x6af1314, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformVectorsInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> vectors,
                                                              ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformedVectors);

  /// @brief Method IsChildOf, addr 0x6af2818, size 0xb4, virtual false, abstract: false, final false
  inline bool IsChildOf(::UnityEngine::Transform* parent);

  /// @brief Method IsChildOf_Injected, addr 0x6af291c, size 0x44, virtual false, abstract: false, final false
  static inline bool IsChildOf_Injected(::System::IntPtr _unity_self, ::System::IntPtr parent);

  /// @brief Method IsConstrainProportionsScale, addr 0x6af3274, size 0x78, virtual false, abstract: false, final false
  inline bool IsConstrainProportionsScale();

  /// @brief Method IsConstrainProportionsScale_Injected, addr 0x6af33bc, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsConstrainProportionsScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method IsNonUniformScaleTransform, addr 0x6af31bc, size 0x78, virtual false, abstract: false, final false
  inline bool IsNonUniformScaleTransform();

  /// @brief Method IsNonUniformScaleTransform_Injected, addr 0x6af3234, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsNonUniformScaleTransform_Injected(::System::IntPtr _unity_self);

  /// @brief Method LookAt, addr 0x6af03c4, size 0x100, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Transform* target);

  /// @brief Method LookAt, addr 0x6af02fc, size 0xc4, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Transform* target, ::UnityEngine::Vector3 worldUp);

  /// @brief Method LookAt, addr 0x6af0560, size 0x80, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Vector3 worldPosition);

  /// @brief Method LookAt, addr 0x6af03c0, size 0x4, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp);

  /// @brief Method MoveAfterSibling, addr 0x6af217c, size 0xc0, virtual false, abstract: false, final false
  inline void MoveAfterSibling(::UnityEngine::Transform* transform, bool notifyEditorAndMarkDirty);

  /// @brief Method MoveAfterSibling_Injected, addr 0x6af223c, size 0x54, virtual false, abstract: false, final false
  static inline void MoveAfterSibling_Injected(::System::IntPtr _unity_self, ::System::IntPtr transform, bool notifyEditorAndMarkDirty);

  static inline ::UnityEngine::Transform* New_ctor();

  /// @brief Method Rotate, addr 0x6af0230, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method Rotate, addr 0x6af01a4, size 0x8c, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 axis, float_t angle, ::UnityEngine::Space relativeTo);

  /// @brief Method Rotate, addr 0x6af009c, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 eulers);

  /// @brief Method Rotate, addr 0x6aefe14, size 0x288, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 eulers, ::UnityEngine::Space relativeTo);

  /// @brief Method Rotate, addr 0x6af00a8, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(float_t xAngle, float_t yAngle, float_t zAngle);

  /// @brief Method Rotate, addr 0x6af00a4, size 0x4, virtual false, abstract: false, final false
  inline void Rotate(float_t xAngle, float_t yAngle, float_t zAngle, ::UnityEngine::Space relativeTo);

  /// @brief Method RotateAround, addr 0x6af2b4c, size 0xa0, virtual false, abstract: false, final false
  inline void RotateAround(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAround, addr 0x6af0238, size 0xc4, virtual false, abstract: false, final false
  inline void RotateAround(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundInternal, addr 0x6af00b0, size 0xa0, virtual false, abstract: false, final false
  inline void RotateAroundInternal(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundInternal_Injected, addr 0x6af0150, size 0x54, virtual false, abstract: false, final false
  static inline void RotateAroundInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method RotateAroundLocal, addr 0x6af2c40, size 0xa0, virtual false, abstract: false, final false
  inline void RotateAroundLocal(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundLocal_Injected, addr 0x6af2ce0, size 0x54, virtual false, abstract: false, final false
  static inline void RotateAroundLocal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method RotateAround_Injected, addr 0x6af2bec, size 0x54, virtual false, abstract: false, final false
  static inline void RotateAround_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method SendTransformChangedScale, addr 0x6af2688, size 0x78, virtual false, abstract: false, final false
  inline void SendTransformChangedScale();

  /// @brief Method SendTransformChangedScale_Injected, addr 0x6af2700, size 0x3c, virtual false, abstract: false, final false
  static inline void SendTransformChangedScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetAsFirstSibling, addr 0x6af1f48, size 0x78, virtual false, abstract: false, final false
  inline void SetAsFirstSibling();

  /// @brief Method SetAsFirstSibling_Injected, addr 0x6af1fc0, size 0x3c, virtual false, abstract: false, final false
  static inline void SetAsFirstSibling_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetAsLastSibling, addr 0x6af1ffc, size 0x78, virtual false, abstract: false, final false
  inline void SetAsLastSibling();

  /// @brief Method SetAsLastSibling_Injected, addr 0x6af2074, size 0x3c, virtual false, abstract: false, final false
  static inline void SetAsLastSibling_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetConstrainProportionsScale, addr 0x6af32f0, size 0x88, virtual false, abstract: false, final false
  inline void SetConstrainProportionsScale(bool isLinked);

  /// @brief Method SetConstrainProportionsScale_Injected, addr 0x6af3378, size 0x44, virtual false, abstract: false, final false
  static inline void SetConstrainProportionsScale_Injected(::System::IntPtr _unity_self, bool isLinked);

  /// @brief Method SetLocalEulerAngles, addr 0x6aee7c0, size 0xa0, virtual false, abstract: false, final false
  inline void SetLocalEulerAngles(::UnityEngine::Vector3 euler, ::UnityEngine::RotationOrder order);

  /// @brief Method SetLocalEulerAngles_Injected, addr 0x6aee860, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalEulerAngles_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> euler, ::UnityEngine::RotationOrder order);

  /// @brief Method SetLocalEulerHint, addr 0x6aee8b4, size 0x90, virtual false, abstract: false, final false
  inline void SetLocalEulerHint(::UnityEngine::Vector3 euler);

  /// @brief Method SetLocalEulerHint_Injected, addr 0x6aee944, size 0x44, virtual false, abstract: false, final false
  static inline void SetLocalEulerHint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> euler);

  /// @brief Method SetLocalPositionAndRotation, addr 0x6aef930, size 0x9c, virtual false, abstract: false, final false
  inline void SetLocalPositionAndRotation(::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localRotation);

  /// @brief Method SetLocalPositionAndRotation_Injected, addr 0x6aef9cc, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalPositionAndRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> localPosition, ::by_ref<::UnityEngine::Quaternion> localRotation);

  /// @brief Method SetParent, addr 0x6aef5b0, size 0x8, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::Transform* p);

  /// @brief Method SetParent, addr 0x6aef5f4, size 0xc0, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::Transform* parent, bool worldPositionStays);

  /// @brief Method SetParent_Injected, addr 0x6aef6b4, size 0x54, virtual false, abstract: false, final false
  static inline void SetParent_Injected(::System::IntPtr _unity_self, ::System::IntPtr parent, bool worldPositionStays);

  /// @brief Method SetPositionAndRotation, addr 0x6aef840, size 0x9c, virtual false, abstract: false, final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetPositionAndRotation_Injected, addr 0x6aef8dc, size 0x54, virtual false, abstract: false, final false
  static inline void SetPositionAndRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Quaternion> rotation);

  /// @brief Method SetRotationOrderInternal, addr 0x6aef0e4, size 0x88, virtual false, abstract: false, final false
  inline void SetRotationOrderInternal(::UnityEngine::RotationOrder rotationOrder);

  /// @brief Method SetRotationOrderInternal_Injected, addr 0x6aef1a8, size 0x44, virtual false, abstract: false, final false
  static inline void SetRotationOrderInternal_Injected(::System::IntPtr _unity_self, ::UnityEngine::RotationOrder rotationOrder);

  /// @brief Method SetSiblingIndex, addr 0x6af20b0, size 0x88, virtual false, abstract: false, final false
  inline void SetSiblingIndex(int32_t index);

  /// @brief Method SetSiblingIndex_Injected, addr 0x6af2138, size 0x44, virtual false, abstract: false, final false
  static inline void SetSiblingIndex_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method TransformDirection, addr 0x6aefc70, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3 direction);

  /// @brief Method TransformDirection, addr 0x6af0688, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformDirection(float_t x, float_t y, float_t z);

  /// @brief Method TransformDirection_Injected, addr 0x6af0634, size 0x54, virtual false, abstract: false, final false
  static inline void TransformDirection_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> direction, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method TransformDirections, addr 0x6af0804, size 0xd8, virtual false, abstract: false, final false
  inline void TransformDirections(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method TransformDirections, addr 0x6af08dc, size 0x80, virtual false, abstract: false, final false
  inline void TransformDirections(::System::Span_1<::UnityEngine::Vector3> directions);

  /// @brief Method TransformDirectionsInternal, addr 0x6af068c, size 0x124, virtual false, abstract: false, final false
  inline void TransformDirectionsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method TransformDirectionsInternal_Injected, addr 0x6af07b0, size 0x54, virtual false, abstract: false, final false
  static inline void TransformDirectionsInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> directions,
                                                          ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformedDirections);

  /// @brief Method TransformPoint, addr 0x6af14c0, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3 position);

  /// @brief Method TransformPoint, addr 0x6af15b8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformPoint(float_t x, float_t y, float_t z);

  /// @brief Method TransformPoint_Injected, addr 0x6af1564, size 0x54, virtual false, abstract: false, final false
  static inline void TransformPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method TransformPoints, addr 0x6af1734, size 0xd8, virtual false, abstract: false, final false
  inline void TransformPoints(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method TransformPoints, addr 0x6af180c, size 0x80, virtual false, abstract: false, final false
  inline void TransformPoints(::System::Span_1<::UnityEngine::Vector3> positions);

  /// @brief Method TransformPointsInternal, addr 0x6af15bc, size 0x124, virtual false, abstract: false, final false
  inline void TransformPointsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method TransformPointsInternal_Injected, addr 0x6af16e0, size 0x54, virtual false, abstract: false, final false
  static inline void TransformPointsInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> positions,
                                                      ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformedPositions);

  /// @brief Method TransformVector, addr 0x6af0d28, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3 vector);

  /// @brief Method TransformVector, addr 0x6af0e20, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformVector(float_t x, float_t y, float_t z);

  /// @brief Method TransformVector_Injected, addr 0x6af0dcc, size 0x54, virtual false, abstract: false, final false
  static inline void TransformVector_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> vector, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method TransformVectors, addr 0x6af0f9c, size 0xd8, virtual false, abstract: false, final false
  inline void TransformVectors(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method TransformVectors, addr 0x6af1074, size 0x80, virtual false, abstract: false, final false
  inline void TransformVectors(::System::Span_1<::UnityEngine::Vector3> vectors);

  /// @brief Method TransformVectorsInternal, addr 0x6af0e24, size 0x124, virtual false, abstract: false, final false
  inline void TransformVectorsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method TransformVectorsInternal_Injected, addr 0x6af0f48, size 0x54, virtual false, abstract: false, final false
  static inline void TransformVectorsInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> vectors,
                                                       ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformedVectors);

  /// @brief Method Translate, addr 0x6aefd14, size 0x8, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation);

  /// @brief Method Translate, addr 0x6aefbe8, size 0x88, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Space relativeTo);

  /// @brief Method Translate, addr 0x6aefd28, size 0xe8, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Transform* relativeTo);

  /// @brief Method Translate, addr 0x6aefd20, size 0x8, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z);

  /// @brief Method Translate, addr 0x6aefd1c, size 0x4, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z, ::UnityEngine::Space relativeTo);

  /// @brief Method Translate, addr 0x6aefe10, size 0x4, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z, ::UnityEngine::Transform* relativeTo);

  /// @brief Method .ctor, addr 0x6aee3f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_childCount, addr 0x6af1de0, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_childCount();

  /// @brief Method get_childCount_Injected, addr 0x6af1e58, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_childCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_constrainProportionsScale, addr 0x6af3270, size 0x4, virtual false, abstract: false, final false
  inline bool get_constrainProportionsScale();

  /// @brief Method get_eulerAngles, addr 0x6aee988, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_eulerAngles();

  /// @brief Method get_forward, addr 0x6aeeeb0, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_hasChanged, addr 0x6af2960, size 0x78, virtual false, abstract: false, final false
  inline bool get_hasChanged();

  /// @brief Method get_hasChanged_Injected, addr 0x6af29d8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasChanged_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hierarchyCapacity, addr 0x6af2f7c, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_hierarchyCapacity();

  /// @brief Method get_hierarchyCount, addr 0x6af3104, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_hierarchyCount();

  /// @brief Method get_localEulerAngles, addr 0x6aeeb0c, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localEulerAngles();

  /// @brief Method get_localPosition, addr 0x6aed340, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method get_localPosition_Injected, addr 0x6aee63c, size 0x44, virtual false, abstract: false, final false
  static inline void get_localPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_localRotation, addr 0x6aeeb3c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_localRotation();

  /// @brief Method get_localRotation_Injected, addr 0x6aeefdc, size 0x44, virtual false, abstract: false, final false
  static inline void get_localRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_localScale, addr 0x6aef1ec, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localScale();

  /// @brief Method get_localScale_Injected, addr 0x6aef284, size 0x44, virtual false, abstract: false, final false
  static inline void get_localScale_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_localToWorldMatrix, addr 0x6aede50, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix();

  /// @brief Method get_localToWorldMatrix_Injected, addr 0x6aef7fc, size 0x44, virtual false, abstract: false, final false
  static inline void get_localToWorldMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_lossyScale, addr 0x6af273c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_lossyScale();

  /// @brief Method get_lossyScale_Injected, addr 0x6af27d4, size 0x44, virtual false, abstract: false, final false
  static inline void get_lossyScale_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_parent, addr 0x6aee3e8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_parent();

  /// @brief Method get_parentInternal, addr 0x6aef39c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_parentInternal();

  /// @brief Method get_position, addr 0x6aee48c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_position_Injected, addr 0x6aee524, size 0x44, virtual false, abstract: false, final false
  static inline void get_position_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_right, addr 0x6aeec90, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_right();

  /// @brief Method get_root, addr 0x6af1c58, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_root();

  /// @brief Method get_rotation, addr 0x6aee9b8, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_rotationOrder, addr 0x6aef064, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::RotationOrder get_rotationOrder();

  /// @brief Method get_rotation_Injected, addr 0x6aeef54, size 0x44, virtual false, abstract: false, final false
  static inline void get_rotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_up, addr 0x6aeeda0, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_up();

  /// @brief Method get_worldToLocalMatrix, addr 0x6aef708, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldToLocalMatrix();

  /// @brief Method get_worldToLocalMatrix_Injected, addr 0x6aef7b8, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldToLocalMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method internal_getHierarchyCapacity, addr 0x6af2f80, size 0x78, virtual false, abstract: false, final false
  inline int32_t internal_getHierarchyCapacity();

  /// @brief Method internal_getHierarchyCapacity_Injected, addr 0x6af3084, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t internal_getHierarchyCapacity_Injected(::System::IntPtr _unity_self);

  /// @brief Method internal_getHierarchyCount, addr 0x6af3108, size 0x78, virtual false, abstract: false, final false
  inline int32_t internal_getHierarchyCount();

  /// @brief Method internal_getHierarchyCount_Injected, addr 0x6af3180, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t internal_getHierarchyCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method internal_setHierarchyCapacity, addr 0x6af2ffc, size 0x88, virtual false, abstract: false, final false
  inline void internal_setHierarchyCapacity(int32_t value);

  /// @brief Method internal_setHierarchyCapacity_Injected, addr 0x6af30c0, size 0x44, virtual false, abstract: false, final false
  static inline void internal_setHierarchyCapacity_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_constrainProportionsScale, addr 0x6af32ec, size 0x4, virtual false, abstract: false, final false
  inline void set_constrainProportionsScale(bool value);

  /// @brief Method set_eulerAngles, addr 0x6aeea4c, size 0x30, virtual false, abstract: false, final false
  inline void set_eulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_forward, addr 0x6aeef38, size 0x1c, virtual false, abstract: false, final false
  inline void set_forward(::UnityEngine::Vector3 value);

  /// @brief Method set_hasChanged, addr 0x6af2a14, size 0x88, virtual false, abstract: false, final false
  inline void set_hasChanged(bool value);

  /// @brief Method set_hasChanged_Injected, addr 0x6af2a9c, size 0x44, virtual false, abstract: false, final false
  static inline void set_hasChanged_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_hierarchyCapacity, addr 0x6af2ff8, size 0x4, virtual false, abstract: false, final false
  inline void set_hierarchyCapacity(int32_t value);

  /// @brief Method set_localEulerAngles, addr 0x6aeebd0, size 0x30, virtual false, abstract: false, final false
  inline void set_localEulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_localPosition, addr 0x6aed408, size 0x90, virtual false, abstract: false, final false
  inline void set_localPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_localPosition_Injected, addr 0x6aee680, size 0x44, virtual false, abstract: false, final false
  static inline void set_localPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_localRotation, addr 0x6aeec00, size 0x90, virtual false, abstract: false, final false
  inline void set_localRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_localRotation_Injected, addr 0x6aef020, size 0x44, virtual false, abstract: false, final false
  static inline void set_localRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value);

  /// @brief Method set_localScale, addr 0x6aef2c8, size 0x90, virtual false, abstract: false, final false
  inline void set_localScale(::UnityEngine::Vector3 value);

  /// @brief Method set_localScale_Injected, addr 0x6aef358, size 0x44, virtual false, abstract: false, final false
  static inline void set_localScale_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_parent, addr 0x6aef3a0, size 0xc0, virtual false, abstract: false, final false
  inline void set_parent(::UnityEngine::Transform* value);

  /// @brief Method set_parentInternal, addr 0x6aef460, size 0x8, virtual false, abstract: false, final false
  inline void set_parentInternal(::UnityEngine::Transform* value);

  /// @brief Method set_position, addr 0x6aee568, size 0x90, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_position_Injected, addr 0x6aee5f8, size 0x44, virtual false, abstract: false, final false
  static inline void set_position_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_right, addr 0x6aeed18, size 0x88, virtual false, abstract: false, final false
  inline void set_right(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x6aeea7c, size 0x90, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rotationOrder, addr 0x6aef0e0, size 0x4, virtual false, abstract: false, final false
  inline void set_rotationOrder(::UnityEngine::RotationOrder value);

  /// @brief Method set_rotation_Injected, addr 0x6aeef98, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value);

  /// @brief Method set_up, addr 0x6aeee28, size 0x88, virtual false, abstract: false, final false
  inline void set_up(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Transform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Transform(Transform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Transform(Transform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10396 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Transform) == 0x18, "Size mismatch!");

} // namespace UnityEngine
