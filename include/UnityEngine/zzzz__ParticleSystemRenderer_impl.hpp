#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemRenderer.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystemRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemBakeMeshOptions_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemBakeTextureOptions_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemMeshDistribution_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemRenderMode_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemRenderSpace_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemRenderer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemSortMode_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemVertexStream_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemVertexStreams_def.hpp"
#include "UnityEngine/zzzz__SpriteMaskInteraction_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indices", ty: "::UnityW<::UnityEngine::Texture2D>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemRenderer_BakeTextureOutput::ParticleSystemRenderer_BakeTextureOutput(::UnityW<::UnityEngine::Texture2D> vertices,
                                                                                                            ::UnityW<::UnityEngine::Texture2D> indices) noexcept {
  this->vertices = vertices;
  this->indices = indices;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemRenderer_BakeTextureOutput::ParticleSystemRenderer_BakeTextureOutput() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.EnableVertexStreams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemVertexStreams)>(
    &::UnityEngine::ParticleSystemRenderer::EnableVertexStreams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b62150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "EnableVertexStreams", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemVertexStreams>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.DisableVertexStreams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemVertexStreams)>(
    &::UnityEngine::ParticleSystemRenderer::DisableVertexStreams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b62d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "DisableVertexStreams", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemVertexStreams>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.AreVertexStreamsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemVertexStreams)>(
    &::UnityEngine::ParticleSystemRenderer::AreVertexStreamsEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b62d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                           { "AreVertexStreamsEnabled", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemVertexStreams>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetEnabledVertexStreams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemVertexStreams (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemVertexStreams)>(
    &::UnityEngine::ParticleSystemRenderer::GetEnabledVertexStreams)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b62fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                           { "GetEnabledVertexStreams", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemVertexStreams>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.Internal_SetVertexStreams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemVertexStreams, bool)>(
    &::UnityEngine::ParticleSystemRenderer::Internal_SetVertexStreams)> {
  constexpr static std::size_t size = 0xbdc;
  constexpr static std::size_t addrs = 0x6b62158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "Internal_SetVertexStreams", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemVertexStreams>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.Internal_GetEnabledVertexStreams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemVertexStreams (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemVertexStreams)>(
    &::UnityEngine::ParticleSystemRenderer::Internal_GetEnabledVertexStreams)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6b62d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "Internal_GetEnabledVertexStreams", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemVertexStreams>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, bool)>(&::UnityEngine::ParticleSystemRenderer::BakeMesh)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b63424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "BakeMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, ::UnityEngine::Camera*, bool)>(
    &::UnityEngine::ParticleSystemRenderer::BakeMesh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b63464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "BakeMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, bool)>(&::UnityEngine::ParticleSystemRenderer::BakeTrailsMesh)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b635d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "BakeTrailsMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, ::UnityEngine::Camera*, bool)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTrailsMesh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b63610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "BakeTrailsMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_alignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemRenderSpace (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_alignment)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b6377c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_alignment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_alignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemRenderSpace)>(
    &::UnityEngine::ParticleSystemRenderer::set_alignment)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b63838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_alignment", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemRenderSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_renderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemRenderMode (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_renderMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b6390c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_renderMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_renderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemRenderMode)>(
    &::UnityEngine::ParticleSystemRenderer::set_renderMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b639c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_renderMode", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemRenderMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_meshDistribution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemMeshDistribution (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_meshDistribution)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b63a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_meshDistribution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_meshDistribution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemMeshDistribution)>(
    &::UnityEngine::ParticleSystemRenderer::set_meshDistribution)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b63b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                           { "set_meshDistribution", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemMeshDistribution>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_sortMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemSortMode (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_sortMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b63c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_sortMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_sortMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemSortMode)>(&::UnityEngine::ParticleSystemRenderer::set_sortMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b63ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_sortMode", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemSortMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_lengthScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_lengthScale)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b63dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_lengthScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_lengthScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(&::UnityEngine::ParticleSystemRenderer::set_lengthScale)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b63e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_lengthScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_velocityScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_velocityScale)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b63f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_velocityScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_velocityScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(&::UnityEngine::ParticleSystemRenderer::set_velocityScale)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b64010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_velocityScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_cameraVelocityScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_cameraVelocityScale)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b640ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_cameraVelocityScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_cameraVelocityScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(&::UnityEngine::ParticleSystemRenderer::set_cameraVelocityScale)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b641a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_cameraVelocityScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_normalDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_normalDirection)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b64284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_normalDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_normalDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(&::UnityEngine::ParticleSystemRenderer::set_normalDirection)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b64340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_normalDirection", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_shadowBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_shadowBias)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b6441c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_shadowBias", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_shadowBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(&::UnityEngine::ParticleSystemRenderer::set_shadowBias)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b644d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_shadowBias", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_sortingFudge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_sortingFudge)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b645b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_sortingFudge", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_sortingFudge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(&::UnityEngine::ParticleSystemRenderer::set_sortingFudge)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b64670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_sortingFudge", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_minParticleSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_minParticleSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b6474c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_minParticleSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_minParticleSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(&::UnityEngine::ParticleSystemRenderer::set_minParticleSize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b64808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_minParticleSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_maxParticleSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_maxParticleSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b648e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_maxParticleSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_maxParticleSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(&::UnityEngine::ParticleSystemRenderer::set_maxParticleSize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b649a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_maxParticleSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_pivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_pivot)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b64a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_pivot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_pivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Vector3)>(&::UnityEngine::ParticleSystemRenderer::set_pivot)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b64b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_pivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_flip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_flip)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b64c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_flip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_flip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Vector3)>(&::UnityEngine::ParticleSystemRenderer::set_flip)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b64d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_flip", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_maskInteraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpriteMaskInteraction (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_maskInteraction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b64dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_maskInteraction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_maskInteraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::SpriteMaskInteraction)>(
    &::UnityEngine::ParticleSystemRenderer::set_maskInteraction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b64eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_maskInteraction", {}, { ::i2c::type_of<::UnityEngine::SpriteMaskInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_trailMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_trailMaterial)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6b64f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_trailMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_trailMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Material*)>(&::UnityEngine::ParticleSystemRenderer::set_trailMaterial)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b65118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_trailMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_oldTrailMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Material*)>(&::UnityEngine::ParticleSystemRenderer::set_oldTrailMaterial)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b6521c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_oldTrailMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_enableGPUInstancing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_enableGPUInstancing)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b65320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_enableGPUInstancing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_enableGPUInstancing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(bool)>(&::UnityEngine::ParticleSystemRenderer::set_enableGPUInstancing)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b653dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_enableGPUInstancing", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_allowRoll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_allowRoll)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b654b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_allowRoll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_allowRoll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(bool)>(&::UnityEngine::ParticleSystemRenderer::set_allowRoll)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b6556c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_allowRoll", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_freeformStretching
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_freeformStretching)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b65640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_freeformStretching", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_freeformStretching
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(bool)>(&::UnityEngine::ParticleSystemRenderer::set_freeformStretching)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b656fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_freeformStretching", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_rotateWithStretchDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_rotateWithStretchDirection)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b657d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_rotateWithStretchDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_rotateWithStretchDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(bool)>(&::UnityEngine::ParticleSystemRenderer::set_rotateWithStretchDirection)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b6588c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_rotateWithStretchDirection", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_mesh)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6b65960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_mesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*)>(&::UnityEngine::ParticleSystemRenderer::set_mesh)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b65aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_mesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(::by_ref<::ArrayW<::UnityEngine::Mesh*>>)>(
    &::UnityEngine::ParticleSystemRenderer::GetMeshes)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b65bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "GetMeshes", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Mesh*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::ArrayW<::UnityEngine::Mesh*>, int32_t)>(&::UnityEngine::ParticleSystemRenderer::SetMeshes)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b65cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                           { "SetMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::ArrayW<::UnityEngine::Mesh*>)>(&::UnityEngine::ParticleSystemRenderer::SetMeshes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b65e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "SetMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetMeshWeightings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(::by_ref<::ArrayW<float_t>>)>(&::UnityEngine::ParticleSystemRenderer::GetMeshWeightings)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6b65e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "GetMeshWeightings", {}, { ::i2c::type_of<::by_ref<::ArrayW<float_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetMeshWeightings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::ArrayW<float_t>, int32_t)>(&::UnityEngine::ParticleSystemRenderer::SetMeshWeightings)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6b65ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "SetMeshWeightings", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetMeshWeightings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::ArrayW<float_t>)>(&::UnityEngine::ParticleSystemRenderer::SetMeshWeightings)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b6616c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "SetMeshWeightings", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_meshCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_meshCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b66180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_meshCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, ::UnityEngine::ParticleSystemBakeMeshOptions)>(
    &::UnityEngine::ParticleSystemRenderer::BakeMesh)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b6623c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "BakeMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeMeshOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeMeshOptions)>(
    &::UnityEngine::ParticleSystemRenderer::BakeMesh)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6b63478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                            { "BakeMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeMeshOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, ::UnityEngine::ParticleSystemBakeMeshOptions)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTrailsMesh)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b662d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "BakeTrailsMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeMeshOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeMeshOptions)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTrailsMesh)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6b63624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
            { "BakeTrailsMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeMeshOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(::by_ref<::UnityEngine::Texture2D*>, ::UnityEngine::ParticleSystemBakeTextureOptions)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTexture)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b66364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                { "BakeTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(
    ::by_ref<::UnityEngine::Texture2D*>, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions)>(&::UnityEngine::ParticleSystemRenderer::BakeTexture)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b6639c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "BakeTexture",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                                                        ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTextureNoIndicesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::ParticleSystemRenderer::*)(
    ::UnityEngine::Texture2D*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions, ::by_ref<int32_t>)>(&::UnityEngine::ParticleSystemRenderer::BakeTextureNoIndicesInternal)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6b66448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "BakeTextureNoIndicesInternal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                 ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(
    ::by_ref<::UnityEngine::Texture2D*>, ::by_ref<::UnityEngine::Texture2D*>, ::UnityEngine::ParticleSystemBakeTextureOptions)>(&::UnityEngine::ParticleSystemRenderer::BakeTexture)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6b666b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "BakeTexture",
                                                                                         {},
                                                                                         { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(),
                                                                                           ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(::by_ref<::UnityEngine::Texture2D*>, ::by_ref<::UnityEngine::Texture2D*>,
                                                                                                          ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b66714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "BakeTexture",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(),
                                                                 ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTextureInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput (::UnityEngine::ParticleSystemRenderer::*)(
    ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions, ::by_ref<int32_t>)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTextureInternal)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6b66754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "BakeTextureInternal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                 ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(
    ::by_ref<::UnityEngine::Texture2D*>, ::by_ref<::UnityEngine::Texture2D*>, ::UnityEngine::ParticleSystemBakeTextureOptions)>(&::UnityEngine::ParticleSystemRenderer::BakeTrailsTexture)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6b6694c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "BakeTrailsTexture",
                                                                                         {},
                                                                                         { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(),
                                                                                           ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(::by_ref<::UnityEngine::Texture2D*>, ::by_ref<::UnityEngine::Texture2D*>,
                                                                                                          ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTrailsTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b669b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "BakeTrailsTexture",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(),
                                                                 ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsTextureInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput (::UnityEngine::ParticleSystemRenderer::*)(
    ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions, ::by_ref<int32_t>)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTrailsTextureInternal)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6b669f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "BakeTrailsTextureInternal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                 ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_activeVertexStreamsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_activeVertexStreamsCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b62fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_activeVertexStreamsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetActiveVertexStreams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*)>(
    &::UnityEngine::ParticleSystemRenderer::SetActiveVertexStreams)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6b63224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                { "SetActiveVertexStreams", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetActiveVertexStreams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*)>(
    &::UnityEngine::ParticleSystemRenderer::GetActiveVertexStreams)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6b63024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                { "GetActiveVertexStreams", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_activeTrailVertexStreamsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_activeTrailVertexStreamsCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b66cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_activeTrailVertexStreamsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetActiveTrailVertexStreams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*)>(
    &::UnityEngine::ParticleSystemRenderer::SetActiveTrailVertexStreams)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6b66d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                { "SetActiveTrailVertexStreams", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetActiveTrailVertexStreams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*)>(
    &::UnityEngine::ParticleSystemRenderer::GetActiveTrailVertexStreams)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6b66fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                { "GetActiveTrailVertexStreams", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::_ctor)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x6b671f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_alignment_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemRenderSpace (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_alignment_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b637fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_alignment_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_alignment_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ParticleSystemRenderSpace)>(&::UnityEngine::ParticleSystemRenderer::set_alignment_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b638c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "set_alignment_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemRenderSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_renderMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemRenderMode (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_renderMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b6398c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_renderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_renderMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ParticleSystemRenderMode)>(&::UnityEngine::ParticleSystemRenderer::set_renderMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b63a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "set_renderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemRenderMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_meshDistribution_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemMeshDistribution (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_meshDistribution_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b63b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_meshDistribution_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_meshDistribution_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ParticleSystemMeshDistribution)>(
    &::UnityEngine::ParticleSystemRenderer::set_meshDistribution_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b63be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                { "set_meshDistribution_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemMeshDistribution>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_sortMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemSortMode (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_sortMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b63cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_sortMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_sortMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ParticleSystemSortMode)>(&::UnityEngine::ParticleSystemRenderer::set_sortMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b63d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "set_sortMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemSortMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_lengthScale_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_lengthScale_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b63e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_lengthScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_lengthScale_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ParticleSystemRenderer::set_lengthScale_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b63f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                           { "set_lengthScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_velocityScale_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_velocityScale_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b63fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_velocityScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_velocityScale_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ParticleSystemRenderer::set_velocityScale_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b640a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                           { "set_velocityScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_cameraVelocityScale_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_cameraVelocityScale_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b6416c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_cameraVelocityScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_cameraVelocityScale_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ParticleSystemRenderer::set_cameraVelocityScale_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b64238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_cameraVelocityScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_normalDirection_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_normalDirection_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b64304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_normalDirection_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_normalDirection_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ParticleSystemRenderer::set_normalDirection_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b643d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                           { "set_normalDirection_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_shadowBias_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_shadowBias_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b6449c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_shadowBias_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_shadowBias_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ParticleSystemRenderer::set_shadowBias_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b64568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                           { "set_shadowBias_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_sortingFudge_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_sortingFudge_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b64634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_sortingFudge_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_sortingFudge_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ParticleSystemRenderer::set_sortingFudge_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b64700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                           { "set_sortingFudge_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_minParticleSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_minParticleSize_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b647cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_minParticleSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_minParticleSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ParticleSystemRenderer::set_minParticleSize_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b64898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                           { "set_minParticleSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_maxParticleSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_maxParticleSize_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b64964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_maxParticleSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_maxParticleSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ParticleSystemRenderer::set_maxParticleSize_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b64a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                           { "set_maxParticleSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_pivot_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ParticleSystemRenderer::get_pivot_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b64b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "get_pivot_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_pivot_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ParticleSystemRenderer::set_pivot_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b64bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "set_pivot_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_flip_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ParticleSystemRenderer::get_flip_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b64cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "get_flip_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_flip_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ParticleSystemRenderer::set_flip_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b64db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "set_flip_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_maskInteraction_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpriteMaskInteraction (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_maskInteraction_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b64e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_maskInteraction_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_maskInteraction_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::SpriteMaskInteraction)>(&::UnityEngine::ParticleSystemRenderer::set_maskInteraction_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b64f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "set_maskInteraction_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::SpriteMaskInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_trailMaterial_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_trailMaterial_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b650dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_trailMaterial_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_trailMaterial_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::set_trailMaterial_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b651d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "set_trailMaterial_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_oldTrailMaterial_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::set_oldTrailMaterial_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b652dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "set_oldTrailMaterial_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_enableGPUInstancing_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_enableGPUInstancing_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b653a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_enableGPUInstancing_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_enableGPUInstancing_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystemRenderer::set_enableGPUInstancing_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b6546c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_enableGPUInstancing_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_allowRoll_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_allowRoll_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b65530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_allowRoll_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_allowRoll_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystemRenderer::set_allowRoll_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b655fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_allowRoll_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_freeformStretching_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_freeformStretching_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b656c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_freeformStretching_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_freeformStretching_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystemRenderer::set_freeformStretching_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b6578c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                           { "set_freeformStretching_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_rotateWithStretchDirection_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_rotateWithStretchDirection_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b65850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_rotateWithStretchDirection_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_rotateWithStretchDirection_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystemRenderer::set_rotateWithStretchDirection_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b6591c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "set_rotateWithStretchDirection_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_mesh_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_mesh_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b65ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_mesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_mesh_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::set_mesh_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                           { "set_mesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetMeshes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<::UnityEngine::Mesh*>>)>(&::UnityEngine::ParticleSystemRenderer::GetMeshes_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "GetMeshes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Mesh*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetMeshes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::UnityEngine::Mesh*>, int32_t)>(&::UnityEngine::ParticleSystemRenderer::SetMeshes_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b65db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                { "SetMeshes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetMeshWeightings_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::ParticleSystemRenderer::GetMeshWeightings_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                         { "GetMeshWeightings_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetMeshWeightings_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(
    &::UnityEngine::ParticleSystemRenderer::SetMeshWeightings_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b66118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
            { "SetMeshWeightings_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_meshCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_meshCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b66200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_meshCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeMesh_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::UnityEngine::ParticleSystemBakeMeshOptions)>(
    &::UnityEngine::ParticleSystemRenderer::BakeMesh_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b66274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "BakeMesh_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                           ::i2c::type_of<::UnityEngine::ParticleSystemBakeMeshOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsMesh_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::UnityEngine::ParticleSystemBakeMeshOptions)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTrailsMesh_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b66308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "BakeTrailsMesh_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                           ::i2c::type_of<::UnityEngine::ParticleSystemBakeMeshOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTextureNoIndicesInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::UnityEngine::ParticleSystemBakeTextureOptions, ::by_ref<int32_t>)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTextureNoIndicesInternal_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b66644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "BakeTextureNoIndicesInternal_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTextureInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::UnityEngine::ParticleSystemBakeTextureOptions,
                                                                ::by_ref<int32_t>, ::by_ref<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput>)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTextureInternal_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b668c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "BakeTextureInternal_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsTextureInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::UnityEngine::ParticleSystemBakeTextureOptions,
                                                                ::by_ref<int32_t>, ::by_ref<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput>)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTrailsTextureInternal_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b66b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                             { "BakeTrailsTextureInternal_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_activeVertexStreamsCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_activeVertexStreamsCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b66be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_activeVertexStreamsCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetActiveVertexStreams_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ParticleSystemRenderer::SetActiveVertexStreams_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b66c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                            { "SetActiveVertexStreams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetActiveVertexStreams_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ParticleSystemRenderer::GetActiveVertexStreams_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b66c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                            { "GetActiveVertexStreams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_activeTrailVertexStreamsCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystemRenderer::get_activeTrailVertexStreamsCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b66d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_activeTrailVertexStreamsCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetActiveTrailVertexStreams_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ParticleSystemRenderer::SetActiveTrailVertexStreams_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b66f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                            { "SetActiveTrailVertexStreams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetActiveTrailVertexStreams_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ParticleSystemRenderer::GetActiveTrailVertexStreams_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b671ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                            { "GetActiveTrailVertexStreams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystemRenderer::EnableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "EnableVertexStreams", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemVertexStreams>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streams);
}
inline void UnityEngine::ParticleSystemRenderer::DisableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "DisableVertexStreams", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemVertexStreams>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streams);
}
inline bool UnityEngine::ParticleSystemRenderer::AreVertexStreamsEnabled(::UnityEngine::ParticleSystemVertexStreams streams) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "AreVertexStreamsEnabled", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemVertexStreams>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, streams);
}
inline ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemRenderer::GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "GetEnabledVertexStreams", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemVertexStreams>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemVertexStreams>(this, ___internal_method, streams);
}
inline void UnityEngine::ParticleSystemRenderer::Internal_SetVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams, bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "Internal_SetVertexStreams", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemVertexStreams>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streams, enabled);
}
inline ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemRenderer::Internal_GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "Internal_GetEnabledVertexStreams", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemVertexStreams>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemVertexStreams>(this, ___internal_method, streams);
}
inline void UnityEngine::ParticleSystemRenderer::BakeMesh(::UnityEngine::Mesh* mesh, bool useTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "BakeMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, useTransform);
}
inline void UnityEngine::ParticleSystemRenderer::BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "BakeMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, camera, useTransform);
}
inline void UnityEngine::ParticleSystemRenderer::BakeTrailsMesh(::UnityEngine::Mesh* mesh, bool useTransform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "BakeTrailsMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, useTransform);
}
inline void UnityEngine::ParticleSystemRenderer::BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "BakeTrailsMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, camera, useTransform);
}
inline ::UnityEngine::ParticleSystemRenderSpace UnityEngine::ParticleSystemRenderer::get_alignment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_alignment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemRenderSpace>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_alignment(::UnityEngine::ParticleSystemRenderSpace value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_alignment", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemRenderSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemRenderMode UnityEngine::ParticleSystemRenderer::get_renderMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_renderMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemRenderMode>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_renderMode(::UnityEngine::ParticleSystemRenderMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_renderMode", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemRenderMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemMeshDistribution UnityEngine::ParticleSystemRenderer::get_meshDistribution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_meshDistribution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemMeshDistribution>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_meshDistribution(::UnityEngine::ParticleSystemMeshDistribution value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "set_meshDistribution", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemMeshDistribution>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemSortMode UnityEngine::ParticleSystemRenderer::get_sortMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_sortMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemSortMode>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_sortMode(::UnityEngine::ParticleSystemSortMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_sortMode", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemSortMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_lengthScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_lengthScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_lengthScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_lengthScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_velocityScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_velocityScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_velocityScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_velocityScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_cameraVelocityScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_cameraVelocityScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_cameraVelocityScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_cameraVelocityScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_normalDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_normalDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_normalDirection(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_normalDirection", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_shadowBias() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_shadowBias", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_shadowBias(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_shadowBias", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_sortingFudge() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_sortingFudge", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_sortingFudge(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_sortingFudge", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_minParticleSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_minParticleSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_minParticleSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_minParticleSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_maxParticleSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_maxParticleSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_maxParticleSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_maxParticleSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ParticleSystemRenderer::get_pivot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_pivot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_pivot(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_pivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ParticleSystemRenderer::get_flip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_flip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_flip(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_flip", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SpriteMaskInteraction UnityEngine::ParticleSystemRenderer::get_maskInteraction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_maskInteraction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpriteMaskInteraction>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_maskInteraction(::UnityEngine::SpriteMaskInteraction value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_maskInteraction", {}, { ::i2c::type_of<::UnityEngine::SpriteMaskInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::ParticleSystemRenderer::get_trailMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_trailMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_trailMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_trailMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystemRenderer::set_oldTrailMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_oldTrailMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystemRenderer::get_enableGPUInstancing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_enableGPUInstancing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_enableGPUInstancing(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_enableGPUInstancing", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystemRenderer::get_allowRoll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_allowRoll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_allowRoll(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_allowRoll", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystemRenderer::get_freeformStretching() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_freeformStretching", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_freeformStretching(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_freeformStretching", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystemRenderer::get_rotateWithStretchDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_rotateWithStretchDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_rotateWithStretchDirection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_rotateWithStretchDirection", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::ParticleSystemRenderer::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_mesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_mesh(::UnityEngine::Mesh* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_mesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ParticleSystemRenderer::GetMeshes(::by_ref<::ArrayW<::UnityEngine::Mesh*>> meshes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "GetMeshes", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Mesh*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, meshes);
}
inline void UnityEngine::ParticleSystemRenderer::SetMeshes(::ArrayW<::UnityEngine::Mesh*> meshes, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "SetMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshes, size);
}
inline void UnityEngine::ParticleSystemRenderer::SetMeshes(::ArrayW<::UnityEngine::Mesh*> meshes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "SetMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshes);
}
inline int32_t UnityEngine::ParticleSystemRenderer::GetMeshWeightings(::by_ref<::ArrayW<float_t>> weightings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "GetMeshWeightings", {}, { ::i2c::type_of<::by_ref<::ArrayW<float_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, weightings);
}
inline void UnityEngine::ParticleSystemRenderer::SetMeshWeightings(::ArrayW<float_t> weightings, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "SetMeshWeightings", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weightings, size);
}
inline void UnityEngine::ParticleSystemRenderer::SetMeshWeightings(::ArrayW<float_t> weightings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "SetMeshWeightings", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weightings);
}
inline int32_t UnityEngine::ParticleSystemRenderer::get_meshCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_meshCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::ParticleSystemBakeMeshOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "BakeMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeMeshOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, options);
}
inline void UnityEngine::ParticleSystemRenderer::BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeMeshOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                          { "BakeMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeMeshOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, camera, options);
}
inline void UnityEngine::ParticleSystemRenderer::BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::ParticleSystemBakeMeshOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "BakeTrailsMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeMeshOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, options);
}
inline void UnityEngine::ParticleSystemRenderer::BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeMeshOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
          { "BakeTrailsMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeMeshOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, camera, options);
}
inline int32_t UnityEngine::ParticleSystemRenderer::BakeTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::UnityEngine::ParticleSystemBakeTextureOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                              { "BakeTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, verticesTexture, options);
}
inline int32_t UnityEngine::ParticleSystemRenderer::BakeTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::UnityEngine::Camera* camera,
                                                                ::UnityEngine::ParticleSystemBakeTextureOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                          { "BakeTexture",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, verticesTexture, camera, options);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ParticleSystemRenderer::BakeTextureNoIndicesInternal(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Camera* camera,
                                                                                                            ::UnityEngine::ParticleSystemBakeTextureOptions options, ::by_ref<int32_t> indexCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "BakeTextureNoIndicesInternal",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                                         ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, verticesTexture, camera, options, indexCount);
}
inline int32_t UnityEngine::ParticleSystemRenderer::BakeTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::by_ref<::UnityEngine::Texture2D*> indicesTexture,
                                                                ::UnityEngine::ParticleSystemBakeTextureOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "BakeTexture",
                                                                                       {},
                                                                                       { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(),
                                                                                         ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, verticesTexture, indicesTexture, options);
}
inline int32_t UnityEngine::ParticleSystemRenderer::BakeTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::by_ref<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::Camera* camera,
                                                                ::UnityEngine::ParticleSystemBakeTextureOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "BakeTexture",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(),
                                                               ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, verticesTexture, indicesTexture, camera, options);
}
inline ::UnityEngine::ParticleSystemRenderer_BakeTextureOutput UnityEngine::ParticleSystemRenderer::BakeTextureInternal(::UnityEngine::Texture2D* verticesTexture,
                                                                                                                        ::UnityEngine::Texture2D* indicesTexture, ::UnityEngine::Camera* camera,
                                                                                                                        ::UnityEngine::ParticleSystemBakeTextureOptions options,
                                                                                                                        ::by_ref<int32_t> indexCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "BakeTextureInternal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                               ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput>(this, ___internal_method, verticesTexture, indicesTexture, camera, options, indexCount);
}
inline int32_t UnityEngine::ParticleSystemRenderer::BakeTrailsTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::by_ref<::UnityEngine::Texture2D*> indicesTexture,
                                                                      ::UnityEngine::ParticleSystemBakeTextureOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "BakeTrailsTexture",
                                                                                       {},
                                                                                       { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(),
                                                                                         ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, verticesTexture, indicesTexture, options);
}
inline int32_t UnityEngine::ParticleSystemRenderer::BakeTrailsTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::by_ref<::UnityEngine::Texture2D*> indicesTexture,
                                                                      ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeTextureOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "BakeTrailsTexture",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(),
                                                               ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, verticesTexture, indicesTexture, camera, options);
}
inline ::UnityEngine::ParticleSystemRenderer_BakeTextureOutput UnityEngine::ParticleSystemRenderer::BakeTrailsTextureInternal(::UnityEngine::Texture2D* verticesTexture,
                                                                                                                              ::UnityEngine::Texture2D* indicesTexture, ::UnityEngine::Camera* camera,
                                                                                                                              ::UnityEngine::ParticleSystemBakeTextureOptions options,
                                                                                                                              ::by_ref<int32_t> indexCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "BakeTrailsTextureInternal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                               ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput>(this, ___internal_method, verticesTexture, indicesTexture, camera, options, indexCount);
}
inline int32_t UnityEngine::ParticleSystemRenderer::get_activeVertexStreamsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_activeVertexStreamsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::SetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                              { "SetActiveVertexStreams", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streams);
}
inline void UnityEngine::ParticleSystemRenderer::GetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                              { "GetActiveVertexStreams", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streams);
}
inline int32_t UnityEngine::ParticleSystemRenderer::get_activeTrailVertexStreamsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_activeTrailVertexStreamsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::SetActiveTrailVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                              { "SetActiveTrailVertexStreams", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streams);
}
inline void UnityEngine::ParticleSystemRenderer::GetActiveTrailVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                              { "GetActiveTrailVertexStreams", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streams);
}
inline void UnityEngine::ParticleSystemRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystemRenderSpace UnityEngine::ParticleSystemRenderer::get_alignment_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_alignment_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemRenderSpace>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_alignment_Injected(::System::IntPtr _unity_self, ::UnityEngine::ParticleSystemRenderSpace value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "set_alignment_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemRenderSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ParticleSystemRenderMode UnityEngine::ParticleSystemRenderer::get_renderMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_renderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemRenderMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_renderMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::ParticleSystemRenderMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "set_renderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemRenderMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ParticleSystemMeshDistribution UnityEngine::ParticleSystemRenderer::get_meshDistribution_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_meshDistribution_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemMeshDistribution>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_meshDistribution_Injected(::System::IntPtr _unity_self, ::UnityEngine::ParticleSystemMeshDistribution value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                              { "set_meshDistribution_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemMeshDistribution>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ParticleSystemSortMode UnityEngine::ParticleSystemRenderer::get_sortMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_sortMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemSortMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_sortMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::ParticleSystemSortMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "set_sortMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemSortMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_lengthScale_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_lengthScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_lengthScale_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "set_lengthScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_velocityScale_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_velocityScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_velocityScale_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "set_velocityScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_cameraVelocityScale_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_cameraVelocityScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_cameraVelocityScale_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_cameraVelocityScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_normalDirection_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_normalDirection_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_normalDirection_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "set_normalDirection_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_shadowBias_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_shadowBias_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_shadowBias_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "set_shadowBias_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_sortingFudge_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_sortingFudge_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_sortingFudge_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "set_sortingFudge_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_minParticleSize_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_minParticleSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_minParticleSize_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "set_minParticleSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_maxParticleSize_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_maxParticleSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_maxParticleSize_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "set_maxParticleSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ParticleSystemRenderer::get_pivot_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "get_pivot_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ParticleSystemRenderer::set_pivot_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "set_pivot_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ParticleSystemRenderer::get_flip_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "get_flip_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ParticleSystemRenderer::set_flip_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "set_flip_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::SpriteMaskInteraction UnityEngine::ParticleSystemRenderer::get_maskInteraction_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_maskInteraction_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpriteMaskInteraction>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_maskInteraction_Injected(::System::IntPtr _unity_self, ::UnityEngine::SpriteMaskInteraction value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "set_maskInteraction_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::SpriteMaskInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::ParticleSystemRenderer::get_trailMaterial_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_trailMaterial_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_trailMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "set_trailMaterial_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ParticleSystemRenderer::set_oldTrailMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "set_oldTrailMaterial_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ParticleSystemRenderer::get_enableGPUInstancing_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_enableGPUInstancing_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_enableGPUInstancing_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "set_enableGPUInstancing_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ParticleSystemRenderer::get_allowRoll_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_allowRoll_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_allowRoll_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "set_allowRoll_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ParticleSystemRenderer::get_freeformStretching_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_freeformStretching_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_freeformStretching_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "set_freeformStretching_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ParticleSystemRenderer::get_rotateWithStretchDirection_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_rotateWithStretchDirection_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_rotateWithStretchDirection_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "set_rotateWithStretchDirection_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::ParticleSystemRenderer::get_mesh_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_mesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::set_mesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "set_mesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::ParticleSystemRenderer::GetMeshes_Injected(::System::IntPtr _unity_self, ::by_ref<::ArrayW<::UnityEngine::Mesh*>> meshes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "GetMeshes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Mesh*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, meshes);
}
inline void UnityEngine::ParticleSystemRenderer::SetMeshes_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Mesh*> meshes, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                              { "SetMeshes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, meshes, size);
}
inline int32_t UnityEngine::ParticleSystemRenderer::GetMeshWeightings_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> weightings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                       { "GetMeshWeightings_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, weightings);
}
inline void UnityEngine::ParticleSystemRenderer::SetMeshWeightings_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> weightings, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
          { "SetMeshWeightings_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, weightings, size);
}
inline int32_t UnityEngine::ParticleSystemRenderer::get_meshCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_meshCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::BakeMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, ::System::IntPtr camera, ::UnityEngine::ParticleSystemBakeMeshOptions options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "BakeMesh_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                             ::i2c::type_of<::UnityEngine::ParticleSystemBakeMeshOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, mesh, camera, options);
}
inline void UnityEngine::ParticleSystemRenderer::BakeTrailsMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, ::System::IntPtr camera,
                                                                         ::UnityEngine::ParticleSystemBakeMeshOptions options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                                                         { "BakeTrailsMesh_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                             ::i2c::type_of<::UnityEngine::ParticleSystemBakeMeshOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, mesh, camera, options);
}
inline ::System::IntPtr UnityEngine::ParticleSystemRenderer::BakeTextureNoIndicesInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr verticesTexture, ::System::IntPtr camera,
                                                                                                   ::UnityEngine::ParticleSystemBakeTextureOptions options, ::by_ref<int32_t> indexCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "BakeTextureNoIndicesInternal_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                         ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, verticesTexture, camera, options, indexCount);
}
inline void UnityEngine::ParticleSystemRenderer::BakeTextureInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr verticesTexture, ::System::IntPtr indicesTexture, ::System::IntPtr camera,
                                                                              ::UnityEngine::ParticleSystemBakeTextureOptions options, ::by_ref<int32_t> indexCount,
                                                                              ::by_ref<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "BakeTextureInternal_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, verticesTexture, indicesTexture, camera, options, indexCount, ret);
}
inline void UnityEngine::ParticleSystemRenderer::BakeTrailsTextureInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr verticesTexture, ::System::IntPtr indicesTexture,
                                                                                    ::System::IntPtr camera, ::UnityEngine::ParticleSystemBakeTextureOptions options, ::by_ref<int32_t> indexCount,
                                                                                    ::by_ref<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                                           { "BakeTrailsTextureInternal_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemBakeTextureOptions>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, verticesTexture, indicesTexture, camera, options, indexCount, ret);
}
inline int32_t UnityEngine::ParticleSystemRenderer::get_activeVertexStreamsCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_activeVertexStreamsCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::SetActiveVertexStreams_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> streams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                       { "SetActiveVertexStreams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, streams);
}
inline void UnityEngine::ParticleSystemRenderer::GetActiveVertexStreams_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> streams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                                       { "GetActiveVertexStreams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, streams);
}
inline int32_t UnityEngine::ParticleSystemRenderer::get_activeTrailVertexStreamsCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(), { "get_activeTrailVertexStreamsCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystemRenderer::SetActiveTrailVertexStreams_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> streams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                          { "SetActiveTrailVertexStreams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, streams);
}
inline void UnityEngine::ParticleSystemRenderer::GetActiveTrailVertexStreams_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> streams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                          { "GetActiveTrailVertexStreams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, streams);
}
inline ::UnityEngine::ParticleSystemRenderer* UnityEngine::ParticleSystemRenderer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ParticleSystemRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemRenderer::ParticleSystemRenderer() {}
