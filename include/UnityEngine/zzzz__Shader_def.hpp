#pragma once
// IWYU pragma private; include "UnityEngine/Shader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Shader)
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
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine::Rendering {
struct ShaderHardwareTier;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyType;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct DisableBatchingType;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Shader;
}
// Write type traits
MARK_REF_T(::UnityEngine::Shader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Shader*, "UnityEngine", "Shader");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Shader
class CORDL_TYPE Shader : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_disableBatching)) ::UnityEngine::DisableBatchingType disableBatching;

  __declspec(property(get = get_isSupported)) bool isSupported;

  __declspec(property(get = get_keywordSpace)) ::UnityEngine::Rendering::LocalKeywordSpace keywordSpace;

  __declspec(property(get = get_maximumLOD, put = set_maximumLOD)) int32_t maximumLOD;

  __declspec(property(get = get_passCount)) int32_t passCount;

  __declspec(property(get = get_renderQueue)) int32_t renderQueue;

  __declspec(property(get = get_subshaderCount)) int32_t subshaderCount;

  /// @brief Method CheckPropertyIndex, addr 0x6a8f990, size 0x70, virtual false, abstract: false, final false
  static inline void CheckPropertyIndex(::UnityEngine::Shader* s, int32_t propertyIndex);

  /// @brief Method DisableKeyword, addr 0x6a8ab88, size 0x124, virtual false, abstract: false, final false
  static inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword, addr 0x6a8b0a4, size 0x44, virtual false, abstract: false, final false
  static inline void DisableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeywordFast, addr 0x6a8aed0, size 0x40, virtual false, abstract: false, final false
  static inline void DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method DisableKeywordFast_Injected, addr 0x6a8af10, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeyword_Injected, addr 0x6a8acac, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method EnableKeyword, addr 0x6a8aa28, size 0x124, virtual false, abstract: false, final false
  static inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableKeyword, addr 0x6a8b060, size 0x44, virtual false, abstract: false, final false
  static inline void EnableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method EnableKeywordFast, addr 0x6a8ae54, size 0x40, virtual false, abstract: false, final false
  static inline void EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method EnableKeywordFast_Injected, addr 0x6a8ae94, size 0x3c, virtual false, abstract: false, final false
  static inline void EnableKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method EnableKeyword_Injected, addr 0x6a8ab4c, size 0x3c, virtual false, abstract: false, final false
  static inline void EnableKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method ExtractGlobalFloatArray, addr 0x6a8d8b4, size 0x13c, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method ExtractGlobalFloatArrayImpl, addr 0x6a8d23c, size 0x128, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArrayImpl(int32_t name, ::by_ref<::ArrayW<float_t>> val);

  /// @brief Method ExtractGlobalFloatArrayImpl_Injected, addr 0x6a8d364, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractGlobalMatrixArray, addr 0x6a8db2c, size 0x13c, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method ExtractGlobalMatrixArrayImpl, addr 0x6a8d514, size 0x128, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArrayImpl(int32_t name, ::by_ref<::ArrayW<::UnityEngine::Matrix4x4>> val);

  /// @brief Method ExtractGlobalMatrixArrayImpl_Injected, addr 0x6a8d63c, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractGlobalVectorArray, addr 0x6a8d9f0, size 0x13c, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method ExtractGlobalVectorArrayImpl, addr 0x6a8d3a8, size 0x128, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArrayImpl(int32_t name, ::by_ref<::ArrayW<::UnityEngine::Vector4>> val);

  /// @brief Method ExtractGlobalVectorArrayImpl_Injected, addr 0x6a8d4d0, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method Find, addr 0x6a8a018, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> Find(::StringW name);

  /// @brief Method FindBuiltin, addr 0x6a8a088, size 0x274, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> FindBuiltin(::StringW name);

  /// @brief Method FindBuiltin_Injected, addr 0x6a8a2fc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindBuiltin_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method FindPassTagValue, addr 0x6a8bb00, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindPassTagValue, addr 0x6a8bc1c, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t subshaderIndex, int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindPropertyIndex, addr 0x6a8fabc, size 0x174, virtual false, abstract: false, final false
  inline int32_t FindPropertyIndex(::StringW propertyName);

  /// @brief Method FindPropertyIndex_Injected, addr 0x6a8fc30, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FindPropertyIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> propertyName);

  /// @brief Method FindSubshaderTagValue, addr 0x6a8bd90, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindSubshaderTagValue(int32_t subshaderIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindTextureStack, addr 0x6a900d4, size 0xa8, virtual false, abstract: false, final false
  inline bool FindTextureStack(int32_t propertyIndex, ::by_ref<::StringW> stackName, ::by_ref<int32_t> layerIndex);

  /// @brief Method FindTextureStackImpl, addr 0x6a8f7cc, size 0x168, virtual false, abstract: false, final false
  static inline bool FindTextureStackImpl(::UnityEngine::Shader* s, int32_t propertyIdx, ::by_ref<::StringW> stackName, ::by_ref<int32_t> layerIndex);

  /// @brief Method FindTextureStackImpl_Injected, addr 0x6a8f934, size 0x5c, virtual false, abstract: false, final false
  static inline bool FindTextureStackImpl_Injected(::System::IntPtr s, int32_t propertyIdx, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> stackName, ::by_ref<int32_t> layerIndex);

  /// @brief Method GetAllGlobalKeywords, addr 0x6a8a924, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> GetAllGlobalKeywords();

  /// @brief Method GetDependency, addr 0x6a8b5d8, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> GetDependency(::StringW name);

  /// @brief Method GetDependency_Injected, addr 0x6a8b870, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDependency_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetEnabledGlobalKeywords, addr 0x6a8a8d4, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> GetEnabledGlobalKeywords();

  /// @brief Method GetGlobalColor, addr 0x6a8e8f4, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetGlobalColor(::StringW name);

  /// @brief Method GetGlobalColor, addr 0x6a8e904, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetGlobalColor(int32_t nameID);

  /// @brief Method GetGlobalFloat, addr 0x6a8e7e8, size 0x40, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloat(::StringW name);

  /// @brief Method GetGlobalFloat, addr 0x6a8e828, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloat(int32_t nameID);

  /// @brief Method GetGlobalFloatArray, addr 0x6a8ea08, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t> GetGlobalFloatArray(::StringW name);

  /// @brief Method GetGlobalFloatArray, addr 0x6a8ea18, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t> GetGlobalFloatArray(int32_t nameID);

  /// @brief Method GetGlobalFloatArray, addr 0x6a8eb40, size 0x18, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalFloatArray, addr 0x6a8eb58, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalFloatArrayCountImpl, addr 0x6a8d188, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalFloatArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalFloatArrayImpl, addr 0x6a8cd68, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t> GetGlobalFloatArrayImpl(int32_t name);

  /// @brief Method GetGlobalFloatArrayImpl_Injected, addr 0x6a8ce84, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetGlobalFloatImpl, addr 0x6a8c6f4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloatImpl(int32_t name);

  /// @brief Method GetGlobalInt, addr 0x6a8e734, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInt(::StringW name);

  /// @brief Method GetGlobalInt, addr 0x6a8e790, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInt(int32_t nameID);

  /// @brief Method GetGlobalIntImpl, addr 0x6a8c6b8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalIntImpl(int32_t name);

  /// @brief Method GetGlobalInteger, addr 0x6a8e864, size 0x40, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInteger(::StringW name);

  /// @brief Method GetGlobalInteger, addr 0x6a8e8a4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInteger(int32_t nameID);

  /// @brief Method GetGlobalMatrix, addr 0x6a8e908, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(::StringW name);

  /// @brief Method GetGlobalMatrix, addr 0x6a8e980, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(int32_t nameID);

  /// @brief Method GetGlobalMatrixArray, addr 0x6a8ead8, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4> GetGlobalMatrixArray(::StringW name);

  /// @brief Method GetGlobalMatrixArray, addr 0x6a8eae8, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4> GetGlobalMatrixArray(int32_t nameID);

  /// @brief Method GetGlobalMatrixArray, addr 0x6a8eb78, size 0x18, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetGlobalMatrixArray, addr 0x6a8eb90, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetGlobalMatrixArrayCountImpl, addr 0x6a8d200, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalMatrixArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayImpl, addr 0x6a8d028, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4> GetGlobalMatrixArrayImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayImpl_Injected, addr 0x6a8d144, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetGlobalMatrixImpl, addr 0x6a8c7cc, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t name);

  /// @brief Method GetGlobalMatrixImpl_Injected, addr 0x6a8c838, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetGlobalTexture, addr 0x6a8e9f4, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(::StringW name);

  /// @brief Method GetGlobalTexture, addr 0x6a8ea04, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(int32_t nameID);

  /// @brief Method GetGlobalTextureImpl, addr 0x6a8c87c, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTextureImpl(int32_t name);

  /// @brief Method GetGlobalTextureImpl_Injected, addr 0x6a8c99c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetGlobalTextureImpl_Injected(int32_t name);

  /// @brief Method GetGlobalVector, addr 0x6a8e8e0, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(::StringW name);

  /// @brief Method GetGlobalVector, addr 0x6a8e8f0, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(int32_t nameID);

  /// @brief Method GetGlobalVectorArray, addr 0x6a8ea70, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4> GetGlobalVectorArray(::StringW name);

  /// @brief Method GetGlobalVectorArray, addr 0x6a8ea80, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4> GetGlobalVectorArray(int32_t nameID);

  /// @brief Method GetGlobalVectorArray, addr 0x6a8eb5c, size 0x18, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalVectorArray, addr 0x6a8eb74, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalVectorArrayCountImpl, addr 0x6a8d1c4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalVectorArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayImpl, addr 0x6a8cec8, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4> GetGlobalVectorArrayImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayImpl_Injected, addr 0x6a8cfe4, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetGlobalVectorImpl, addr 0x6a8c730, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVectorImpl(int32_t name);

  /// @brief Method GetGlobalVectorImpl_Injected, addr 0x6a8c788, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalVectorImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method GetPassCountInSubshader, addr 0x6a8ba2c, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetPassCountInSubshader(int32_t subshaderIndex);

  /// @brief Method GetPassCountInSubshader_Injected, addr 0x6a8babc, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPassCountInSubshader_Injected(::System::IntPtr _unity_self, int32_t subshaderIndex);

  /// @brief Method GetPropertyAttributes, addr 0x6a8fd3c, size 0x28, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetPropertyAttributes(int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes, addr 0x6a8f21c, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetPropertyAttributes(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes_Injected, addr 0x6a8f2d0, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetPropertyAttributes_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyCount, addr 0x6a8fa00, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetPropertyCount();

  /// @brief Method GetPropertyCount_Injected, addr 0x6a8fa80, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetPropertyCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPropertyDefaultFloatValue, addr 0x6a8fd64, size 0x94, virtual false, abstract: false, final false
  inline float_t GetPropertyDefaultFloatValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue, addr 0x6a8ff24, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetPropertyDefaultIntValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue, addr 0x6a8f314, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t GetPropertyDefaultIntValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue_Injected, addr 0x6a8f3c8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPropertyDefaultIntValue_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultValue, addr 0x6a8f40c, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetPropertyDefaultValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultValue_Injected, addr 0x6a8f4dc, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyDefaultValue_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method GetPropertyDefaultVectorValue, addr 0x6a8fdf8, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetPropertyDefaultVectorValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDescription, addr 0x6a8fcec, size 0x28, virtual false, abstract: false, final false
  inline ::StringW GetPropertyDescription(int32_t propertyIndex);

  /// @brief Method GetPropertyDescription, addr 0x6a8ef80, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyDescription(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDescription_Injected, addr 0x6a8f0d0, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyDescription_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyFlags, addr 0x6a8fd14, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(int32_t propertyIndex);

  /// @brief Method GetPropertyFlags, addr 0x6a8f124, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyFlags_Injected, addr 0x6a8f1d8, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyName, addr 0x6a8fc74, size 0x28, virtual false, abstract: false, final false
  inline ::StringW GetPropertyName(int32_t propertyIndex);

  /// @brief Method GetPropertyName, addr 0x6a8ebec, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyNameId, addr 0x6a8fc9c, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetPropertyNameId(int32_t propertyIndex);

  /// @brief Method GetPropertyNameId, addr 0x6a8ed90, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t GetPropertyNameId(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyNameId_Injected, addr 0x6a8ee44, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPropertyNameId_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyName_Injected, addr 0x6a8ed3c, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyName_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyRangeLimits, addr 0x6a8fe88, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPropertyRangeLimits(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName, addr 0x6a90044, size 0x90, virtual false, abstract: false, final false
  inline ::StringW GetPropertyTextureDefaultName(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName, addr 0x6a8f628, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyTextureDefaultName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName_Injected, addr 0x6a8f778, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyTextureDefaultName_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyTextureDimension, addr 0x6a8ffb4, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension, addr 0x6a8f530, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension_Injected, addr 0x6a8f5e4, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyType, addr 0x6a8fcc4, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(int32_t propertyIndex);

  /// @brief Method GetPropertyType, addr 0x6a8ee88, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyType_Injected, addr 0x6a8ef3c, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method IDToTag, addr 0x6a8b48c, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW IDToTag(int32_t name);

  /// @brief Method IDToTag_Injected, addr 0x6a8b558, size 0x44, virtual false, abstract: false, final false
  static inline void IDToTag_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method Internal_FindPassTagValue, addr 0x6a8bb84, size 0x98, virtual false, abstract: false, final false
  inline int32_t Internal_FindPassTagValue(int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValueInSubShader, addr 0x6a8bce8, size 0xa8, virtual false, abstract: false, final false
  inline int32_t Internal_FindPassTagValueInSubShader(int32_t subShaderIndex, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValueInSubShader_Injected, addr 0x6a8bf54, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t Internal_FindPassTagValueInSubShader_Injected(::System::IntPtr _unity_self, int32_t subShaderIndex, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValue_Injected, addr 0x6a8bf00, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Internal_FindPassTagValue_Injected(::System::IntPtr _unity_self, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindSubshaderTagValue, addr 0x6a8be68, size 0x98, virtual false, abstract: false, final false
  inline int32_t Internal_FindSubshaderTagValue(int32_t subShaderIndex, int32_t tagName);

  /// @brief Method Internal_FindSubshaderTagValue_Injected, addr 0x6a8bfb0, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Internal_FindSubshaderTagValue_Injected(::System::IntPtr _unity_self, int32_t subShaderIndex, int32_t tagName);

  /// @brief Method IsKeywordEnabled, addr 0x6a8ace8, size 0x130, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsKeywordEnabled, addr 0x6a8b13c, size 0x48, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method IsKeywordEnabledFast, addr 0x6a8afe0, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method IsKeywordEnabledFast_Injected, addr 0x6a8b024, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabledFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method IsKeywordEnabled_Injected, addr 0x6a8ae18, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  static inline ::UnityEngine::Shader* New_ctor();

  /// @brief Method PropertyToID, addr 0x6a866a8, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t PropertyToID(::StringW name);

  /// @brief Method PropertyToID_Injected, addr 0x6a8b59c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t PropertyToID_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method SetGlobalBuffer, addr 0x6a8dfac, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6a8e04c, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6a8dffc, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6a8e09c, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBufferImpl, addr 0x6a8c374, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBufferImpl_Injected, addr 0x6a8c3c4, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalBufferImpl_Injected(int32_t name, ::System::IntPtr value);

  /// @brief Method SetGlobalColor, addr 0x6a8de60, size 0x40, virtual false, abstract: false, final false
  static inline void SetGlobalColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor, addr 0x6a8dea0, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6a8e0ec, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6a8e1bc, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6a8e154, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6a8e224, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBufferImpl, addr 0x6a8c49c, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBufferImpl_Injected, addr 0x6a8c504, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBufferImpl_Injected(int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferImpl, addr 0x6a8c560, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferImpl_Injected, addr 0x6a8c5c8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantGraphicsBufferImpl_Injected(int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalFloat, addr 0x6a8dcf4, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalFloat(::StringW name, float_t value);

  /// @brief Method SetGlobalFloat, addr 0x6a8dd44, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// @brief Method SetGlobalFloatArray, addr 0x6a8e44c, size 0x24, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(::StringW name, ::ArrayW<float_t> values);

  /// @brief Method SetGlobalFloatArray, addr 0x6a8e32c, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray, addr 0x6a8d680, size 0xbc, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t name, ::ArrayW<float_t> values, int32_t count);

  /// @brief Method SetGlobalFloatArray, addr 0x6a8e470, size 0x14, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t> values);

  /// @brief Method SetGlobalFloatArray, addr 0x6a8e3c4, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArrayImpl, addr 0x6a8c9d8, size 0xdc, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArrayImpl(int32_t name, ::ArrayW<float_t> values, int32_t count);

  /// @brief Method SetGlobalFloatArrayImpl_Injected, addr 0x6a8cab4, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetGlobalFloatImpl, addr 0x6a8c048, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalFloatImpl(int32_t name, float_t value);

  /// @brief Method SetGlobalGraphicsBufferImpl, addr 0x6a8c408, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalGraphicsBufferImpl_Injected, addr 0x6a8c458, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalGraphicsBufferImpl_Injected(int32_t name, ::System::IntPtr value);

  /// @brief Method SetGlobalInt, addr 0x6a8dc68, size 0x48, virtual false, abstract: false, final false
  static inline void SetGlobalInt(::StringW name, int32_t value);

  /// @brief Method SetGlobalInt, addr 0x6a8dcb0, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalInt(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalIntImpl, addr 0x6a8c004, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalIntImpl(int32_t name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x6a8dd90, size 0x48, virtual false, abstract: false, final false
  static inline void SetGlobalInteger(::StringW name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x6a8ddd8, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalInteger(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalMatrix, addr 0x6a8dea4, size 0x64, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrix, addr 0x6a8df08, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixArray, addr 0x6a8e6fc, size 0x24, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6a8e5dc, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6a8d7f8, size 0xbc, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count);

  /// @brief Method SetGlobalMatrixArray, addr 0x6a8e720, size 0x14, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6a8e674, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArrayImpl, addr 0x6a8cc38, size 0xdc, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count);

  /// @brief Method SetGlobalMatrixArrayImpl_Injected, addr 0x6a8cd14, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetGlobalMatrixImpl, addr 0x6a8c12c, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixImpl_Injected, addr 0x6a8c170, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Matrix4x4> value);

  /// @brief Method SetGlobalRayTracingAccelerationStructure, addr 0x6a8e28c, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructure(::StringW name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* value);

  /// @brief Method SetGlobalRayTracingAccelerationStructure, addr 0x6a8e2dc, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructure(int32_t nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure* value);

  /// @brief Method SetGlobalRayTracingAccelerationStructureImpl, addr 0x6a8c624, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructureImpl(int32_t name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method SetGlobalRayTracingAccelerationStructureImpl_Injected, addr 0x6a8c674, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructureImpl_Injected(int32_t name, ::System::IntPtr accelerationStructure);

  /// @brief Method SetGlobalRenderTextureImpl, addr 0x6a8c288, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalRenderTextureImpl_Injected, addr 0x6a8c320, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalRenderTextureImpl_Injected(int32_t name, ::System::IntPtr value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x6a8df80, size 0x28, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x6a8df64, size 0x18, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTexture, addr 0x6a8dfa8, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x6a8df7c, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTextureImpl, addr 0x6a8c1b4, size 0x90, virtual false, abstract: false, final false
  static inline void SetGlobalTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTextureImpl_Injected, addr 0x6a8c244, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalTextureImpl_Injected(int32_t name, ::System::IntPtr value);

  /// @brief Method SetGlobalVector, addr 0x6a8de1c, size 0x40, virtual false, abstract: false, final false
  static inline void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVector, addr 0x6a8de5c, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorArray, addr 0x6a8e5a4, size 0x24, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetGlobalVectorArray, addr 0x6a8e484, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray, addr 0x6a8d73c, size 0xbc, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count);

  /// @brief Method SetGlobalVectorArray, addr 0x6a8e5c8, size 0x14, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetGlobalVectorArray, addr 0x6a8e51c, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArrayImpl, addr 0x6a8cb08, size 0xdc, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count);

  /// @brief Method SetGlobalVectorArrayImpl_Injected, addr 0x6a8cbe4, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetGlobalVectorImpl, addr 0x6a8c094, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorImpl(int32_t name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorImpl_Injected, addr 0x6a8c0e8, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalVectorImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Vector4> value);

  /// @brief Method SetKeyword, addr 0x6a8b0e8, size 0x54, virtual false, abstract: false, final false
  static inline void SetKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method SetKeywordFast, addr 0x6a8af4c, size 0x50, virtual false, abstract: false, final false
  static inline void SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword, bool value);

  /// @brief Method SetKeywordFast_Injected, addr 0x6a8af9c, size 0x44, virtual false, abstract: false, final false
  static inline void SetKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method TagToID, addr 0x6a8b324, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t TagToID(::StringW name);

  /// @brief Method TagToID_Injected, addr 0x6a8b450, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t TagToID_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method WarmupAllShaders, addr 0x6a8b2fc, size 0x28, virtual false, abstract: false, final false
  static inline void WarmupAllShaders();

  /// @brief Method .ctor, addr 0x6a8eb94, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disableBatching, addr 0x6a8b240, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::DisableBatchingType get_disableBatching();

  /// @brief Method get_disableBatching_Injected, addr 0x6a8b2c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::DisableBatchingType get_disableBatching_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enabledGlobalKeywords, addr 0x6a8a8ac, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> get_enabledGlobalKeywords();

  /// @brief Method get_globalKeywords, addr 0x6a8a8fc, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> get_globalKeywords();

  /// @brief Method get_globalMaximumLOD, addr 0x6a8a52c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_globalMaximumLOD();

  /// @brief Method get_globalRenderPipeline, addr 0x6a8a64c, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW get_globalRenderPipeline();

  /// @brief Method get_globalRenderPipeline_Injected, addr 0x6a8a710, size 0x3c, virtual false, abstract: false, final false
  static inline void get_globalRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_globalShaderHardwareTier, addr 0x6a89f34, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier();

  /// @brief Method get_isSupported, addr 0x6a8a590, size 0x80, virtual false, abstract: false, final false
  inline bool get_isSupported();

  /// @brief Method get_isSupported_Injected, addr 0x6a8a610, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isSupported_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_keywordSpace, addr 0x6a8a94c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace();

  /// @brief Method get_keywordSpace_Injected, addr 0x6a8a9e4, size 0x44, virtual false, abstract: false, final false
  static inline void get_keywordSpace_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace> ret);

  /// @brief Method get_maximumChunksOverride, addr 0x6a8a338, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maximumChunksOverride();

  /// @brief Method get_maximumLOD, addr 0x6a8a39c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_maximumLOD();

  /// @brief Method get_maximumLOD_Injected, addr 0x6a8a41c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_maximumLOD_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_passCount, addr 0x6a8b8b4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_passCount();

  /// @brief Method get_passCount_Injected, addr 0x6a8b934, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_passCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_renderQueue, addr 0x6a8b184, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_renderQueue();

  /// @brief Method get_renderQueue_Injected, addr 0x6a8b204, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_renderQueue_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_subshaderCount, addr 0x6a8b970, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_subshaderCount();

  /// @brief Method get_subshaderCount_Injected, addr 0x6a8b9f0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_subshaderCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_globalMaximumLOD, addr 0x6a8a554, size 0x3c, virtual false, abstract: false, final false
  static inline void set_globalMaximumLOD(int32_t value);

  /// @brief Method set_globalRenderPipeline, addr 0x6a8a74c, size 0x124, virtual false, abstract: false, final false
  static inline void set_globalRenderPipeline(::StringW value);

  /// @brief Method set_globalRenderPipeline_Injected, addr 0x6a8a870, size 0x3c, virtual false, abstract: false, final false
  static inline void set_globalRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_globalShaderHardwareTier, addr 0x6a89fa0, size 0x78, virtual false, abstract: false, final false
  static inline void set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier value);

  /// @brief Method set_maximumChunksOverride, addr 0x6a8a360, size 0x3c, virtual false, abstract: false, final false
  static inline void set_maximumChunksOverride(int32_t value);

  /// @brief Method set_maximumLOD, addr 0x6a8a458, size 0x90, virtual false, abstract: false, final false
  inline void set_maximumLOD(int32_t value);

  /// @brief Method set_maximumLOD_Injected, addr 0x6a8a4e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_maximumLOD_Injected(::System::IntPtr _unity_self, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Shader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Shader(Shader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Shader(Shader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10131 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Shader) == 0x18, "Size mismatch!");

} // namespace UnityEngine
