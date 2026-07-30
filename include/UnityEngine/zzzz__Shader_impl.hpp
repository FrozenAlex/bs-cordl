#pragma once
// IWYU pragma private; include "UnityEngine/Shader.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTextureSubElement_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderHardwareTier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderPropertyFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderPropertyType_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__DisableBatchingType_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Shader.get_globalShaderHardwareTier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderHardwareTier (*)()>(&::UnityEngine::Shader::get_globalShaderHardwareTier)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a89f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_globalShaderHardwareTier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.set_globalShaderHardwareTier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ShaderHardwareTier)>(&::UnityEngine::Shader::set_globalShaderHardwareTier)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a89fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_globalShaderHardwareTier", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderHardwareTier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (*)(::StringW)>(&::UnityEngine::Shader::Find)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a8a018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "Find", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindBuiltin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (*)(::StringW)>(&::UnityEngine::Shader::FindBuiltin)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6a8a088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "FindBuiltin", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_maximumChunksOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Shader::get_maximumChunksOverride)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8a338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_maximumChunksOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.set_maximumChunksOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Shader::set_maximumChunksOverride)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8a360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_maximumChunksOverride", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_maximumLOD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_maximumLOD)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a8a39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_maximumLOD", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.set_maximumLOD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::set_maximumLOD)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a8a458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_maximumLOD", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_globalMaximumLOD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Shader::get_globalMaximumLOD)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8a52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_globalMaximumLOD", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.set_globalMaximumLOD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Shader::set_globalMaximumLOD)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8a554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_globalMaximumLOD", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_isSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_isSupported)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a8a590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_isSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_globalRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Shader::get_globalRenderPipeline)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6a8a64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_globalRenderPipeline", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.set_globalRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::Shader::set_globalRenderPipeline)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6a8a74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_globalRenderPipeline", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_enabledGlobalKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::GlobalKeyword> (*)()>(&::UnityEngine::Shader::get_enabledGlobalKeywords)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8a8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_enabledGlobalKeywords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_globalKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::GlobalKeyword> (*)()>(&::UnityEngine::Shader::get_globalKeywords)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8a8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_globalKeywords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_keywordSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeywordSpace (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_keywordSpace)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a8a94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_keywordSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetEnabledGlobalKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::GlobalKeyword> (*)()>(&::UnityEngine::Shader::GetEnabledGlobalKeywords)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8a8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetEnabledGlobalKeywords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetAllGlobalKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::GlobalKeyword> (*)()>(&::UnityEngine::Shader::GetAllGlobalKeywords)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8a924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetAllGlobalKeywords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.EnableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::Shader::EnableKeyword)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6a8aa28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "EnableKeyword", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.DisableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::Shader::DisableKeyword)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6a8ab88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "DisableKeyword", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.IsKeywordEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Shader::IsKeywordEnabled)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6a8ace8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "IsKeywordEnabled", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.EnableKeywordFast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::GlobalKeyword)>(&::UnityEngine::Shader::EnableKeywordFast)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a8ae54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "EnableKeywordFast", {}, { ::i2c::type_of<::UnityEngine::Rendering::GlobalKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.DisableKeywordFast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::GlobalKeyword)>(&::UnityEngine::Shader::DisableKeywordFast)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a8aed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "DisableKeywordFast", {}, { ::i2c::type_of<::UnityEngine::Rendering::GlobalKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetKeywordFast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::GlobalKeyword, bool)>(&::UnityEngine::Shader::SetKeywordFast)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a8af4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetKeywordFast", {}, { ::i2c::type_of<::UnityEngine::Rendering::GlobalKeyword>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.IsKeywordEnabledFast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::GlobalKeyword)>(&::UnityEngine::Shader::IsKeywordEnabledFast)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8afe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "IsKeywordEnabledFast", {}, { ::i2c::type_of<::UnityEngine::Rendering::GlobalKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.EnableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>)>(&::UnityEngine::Shader::EnableKeyword)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8b060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "EnableKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.DisableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>)>(&::UnityEngine::Shader::DisableKeyword)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8b0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "DisableKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>, bool)>(&::UnityEngine::Shader::SetKeyword)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a8b0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.IsKeywordEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>)>(&::UnityEngine::Shader::IsKeywordEnabled)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6a8b13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "IsKeywordEnabled", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_renderQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_renderQueue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a8b184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_renderQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_disableBatching
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DisableBatchingType (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_disableBatching)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a8b240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_disableBatching", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.WarmupAllShaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Shader::WarmupAllShaders)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8b2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "WarmupAllShaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.TagToID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::Shader::TagToID)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6a8b324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "TagToID", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.IDToTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::UnityEngine::Shader::IDToTag)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6a8b48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "IDToTag", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.PropertyToID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::Shader::PropertyToID)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6a866a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "PropertyToID", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetDependency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Shader::*)(::StringW)>(&::UnityEngine::Shader::GetDependency)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6a8b5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetDependency", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_passCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_passCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a8b8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_passCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_subshaderCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_subshaderCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a8b970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_subshaderCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPassCountInSubshader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPassCountInSubshader)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a8ba2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPassCountInSubshader", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindPassTagValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderTagId (::UnityEngine::Shader::*)(int32_t, ::UnityEngine::Rendering::ShaderTagId)>(
    &::UnityEngine::Shader::FindPassTagValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a8bb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "FindPassTagValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindPassTagValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderTagId (::UnityEngine::Shader::*)(int32_t, int32_t, ::UnityEngine::Rendering::ShaderTagId)>(
    &::UnityEngine::Shader::FindPassTagValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6a8bc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "FindPassTagValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindSubshaderTagValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderTagId (::UnityEngine::Shader::*)(int32_t, ::UnityEngine::Rendering::ShaderTagId)>(
    &::UnityEngine::Shader::FindSubshaderTagValue)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6a8bd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "FindSubshaderTagValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.Internal_FindPassTagValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Shader::*)(int32_t, int32_t)>(&::UnityEngine::Shader::Internal_FindPassTagValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a8bb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "Internal_FindPassTagValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.Internal_FindPassTagValueInSubShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Shader::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::Shader::Internal_FindPassTagValueInSubShader)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a8bce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                             { "Internal_FindPassTagValueInSubShader", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.Internal_FindSubshaderTagValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Shader::*)(int32_t, int32_t)>(&::UnityEngine::Shader::Internal_FindSubshaderTagValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a8be68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "Internal_FindSubshaderTagValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalIntImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalIntImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8c004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalIntImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t)>(&::UnityEngine::Shader::SetGlobalFloatImpl)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a8c048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalFloatImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::Shader::SetGlobalVectorImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a8c094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalVectorImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Shader::SetGlobalMatrixImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8c12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalMatrixImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalTextureImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Texture*)>(&::UnityEngine::Shader::SetGlobalTextureImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a8c1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalTextureImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalRenderTextureImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Shader::SetGlobalRenderTextureImpl)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a8c288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalRenderTextureImpl",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(),
                                                                                                            ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalBufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Shader::SetGlobalBufferImpl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a8c374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalBufferImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalGraphicsBufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Shader::SetGlobalGraphicsBufferImpl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a8c408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalGraphicsBufferImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantBufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalConstantBufferImpl)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a8c49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Shader*>(),
                         { "SetGlobalConstantBufferImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantGraphicsBufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalConstantGraphicsBufferImpl)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a8c560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Shader*>(),
            { "SetGlobalConstantGraphicsBufferImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalRayTracingAccelerationStructureImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
    &::UnityEngine::Shader::SetGlobalRayTracingAccelerationStructureImpl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a8c624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                            { "SetGlobalRayTracingAccelerationStructureImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalIntImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalIntImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8c6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalIntImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalFloatImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8c6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloatImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalVectorImpl)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a8c730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVectorImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalMatrixImpl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a8c7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrixImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalTextureImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalTextureImpl)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6a8c87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalTextureImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<float_t>, int32_t)>(&::UnityEngine::Shader::SetGlobalFloatArrayImpl)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6a8c9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                             { "SetGlobalFloatArrayImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Vector4>, int32_t)>(&::UnityEngine::Shader::SetGlobalVectorArrayImpl)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6a8cb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "SetGlobalVectorArrayImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Matrix4x4>, int32_t)>(&::UnityEngine::Shader::SetGlobalMatrixArrayImpl)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6a8cc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "SetGlobalMatrixArrayImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalFloatArrayImpl)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6a8cd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloatArrayImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalVectorArrayImpl)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6a8cec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVectorArrayImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalMatrixArrayImpl)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6a8d028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrixArrayImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatArrayCountImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalFloatArrayCountImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8d188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloatArrayCountImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorArrayCountImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalVectorArrayCountImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8d1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVectorArrayCountImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixArrayCountImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalMatrixArrayCountImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8d200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrixArrayCountImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalFloatArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::ArrayW<float_t>>)>(&::UnityEngine::Shader::ExtractGlobalFloatArrayImpl)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6a8d23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "ExtractGlobalFloatArrayImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalVectorArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::ArrayW<::UnityEngine::Vector4>>)>(&::UnityEngine::Shader::ExtractGlobalVectorArrayImpl)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6a8d3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                             { "ExtractGlobalVectorArrayImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalMatrixArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::ArrayW<::UnityEngine::Matrix4x4>>)>(&::UnityEngine::Shader::ExtractGlobalMatrixArrayImpl)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6a8d514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                             { "ExtractGlobalMatrixArrayImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Matrix4x4>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<float_t>, int32_t)>(&::UnityEngine::Shader::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a8d680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Vector4>, int32_t)>(&::UnityEngine::Shader::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a8d73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "SetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Matrix4x4>, int32_t)>(&::UnityEngine::Shader::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a8d7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "SetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<float_t>*)>(&::UnityEngine::Shader::ExtractGlobalFloatArray)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6a8d8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                             { "ExtractGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Shader::ExtractGlobalVectorArray)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6a8d9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "ExtractGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(&::UnityEngine::Shader::ExtractGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6a8db2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                         { "ExtractGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t)>(&::UnityEngine::Shader::SetGlobalInt)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6a8dc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalInt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalInt)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8dcb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, float_t)>(&::UnityEngine::Shader::SetGlobalFloat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a8dcf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t)>(&::UnityEngine::Shader::SetGlobalFloat)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a8dd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t)>(&::UnityEngine::Shader::SetGlobalInteger)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6a8dd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalInteger)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8ddd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalInteger", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Vector4)>(&::UnityEngine::Shader::SetGlobalVector)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a8de1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalVector", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::Shader::SetGlobalVector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a8de5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalVector", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Color)>(&::UnityEngine::Shader::SetGlobalColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a8de60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Color)>(&::UnityEngine::Shader::SetGlobalColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a8dea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Shader::SetGlobalMatrix)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a8dea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalMatrix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Shader::SetGlobalMatrix)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a8df08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalMatrix", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Texture*)>(&::UnityEngine::Shader::SetGlobalTexture)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6a8df64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalTexture", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Texture*)>(&::UnityEngine::Shader::SetGlobalTexture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a8df7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Shader::SetGlobalTexture)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8df80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Shader*>(),
            { "SetGlobalTexture", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement)>(&::UnityEngine::Shader::SetGlobalTexture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a8dfa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Shader*>(),
            { "SetGlobalTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Shader::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a8dfac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalBuffer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Shader::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a8dffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Shader::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a8e04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalBuffer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Shader::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a8e09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a8e0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Shader*>(),
                         { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a8e154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                            { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a8e1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Shader*>(),
                         { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a8e224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                            { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
    &::UnityEngine::Shader::SetGlobalRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a8e28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                            { "SetGlobalRayTracingAccelerationStructure", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
    &::UnityEngine::Shader::SetGlobalRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a8e2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                            { "SetGlobalRayTracingAccelerationStructure", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<float_t>*)>(&::UnityEngine::Shader::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a8e32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                             { "SetGlobalFloatArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<float_t>*)>(&::UnityEngine::Shader::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a8e3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                             { "SetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<float_t>)>(&::UnityEngine::Shader::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a8e44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalFloatArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<float_t>)>(&::UnityEngine::Shader::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a8e470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Shader::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a8e484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "SetGlobalVectorArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Shader::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a8e51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "SetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::Shader::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a8e5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalVectorArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::Shader::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a8e5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(&::UnityEngine::Shader::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a8e5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "SetGlobalMatrixArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(&::UnityEngine::Shader::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a8e674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "SetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Shader::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a8e6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalMatrixArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Shader::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a8e720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalInt)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a8e734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalInt", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalInt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a8e790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalInt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalFloat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a8e7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloat", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalFloat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8e828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloat", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalInteger)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a8e864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalInteger", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalInteger)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8e8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalInteger", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalVector)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a8e8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVector", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalVector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a8e8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVector", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a8e8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalColor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a8e904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalColor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalMatrix)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a8e908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalMatrix)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6a8e980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrix", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a8e9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalTexture", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalTexture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a8ea04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalTexture", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a8ea08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloatArray", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a8ea18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a8ea70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVectorArray", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a8ea80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a8ead8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrixArray", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a8eae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<float_t>*)>(&::UnityEngine::Shader::GetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6a8eb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                             { "GetGlobalFloatArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<float_t>*)>(&::UnityEngine::Shader::GetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a8eb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                             { "GetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Shader::GetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6a8eb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "GetGlobalVectorArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Shader::GetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a8eb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "GetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(&::UnityEngine::Shader::GetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6a8eb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "GetGlobalMatrixArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(&::UnityEngine::Shader::GetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a8eb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "GetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a8eb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyName)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6a8ebec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyName", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyNameId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyNameId)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6a8ed90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyNameId", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderPropertyType (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6a8ee88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyType", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyDescription)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6a8ef80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDescription", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderPropertyFlags (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyFlags)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6a8f124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyFlags", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyAttributes)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6a8f21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyAttributes", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDefaultIntValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyDefaultIntValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6a8f314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDefaultIntValue", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyDefaultValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6a8f40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDefaultValue", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyTextureDimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::TextureDimension (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyTextureDimension)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6a8f530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyTextureDimension", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyTextureDefaultName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyTextureDefaultName)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6a8f628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyTextureDefaultName", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindTextureStackImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Shader*, int32_t, ::by_ref<::StringW>, ::by_ref<int32_t>)>(&::UnityEngine::Shader::FindTextureStackImpl)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6a8f7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Shader*>(),
            { "FindTextureStackImpl", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.CheckPropertyIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::CheckPropertyIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a8f990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "CheckPropertyIndex", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::GetPropertyCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a8fa00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindPropertyIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Shader::*)(::StringW)>(&::UnityEngine::Shader::FindPropertyIndex)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6a8fabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "FindPropertyIndex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8fc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyNameId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyNameId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8fc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyNameId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderPropertyType (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8fcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyType", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyDescription)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8fcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDescription", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderPropertyFlags (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyFlags)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8fd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyFlags", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyAttributes)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8fd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyAttributes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDefaultFloatValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyDefaultFloatValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a8fd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDefaultFloatValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDefaultVectorValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyDefaultVectorValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a8fdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDefaultVectorValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyRangeLimits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyRangeLimits)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6a8fe88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyRangeLimits", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDefaultIntValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyDefaultIntValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a8ff24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDefaultIntValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyTextureDimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::TextureDimension (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyTextureDimension)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a8ffb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyTextureDimension", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyTextureDefaultName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyTextureDefaultName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a90044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyTextureDefaultName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindTextureStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Shader::*)(int32_t, ::by_ref<::StringW>, ::by_ref<int32_t>)>(&::UnityEngine::Shader::FindTextureStack)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a900d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                             { "FindTextureStack", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindBuiltin_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Shader::FindBuiltin_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8a2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "FindBuiltin_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_maximumLOD_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Shader::get_maximumLOD_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8a41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_maximumLOD_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.set_maximumLOD_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Shader::set_maximumLOD_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8a4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_maximumLOD_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_isSupported_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Shader::get_isSupported_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8a610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_isSupported_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_globalRenderPipeline_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Shader::get_globalRenderPipeline_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8a710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_globalRenderPipeline_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.set_globalRenderPipeline_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Shader::set_globalRenderPipeline_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8a870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_globalRenderPipeline_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_keywordSpace_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>)>(&::UnityEngine::Shader::get_keywordSpace_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8a9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "get_keywordSpace_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.EnableKeyword_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Shader::EnableKeyword_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8ab4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "EnableKeyword_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.DisableKeyword_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Shader::DisableKeyword_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8acac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "DisableKeyword_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.IsKeywordEnabled_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Shader::IsKeywordEnabled_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8ae18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "IsKeywordEnabled_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.EnableKeywordFast_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>)>(&::UnityEngine::Shader::EnableKeywordFast_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8ae94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "EnableKeywordFast_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.DisableKeywordFast_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>)>(&::UnityEngine::Shader::DisableKeywordFast_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8af10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "DisableKeywordFast_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetKeywordFast_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>, bool)>(&::UnityEngine::Shader::SetKeywordFast_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8af9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                             { "SetKeywordFast_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.IsKeywordEnabledFast_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>)>(&::UnityEngine::Shader::IsKeywordEnabledFast_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8b024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "IsKeywordEnabledFast_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_renderQueue_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Shader::get_renderQueue_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8b204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_renderQueue_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_disableBatching_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DisableBatchingType (*)(::System::IntPtr)>(&::UnityEngine::Shader::get_disableBatching_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8b2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_disableBatching_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.TagToID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Shader::TagToID_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8b450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "TagToID_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.IDToTag_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Shader::IDToTag_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8b558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                             { "IDToTag_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.PropertyToID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Shader::PropertyToID_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8b59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "PropertyToID_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetDependency_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Shader::GetDependency_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8b870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "GetDependency_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_passCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Shader::get_passCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8b934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_passCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_subshaderCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Shader::get_subshaderCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8b9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_subshaderCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPassCountInSubshader_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Shader::GetPassCountInSubshader_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8babc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPassCountInSubshader_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.Internal_FindPassTagValue_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Shader::Internal_FindPassTagValue_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a8bf00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "Internal_FindPassTagValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.Internal_FindPassTagValueInSubShader_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, int32_t, int32_t)>(&::UnityEngine::Shader::Internal_FindPassTagValueInSubShader_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a8bf54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Shader*>(),
            { "Internal_FindPassTagValueInSubShader_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.Internal_FindSubshaderTagValue_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Shader::Internal_FindSubshaderTagValue_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a8bfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "Internal_FindSubshaderTagValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::Shader::SetGlobalVectorImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8c0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalVectorImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Shader::SetGlobalMatrixImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8c170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalMatrixImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalTextureImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr)>(&::UnityEngine::Shader::SetGlobalTextureImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8c244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalTextureImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalRenderTextureImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Shader::SetGlobalRenderTextureImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a8c320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Shader*>(),
            { "SetGlobalRenderTextureImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalBufferImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr)>(&::UnityEngine::Shader::SetGlobalBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8c3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalBufferImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalGraphicsBufferImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr)>(&::UnityEngine::Shader::SetGlobalGraphicsBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8c458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalGraphicsBufferImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantBufferImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalConstantBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a8c504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                            { "SetGlobalConstantBufferImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantGraphicsBufferImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalConstantGraphicsBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a8c5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Shader*>(),
            { "SetGlobalConstantGraphicsBufferImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalRayTracingAccelerationStructureImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr)>(&::UnityEngine::Shader::SetGlobalRayTracingAccelerationStructureImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8c674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                             { "SetGlobalRayTracingAccelerationStructureImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::Shader::GetGlobalVectorImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8c788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVectorImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Shader::GetGlobalMatrixImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8c838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrixImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalTextureImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalTextureImpl_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8c99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalTextureImpl_Injected", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatArrayImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(&::UnityEngine::Shader::SetGlobalFloatArrayImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a8cab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Shader*>(),
            { "SetGlobalFloatArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorArrayImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(&::UnityEngine::Shader::SetGlobalVectorArrayImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a8cbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Shader*>(),
            { "SetGlobalVectorArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixArrayImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(&::UnityEngine::Shader::SetGlobalMatrixArrayImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a8cd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Shader*>(),
            { "SetGlobalMatrixArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatArrayImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Shader::GetGlobalFloatArrayImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8ce84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                         { "GetGlobalFloatArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorArrayImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Shader::GetGlobalVectorArrayImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8cfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                         { "GetGlobalVectorArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixArrayImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Shader::GetGlobalMatrixArrayImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8d144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                         { "GetGlobalMatrixArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalFloatArrayImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Shader::ExtractGlobalFloatArrayImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8d364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                         { "ExtractGlobalFloatArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalVectorArrayImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Shader::ExtractGlobalVectorArrayImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8d4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                         { "ExtractGlobalVectorArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalMatrixArrayImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Shader::ExtractGlobalMatrixArrayImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8d63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                         { "ExtractGlobalMatrixArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Shader::GetPropertyName_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a8ed3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Shader*>(),
            { "GetPropertyName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyNameId_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Shader::GetPropertyNameId_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8ee44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyNameId_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderPropertyType (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Shader::GetPropertyType_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8ef3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyType_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDescription_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Shader::GetPropertyDescription_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a8f0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Shader*>(),
            { "GetPropertyDescription_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyFlags_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderPropertyFlags (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Shader::GetPropertyFlags_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8f1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyAttributes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Shader::GetPropertyAttributes_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8f2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyAttributes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDefaultIntValue_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Shader::GetPropertyDefaultIntValue_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8f3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDefaultIntValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDefaultValue_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::Shader::GetPropertyDefaultValue_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a8f4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                            { "GetPropertyDefaultValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyTextureDimension_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::TextureDimension (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Shader::GetPropertyTextureDimension_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8f5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyTextureDimension_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyTextureDefaultName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Shader::GetPropertyTextureDefaultName_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a8f778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                { "GetPropertyTextureDefaultName_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindTextureStackImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<int32_t>)>(
    &::UnityEngine::Shader::FindTextureStackImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a8f934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "FindTextureStackImpl_Injected",
                                                                         {},
                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                           ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Shader::GetPropertyCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8fa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindPropertyIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Shader::FindPropertyIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a8fc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                         { "FindPropertyIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::ShaderHardwareTier UnityEngine::Shader::get_globalShaderHardwareTier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_globalShaderHardwareTier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderHardwareTier>(nullptr, ___internal_method);
}
inline void UnityEngine::Shader::set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_globalShaderHardwareTier", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderHardwareTier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Shader::Find(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "Find", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Shader::FindBuiltin(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "FindBuiltin", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::get_maximumChunksOverride() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_maximumChunksOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Shader::set_maximumChunksOverride(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_maximumChunksOverride", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Shader::get_maximumLOD() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_maximumLOD", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Shader::set_maximumLOD(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_maximumLOD", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Shader::get_globalMaximumLOD() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_globalMaximumLOD", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Shader::set_globalMaximumLOD(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_globalMaximumLOD", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Shader::get_isSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_isSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW UnityEngine::Shader::get_globalRenderPipeline() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_globalRenderPipeline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void UnityEngine::Shader::set_globalRenderPipeline(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_globalRenderPipeline", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> UnityEngine::Shader::get_enabledGlobalKeywords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_enabledGlobalKeywords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::GlobalKeyword>>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> UnityEngine::Shader::get_globalKeywords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_globalKeywords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::GlobalKeyword>>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::LocalKeywordSpace UnityEngine::Shader::get_keywordSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_keywordSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeywordSpace>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> UnityEngine::Shader::GetEnabledGlobalKeywords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetEnabledGlobalKeywords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::GlobalKeyword>>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> UnityEngine::Shader::GetAllGlobalKeywords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetAllGlobalKeywords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::GlobalKeyword>>(nullptr, ___internal_method);
}
inline void UnityEngine::Shader::EnableKeyword(::StringW keyword) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "EnableKeyword", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::DisableKeyword(::StringW keyword) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "DisableKeyword", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
inline bool UnityEngine::Shader::IsKeywordEnabled(::StringW keyword) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "IsKeywordEnabled", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "EnableKeywordFast", {}, { ::i2c::type_of<::UnityEngine::Rendering::GlobalKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "DisableKeywordFast", {}, { ::i2c::type_of<::UnityEngine::Rendering::GlobalKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetKeywordFast", {}, { ::i2c::type_of<::UnityEngine::Rendering::GlobalKeyword>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword, value);
}
inline bool UnityEngine::Shader::IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "IsKeywordEnabledFast", {}, { ::i2c::type_of<::UnityEngine::Rendering::GlobalKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::EnableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "EnableKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::DisableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "DisableKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::SetKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword, value);
}
inline bool UnityEngine::Shader::IsKeywordEnabled(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "IsKeywordEnabled", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keyword);
}
inline int32_t UnityEngine::Shader::get_renderQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_renderQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::DisableBatchingType UnityEngine::Shader::get_disableBatching() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_disableBatching", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::DisableBatchingType>(this, ___internal_method);
}
inline void UnityEngine::Shader::WarmupAllShaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "WarmupAllShaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Shader::TagToID(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "TagToID", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline ::StringW UnityEngine::Shader::IDToTag(int32_t name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "IDToTag", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::PropertyToID(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "PropertyToID", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Shader::GetDependency(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetDependency", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::get_passCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_passCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Shader::get_subshaderCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_subshaderCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Shader::GetPassCountInSubshader(int32_t subshaderIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPassCountInSubshader", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, subshaderIndex);
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Shader::FindPassTagValue(int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "FindPassTagValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderTagId>(this, ___internal_method, passIndex, tagName);
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Shader::FindPassTagValue(int32_t subshaderIndex, int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "FindPassTagValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderTagId>(this, ___internal_method, subshaderIndex, passIndex, tagName);
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Shader::FindSubshaderTagValue(int32_t subshaderIndex, ::UnityEngine::Rendering::ShaderTagId tagName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "FindSubshaderTagValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderTagId>(this, ___internal_method, subshaderIndex, tagName);
}
inline int32_t UnityEngine::Shader::Internal_FindPassTagValue(int32_t passIndex, int32_t tagName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "Internal_FindPassTagValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, passIndex, tagName);
}
inline int32_t UnityEngine::Shader::Internal_FindPassTagValueInSubShader(int32_t subShaderIndex, int32_t passIndex, int32_t tagName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                           { "Internal_FindPassTagValueInSubShader", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, subShaderIndex, passIndex, tagName);
}
inline int32_t UnityEngine::Shader::Internal_FindSubshaderTagValue(int32_t subShaderIndex, int32_t tagName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "Internal_FindSubshaderTagValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, subShaderIndex, tagName);
}
inline void UnityEngine::Shader::SetGlobalIntImpl(int32_t name, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalIntImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalFloatImpl(int32_t name, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalFloatImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalVectorImpl(int32_t name, ::UnityEngine::Vector4 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalVectorImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalMatrixImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalTextureImpl(int32_t name, ::UnityEngine::Texture* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalTextureImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Shader*>(),
          { "SetGlobalRenderTextureImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value, element);
}
inline void UnityEngine::Shader::SetGlobalBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalBufferImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalGraphicsBufferImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Shader*>(),
                       { "SetGlobalConstantBufferImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value, offset, size);
}
inline void UnityEngine::Shader::SetGlobalConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Shader*>(),
          { "SetGlobalConstantGraphicsBufferImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value, offset, size);
}
inline void UnityEngine::Shader::SetGlobalRayTracingAccelerationStructureImpl(int32_t name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                          { "SetGlobalRayTracingAccelerationStructureImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, accelerationStructure);
}
inline int32_t UnityEngine::Shader::GetGlobalIntImpl(int32_t name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalIntImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline float_t UnityEngine::Shader::GetGlobalFloatImpl(int32_t name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloatImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::Vector4 UnityEngine::Shader::GetGlobalVectorImpl(int32_t name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVectorImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Shader::GetGlobalMatrixImpl(int32_t name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrixImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Shader::GetGlobalTextureImpl(int32_t name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalTextureImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method, name);
}
inline void UnityEngine::Shader::SetGlobalFloatArrayImpl(int32_t name, ::ArrayW<float_t> values, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                           { "SetGlobalFloatArrayImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values, count);
}
inline void UnityEngine::Shader::SetGlobalVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "SetGlobalVectorArrayImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values, count);
}
inline void UnityEngine::Shader::SetGlobalMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "SetGlobalMatrixArrayImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values, count);
}
inline ::ArrayW<float_t> UnityEngine::Shader::GetGlobalFloatArrayImpl(int32_t name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloatArrayImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(nullptr, ___internal_method, name);
}
inline ::ArrayW<::UnityEngine::Vector4> UnityEngine::Shader::GetGlobalVectorArrayImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVectorArrayImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(nullptr, ___internal_method, name);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Shader::GetGlobalMatrixArrayImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrixArrayImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::GetGlobalFloatArrayCountImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloatArrayCountImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::GetGlobalVectorArrayCountImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVectorArrayCountImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::GetGlobalMatrixArrayCountImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrixArrayCountImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline void UnityEngine::Shader::ExtractGlobalFloatArrayImpl(int32_t name, ::by_ref<::ArrayW<float_t>> val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "ExtractGlobalFloatArrayImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, val);
}
inline void UnityEngine::Shader::ExtractGlobalVectorArrayImpl(int32_t name, ::by_ref<::ArrayW<::UnityEngine::Vector4>> val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                           { "ExtractGlobalVectorArrayImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, val);
}
inline void UnityEngine::Shader::ExtractGlobalMatrixArrayImpl(int32_t name, ::by_ref<::ArrayW<::UnityEngine::Matrix4x4>> val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                           { "ExtractGlobalMatrixArrayImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Matrix4x4>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, val);
}
inline void UnityEngine::Shader::SetGlobalFloatArray(int32_t name, ::ArrayW<float_t> values, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values, count);
}
inline void UnityEngine::Shader::SetGlobalVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "SetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values, count);
}
inline void UnityEngine::Shader::SetGlobalMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "SetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values, count);
}
inline void UnityEngine::Shader::ExtractGlobalFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                           { "ExtractGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::ExtractGlobalVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "ExtractGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::ExtractGlobalMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "ExtractGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalInt(::StringW name, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalInt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalInt(int32_t nameID, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalFloat(::StringW name, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalFloat(int32_t nameID, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalInteger(::StringW name, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalInteger(int32_t nameID, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalInteger", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalVector", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalVector", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalColor(::StringW name, ::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalColor(int32_t nameID, ::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalMatrix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalMatrix", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalTexture(::StringW name, ::UnityEngine::Texture* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalTexture", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalTexture(int32_t nameID, ::UnityEngine::Texture* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Shader*>(),
          { "SetGlobalTexture", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value, element);
}
inline void UnityEngine::Shader::SetGlobalTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Shader*>(),
          { "SetGlobalTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, value, element);
}
inline void UnityEngine::Shader::SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalBuffer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalBuffer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                          { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value, offset, size);
}
inline void UnityEngine::Shader::SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                          { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, value, offset, size);
}
inline void UnityEngine::Shader::SetGlobalConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                          { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value, offset, size);
}
inline void UnityEngine::Shader::SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                          { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, value, offset, size);
}
inline void UnityEngine::Shader::SetGlobalRayTracingAccelerationStructure(::StringW name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                          { "SetGlobalRayTracingAccelerationStructure", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalRayTracingAccelerationStructure(int32_t nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                          { "SetGlobalRayTracingAccelerationStructure", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                           { "SetGlobalFloatArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                           { "SetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::SetGlobalFloatArray(::StringW name, ::ArrayW<float_t> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalFloatArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::SetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "SetGlobalVectorArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "SetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::SetGlobalVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalVectorArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::SetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "SetGlobalMatrixArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "SetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::SetGlobalMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalMatrixArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, values);
}
inline int32_t UnityEngine::Shader::GetGlobalInt(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalInt", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::GetGlobalInt(int32_t nameID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalInt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, nameID);
}
inline float_t UnityEngine::Shader::GetGlobalFloat(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloat", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, name);
}
inline float_t UnityEngine::Shader::GetGlobalFloat(int32_t nameID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloat", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, nameID);
}
inline int32_t UnityEngine::Shader::GetGlobalInteger(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalInteger", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::GetGlobalInteger(int32_t nameID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalInteger", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, nameID);
}
inline ::UnityEngine::Vector4 UnityEngine::Shader::GetGlobalVector(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVector", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::Vector4 UnityEngine::Shader::GetGlobalVector(int32_t nameID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVector", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, nameID);
}
inline ::UnityEngine::Color UnityEngine::Shader::GetGlobalColor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalColor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::Color UnityEngine::Shader::GetGlobalColor(int32_t nameID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalColor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, nameID);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Shader::GetGlobalMatrix(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Shader::GetGlobalMatrix(int32_t nameID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrix", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, nameID);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Shader::GetGlobalTexture(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalTexture", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Shader::GetGlobalTexture(int32_t nameID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalTexture", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method, nameID);
}
inline ::ArrayW<float_t> UnityEngine::Shader::GetGlobalFloatArray(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloatArray", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(nullptr, ___internal_method, name);
}
inline ::ArrayW<float_t> UnityEngine::Shader::GetGlobalFloatArray(int32_t nameID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(nullptr, ___internal_method, nameID);
}
inline ::ArrayW<::UnityEngine::Vector4> UnityEngine::Shader::GetGlobalVectorArray(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVectorArray", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(nullptr, ___internal_method, name);
}
inline ::ArrayW<::UnityEngine::Vector4> UnityEngine::Shader::GetGlobalVectorArray(int32_t nameID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(nullptr, ___internal_method, nameID);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Shader::GetGlobalMatrixArray(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrixArray", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(nullptr, ___internal_method, name);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Shader::GetGlobalMatrixArray(int32_t nameID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(nullptr, ___internal_method, nameID);
}
inline void UnityEngine::Shader::GetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                           { "GetGlobalFloatArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::GetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                           { "GetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::GetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "GetGlobalVectorArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::GetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "GetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::GetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "GetGlobalMatrixArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::GetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "GetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Shader::GetPropertyName(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyName", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, shader, propertyIndex);
}
inline int32_t UnityEngine::Shader::GetPropertyNameId(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyNameId", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::UnityEngine::Rendering::ShaderPropertyType UnityEngine::Shader::GetPropertyType(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyType", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderPropertyType>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::StringW UnityEngine::Shader::GetPropertyDescription(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDescription", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::UnityEngine::Rendering::ShaderPropertyFlags UnityEngine::Shader::GetPropertyFlags(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyFlags", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderPropertyFlags>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::ArrayW<::StringW> UnityEngine::Shader::GetPropertyAttributes(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyAttributes", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, shader, propertyIndex);
}
inline int32_t UnityEngine::Shader::GetPropertyDefaultIntValue(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDefaultIntValue", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::UnityEngine::Vector4 UnityEngine::Shader::GetPropertyDefaultValue(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDefaultValue", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::UnityEngine::Rendering::TextureDimension UnityEngine::Shader::GetPropertyTextureDimension(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyTextureDimension", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::TextureDimension>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::StringW UnityEngine::Shader::GetPropertyTextureDefaultName(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyTextureDefaultName", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, shader, propertyIndex);
}
inline bool UnityEngine::Shader::FindTextureStackImpl(::UnityEngine::Shader* s, int32_t propertyIdx, ::by_ref<::StringW> stackName, ::by_ref<int32_t> layerIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Shader*>(),
          { "FindTextureStackImpl", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, propertyIdx, stackName, layerIndex);
}
inline void UnityEngine::Shader::CheckPropertyIndex(::UnityEngine::Shader* s, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "CheckPropertyIndex", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, propertyIndex);
}
inline int32_t UnityEngine::Shader::GetPropertyCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Shader::FindPropertyIndex(::StringW propertyName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "FindPropertyIndex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, propertyName);
}
inline ::StringW UnityEngine::Shader::GetPropertyName(int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, propertyIndex);
}
inline int32_t UnityEngine::Shader::GetPropertyNameId(int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyNameId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, propertyIndex);
}
inline ::UnityEngine::Rendering::ShaderPropertyType UnityEngine::Shader::GetPropertyType(int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyType", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderPropertyType>(this, ___internal_method, propertyIndex);
}
inline ::StringW UnityEngine::Shader::GetPropertyDescription(int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDescription", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, propertyIndex);
}
inline ::UnityEngine::Rendering::ShaderPropertyFlags UnityEngine::Shader::GetPropertyFlags(int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyFlags", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderPropertyFlags>(this, ___internal_method, propertyIndex);
}
inline ::ArrayW<::StringW> UnityEngine::Shader::GetPropertyAttributes(int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyAttributes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, propertyIndex);
}
inline float_t UnityEngine::Shader::GetPropertyDefaultFloatValue(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDefaultFloatValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, propertyIndex);
}
inline ::UnityEngine::Vector4 UnityEngine::Shader::GetPropertyDefaultVectorValue(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDefaultVectorValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, propertyIndex);
}
inline ::UnityEngine::Vector2 UnityEngine::Shader::GetPropertyRangeLimits(int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyRangeLimits", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, propertyIndex);
}
inline int32_t UnityEngine::Shader::GetPropertyDefaultIntValue(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDefaultIntValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, propertyIndex);
}
inline ::UnityEngine::Rendering::TextureDimension UnityEngine::Shader::GetPropertyTextureDimension(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyTextureDimension", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::TextureDimension>(this, ___internal_method, propertyIndex);
}
inline ::StringW UnityEngine::Shader::GetPropertyTextureDefaultName(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyTextureDefaultName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, propertyIndex);
}
inline bool UnityEngine::Shader::FindTextureStack(int32_t propertyIndex, ::by_ref<::StringW> stackName, ::by_ref<int32_t> layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                           { "FindTextureStack", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, propertyIndex, stackName, layerIndex);
}
inline ::System::IntPtr UnityEngine::Shader::FindBuiltin_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "FindBuiltin_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::get_maximumLOD_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_maximumLOD_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Shader::set_maximumLOD_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_maximumLOD_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Shader::get_isSupported_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_isSupported_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Shader::get_globalRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_globalRenderPipeline_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Shader::set_globalRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "set_globalRenderPipeline_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Shader::get_keywordSpace_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "get_keywordSpace_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Shader::EnableKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "EnableKeyword_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::DisableKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "DisableKeyword_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
inline bool UnityEngine::Shader::IsKeywordEnabled_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "IsKeywordEnabled_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::EnableKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "EnableKeywordFast_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::DisableKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "DisableKeywordFast_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::SetKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                           { "SetKeywordFast_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword, value);
}
inline bool UnityEngine::Shader::IsKeywordEnabledFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "IsKeywordEnabledFast_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keyword);
}
inline int32_t UnityEngine::Shader::get_renderQueue_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_renderQueue_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::DisableBatchingType UnityEngine::Shader::get_disableBatching_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_disableBatching_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::DisableBatchingType>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Shader::TagToID_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "TagToID_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline void UnityEngine::Shader::IDToTag_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                           { "IDToTag_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, ret);
}
inline int32_t UnityEngine::Shader::PropertyToID_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "PropertyToID_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline ::System::IntPtr UnityEngine::Shader::GetDependency_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "GetDependency_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, name);
}
inline int32_t UnityEngine::Shader::get_passCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_passCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Shader::get_subshaderCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "get_subshaderCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Shader::GetPassCountInSubshader_Injected(::System::IntPtr _unity_self, int32_t subshaderIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPassCountInSubshader_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, subshaderIndex);
}
inline int32_t UnityEngine::Shader::Internal_FindPassTagValue_Injected(::System::IntPtr _unity_self, int32_t passIndex, int32_t tagName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "Internal_FindPassTagValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, passIndex, tagName);
}
inline int32_t UnityEngine::Shader::Internal_FindPassTagValueInSubShader_Injected(::System::IntPtr _unity_self, int32_t subShaderIndex, int32_t passIndex, int32_t tagName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Shader*>(),
          { "Internal_FindPassTagValueInSubShader_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, subShaderIndex, passIndex, tagName);
}
inline int32_t UnityEngine::Shader::Internal_FindSubshaderTagValue_Injected(::System::IntPtr _unity_self, int32_t subShaderIndex, int32_t tagName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "Internal_FindSubshaderTagValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, subShaderIndex, tagName);
}
inline void UnityEngine::Shader::SetGlobalVectorImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Vector4> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalVectorImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalMatrixImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Matrix4x4> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalMatrixImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalTextureImpl_Injected(int32_t name, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalTextureImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalRenderTextureImpl_Injected(int32_t name, ::System::IntPtr value, ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Shader*>(),
          { "SetGlobalRenderTextureImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value, element);
}
inline void UnityEngine::Shader::SetGlobalBufferImpl_Injected(int32_t name, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalBufferImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalGraphicsBufferImpl_Injected(int32_t name, ::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "SetGlobalGraphicsBufferImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalConstantBufferImpl_Injected(int32_t name, ::System::IntPtr value, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                          { "SetGlobalConstantBufferImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value, offset, size);
}
inline void UnityEngine::Shader::SetGlobalConstantGraphicsBufferImpl_Injected(int32_t name, ::System::IntPtr value, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Shader*>(),
          { "SetGlobalConstantGraphicsBufferImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value, offset, size);
}
inline void UnityEngine::Shader::SetGlobalRayTracingAccelerationStructureImpl_Injected(int32_t name, ::System::IntPtr accelerationStructure) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                                           { "SetGlobalRayTracingAccelerationStructureImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, accelerationStructure);
}
inline void UnityEngine::Shader::GetGlobalVectorImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Vector4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalVectorImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, ret);
}
inline void UnityEngine::Shader::GetGlobalMatrixImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalMatrixImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, ret);
}
inline ::System::IntPtr UnityEngine::Shader::GetGlobalTextureImpl_Injected(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetGlobalTextureImpl_Injected", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, name);
}
inline void UnityEngine::Shader::SetGlobalFloatArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Shader*>(),
                       { "SetGlobalFloatArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values, count);
}
inline void UnityEngine::Shader::SetGlobalVectorArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Shader*>(),
          { "SetGlobalVectorArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values, count);
}
inline void UnityEngine::Shader::SetGlobalMatrixArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Shader*>(),
          { "SetGlobalMatrixArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, values, count);
}
inline void UnityEngine::Shader::GetGlobalFloatArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "GetGlobalFloatArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, ret);
}
inline void UnityEngine::Shader::GetGlobalVectorArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "GetGlobalVectorArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, ret);
}
inline void UnityEngine::Shader::GetGlobalMatrixArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "GetGlobalMatrixArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, ret);
}
inline void UnityEngine::Shader::ExtractGlobalFloatArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                       { "ExtractGlobalFloatArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, val);
}
inline void UnityEngine::Shader::ExtractGlobalVectorArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                       { "ExtractGlobalVectorArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, val);
}
inline void UnityEngine::Shader::ExtractGlobalMatrixArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                       { "ExtractGlobalMatrixArrayImpl_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, val);
}
inline void UnityEngine::Shader::GetPropertyName_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Shader*>(),
          { "GetPropertyName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shader, propertyIndex, ret);
}
inline int32_t UnityEngine::Shader::GetPropertyNameId_Injected(::System::IntPtr shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyNameId_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::UnityEngine::Rendering::ShaderPropertyType UnityEngine::Shader::GetPropertyType_Injected(::System::IntPtr shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyType_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderPropertyType>(nullptr, ___internal_method, shader, propertyIndex);
}
inline void UnityEngine::Shader::GetPropertyDescription_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Shader*>(),
          { "GetPropertyDescription_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shader, propertyIndex, ret);
}
inline ::UnityEngine::Rendering::ShaderPropertyFlags UnityEngine::Shader::GetPropertyFlags_Injected(::System::IntPtr shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderPropertyFlags>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::ArrayW<::StringW> UnityEngine::Shader::GetPropertyAttributes_Injected(::System::IntPtr shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyAttributes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, shader, propertyIndex);
}
inline int32_t UnityEngine::Shader::GetPropertyDefaultIntValue_Injected(::System::IntPtr shader, int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyDefaultIntValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, shader, propertyIndex);
}
inline void UnityEngine::Shader::GetPropertyDefaultValue_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Vector4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                          { "GetPropertyDefaultValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shader, propertyIndex, ret);
}
inline ::UnityEngine::Rendering::TextureDimension UnityEngine::Shader::GetPropertyTextureDimension_Injected(::System::IntPtr shader, int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyTextureDimension_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::TextureDimension>(nullptr, ___internal_method, shader, propertyIndex);
}
inline void UnityEngine::Shader::GetPropertyTextureDefaultName_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "GetPropertyTextureDefaultName_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shader, propertyIndex, ret);
}
inline bool UnityEngine::Shader::FindTextureStackImpl_Injected(::System::IntPtr s, int32_t propertyIdx, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> stackName, ::by_ref<int32_t> layerIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "FindTextureStackImpl_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, propertyIdx, stackName, layerIndex);
}
inline int32_t UnityEngine::Shader::GetPropertyCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(), { "GetPropertyCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Shader::FindPropertyIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> propertyName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Shader*>(),
                                              { "FindPropertyIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, propertyName);
}
inline ::UnityEngine::Shader* UnityEngine::Shader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Shader*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Shader::Shader() {}
