#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKRender.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPose_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKRender_def.hpp"
#include "LIV/SDK/Unity/zzzz__LIV_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_ID_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.GetClipPlaneMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::LIV::SDK::Unity::SDKRender::*)(bool, bool, ::UnityEngine::Rendering::ColorWriteMask)>(
    &::LIV::SDK::Unity::SDKRender::GetClipPlaneMaterial)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x576be5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(),
                                                { "GetClipPlaneMaterial", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::ColorWriteMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.GetGroundClipPlaneMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::LIV::SDK::Unity::SDKRender::*)(bool, ::UnityEngine::Rendering::ColorWriteMask)>(
    &::LIV::SDK::Unity::SDKRender::GetGroundClipPlaneMaterial)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x576bf64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(),
                                                             { "GetGroundClipPlaneMaterial", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::ColorWriteMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_useDeferredRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_useDeferredRendering)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x576c000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_useDeferredRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_interlacedRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_interlacedRendering)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x576c028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_interlacedRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_canRenderBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_canRenderBackground)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x576c040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_canRenderBackground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_canRenderForeground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_canRenderForeground)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x576c0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_canRenderForeground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_canRenderOptimized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_canRenderOptimized)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x576c198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_canRenderOptimized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(::LIV::SDK::Unity::LIV*)>(&::LIV::SDK::Unity::SDKRender::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x576aae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { ".ctor", {}, { ::i2c::type_of<::LIV::SDK::Unity::LIV*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.UpdateCameraSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::UpdateCameraSettings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x576ca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "UpdateCameraSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::Render)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x576b0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "Render", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.RenderBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::RenderBackground)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x576d3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "RenderBackground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.RenderForeground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::RenderForeground)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x576d4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "RenderForeground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.RenderOptimized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::RenderOptimized)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x576d944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "RenderOptimized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateAssets)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x576c2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "CreateAssets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.DestroyAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::DestroyAssets)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x576eda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "DestroyAssets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x576ac0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_liv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::LIV::SDK::Unity::LIV> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_liv)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576f038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_liv", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_outputFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKOutputFrame (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_outputFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x576f040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_outputFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_inputFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKInputFrame (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_inputFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x576f050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_inputFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_resolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKResolution (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576f060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_resolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_cameraInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_cameraInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576f068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_cameraInstance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_cameraReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_cameraReference)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x576e4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_cameraReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_hmdCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_hmdCamera)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x576f070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_hmdCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_stage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_stage)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x576f088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_stage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_stageTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_stageTransform)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x576f09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_stageTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_stageLocalToWorldMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_stageLocalToWorldMatrix)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x576f0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_stageLocalToWorldMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_localToWorldMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_localToWorldMatrix)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x576cc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_localToWorldMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_spectatorLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_spectatorLayerMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x576cd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_spectatorLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_disableStandardAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_disableStandardAssets)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x576e1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_disableStandardAssets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_canSetPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_canSetPose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x576f1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_canSetPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SetPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, bool)>(
    &::LIV::SDK::Unity::SDKRender::SetPose)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x576f1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(),
                            { "SetPose", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SetGroundPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(float_t, ::UnityEngine::Vector3, bool)>(&::LIV::SDK::Unity::SDKRender::SetGroundPlane)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x576f6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(),
                                                             { "SetGroundPlane", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SetGroundPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(::UnityEngine::Plane, bool)>(&::LIV::SDK::Unity::SDKRender::SetGroundPlane)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x576f8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "SetGroundPlane", {}, { ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SetGroundPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(::UnityEngine::Transform*, bool)>(&::LIV::SDK::Unity::SDKRender::SetGroundPlane)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x576f8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "SetGroundPlane", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.ReleaseBridgePoseControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::ReleaseBridgePoseControl)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x576ef3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "ReleaseBridgePoseControl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.UpdateBridgeResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::UpdateBridgeResolution)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x576cfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "UpdateBridgeResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.UpdateBridgeInputFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::UpdateBridgeInputFrame)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x576caf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "UpdateBridgeInputFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePreRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePreRender)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x576d384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "InvokePreRender", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.IvokePostRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::IvokePostRender)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x576dd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "IvokePostRender", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePreRenderBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePreRenderBackground)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x576dfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "InvokePreRenderBackground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePostRenderBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePostRenderBackground)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x576e0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "InvokePostRenderBackground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePreRenderForeground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePreRenderForeground)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x576e3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "InvokePreRenderForeground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePostRenderForeground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePostRenderForeground)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x576e3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "InvokePostRenderForeground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateBackgroundTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateBackgroundTexture)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x576faa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "CreateBackgroundTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateForegroundTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateForegroundTexture)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x576fcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "CreateForegroundTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateOptimizedTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateOptimizedTexture)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x576fd5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "CreateOptimizedTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateComplexClipPlaneTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateComplexClipPlaneTexture)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x576fdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "CreateComplexClipPlaneTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.UpdateTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::UpdateTextures)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x576d114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "UpdateTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SendTextureToBridge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(::UnityEngine::RenderTexture*, ::LIV::SDK::Unity::TEXTURE_ID)>(
    &::LIV::SDK::Unity::SDKRender::SendTextureToBridge)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x576dfe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(),
                                                             { "SendTextureToBridge", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::LIV::SDK::Unity::TEXTURE_ID>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clipPlaneCommandBuffer = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__combineAlphaCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combineAlphaCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__combineAlphaCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combineAlphaCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__combineAlphaCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____combineAlphaCommandBuffer = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__captureTextureCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captureTextureCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__captureTextureCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captureTextureCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__captureTextureCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____captureTextureCommandBuffer = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__applyTextureCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyTextureCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__applyTextureCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyTextureCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__applyTextureCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____applyTextureCommandBuffer = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderingCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimizedRenderingCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderingCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimizedRenderingCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__optimizedRenderingCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optimizedRenderingCommandBuffer = value;
}
constexpr ::UnityEngine::Rendering::CameraEvent& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCameraEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneCameraEvent;
}
constexpr ::UnityEngine::Rendering::CameraEvent const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCameraEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneCameraEvent;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneCameraEvent(::UnityEngine::Rendering::CameraEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clipPlaneCameraEvent = value;
}
constexpr ::UnityEngine::Rendering::CameraEvent& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderingCameraEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimizedRenderingCameraEvent;
}
constexpr ::UnityEngine::Rendering::CameraEvent const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderingCameraEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimizedRenderingCameraEvent;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__optimizedRenderingCameraEvent(::UnityEngine::Rendering::CameraEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optimizedRenderingCameraEvent = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneMesh;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clipPlaneMesh = value;
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneSimpleMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneSimpleMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneSimpleMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneSimpleMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneSimpleMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clipPlaneSimpleMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneSimpleDebugMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneSimpleDebugMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneSimpleDebugMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneSimpleDebugMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneSimpleDebugMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clipPlaneSimpleDebugMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneComplexMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneComplexMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneComplexMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneComplexMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneComplexMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clipPlaneComplexMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneComplexDebugMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneComplexDebugMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneComplexDebugMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneComplexDebugMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneComplexDebugMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clipPlaneComplexDebugMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__writeOpaqueToAlphaMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeOpaqueToAlphaMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__writeOpaqueToAlphaMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeOpaqueToAlphaMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__writeOpaqueToAlphaMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writeOpaqueToAlphaMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__combineAlphaMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combineAlphaMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__combineAlphaMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combineAlphaMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__combineAlphaMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____combineAlphaMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__writeMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__writeMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__writeMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writeMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__forceForwardRenderingMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceForwardRenderingMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__forceForwardRenderingMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceForwardRenderingMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__forceForwardRenderingMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forceForwardRenderingMaterial = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__backgroundRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__backgroundRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundRenderTexture;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__backgroundRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundRenderTexture = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__foregroundRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____foregroundRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__foregroundRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____foregroundRenderTexture;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__foregroundRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____foregroundRenderTexture = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimizedRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimizedRenderTexture;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__optimizedRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optimizedRenderTexture = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__complexClipPlaneRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____complexClipPlaneRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__complexClipPlaneRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____complexClipPlaneRenderTexture;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__complexClipPlaneRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____complexClipPlaneRenderTexture = value;
}
constexpr ::UnityW<::LIV::SDK::Unity::LIV>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__liv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____liv;
}
constexpr ::UnityW<::LIV::SDK::Unity::LIV> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__liv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____liv;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__liv(::UnityW<::LIV::SDK::Unity::LIV> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____liv = value;
}
constexpr ::LIV::SDK::Unity::SDKOutputFrame& LIV::SDK::Unity::SDKRender::__cordl_internal_get__outputFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputFrame;
}
constexpr ::LIV::SDK::Unity::SDKOutputFrame const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__outputFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputFrame;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__outputFrame(::LIV::SDK::Unity::SDKOutputFrame value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outputFrame = value;
}
constexpr ::LIV::SDK::Unity::SDKInputFrame& LIV::SDK::Unity::SDKRender::__cordl_internal_get__inputFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFrame;
}
constexpr ::LIV::SDK::Unity::SDKInputFrame const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__inputFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFrame;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__inputFrame(::LIV::SDK::Unity::SDKInputFrame value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inputFrame = value;
}
constexpr ::LIV::SDK::Unity::SDKResolution& LIV::SDK::Unity::SDKRender::__cordl_internal_get__resolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolution;
}
constexpr ::LIV::SDK::Unity::SDKResolution const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__resolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolution;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__resolution(::LIV::SDK::Unity::SDKResolution value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resolution = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__cameraInstance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraInstance;
}
constexpr ::UnityW<::UnityEngine::Camera> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__cameraInstance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraInstance;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__cameraInstance(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraInstance = value;
}
constexpr ::LIV::SDK::Unity::SDKPose& LIV::SDK::Unity::SDKRender::__cordl_internal_get__requestedPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestedPose;
}
constexpr ::LIV::SDK::Unity::SDKPose const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__requestedPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestedPose;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__requestedPose(::LIV::SDK::Unity::SDKPose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestedPose = value;
}
constexpr int32_t& LIV::SDK::Unity::SDKRender::__cordl_internal_get__requestedPoseFrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestedPoseFrameIndex;
}
constexpr int32_t const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__requestedPoseFrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestedPoseFrameIndex;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__requestedPoseFrameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestedPoseFrameIndex = value;
}
inline ::UnityW<::UnityEngine::Material> LIV::SDK::Unity::SDKRender::GetClipPlaneMaterial(bool debugClipPlane, bool complexClipPlane, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(),
                                              { "GetClipPlaneMaterial", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::ColorWriteMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, debugClipPlane, complexClipPlane, colorWriteMask);
}
inline ::UnityW<::UnityEngine::Material> LIV::SDK::Unity::SDKRender::GetGroundClipPlaneMaterial(bool debugClipPlane, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(),
                                                           { "GetGroundClipPlaneMaterial", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::ColorWriteMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, debugClipPlane, colorWriteMask);
}
inline bool LIV::SDK::Unity::SDKRender::get_useDeferredRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_useDeferredRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_interlacedRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_interlacedRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_canRenderBackground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_canRenderBackground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_canRenderForeground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_canRenderForeground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_canRenderOptimized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_canRenderOptimized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::_ctor(::LIV::SDK::Unity::LIV* liv) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { ".ctor", {}, { ::i2c::type_of<::LIV::SDK::Unity::LIV*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, liv);
}
inline void LIV::SDK::Unity::SDKRender::UpdateCameraSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "UpdateCameraSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::Render() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "Render", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::RenderBackground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "RenderBackground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::RenderForeground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "RenderForeground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::RenderOptimized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "RenderOptimized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateAssets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "CreateAssets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::DestroyAssets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "DestroyAssets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::LIV::SDK::Unity::LIV> LIV::SDK::Unity::SDKRender::get_liv() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_liv", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::LIV::SDK::Unity::LIV>>(this, ___internal_method);
}
inline ::LIV::SDK::Unity::SDKOutputFrame LIV::SDK::Unity::SDKRender::get_outputFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_outputFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKOutputFrame>(this, ___internal_method);
}
inline ::LIV::SDK::Unity::SDKInputFrame LIV::SDK::Unity::SDKRender::get_inputFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_inputFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKInputFrame>(this, ___internal_method);
}
inline ::LIV::SDK::Unity::SDKResolution LIV::SDK::Unity::SDKRender::get_resolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_resolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKResolution>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> LIV::SDK::Unity::SDKRender::get_cameraInstance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_cameraInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> LIV::SDK::Unity::SDKRender::get_cameraReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_cameraReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> LIV::SDK::Unity::SDKRender::get_hmdCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_hmdCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> LIV::SDK::Unity::SDKRender::get_stage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_stage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> LIV::SDK::Unity::SDKRender::get_stageTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_stageTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 LIV::SDK::Unity::SDKRender::get_stageLocalToWorldMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_stageLocalToWorldMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 LIV::SDK::Unity::SDKRender::get_localToWorldMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_localToWorldMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline int32_t LIV::SDK::Unity::SDKRender::get_spectatorLayerMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_spectatorLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_disableStandardAssets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_disableStandardAssets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_canSetPose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "get_canSetPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::SetPose(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t verticalFieldOfView, bool useLocalSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(),
                          { "SetPose", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, rotation, verticalFieldOfView, useLocalSpace);
}
inline void LIV::SDK::Unity::SDKRender::SetGroundPlane(float_t distance, ::UnityEngine::Vector3 normal, bool useLocalSpace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(),
                                                           { "SetGroundPlane", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance, normal, useLocalSpace);
}
inline void LIV::SDK::Unity::SDKRender::SetGroundPlane(::UnityEngine::Plane plane, bool useLocalSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "SetGroundPlane", {}, { ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, plane, useLocalSpace);
}
inline void LIV::SDK::Unity::SDKRender::SetGroundPlane(::UnityEngine::Transform* transform, bool useLocalSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "SetGroundPlane", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform, useLocalSpace);
}
inline void LIV::SDK::Unity::SDKRender::ReleaseBridgePoseControl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "ReleaseBridgePoseControl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::UpdateBridgeResolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "UpdateBridgeResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::UpdateBridgeInputFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "UpdateBridgeInputFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePreRender() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "InvokePreRender", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::IvokePostRender() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "IvokePostRender", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePreRenderBackground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "InvokePreRenderBackground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePostRenderBackground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "InvokePostRenderBackground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePreRenderForeground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "InvokePreRenderForeground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePostRenderForeground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "InvokePostRenderForeground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateBackgroundTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "CreateBackgroundTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateForegroundTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "CreateForegroundTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateOptimizedTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "CreateOptimizedTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateComplexClipPlaneTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "CreateComplexClipPlaneTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::UpdateTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(), { "UpdateTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::SendTextureToBridge(::UnityEngine::RenderTexture* texture, ::LIV::SDK::Unity::TEXTURE_ID id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKRender*>(),
                                                           { "SendTextureToBridge", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::LIV::SDK::Unity::TEXTURE_ID>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture, id);
}
inline ::LIV::SDK::Unity::SDKRender* LIV::SDK::Unity::SDKRender::New_ctor(::LIV::SDK::Unity::LIV* liv) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LIV::SDK::Unity::SDKRender*>(liv));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr LIV::SDK::Unity::SDKRender::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* LIV::SDK::Unity::SDKRender::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKRender::SDKRender() {}
