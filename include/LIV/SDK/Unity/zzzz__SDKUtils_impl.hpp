#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKUtils_def.hpp"
#include "LIV/SDK/Unity/zzzz__FEATURES_def.hpp"
#include "LIV/SDK/Unity/zzzz__RENDERING_PIPELINE_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPose_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKRender_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTrackedSpace_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_COLOR_SPACE_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_DEVICE_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTextureReadWrite_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__RenderingPath_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.CreateClipPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, int32_t, bool, float_t)>(&::LIV::SDK::Unity::SDKUtils::CreateClipPlane)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x576e8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
            { "CreateClipPlane", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.GetReadWriteFromColorSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureReadWrite (*)(::LIV::SDK::Unity::TEXTURE_COLOR_SPACE)>(&::LIV::SDK::Unity::SDKUtils::GetReadWriteFromColorSpace)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5772844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "GetReadWriteFromColorSpace", {}, { ::i2c::type_of<::LIV::SDK::Unity::TEXTURE_COLOR_SPACE>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.get_GetDefaultColorSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::TEXTURE_COLOR_SPACE (*)()>(&::LIV::SDK::Unity::SDKUtils::get_GetDefaultColorSpace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x577285c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "get_GetDefaultColorSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.GetColorSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::TEXTURE_COLOR_SPACE (*)(::UnityEngine::RenderTexture*)>(&::LIV::SDK::Unity::SDKUtils::GetColorSpace)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x576ff2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "GetColorSpace", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.GetRenderingPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::RENDERING_PIPELINE (*)(::UnityEngine::RenderingPath)>(&::LIV::SDK::Unity::SDKUtils::GetRenderingPipeline)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x577289c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "GetRenderingPipeline", {}, { ::i2c::type_of<::UnityEngine::RenderingPath>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.GetDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::TEXTURE_DEVICE (*)()>(&::LIV::SDK::Unity::SDKUtils::GetDevice)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x576fe94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "GetDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.ContainsFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, uint64_t)>(&::LIV::SDK::Unity::SDKUtils::ContainsFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x576aeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "ContainsFlag", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.SetFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint64_t, bool)>(&::LIV::SDK::Unity::SDKUtils::SetFlag)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5769f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "SetFlag", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.GetCameraPositionAndRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LIV::SDK::Unity::SDKPose, ::UnityEngine::Matrix4x4, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(
    &::LIV::SDK::Unity::SDKUtils::GetCameraPositionAndRotation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x57728bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "GetCameraPositionAndRotation",
                                                                               {},
                                                                               { ::i2c::type_of<::LIV::SDK::Unity::SDKPose>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.CleanCameraBehaviours
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::ArrayW<::StringW>)>(&::LIV::SDK::Unity::SDKUtils::CleanCameraBehaviours)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x576e588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "CleanCameraBehaviours", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.SetCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Transform*, ::LIV::SDK::Unity::SDKInputFrame, ::UnityEngine::Matrix4x4, int32_t)>(
    &::LIV::SDK::Unity::SDKUtils::SetCamera)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x576cd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
                                                             { "SetCamera",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                 ::i2c::type_of<::LIV::SDK::Unity::SDKInputFrame>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.RotateQuaternionByMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Quaternion)>(&::LIV::SDK::Unity::SDKUtils::RotateQuaternionByMatrix)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x576f534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
                                                             { "RotateQuaternionByMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.GetTrackedSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKTrackedSpace (*)(::UnityEngine::Transform*)>(&::LIV::SDK::Unity::SDKUtils::GetTrackedSpace)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5772934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "GetTrackedSpace", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.CreateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::RenderTexture*>, int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat)>(
    &::LIV::SDK::Unity::SDKUtils::CreateTexture)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x576fb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "CreateTexture",
                                                                               {},
                                                                               { ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.DestroyTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderTexture*>)>(&::LIV::SDK::Unity::SDKUtils::DestroyTexture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x576efa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "DestroyTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.ApplyUserSpaceTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LIV::SDK::Unity::SDKRender*)>(&::LIV::SDK::Unity::SDKUtils::ApplyUserSpaceTransform)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x576d020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "ApplyUserSpaceTransform", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKRender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.CreateBridgeOutputFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LIV::SDK::Unity::SDKRender*)>(&::LIV::SDK::Unity::SDKUtils::CreateBridgeOutputFrame)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x576ddc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "CreateBridgeOutputFrame", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKRender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.FeatureEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LIV::SDK::Unity::FEATURES, ::LIV::SDK::Unity::FEATURES)>(&::LIV::SDK::Unity::SDKUtils::FeatureEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x576c034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
                                                             { "FeatureEnabled", {}, { ::i2c::type_of<::LIV::SDK::Unity::FEATURES>(), ::i2c::type_of<::LIV::SDK::Unity::FEATURES>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.DisableStandardAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::by_ref<::ArrayW<::UnityEngine::MonoBehaviour*>>, ::by_ref<::ArrayW<bool>>)>(
    &::LIV::SDK::Unity::SDKUtils::DisableStandardAssets)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x576e1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
                            { "DisableStandardAssets",
                              {},
                              { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::MonoBehaviour*>>>(), ::i2c::type_of<::by_ref<::ArrayW<bool>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.RestoreStandardAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<::UnityEngine::MonoBehaviour*>>, ::by_ref<::ArrayW<bool>>)>(&::LIV::SDK::Unity::SDKUtils::RestoreStandardAssets)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x576e46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
                                                { "RestoreStandardAssets", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::MonoBehaviour*>>>(), ::i2c::type_of<::by_ref<::ArrayW<bool>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.ForceForwardRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Mesh*, ::UnityEngine::Material*)>(&::LIV::SDK::Unity::SDKUtils::ForceForwardRendering)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5772b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
                            { "ForceForwardRendering", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
inline void LIV::SDK::Unity::SDKUtils::CreateClipPlane(::UnityEngine::Mesh* mesh, int32_t resX, int32_t resY, bool useQuads, float_t skirtLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
          { "CreateClipPlane", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, resX, resY, useQuads, skirtLength);
}
inline ::UnityEngine::RenderTextureReadWrite LIV::SDK::Unity::SDKUtils::GetReadWriteFromColorSpace(::LIV::SDK::Unity::TEXTURE_COLOR_SPACE colorSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "GetReadWriteFromColorSpace", {}, { ::i2c::type_of<::LIV::SDK::Unity::TEXTURE_COLOR_SPACE>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureReadWrite>(nullptr, ___internal_method, colorSpace);
}
inline ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE LIV::SDK::Unity::SDKUtils::get_GetDefaultColorSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "get_GetDefaultColorSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::TEXTURE_COLOR_SPACE>(nullptr, ___internal_method);
}
inline ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE LIV::SDK::Unity::SDKUtils::GetColorSpace(::UnityEngine::RenderTexture* renderTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "GetColorSpace", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::TEXTURE_COLOR_SPACE>(nullptr, ___internal_method, renderTexture);
}
inline ::LIV::SDK::Unity::RENDERING_PIPELINE LIV::SDK::Unity::SDKUtils::GetRenderingPipeline(::UnityEngine::RenderingPath renderingPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "GetRenderingPipeline", {}, { ::i2c::type_of<::UnityEngine::RenderingPath>() } })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::RENDERING_PIPELINE>(nullptr, ___internal_method, renderingPath);
}
inline ::LIV::SDK::Unity::TEXTURE_DEVICE LIV::SDK::Unity::SDKUtils::GetDevice() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "GetDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::TEXTURE_DEVICE>(nullptr, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKUtils::ContainsFlag(uint64_t flags, uint64_t flag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "ContainsFlag", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags, flag);
}
inline uint64_t LIV::SDK::Unity::SDKUtils::SetFlag(uint64_t flags, uint64_t flag, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "SetFlag", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, flags, flag, enabled);
}
inline void LIV::SDK::Unity::SDKUtils::GetCameraPositionAndRotation(::LIV::SDK::Unity::SDKPose pose, ::UnityEngine::Matrix4x4 originLocalToWorldMatrix, ::by_ref<::UnityEngine::Vector3> position,
                                                                    ::by_ref<::UnityEngine::Quaternion> rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "GetCameraPositionAndRotation",
                                                                             {},
                                                                             { ::i2c::type_of<::LIV::SDK::Unity::SDKPose>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pose, originLocalToWorldMatrix, position, rotation);
}
inline void LIV::SDK::Unity::SDKUtils::CleanCameraBehaviours(::UnityEngine::Camera* camera, ::ArrayW<::StringW> excludeBehaviours) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "CleanCameraBehaviours", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, excludeBehaviours);
}
inline void LIV::SDK::Unity::SDKUtils::SetCamera(::UnityEngine::Camera* camera, ::UnityEngine::Transform* cameraTransform, ::LIV::SDK::Unity::SDKInputFrame inputFrame,
                                                 ::UnityEngine::Matrix4x4 originLocalToWorldMatrix, int32_t layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
                                                           { "SetCamera",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                               ::i2c::type_of<::LIV::SDK::Unity::SDKInputFrame>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, cameraTransform, inputFrame, originLocalToWorldMatrix, layerMask);
}
inline ::UnityEngine::Quaternion LIV::SDK::Unity::SDKUtils::RotateQuaternionByMatrix(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
                                                           { "RotateQuaternionByMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, matrix, rotation);
}
inline ::LIV::SDK::Unity::SDKTrackedSpace LIV::SDK::Unity::SDKUtils::GetTrackedSpace(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "GetTrackedSpace", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKTrackedSpace>(nullptr, ___internal_method, transform);
}
template <typename T> inline bool LIV::SDK::Unity::SDKUtils::DestroyObject(::by_ref<T> reference) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "DestroyObject", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reference);
}
template <typename T> inline bool LIV::SDK::Unity::SDKUtils::DisposeObject(::by_ref<T> reference) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "DisposeObject", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reference);
}
inline bool LIV::SDK::Unity::SDKUtils::CreateTexture(::by_ref<::UnityEngine::RenderTexture*> renderTexture, int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "CreateTexture",
                                                                             {},
                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderTexture, width, height, depth, format);
}
inline void LIV::SDK::Unity::SDKUtils::DestroyTexture(::by_ref<::UnityEngine::RenderTexture*> _renderTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "DestroyTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _renderTexture);
}
inline void LIV::SDK::Unity::SDKUtils::ApplyUserSpaceTransform(::LIV::SDK::Unity::SDKRender* render) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "ApplyUserSpaceTransform", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKRender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, render);
}
inline void LIV::SDK::Unity::SDKUtils::CreateBridgeOutputFrame(::LIV::SDK::Unity::SDKRender* render) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(), { "CreateBridgeOutputFrame", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKRender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, render);
}
inline bool LIV::SDK::Unity::SDKUtils::FeatureEnabled(::LIV::SDK::Unity::FEATURES features, ::LIV::SDK::Unity::FEATURES feature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
                                                           { "FeatureEnabled", {}, { ::i2c::type_of<::LIV::SDK::Unity::FEATURES>(), ::i2c::type_of<::LIV::SDK::Unity::FEATURES>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, features, feature);
}
inline void LIV::SDK::Unity::SDKUtils::DisableStandardAssets(::UnityEngine::Camera* cameraInstance, ::by_ref<::ArrayW<::UnityEngine::MonoBehaviour*>> behaviours,
                                                             ::by_ref<::ArrayW<bool>> wasBehaviourEnabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
                          { "DisableStandardAssets",
                            {},
                            { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::MonoBehaviour*>>>(), ::i2c::type_of<::by_ref<::ArrayW<bool>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cameraInstance, behaviours, wasBehaviourEnabled);
}
inline void LIV::SDK::Unity::SDKUtils::RestoreStandardAssets(::by_ref<::ArrayW<::UnityEngine::MonoBehaviour*>> behaviours, ::by_ref<::ArrayW<bool>> wasBehaviourEnabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
                                              { "RestoreStandardAssets", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::MonoBehaviour*>>>(), ::i2c::type_of<::by_ref<::ArrayW<bool>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviours, wasBehaviourEnabled);
}
inline void LIV::SDK::Unity::SDKUtils::ForceForwardRendering(::UnityEngine::Camera* cameraInstance, ::UnityEngine::Mesh* clipPlaneMesh, ::UnityEngine::Material* forceForwardRenderingMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKUtils*>(),
                          { "ForceForwardRendering", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cameraInstance, clipPlaneMesh, forceForwardRenderingMaterial);
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKUtils::SDKUtils() {}
