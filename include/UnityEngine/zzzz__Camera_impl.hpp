#pragma once
// IWYU pragma private; include "UnityEngine/Camera.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ComputeQueueType_def.hpp"
#include "UnityEngine/Rendering/zzzz__OpaqueSortMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__CameraClearFlags_def.hpp"
#include "UnityEngine/zzzz__CameraType_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__RenderingPath_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__StereoTargetEyeMask_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__TransparencySortMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Camera_ProjectionMatrixMode::Camera_ProjectionMatrixMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera_ProjectionMatrixMode::Camera_ProjectionMatrixMode() {}
constexpr ::UnityEngine::Camera_ProjectionMatrixMode UnityEngine::Camera_ProjectionMatrixMode::Explicit{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Camera_ProjectionMatrixMode UnityEngine::Camera_ProjectionMatrixMode::Implicit{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Camera_ProjectionMatrixMode UnityEngine::Camera_ProjectionMatrixMode::PhysicalPropertiesBased{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Camera_GateFitMode::Camera_GateFitMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera_GateFitMode::Camera_GateFitMode() {}
constexpr ::UnityEngine::Camera_GateFitMode UnityEngine::Camera_GateFitMode::Vertical{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Camera_GateFitMode UnityEngine::Camera_GateFitMode::Horizontal{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Camera_GateFitMode UnityEngine::Camera_GateFitMode::Fill{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Camera_GateFitMode UnityEngine::Camera_GateFitMode::Overscan{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Camera_GateFitMode UnityEngine::Camera_GateFitMode::None{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::UnityEngine::Camera_GateFitParameters.get_mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Camera_GateFitMode (::UnityEngine::Camera_GateFitParameters::*)()>(&::UnityEngine::Camera_GateFitParameters::get_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6e080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera_GateFitParameters>(), { "get_mode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera_GateFitParameters.get_aspect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera_GateFitParameters::*)()>(&::UnityEngine::Camera_GateFitParameters::get_aspect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6e088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera_GateFitParameters>(), { "get_aspect", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Camera_GateFitMode UnityEngine::Camera_GateFitParameters::get_mode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera_GateFitParameters>(), { "get_mode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera_GateFitMode>(*this, ___internal_method);
}
inline float_t UnityEngine::Camera_GateFitParameters::get_aspect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera_GateFitParameters>(), { "get_aspect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_mode_k__BackingField", ty: "::UnityEngine::Camera_GateFitMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "_aspect_k__BackingField", ty:
// "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Camera_GateFitParameters::Camera_GateFitParameters(::UnityEngine::Camera_GateFitMode _mode_k__BackingField, float_t _aspect_k__BackingField) noexcept {
  this->_mode_k__BackingField = _mode_k__BackingField;
  this->_aspect_k__BackingField = _aspect_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera_GateFitParameters::Camera_GateFitParameters() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Camera_StereoscopicEye::Camera_StereoscopicEye(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera_StereoscopicEye::Camera_StereoscopicEye() {}
constexpr ::UnityEngine::Camera_StereoscopicEye UnityEngine::Camera_StereoscopicEye::Left{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Camera_StereoscopicEye UnityEngine::Camera_StereoscopicEye::Right{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Camera_MonoOrStereoscopicEye::Camera_MonoOrStereoscopicEye(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera_MonoOrStereoscopicEye::Camera_MonoOrStereoscopicEye() {}
constexpr ::UnityEngine::Camera_MonoOrStereoscopicEye UnityEngine::Camera_MonoOrStereoscopicEye::Left{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Camera_MonoOrStereoscopicEye UnityEngine::Camera_MonoOrStereoscopicEye::Right{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Camera_MonoOrStereoscopicEye UnityEngine::Camera_MonoOrStereoscopicEye::Mono{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Camera_SceneViewFilterMode::Camera_SceneViewFilterMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera_SceneViewFilterMode::Camera_SceneViewFilterMode() {}
constexpr ::UnityEngine::Camera_SceneViewFilterMode UnityEngine::Camera_SceneViewFilterMode::Off{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Camera_SceneViewFilterMode UnityEngine::Camera_SceneViewFilterMode::ShowFiltered{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Camera_RenderRequestMode::Camera_RenderRequestMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera_RenderRequestMode::Camera_RenderRequestMode() {}
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::ObjectId{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::Depth{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::VertexNormal{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::WorldPosition{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::EntityId{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::BaseColor{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::SpecularColor{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::Metallic{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::Emission{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::Normal{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::Smoothness{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::Occlusion{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::Camera_RenderRequestMode UnityEngine::Camera_RenderRequestMode::DiffuseColor{ static_cast<int32_t>(0xd) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Camera_RenderRequestOutputSpace::Camera_RenderRequestOutputSpace(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera_RenderRequestOutputSpace::Camera_RenderRequestOutputSpace() {}
constexpr ::UnityEngine::Camera_RenderRequestOutputSpace UnityEngine::Camera_RenderRequestOutputSpace::ScreenSpace{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngine::Camera_RenderRequestOutputSpace UnityEngine::Camera_RenderRequestOutputSpace::UV0{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Camera_RenderRequestOutputSpace UnityEngine::Camera_RenderRequestOutputSpace::UV1{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Camera_RenderRequestOutputSpace UnityEngine::Camera_RenderRequestOutputSpace::UV2{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Camera_RenderRequestOutputSpace UnityEngine::Camera_RenderRequestOutputSpace::UV3{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Camera_RenderRequestOutputSpace UnityEngine::Camera_RenderRequestOutputSpace::UV4{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Camera_RenderRequestOutputSpace UnityEngine::Camera_RenderRequestOutputSpace::UV5{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Camera_RenderRequestOutputSpace UnityEngine::Camera_RenderRequestOutputSpace::UV6{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Camera_RenderRequestOutputSpace UnityEngine::Camera_RenderRequestOutputSpace::UV7{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Camera_RenderRequestOutputSpace UnityEngine::Camera_RenderRequestOutputSpace::UV8{ static_cast<int32_t>(0x8) };
// Ctor Parameters [CppParam { name: "m_CameraRenderMode", ty: "::UnityEngine::Camera_RenderRequestMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ResultRT", ty:
// "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OutputSpace", ty: "::UnityEngine::Camera_RenderRequestOutputSpace", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Camera_RenderRequest::Camera_RenderRequest(::UnityEngine::Camera_RenderRequestMode m_CameraRenderMode, ::UnityW<::UnityEngine::RenderTexture> m_ResultRT,
                                                                    ::UnityEngine::Camera_RenderRequestOutputSpace m_OutputSpace) noexcept {
  this->m_CameraRenderMode = m_CameraRenderMode;
  this->m_ResultRT = m_ResultRT;
  this->m_OutputSpace = m_OutputSpace;
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera_RenderRequest::Camera_RenderRequest() {}
//  Writing Method size for method: ::UnityEngine::Camera_CameraCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera_CameraCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Camera_CameraCallback::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a6e090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera_CameraCallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera_CameraCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera_CameraCallback::*)(::UnityEngine::Camera*)>(&::UnityEngine::Camera_CameraCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a6e10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Camera_CameraCallback*>(), { ::i2c::class_of<::UnityEngine::Camera_CameraCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Camera_CameraCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera_CameraCallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Camera_CameraCallback::Invoke(::UnityEngine::Camera* cam) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Camera_CameraCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam);
}
inline ::UnityEngine::Camera_CameraCallback* UnityEngine::Camera_CameraCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Camera_CameraCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera_CameraCallback::Camera_CameraCallback() {}
//  Writing Method size for method: ::UnityEngine::Camera._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a62e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_nearClipPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_nearClipPlane)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a62ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_nearClipPlane", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_nearClipPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_nearClipPlane)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a62f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_nearClipPlane", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_farClipPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_farClipPlane)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a63038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_farClipPlane", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_farClipPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_farClipPlane)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a630f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_farClipPlane", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_fieldOfView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_fieldOfView)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a631d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_fieldOfView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_fieldOfView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_fieldOfView)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6328c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_fieldOfView", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_renderingPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderingPath (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_renderingPath)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a63368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_renderingPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_renderingPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::RenderingPath)>(&::UnityEngine::Camera::set_renderingPath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a63424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_renderingPath", {}, { ::i2c::type_of<::UnityEngine::RenderingPath>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_actualRenderingPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderingPath (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_actualRenderingPath)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a634f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_actualRenderingPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::Reset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a635b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_allowHDR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_allowHDR)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a63670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allowHDR", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_allowHDR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_allowHDR)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6372c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_allowHDR", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_allowMSAA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_allowMSAA)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a63800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allowMSAA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_allowMSAA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_allowMSAA)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a638bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_allowMSAA", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_allowDynamicResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_allowDynamicResolution)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a63990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allowDynamicResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_allowDynamicResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_allowDynamicResolution)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a63a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_allowDynamicResolution", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_forceIntoRenderTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_forceIntoRenderTexture)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a63b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_forceIntoRenderTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_forceIntoRenderTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_forceIntoRenderTexture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a63bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_forceIntoRenderTexture", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_orthographicSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_orthographicSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a63cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_orthographicSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_orthographicSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_orthographicSize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a63d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_orthographicSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_orthographic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_orthographic)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a63e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_orthographic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_orthographic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_orthographic)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a63f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_orthographic", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_opaqueSortMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::OpaqueSortMode (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_opaqueSortMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a63fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_opaqueSortMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_opaqueSortMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rendering::OpaqueSortMode)>(&::UnityEngine::Camera::set_opaqueSortMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a64094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_opaqueSortMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::OpaqueSortMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_transparencySortMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TransparencySortMode (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_transparencySortMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a64168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_transparencySortMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_transparencySortMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::TransparencySortMode)>(&::UnityEngine::Camera::set_transparencySortMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a64224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_transparencySortMode", {}, { ::i2c::type_of<::UnityEngine::TransparencySortMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_transparencySortAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_transparencySortAxis)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a642f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_transparencySortAxis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_transparencySortAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::set_transparencySortAxis)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a643dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_transparencySortAxis", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetTransparencySortSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::ResetTransparencySortSettings)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a644b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetTransparencySortSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_depth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a64574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_depth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_depth)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a64630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_depth", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_aspect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_aspect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6470c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_aspect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_aspect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_aspect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a647c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_aspect", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetAspect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::ResetAspect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a648a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetAspect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_velocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_velocity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a64960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_velocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_cullingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_cullingMask)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a64a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_cullingMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_cullingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(int32_t)>(&::UnityEngine::Camera::set_cullingMask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a64b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_cullingMask", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_eventMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_eventMask)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a64bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_eventMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_eventMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(int32_t)>(&::UnityEngine::Camera::set_eventMask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a64c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_eventMask", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_layerCullSpherical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_layerCullSpherical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a64d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_layerCullSpherical", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_layerCullSpherical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_layerCullSpherical)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6a64de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_layerCullSpherical", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_layerCullSphericalInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_layerCullSphericalInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a64d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_layerCullSphericalInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_layerCullSphericalInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_layerCullSphericalInternal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a65004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_layerCullSphericalInternal", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_cameraType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::CameraType (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_cameraType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a65114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_cameraType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_cameraType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::CameraType)>(&::UnityEngine::Camera::set_cameraType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a651d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_cameraType", {}, { ::i2c::type_of<::UnityEngine::CameraType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_skyboxMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_skyboxMaterial)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6a652a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_skyboxMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_overrideSceneCullingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_overrideSceneCullingMask)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a65430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_overrideSceneCullingMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_overrideSceneCullingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(uint64_t)>(&::UnityEngine::Camera::set_overrideSceneCullingMask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a654ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_overrideSceneCullingMask", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_sceneCullingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_sceneCullingMask)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a655c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_sceneCullingMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_useInteractiveLightBakingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_useInteractiveLightBakingData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6567c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_useInteractiveLightBakingData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_useInteractiveLightBakingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_useInteractiveLightBakingData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a65738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_useInteractiveLightBakingData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetLayerCullDistances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::GetLayerCullDistances)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6a6580c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetLayerCullDistances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetLayerCullDistances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::ArrayW<float_t>)>(&::UnityEngine::Camera::SetLayerCullDistances)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6a659b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetLayerCullDistances", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_layerCullDistances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_layerCullDistances)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a65b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_layerCullDistances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_layerCullDistances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::ArrayW<float_t>)>(&::UnityEngine::Camera::set_layerCullDistances)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a65b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_layerCullDistances", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_PreviewCullingLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Camera::get_PreviewCullingLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a65b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_PreviewCullingLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_useOcclusionCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_useOcclusionCulling)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a65b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_useOcclusionCulling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_useOcclusionCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_useOcclusionCulling)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a65c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_useOcclusionCulling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_cullingMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_cullingMatrix)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a65d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_cullingMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_cullingMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Camera::set_cullingMatrix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a65e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_cullingMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetCullingMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::ResetCullingMatrix)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a65ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetCullingMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_backgroundColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_backgroundColor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6a65fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_backgroundColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_backgroundColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Color)>(&::UnityEngine::Camera::set_backgroundColor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a66084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_backgroundColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_clearFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::CameraClearFlags (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_clearFlags)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a66160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_clearFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_clearFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::CameraClearFlags)>(&::UnityEngine::Camera::set_clearFlags)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6621c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_clearFlags", {}, { ::i2c::type_of<::UnityEngine::CameraClearFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_depthTextureMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DepthTextureMode (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_depthTextureMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a662f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_depthTextureMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_depthTextureMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::DepthTextureMode)>(&::UnityEngine::Camera::set_depthTextureMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a663ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_depthTextureMode", {}, { ::i2c::type_of<::UnityEngine::DepthTextureMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_clearStencilAfterLightingPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_clearStencilAfterLightingPass)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a66480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_clearStencilAfterLightingPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_clearStencilAfterLightingPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_clearStencilAfterLightingPass)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6653c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_clearStencilAfterLightingPass", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetReplacementShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Shader*, ::StringW)>(&::UnityEngine::Camera::SetReplacementShader)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6a66610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetReplacementShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetReplacementShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::ResetReplacementShader)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6680c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetReplacementShader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_projectionMatrixMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Camera_ProjectionMatrixMode (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_projectionMatrixMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a668c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_projectionMatrixMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_usePhysicalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_usePhysicalProperties)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a66984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_usePhysicalProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_usePhysicalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_usePhysicalProperties)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a66a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_usePhysicalProperties", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_iso
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_iso)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a66b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_iso", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_iso
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(int32_t)>(&::UnityEngine::Camera::set_iso)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a66bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_iso", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_shutterSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_shutterSpeed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a66ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_shutterSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_shutterSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_shutterSpeed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a66d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_shutterSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_aperture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_aperture)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a66e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_aperture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_aperture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_aperture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a66ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_aperture", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_focusDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_focusDistance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a66fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_focusDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_focusDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_focusDistance)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a67090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_focusDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_focalLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_focalLength)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6716c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_focalLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_focalLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_focalLength)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a67228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_focalLength", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_bladeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_bladeCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a67304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_bladeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_bladeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(int32_t)>(&::UnityEngine::Camera::set_bladeCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a673c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_bladeCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_curvature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_curvature)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a67494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_curvature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_curvature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Vector2)>(&::UnityEngine::Camera::set_curvature)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a67570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_curvature", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_barrelClipping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_barrelClipping)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a67648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_barrelClipping", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_barrelClipping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_barrelClipping)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a67704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_barrelClipping", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_anamorphism
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_anamorphism)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a677e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_anamorphism", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_anamorphism
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_anamorphism)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6789c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_anamorphism", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_sensorSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_sensorSize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a67978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_sensorSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_sensorSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Vector2)>(&::UnityEngine::Camera::set_sensorSize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a67a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_sensorSize", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_lensShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_lensShift)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a67b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_lensShift", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_lensShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Vector2)>(&::UnityEngine::Camera::set_lensShift)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a67c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_lensShift", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_gateFit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Camera_GateFitMode (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_gateFit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a67ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_gateFit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_gateFit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Camera_GateFitMode)>(&::UnityEngine::Camera::set_gateFit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a67d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_gateFit", {}, { ::i2c::type_of<::UnityEngine::Camera_GateFitMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetGateFittedFieldOfView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::GetGateFittedFieldOfView)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a67e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetGateFittedFieldOfView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetGateFittedLensShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::GetGateFittedLensShift)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a67f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetGateFittedLensShift", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetLocalSpaceAim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::GetLocalSpaceAim)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a68008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetLocalSpaceAim", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_rect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_rect)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6a680ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_rect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_rect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rect)>(&::UnityEngine::Camera::set_rect)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a681cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_rect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_pixelRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_pixelRect)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6a682a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_pixelRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_pixelRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rect)>(&::UnityEngine::Camera::set_pixelRect)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a68388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_pixelRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_pixelWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_pixelWidth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a68464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_pixelWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_pixelHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_pixelHeight)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a68520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_pixelHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_scaledPixelWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_scaledPixelWidth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a685dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_scaledPixelWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_scaledPixelHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_scaledPixelHeight)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a68698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_scaledPixelHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_targetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_targetTexture)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6a68754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_targetTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_targetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::Camera::set_targetTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a688e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_targetTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_activeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_activeTexture)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6a689e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_activeTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_targetDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_targetDisplay)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a68b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_targetDisplay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_targetDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(int32_t)>(&::UnityEngine::Camera::set_targetDisplay)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a68c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_targetDisplay", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetTargetBuffersImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer)>(&::UnityEngine::Camera::SetTargetBuffersImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6a68d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "SetTargetBuffersImpl", {}, { ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::UnityEngine::RenderBuffer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetTargetBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer)>(&::UnityEngine::Camera::SetTargetBuffers)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a68df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetTargetBuffers", {}, { ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::UnityEngine::RenderBuffer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetTargetBuffersMRTImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::ArrayW<::UnityEngine::RenderBuffer>, ::UnityEngine::RenderBuffer)>(
    &::UnityEngine::Camera::SetTargetBuffersMRTImpl)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6a68df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "SetTargetBuffersMRTImpl", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::UnityEngine::RenderBuffer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetTargetBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::ArrayW<::UnityEngine::RenderBuffer>, ::UnityEngine::RenderBuffer)>(&::UnityEngine::Camera::SetTargetBuffers)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a68f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "SetTargetBuffers", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::UnityEngine::RenderBuffer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetCameraBufferWarnings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::GetCameraBufferWarnings)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a68f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetCameraBufferWarnings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_cameraToWorldMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_cameraToWorldMatrix)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a69014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_cameraToWorldMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_worldToCameraMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_worldToCameraMatrix)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a69110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_worldToCameraMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_worldToCameraMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Camera::set_worldToCameraMatrix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6920c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_worldToCameraMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_projectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_projectionMatrix)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a692e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_projectionMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_projectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Camera::set_projectionMatrix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a693dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_projectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_nonJitteredProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_nonJitteredProjectionMatrix)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a694b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_nonJitteredProjectionMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_nonJitteredProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Camera::set_nonJitteredProjectionMatrix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a695ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_nonJitteredProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_useJitteredProjectionMatrixForTransparentRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_useJitteredProjectionMatrixForTransparentRendering)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a69680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_useJitteredProjectionMatrixForTransparentRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_useJitteredProjectionMatrixForTransparentRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_useJitteredProjectionMatrixForTransparentRendering)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6973c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_useJitteredProjectionMatrixForTransparentRendering", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_previousViewProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_previousViewProjectionMatrix)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a69810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_previousViewProjectionMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetWorldToCameraMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::ResetWorldToCameraMatrix)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6990c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetWorldToCameraMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::ResetProjectionMatrix)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a699c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetProjectionMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.CalculateObliqueMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)(::UnityEngine::Vector4)>(&::UnityEngine::Camera::CalculateObliqueMatrix)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6a69a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CalculateObliqueMatrix", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.WorldToScreenPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(
    &::UnityEngine::Camera::WorldToScreenPoint)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a69b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "WorldToScreenPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.WorldToViewportPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(
    &::UnityEngine::Camera::WorldToViewportPoint)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a69cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "WorldToViewportPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ViewportToWorldPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(
    &::UnityEngine::Camera::ViewportToWorldPoint)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a69dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "ViewportToWorldPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenToWorldPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(
    &::UnityEngine::Camera::ScreenToWorldPoint)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a69ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "ScreenToWorldPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.WorldToScreenPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::WorldToScreenPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a69ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "WorldToScreenPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.WorldToViewportPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::WorldToViewportPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6a004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "WorldToViewportPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ViewportToWorldPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::ViewportToWorldPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6a00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ViewportToWorldPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenToWorldPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::ScreenToWorldPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6a014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ScreenToWorldPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenToViewportPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::ScreenToViewportPoint)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a6a01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ScreenToViewportPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ViewportToScreenPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::ViewportToScreenPoint)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a6a11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ViewportToScreenPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetFrustumPlaneSizeAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::GetFrustumPlaneSizeAt)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a6a21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetFrustumPlaneSizeAt", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ViewportPointToRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::UnityEngine::Camera::*)(::UnityEngine::Vector2, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(
    &::UnityEngine::Camera::ViewportPointToRay)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6a6a310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "ViewportPointToRay", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ViewportPointToRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::UnityEngine::Camera::*)(::UnityEngine::Vector3, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(
    &::UnityEngine::Camera::ViewportPointToRay)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6a6a430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "ViewportPointToRay", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ViewportPointToRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::ViewportPointToRay)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6a6a460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ViewportPointToRay", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenPointToRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::UnityEngine::Camera::*)(::UnityEngine::Vector2, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(
    &::UnityEngine::Camera::ScreenPointToRay)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6a6a494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "ScreenPointToRay", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenPointToRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::UnityEngine::Camera::*)(::UnityEngine::Vector3, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(
    &::UnityEngine::Camera::ScreenPointToRay)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6a6a5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "ScreenPointToRay", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenPointToRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::ScreenPointToRay)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6a6a5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ScreenPointToRay", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.CalculateFrustumCornersInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rect, float_t, ::UnityEngine::Camera_MonoOrStereoscopicEye,
                                                                                       ::by_ref<::ArrayW<::UnityEngine::Vector3>>)>(&::UnityEngine::Camera::CalculateFrustumCornersInternal)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6a6a618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "CalculateFrustumCornersInternal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(),
                                                                 ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.CalculateFrustumCorners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rect, float_t, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::ArrayW<::UnityEngine::Vector3>)>(
    &::UnityEngine::Camera::CalculateFrustumCorners)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6a6a804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CalculateFrustumCorners",
                                                                         {},
                                                                         { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(),
                                                                           ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.CalculateProjectionMatrixFromPhysicalPropertiesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, float_t, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, float_t, float_t,
                                                                ::UnityEngine::Camera_GateFitMode)>(&::UnityEngine::Camera::CalculateProjectionMatrixFromPhysicalPropertiesInternal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6a8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                            { "CalculateProjectionMatrixFromPhysicalPropertiesInternal",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Camera_GateFitMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.CalculateProjectionMatrixFromPhysicalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, float_t, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, float_t,
                                                                ::UnityEngine::Camera_GateFitParameters)>(&::UnityEngine::Camera::CalculateProjectionMatrixFromPhysicalProperties)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a6a9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CalculateProjectionMatrixFromPhysicalProperties",
                                                                                      {},
                                                                                      { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<float_t>(),
                                                                                        ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(),
                                                                                        ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Camera_GateFitParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.FocalLengthToFieldOfView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Camera::FocalLengthToFieldOfView)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a6a9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "FocalLengthToFieldOfView", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.FieldOfViewToFocalLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Camera::FieldOfViewToFocalLength)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a6aa20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "FieldOfViewToFocalLength", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.HorizontalToVerticalFieldOfView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Camera::HorizontalToVerticalFieldOfView)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a6aa60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "HorizontalToVerticalFieldOfView", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.VerticalToHorizontalFieldOfView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Camera::VerticalToHorizontalFieldOfView)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a6aaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "VerticalToHorizontalFieldOfView", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_main
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (*)()>(&::UnityEngine::Camera::get_main)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a6aae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_main", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (*)()>(&::UnityEngine::Camera::get_current)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a6ac1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_currentInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (*)()>(&::UnityEngine::Camera::get_currentInternal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a6ac20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_currentInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_scene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_scene)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a6ad5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_scene", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_scene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::Camera::set_scene)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a6ae38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_scene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_stereoEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_stereoEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6af10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_stereoSeparation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_stereoSeparation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6afcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoSeparation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_stereoSeparation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_stereoSeparation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6b088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_stereoSeparation", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_stereoConvergence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_stereoConvergence)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6b164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoConvergence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_stereoConvergence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_stereoConvergence)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6b220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_stereoConvergence", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_areVRStereoViewMatricesWithinSingleCullTolerance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_areVRStereoViewMatricesWithinSingleCullTolerance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6b2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_areVRStereoViewMatricesWithinSingleCullTolerance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_stereoTargetEye
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::StereoTargetEyeMask (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_stereoTargetEye)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a6b3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoTargetEye", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_stereoTargetEye
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::StereoTargetEyeMask)>(&::UnityEngine::Camera::set_stereoTargetEye)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6a6b43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_stereoTargetEye", {}, { ::i2c::type_of<::UnityEngine::StereoTargetEyeMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_stereoTargetEyeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::StereoTargetEyeMask (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_stereoTargetEyeInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6b3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoTargetEyeInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_stereoTargetEyeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::StereoTargetEyeMask)>(&::UnityEngine::Camera::set_stereoTargetEyeInternal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6b538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_stereoTargetEyeInternal", {}, { ::i2c::type_of<::UnityEngine::StereoTargetEyeMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_stereoActiveEye
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Camera_MonoOrStereoscopicEye (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_stereoActiveEye)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6b648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoActiveEye", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetStereoNonJitteredProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)(::UnityEngine::Camera_StereoscopicEye)>(
    &::UnityEngine::Camera::GetStereoNonJitteredProjectionMatrix)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a6b704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetStereoNonJitteredProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetStereoViewMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)(::UnityEngine::Camera_StereoscopicEye)>(&::UnityEngine::Camera::GetStereoViewMatrix)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a6b818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetStereoViewMatrix", {}, { ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.CopyStereoDeviceProjectionMatrixToNonJittered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Camera_StereoscopicEye)>(&::UnityEngine::Camera::CopyStereoDeviceProjectionMatrixToNonJittered)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6b92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CopyStereoDeviceProjectionMatrixToNonJittered", {}, { ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetStereoProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)(::UnityEngine::Camera_StereoscopicEye)>(&::UnityEngine::Camera::GetStereoProjectionMatrix)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a6ba00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetStereoProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetStereoProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Camera_StereoscopicEye, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Camera::SetStereoProjectionMatrix)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a6bb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "SetStereoProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetStereoProjectionMatrices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::ResetStereoProjectionMatrices)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6bc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetStereoProjectionMatrices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetStereoViewMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Camera_StereoscopicEye, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Camera::SetStereoViewMatrix)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a6bcbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "SetStereoViewMatrix", {}, { ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetStereoViewMatrices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::ResetStereoViewMatrices)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6bda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetStereoViewMatrices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetAllCamerasCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Camera::GetAllCamerasCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a6be64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetAllCamerasCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetAllCamerasImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::ArrayW<::UnityEngine::Camera*>>)>(&::UnityEngine::Camera::GetAllCamerasImpl)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a6be8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetAllCamerasImpl", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Camera*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_allCamerasCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Camera::get_allCamerasCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a6bf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allCamerasCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_allCameras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Camera>> (*)()>(&::UnityEngine::Camera::get_allCameras)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a6bf6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allCameras", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetAllCameras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::UnityEngine::Camera*>)>(&::UnityEngine::Camera::GetAllCameras)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6a6bfe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetAllCameras", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Camera*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderToCubemapImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)(::UnityEngine::Texture*, int32_t)>(&::UnityEngine::Camera::RenderToCubemapImpl)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6a6c09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderToCubemapImpl", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderToCubemap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)(::UnityEngine::Cubemap*, int32_t)>(&::UnityEngine::Camera::RenderToCubemap)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a6c1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderToCubemap", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderToCubemap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)(::UnityEngine::Cubemap*)>(&::UnityEngine::Camera::RenderToCubemap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6c1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderToCubemap", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderToCubemap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)(::UnityEngine::RenderTexture*, int32_t)>(&::UnityEngine::Camera::RenderToCubemap)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a6c1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderToCubemap", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderToCubemap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::Camera::RenderToCubemap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6c1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderToCubemap", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetFilterMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::GetFilterMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6c1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetFilterMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_sceneViewFilterMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Camera_SceneViewFilterMode (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_sceneViewFilterMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a6c28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_sceneViewFilterMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_renderCloudsInSceneView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_renderCloudsInSceneView)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6c290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_renderCloudsInSceneView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_renderCloudsInSceneView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_renderCloudsInSceneView)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6c34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_renderCloudsInSceneView", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderToCubemapEyeImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)(::UnityEngine::RenderTexture*, int32_t, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(
    &::UnityEngine::Camera::RenderToCubemapEyeImpl)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6a6c420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Camera*>(),
            { "RenderToCubemapEyeImpl", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderToCubemap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)(::UnityEngine::RenderTexture*, int32_t, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(
    &::UnityEngine::Camera::RenderToCubemap)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a6c554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                            { "RenderToCubemap", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::Render)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6c558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "Render", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderWithShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Shader*, ::StringW)>(&::UnityEngine::Camera::RenderWithShader)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6a6c614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderWithShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderDontRestore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::RenderDontRestore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6c810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderDontRestore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SubmitRenderRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::System::Collections::Generic::List_1<::UnityEngine::Camera_RenderRequest>*)>(
    &::UnityEngine::Camera::SubmitRenderRequests)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6a6c8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "SubmitRenderRequests", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Camera_RenderRequest>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SubmitRenderRequestsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::System::Object*)>(&::UnityEngine::Camera::SubmitRenderRequestsInternal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6ca3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SubmitRenderRequestsInternal", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SubmitBuiltInObjectIDRenderRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (::UnityEngine::Camera::*)(::UnityEngine::RenderTexture*, int32_t, ::UnityEngine::CubemapFace,
                                                                                                                            int32_t)>(&::UnityEngine::Camera::SubmitBuiltInObjectIDRenderRequest)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6a6cb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SubmitBuiltInObjectIDRenderRequest",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(),
                                                                                                            ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetupCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::Camera::SetupCurrent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6cc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetupCurrent", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Camera*)>(&::UnityEngine::Camera::CopyFrom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a6cd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_commandBufferCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_commandBufferCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6ce1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_commandBufferCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RemoveCommandBuffersImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent)>(&::UnityEngine::Camera::RemoveCommandBuffersImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6ced8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RemoveCommandBuffersImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RemoveAllCommandBuffersImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::RemoveAllCommandBuffersImpl)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6cfac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RemoveAllCommandBuffersImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RemoveCommandBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent)>(&::UnityEngine::Camera::RemoveCommandBuffers)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6a6d068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RemoveCommandBuffers", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RemoveAllCommandBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::RemoveAllCommandBuffers)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6a6d178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RemoveAllCommandBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.AddCommandBufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Camera::AddCommandBufferImpl)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6a6d280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                         { "AddCommandBufferImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.AddCommandBufferAsyncImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent, ::UnityEngine::Rendering::CommandBuffer*,
                                                                                       ::UnityEngine::Rendering::ComputeQueueType)>(&::UnityEngine::Camera::AddCommandBufferAsyncImpl)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6a6d3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "AddCommandBufferAsyncImpl",
                                                                         {},
                                                                         { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                           ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RemoveCommandBufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Camera::RemoveCommandBufferImpl)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6a6d4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                         { "RemoveCommandBufferImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.AddCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Camera::AddCommandBuffer)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6a6d61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "AddCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.AddCommandBufferAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent, ::UnityEngine::Rendering::CommandBuffer*,
                                                                                       ::UnityEngine::Rendering::ComputeQueueType)>(&::UnityEngine::Camera::AddCommandBufferAsync)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6a6d818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "AddCommandBufferAsync",
                                                                         {},
                                                                         { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                           ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RemoveCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Camera::RemoveCommandBuffer)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6a6da28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                         { "RemoveCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetCommandBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::CommandBuffer*> (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent)>(
    &::UnityEngine::Camera::GetCommandBuffers)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6a6dc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetCommandBuffers", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetCommandBuffersImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::CommandBuffer*> (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent)>(
    &::UnityEngine::Camera::GetCommandBuffersImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6dd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetCommandBuffersImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.FireOnPreCull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::Camera::FireOnPreCull)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a6ddf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "FireOnPreCull", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.FireOnPreRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::Camera::FireOnPreRender)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a6de60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "FireOnPreRender", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.FireOnPostRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::Camera::FireOnPostRender)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a6ded0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "FireOnPostRender", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.BumpNonSerializedVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::Camera::BumpNonSerializedVersion)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6a6df40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "BumpNonSerializedVersion", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.OnlyUsedForTesting1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::OnlyUsedForTesting1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a6df5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "OnlyUsedForTesting1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.OnlyUsedForTesting2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::OnlyUsedForTesting2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a6df60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "OnlyUsedForTesting2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.TryGetCullingParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>)>(
    &::UnityEngine::Camera::TryGetCullingParameters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a6df64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "TryGetCullingParameters", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.TryGetCullingParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Camera::*)(bool, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>)>(
    &::UnityEngine::Camera::TryGetCullingParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6e01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "TryGetCullingParameters", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetCullingParameters_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*, bool, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>, int32_t)>(
    &::UnityEngine::Camera::GetCullingParameters_Internal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a6df74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetCullingParameters_Internal",
                                                                         {},
                                                                         { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(),
                                                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_nearClipPlane_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_nearClipPlane_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a62f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_nearClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_nearClipPlane_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_nearClipPlane_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a62fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_nearClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_farClipPlane_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_farClipPlane_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a630b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_farClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_farClipPlane_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_farClipPlane_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a63184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_farClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_fieldOfView_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_fieldOfView_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a63250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_fieldOfView_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_fieldOfView_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_fieldOfView_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a6331c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_fieldOfView_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_renderingPath_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderingPath (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_renderingPath_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a633e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_renderingPath_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_renderingPath_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::RenderingPath)>(&::UnityEngine::Camera::set_renderingPath_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a634b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_renderingPath_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RenderingPath>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_actualRenderingPath_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderingPath (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_actualRenderingPath_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a63578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_actualRenderingPath_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.Reset_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Camera::Reset_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a63634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "Reset_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_allowHDR_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_allowHDR_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a636f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allowHDR_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_allowHDR_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Camera::set_allowHDR_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a637bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_allowHDR_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_allowMSAA_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_allowMSAA_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a63880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allowMSAA_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_allowMSAA_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Camera::set_allowMSAA_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6394c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_allowMSAA_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_allowDynamicResolution_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_allowDynamicResolution_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a63a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allowDynamicResolution_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_allowDynamicResolution_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Camera::set_allowDynamicResolution_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a63adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_allowDynamicResolution_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_forceIntoRenderTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_forceIntoRenderTexture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a63ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_forceIntoRenderTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_forceIntoRenderTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Camera::set_forceIntoRenderTexture_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a63c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_forceIntoRenderTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_orthographicSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_orthographicSize_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a63d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_orthographicSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_orthographicSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_orthographicSize_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a63dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_orthographicSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_orthographic_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_orthographic_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a63ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_orthographic_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_orthographic_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Camera::set_orthographic_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a63f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_orthographic_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_opaqueSortMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::OpaqueSortMode (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_opaqueSortMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a64058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_opaqueSortMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_opaqueSortMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::OpaqueSortMode)>(&::UnityEngine::Camera::set_opaqueSortMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a64124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "set_opaqueSortMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::OpaqueSortMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_transparencySortMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TransparencySortMode (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_transparencySortMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a641e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_transparencySortMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_transparencySortMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::TransparencySortMode)>(&::UnityEngine::Camera::set_transparencySortMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a642b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "set_transparencySortMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::TransparencySortMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_transparencySortAxis_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Camera::get_transparencySortAxis_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a64398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "get_transparencySortAxis_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_transparencySortAxis_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Camera::set_transparencySortAxis_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a64474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "set_transparencySortAxis_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetTransparencySortSettings_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Camera::ResetTransparencySortSettings_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a64538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetTransparencySortSettings_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_depth_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_depth_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a645f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_depth_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_depth_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_depth_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a646c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_depth_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_aspect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_aspect_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6478c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_aspect_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_aspect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_aspect_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a64858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_aspect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetAspect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Camera::ResetAspect_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a64924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetAspect_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_velocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Camera::get_velocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a64a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_velocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_cullingMask_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_cullingMask_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a64ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_cullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_cullingMask_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Camera::set_cullingMask_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a64b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_cullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_eventMask_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_eventMask_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a64c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_eventMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_eventMask_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Camera::set_eventMask_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a64d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_eventMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_layerCullSphericalInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_layerCullSphericalInternal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a65094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_layerCullSphericalInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_layerCullSphericalInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Camera::set_layerCullSphericalInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a650d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_layerCullSphericalInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_cameraType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::CameraType (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_cameraType_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a65194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_cameraType_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_cameraType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::CameraType)>(&::UnityEngine::Camera::set_cameraType_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a65260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_cameraType_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CameraType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_skyboxMaterial_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_skyboxMaterial_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a653f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_skyboxMaterial_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_overrideSceneCullingMask_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_overrideSceneCullingMask_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a654b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_overrideSceneCullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_overrideSceneCullingMask_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint64_t)>(&::UnityEngine::Camera::set_overrideSceneCullingMask_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6557c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_overrideSceneCullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_sceneCullingMask_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_sceneCullingMask_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a65640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_sceneCullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_useInteractiveLightBakingData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_useInteractiveLightBakingData_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a656fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_useInteractiveLightBakingData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_useInteractiveLightBakingData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Camera::set_useInteractiveLightBakingData_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a657c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_useInteractiveLightBakingData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetLayerCullDistances_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Camera::GetLayerCullDistances_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6596c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                            { "GetLayerCullDistances_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetLayerCullDistances_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Camera::SetLayerCullDistances_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a65ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                         { "SetLayerCullDistances_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_useOcclusionCulling_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_useOcclusionCulling_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a65c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_useOcclusionCulling_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_useOcclusionCulling_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Camera::set_useOcclusionCulling_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a65cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_useOcclusionCulling_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_cullingMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::get_cullingMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a65dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "get_cullingMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_cullingMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::set_cullingMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a65ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "set_cullingMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetCullingMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Camera::ResetCullingMatrix_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a65f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetCullingMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_backgroundColor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::Camera::get_backgroundColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a66040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "get_backgroundColor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_backgroundColor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::Camera::set_backgroundColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6611c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "set_backgroundColor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_clearFlags_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::CameraClearFlags (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_clearFlags_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a661e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_clearFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_clearFlags_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::CameraClearFlags)>(&::UnityEngine::Camera::set_clearFlags_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a662ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_clearFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CameraClearFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_depthTextureMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DepthTextureMode (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_depthTextureMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a66370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_depthTextureMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_depthTextureMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::DepthTextureMode)>(&::UnityEngine::Camera::set_depthTextureMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6643c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "set_depthTextureMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::DepthTextureMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_clearStencilAfterLightingPass_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_clearStencilAfterLightingPass_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a66500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_clearStencilAfterLightingPass_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_clearStencilAfterLightingPass_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Camera::set_clearStencilAfterLightingPass_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a665cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_clearStencilAfterLightingPass_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetReplacementShader_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Camera::SetReplacementShader_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a667b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetReplacementShader_Injected",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetReplacementShader_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Camera::ResetReplacementShader_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6688c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetReplacementShader_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_projectionMatrixMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Camera_ProjectionMatrixMode (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_projectionMatrixMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a66948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_projectionMatrixMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_usePhysicalProperties_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_usePhysicalProperties_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a66a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_usePhysicalProperties_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_usePhysicalProperties_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Camera::set_usePhysicalProperties_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a66ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_usePhysicalProperties_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_iso_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_iso_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a66b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_iso_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_iso_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Camera::set_iso_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a66c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_iso_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_shutterSpeed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_shutterSpeed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a66d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_shutterSpeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_shutterSpeed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_shutterSpeed_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a66df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_shutterSpeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_aperture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_aperture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a66ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_aperture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_aperture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_aperture_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a66f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_aperture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_focusDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_focusDistance_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a67054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_focusDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_focusDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_focusDistance_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a67120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_focusDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_focalLength_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_focalLength_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a671ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_focalLength_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_focalLength_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_focalLength_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a672b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_focalLength_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_bladeCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_bladeCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a67384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_bladeCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_bladeCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Camera::set_bladeCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a67450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_bladeCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_curvature_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Camera::get_curvature_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6752c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_curvature_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_curvature_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Camera::set_curvature_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a67604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_curvature_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_barrelClipping_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_barrelClipping_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a676c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_barrelClipping_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_barrelClipping_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_barrelClipping_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a67794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_barrelClipping_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_anamorphism_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_anamorphism_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a67860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_anamorphism_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_anamorphism_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_anamorphism_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a6792c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_anamorphism_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_sensorSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Camera::get_sensorSize_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a67a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_sensorSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_sensorSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Camera::set_sensorSize_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a67ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_sensorSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_lensShift_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Camera::get_lensShift_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a67bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_lensShift_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_lensShift_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Camera::set_lensShift_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a67c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_lensShift_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_gateFit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Camera_GateFitMode (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_gateFit_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a67d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_gateFit_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_gateFit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Camera_GateFitMode)>(&::UnityEngine::Camera::set_gateFit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a67e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_gateFit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_GateFitMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetGateFittedFieldOfView_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::GetGateFittedFieldOfView_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a67ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetGateFittedFieldOfView_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetGateFittedLensShift_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Camera::GetGateFittedLensShift_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a67fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "GetGateFittedLensShift_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetLocalSpaceAim_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Camera::GetLocalSpaceAim_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a680a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "GetLocalSpaceAim_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_rect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::Camera::get_rect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a68188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_rect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_rect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::Camera::set_rect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a68264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_rect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_pixelRect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::Camera::get_pixelRect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a68344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_pixelRect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_pixelRect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::Camera::set_pixelRect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a68420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_pixelRect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_pixelWidth_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_pixelWidth_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a684e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_pixelWidth_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_pixelHeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_pixelHeight_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a685a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_pixelHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_scaledPixelWidth_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_scaledPixelWidth_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6865c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_scaledPixelWidth_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_scaledPixelHeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_scaledPixelHeight_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a68718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_scaledPixelHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_targetTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_targetTexture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a688a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_targetTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_targetTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Camera::set_targetTexture_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a689a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_targetTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_activeTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_activeTexture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a68b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_activeTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_targetDisplay_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_targetDisplay_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a68bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_targetDisplay_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_targetDisplay_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Camera::set_targetDisplay_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a68cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_targetDisplay_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetTargetBuffersImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::RenderBuffer>, ::by_ref<::UnityEngine::RenderBuffer>)>(
    &::UnityEngine::Camera::SetTargetBuffersImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a68d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetTargetBuffersImpl_Injected",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(),
                                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetTargetBuffersMRTImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::RenderBuffer>)>(
    &::UnityEngine::Camera::SetTargetBuffersMRTImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a68f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetTargetBuffersMRTImpl_Injected",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                        ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetCameraBufferWarnings_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::System::IntPtr)>(&::UnityEngine::Camera::GetCameraBufferWarnings_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a68fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetCameraBufferWarnings_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_cameraToWorldMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::get_cameraToWorldMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a690cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "get_cameraToWorldMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_worldToCameraMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::get_worldToCameraMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a691c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "get_worldToCameraMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_worldToCameraMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::set_worldToCameraMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6929c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "set_worldToCameraMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_projectionMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::get_projectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a69398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "get_projectionMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_projectionMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::set_projectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6946c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "set_projectionMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_nonJitteredProjectionMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::get_nonJitteredProjectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a69568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "get_nonJitteredProjectionMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_nonJitteredProjectionMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::set_nonJitteredProjectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6963c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "set_nonJitteredProjectionMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_useJitteredProjectionMatrixForTransparentRendering_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_useJitteredProjectionMatrixForTransparentRendering_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a69700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_useJitteredProjectionMatrixForTransparentRendering_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_useJitteredProjectionMatrixForTransparentRendering_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Camera::set_useJitteredProjectionMatrixForTransparentRendering_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a697cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "set_useJitteredProjectionMatrixForTransparentRendering_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_previousViewProjectionMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::get_previousViewProjectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a698c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "get_previousViewProjectionMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetWorldToCameraMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Camera::ResetWorldToCameraMatrix_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6998c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetWorldToCameraMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetProjectionMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Camera::ResetProjectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a69a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetProjectionMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.CalculateObliqueMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Camera::CalculateObliqueMatrix_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a69b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "CalculateObliqueMatrix_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.WorldToScreenPoint_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Camera::WorldToScreenPoint_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a69c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "WorldToScreenPoint_Injected",
                                                                         {},
                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                           ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.WorldToViewportPoint_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Camera::WorldToViewportPoint_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a69d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "WorldToViewportPoint_Injected",
                                                                         {},
                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                           ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ViewportToWorldPoint_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Camera::ViewportToWorldPoint_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a69e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ViewportToWorldPoint_Injected",
                                                                         {},
                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                           ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenToWorldPoint_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Camera::ScreenToWorldPoint_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a69fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ScreenToWorldPoint_Injected",
                                                                         {},
                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                           ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenToViewportPoint_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Camera::ScreenToViewportPoint_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6a0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Camera*>(),
            { "ScreenToViewportPoint_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ViewportToScreenPoint_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Camera::ViewportToScreenPoint_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6a1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Camera*>(),
            { "ViewportToScreenPoint_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetFrustumPlaneSizeAt_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Camera::GetFrustumPlaneSizeAt_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6a2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                            { "GetFrustumPlaneSizeAt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ViewportPointToRay_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::by_ref<::UnityEngine::Ray>)>(
    &::UnityEngine::Camera::ViewportPointToRay_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a6a3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ViewportPointToRay_Injected",
                                                                         {},
                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                                                           ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenPointToRay_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::by_ref<::UnityEngine::Ray>)>(
    &::UnityEngine::Camera::ScreenPointToRay_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a6a558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ScreenPointToRay_Injected",
                                                                         {},
                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                                                           ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.CalculateFrustumCornersInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>, float_t, ::UnityEngine::Camera_MonoOrStereoscopicEye,
                                                                ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Camera::CalculateFrustumCornersInternal_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a6a798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CalculateFrustumCornersInternal_Injected",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(),
                                                                                                            ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(),
                                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, float_t, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, float_t, float_t,
                                                                float_t, ::UnityEngine::Camera_GateFitMode)>(
    &::UnityEngine::Camera::CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6a6a948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Camera_GateFitMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_main_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Camera::get_main_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a6abf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_main_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_currentInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Camera::get_currentInternal_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a6ad34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_currentInternal_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_scene_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::Camera::get_scene_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6adf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "get_scene_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_scene_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::Camera::set_scene_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6aecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                             { "set_scene_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_stereoEnabled_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_stereoEnabled_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6af90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_stereoSeparation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_stereoSeparation_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6b04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoSeparation_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_stereoSeparation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_stereoSeparation_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a6b118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_stereoSeparation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_stereoConvergence_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_stereoConvergence_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6b1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoConvergence_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_stereoConvergence_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Camera::set_stereoConvergence_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a6b2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_stereoConvergence_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_areVRStereoViewMatricesWithinSingleCullTolerance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_areVRStereoViewMatricesWithinSingleCullTolerance_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6b37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_areVRStereoViewMatricesWithinSingleCullTolerance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_stereoTargetEyeInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::StereoTargetEyeMask (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_stereoTargetEyeInternal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6b5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoTargetEyeInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_stereoTargetEyeInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::StereoTargetEyeMask)>(&::UnityEngine::Camera::set_stereoTargetEyeInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6b604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "set_stereoTargetEyeInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::StereoTargetEyeMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_stereoActiveEye_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Camera_MonoOrStereoscopicEye (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_stereoActiveEye_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6b6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoActiveEye_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetStereoNonJitteredProjectionMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Camera_StereoscopicEye, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Camera::GetStereoNonJitteredProjectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6b7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetStereoNonJitteredProjectionMatrix_Injected",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(),
                                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetStereoViewMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Camera_StereoscopicEye, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Camera::GetStereoViewMatrix_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6b8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetStereoViewMatrix_Injected",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(),
                                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.CopyStereoDeviceProjectionMatrixToNonJittered_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Camera_StereoscopicEye)>(
    &::UnityEngine::Camera::CopyStereoDeviceProjectionMatrixToNonJittered_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6b9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                            { "CopyStereoDeviceProjectionMatrixToNonJittered_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetStereoProjectionMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Camera_StereoscopicEye, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Camera::GetStereoProjectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6bac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetStereoProjectionMatrix_Injected",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(),
                                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetStereoProjectionMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Camera_StereoscopicEye, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Camera::SetStereoProjectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6bbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetStereoProjectionMatrix_Injected",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(),
                                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetStereoProjectionMatrices_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Camera::ResetStereoProjectionMatrices_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6bc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetStereoProjectionMatrices_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetStereoViewMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Camera_StereoscopicEye, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Camera::SetStereoViewMatrix_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6bd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetStereoViewMatrix_Injected",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(),
                                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ResetStereoViewMatrices_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Camera::ResetStereoViewMatrices_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6be28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetStereoViewMatrices_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetAllCamerasImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::ArrayW<::UnityEngine::Camera*>>)>(&::UnityEngine::Camera::GetAllCamerasImpl_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6bf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetAllCamerasImpl_Injected", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Camera*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderToCubemapImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::Camera::RenderToCubemapImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6c164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "RenderToCubemapImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetFilterMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::GetFilterMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6c250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetFilterMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_renderCloudsInSceneView_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_renderCloudsInSceneView_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6c310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_renderCloudsInSceneView_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_renderCloudsInSceneView_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Camera::set_renderCloudsInSceneView_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6c3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_renderCloudsInSceneView_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderToCubemapEyeImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, int32_t, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(
    &::UnityEngine::Camera::RenderToCubemapEyeImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a6c4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderToCubemapEyeImpl_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.Render_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Camera::Render_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6c5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "Render_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderWithShader_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Camera::RenderWithShader_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6c7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Camera*>(),
            { "RenderWithShader_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderDontRestore_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Camera::RenderDontRestore_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6c890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderDontRestore_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SubmitRenderRequestsInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Object*)>(&::UnityEngine::Camera::SubmitRenderRequestsInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6cacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SubmitRenderRequestsInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SubmitBuiltInObjectIDRenderRequest_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::IntPtr, ::System::IntPtr, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Camera::SubmitBuiltInObjectIDRenderRequest_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a6cbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SubmitBuiltInObjectIDRenderRequest_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetupCurrent_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Camera::SetupCurrent_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6ccdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetupCurrent_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.CopyFrom_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Camera::CopyFrom_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6cdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CopyFrom_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_commandBufferCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Camera::get_commandBufferCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6ce9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_commandBufferCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RemoveCommandBuffersImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::CameraEvent)>(&::UnityEngine::Camera::RemoveCommandBuffersImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6cf68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "RemoveCommandBuffersImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RemoveAllCommandBuffersImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Camera::RemoveAllCommandBuffersImpl_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6d02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RemoveAllCommandBuffersImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.AddCommandBufferImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::CameraEvent, ::System::IntPtr)>(&::UnityEngine::Camera::AddCommandBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6d358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Camera*>(),
            { "AddCommandBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.AddCommandBufferAsyncImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::CameraEvent, ::System::IntPtr, ::UnityEngine::Rendering::ComputeQueueType)>(
    &::UnityEngine::Camera::AddCommandBufferAsyncImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a6d494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "AddCommandBufferAsyncImpl_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(),
                                                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RemoveCommandBufferImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::CameraEvent, ::System::IntPtr)>(&::UnityEngine::Camera::RemoveCommandBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6d5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Camera*>(),
            { "RemoveCommandBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetCommandBuffersImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::CommandBuffer*> (*)(::System::IntPtr, ::UnityEngine::Rendering::CameraEvent)>(
    &::UnityEngine::Camera::GetCommandBuffersImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a6ddac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                { "GetCommandBuffersImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetCullingParameters_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, bool, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>, int32_t)>(
    &::UnityEngine::Camera::GetCullingParameters_Internal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a6e024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetCullingParameters_Internal_Injected",
                                                                         {},
                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(),
                                                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::Camera::__cordl_internal_get_m_NonSerializedVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NonSerializedVersion;
}
constexpr uint32_t const& UnityEngine::Camera::__cordl_internal_get_m_NonSerializedVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NonSerializedVersion;
}
constexpr void UnityEngine::Camera::__cordl_internal_set_m_NonSerializedVersion(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NonSerializedVersion = value;
}
inline void UnityEngine::Camera::setStaticF_onPreCull(::UnityEngine::Camera_CameraCallback* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Camera_CameraCallback*, "onPreCull", ::UnityEngine::Camera*>(std::forward<::UnityEngine::Camera_CameraCallback*>(value));
}
inline ::UnityEngine::Camera_CameraCallback* UnityEngine::Camera::getStaticF_onPreCull() {
  return ::cordl_internals::getStaticField<::UnityEngine::Camera_CameraCallback*, "onPreCull", ::UnityEngine::Camera*>();
}
inline void UnityEngine::Camera::setStaticF_onPreRender(::UnityEngine::Camera_CameraCallback* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Camera_CameraCallback*, "onPreRender", ::UnityEngine::Camera*>(std::forward<::UnityEngine::Camera_CameraCallback*>(value));
}
inline ::UnityEngine::Camera_CameraCallback* UnityEngine::Camera::getStaticF_onPreRender() {
  return ::cordl_internals::getStaticField<::UnityEngine::Camera_CameraCallback*, "onPreRender", ::UnityEngine::Camera*>();
}
inline void UnityEngine::Camera::setStaticF_onPostRender(::UnityEngine::Camera_CameraCallback* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Camera_CameraCallback*, "onPostRender", ::UnityEngine::Camera*>(std::forward<::UnityEngine::Camera_CameraCallback*>(value));
}
inline ::UnityEngine::Camera_CameraCallback* UnityEngine::Camera::getStaticF_onPostRender() {
  return ::cordl_internals::getStaticField<::UnityEngine::Camera_CameraCallback*, "onPostRender", ::UnityEngine::Camera*>();
}
inline void UnityEngine::Camera::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Camera::get_nearClipPlane() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_nearClipPlane", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_nearClipPlane(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_nearClipPlane", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_farClipPlane() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_farClipPlane", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_farClipPlane(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_farClipPlane", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_fieldOfView() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_fieldOfView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_fieldOfView(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_fieldOfView", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderingPath UnityEngine::Camera::get_renderingPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_renderingPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderingPath>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_renderingPath(::UnityEngine::RenderingPath value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_renderingPath", {}, { ::i2c::type_of<::UnityEngine::RenderingPath>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderingPath UnityEngine::Camera::get_actualRenderingPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_actualRenderingPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderingPath>(this, ___internal_method);
}
inline void UnityEngine::Camera::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Camera::get_allowHDR() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allowHDR", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_allowHDR(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_allowHDR", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Camera::get_allowMSAA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allowMSAA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_allowMSAA(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_allowMSAA", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Camera::get_allowDynamicResolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allowDynamicResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_allowDynamicResolution(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_allowDynamicResolution", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Camera::get_forceIntoRenderTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_forceIntoRenderTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_forceIntoRenderTexture(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_forceIntoRenderTexture", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_orthographicSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_orthographicSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_orthographicSize(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_orthographicSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Camera::get_orthographic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_orthographic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_orthographic(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_orthographic", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::OpaqueSortMode UnityEngine::Camera::get_opaqueSortMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_opaqueSortMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OpaqueSortMode>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_opaqueSortMode(::UnityEngine::Rendering::OpaqueSortMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_opaqueSortMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::OpaqueSortMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TransparencySortMode UnityEngine::Camera::get_transparencySortMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_transparencySortMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TransparencySortMode>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_transparencySortMode(::UnityEngine::TransparencySortMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_transparencySortMode", {}, { ::i2c::type_of<::UnityEngine::TransparencySortMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::get_transparencySortAxis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_transparencySortAxis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_transparencySortAxis(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_transparencySortAxis", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Camera::ResetTransparencySortSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetTransparencySortSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Camera::get_depth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_depth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_depth(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_depth", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_aspect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_aspect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_aspect(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_aspect", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Camera::ResetAspect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetAspect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::get_velocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_velocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline int32_t UnityEngine::Camera::get_cullingMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_cullingMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_cullingMask(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_cullingMask", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Camera::get_eventMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_eventMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_eventMask(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_eventMask", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Camera::get_layerCullSpherical() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_layerCullSpherical", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_layerCullSpherical(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_layerCullSpherical", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Camera::get_layerCullSphericalInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_layerCullSphericalInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_layerCullSphericalInternal(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_layerCullSphericalInternal", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::CameraType UnityEngine::Camera::get_cameraType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_cameraType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::CameraType>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_cameraType(::UnityEngine::CameraType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_cameraType", {}, { ::i2c::type_of<::UnityEngine::CameraType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Camera::get_skyboxMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_skyboxMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline uint64_t UnityEngine::Camera::get_overrideSceneCullingMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_overrideSceneCullingMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_overrideSceneCullingMask(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_overrideSceneCullingMask", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint64_t UnityEngine::Camera::get_sceneCullingMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_sceneCullingMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline bool UnityEngine::Camera::get_useInteractiveLightBakingData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_useInteractiveLightBakingData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_useInteractiveLightBakingData(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_useInteractiveLightBakingData", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<float_t> UnityEngine::Camera::GetLayerCullDistances() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetLayerCullDistances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void UnityEngine::Camera::SetLayerCullDistances(::ArrayW<float_t> d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetLayerCullDistances", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d);
}
inline ::ArrayW<float_t> UnityEngine::Camera::get_layerCullDistances() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_layerCullDistances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_layerCullDistances(::ArrayW<float_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_layerCullDistances", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Camera::get_PreviewCullingLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_PreviewCullingLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::Camera::get_useOcclusionCulling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_useOcclusionCulling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_useOcclusionCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_useOcclusionCulling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::get_cullingMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_cullingMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_cullingMatrix(::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_cullingMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Camera::ResetCullingMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetCullingMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::Camera::get_backgroundColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_backgroundColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_backgroundColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_backgroundColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::CameraClearFlags UnityEngine::Camera::get_clearFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_clearFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::CameraClearFlags>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_clearFlags(::UnityEngine::CameraClearFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_clearFlags", {}, { ::i2c::type_of<::UnityEngine::CameraClearFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::DepthTextureMode UnityEngine::Camera::get_depthTextureMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_depthTextureMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::DepthTextureMode>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_depthTextureMode(::UnityEngine::DepthTextureMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_depthTextureMode", {}, { ::i2c::type_of<::UnityEngine::DepthTextureMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Camera::get_clearStencilAfterLightingPass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_clearStencilAfterLightingPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_clearStencilAfterLightingPass(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_clearStencilAfterLightingPass", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Camera::SetReplacementShader(::UnityEngine::Shader* shader, ::StringW replacementTag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetReplacementShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader, replacementTag);
}
inline void UnityEngine::Camera::ResetReplacementShader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetReplacementShader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Camera_ProjectionMatrixMode UnityEngine::Camera::get_projectionMatrixMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_projectionMatrixMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera_ProjectionMatrixMode>(this, ___internal_method);
}
inline bool UnityEngine::Camera::get_usePhysicalProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_usePhysicalProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_usePhysicalProperties(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_usePhysicalProperties", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Camera::get_iso() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_iso", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_iso(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_iso", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_shutterSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_shutterSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_shutterSpeed(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_shutterSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_aperture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_aperture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_aperture(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_aperture", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_focusDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_focusDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_focusDistance(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_focusDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_focalLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_focalLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_focalLength(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_focalLength", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Camera::get_bladeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_bladeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_bladeCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_bladeCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Camera::get_curvature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_curvature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_curvature(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_curvature", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_barrelClipping() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_barrelClipping", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_barrelClipping(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_barrelClipping", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_anamorphism() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_anamorphism", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_anamorphism(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_anamorphism", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Camera::get_sensorSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_sensorSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_sensorSize(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_sensorSize", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Camera::get_lensShift() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_lensShift", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_lensShift(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_lensShift", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Camera_GateFitMode UnityEngine::Camera::get_gateFit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_gateFit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera_GateFitMode>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_gateFit(::UnityEngine::Camera_GateFitMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_gateFit", {}, { ::i2c::type_of<::UnityEngine::Camera_GateFitMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::GetGateFittedFieldOfView() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetGateFittedFieldOfView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Camera::GetGateFittedLensShift() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetGateFittedLensShift", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::GetLocalSpaceAim() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetLocalSpaceAim", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::Camera::get_rect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_rect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_rect(::UnityEngine::Rect value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_rect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect UnityEngine::Camera::get_pixelRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_pixelRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_pixelRect(::UnityEngine::Rect value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_pixelRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Camera::get_pixelWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_pixelWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Camera::get_pixelHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_pixelHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Camera::get_scaledPixelWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_scaledPixelWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Camera::get_scaledPixelHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_scaledPixelHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Camera::get_targetTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_targetTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_targetTexture(::UnityEngine::RenderTexture* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_targetTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Camera::get_activeTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_activeTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline int32_t UnityEngine::Camera::get_targetDisplay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_targetDisplay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_targetDisplay(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_targetDisplay", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Camera::SetTargetBuffersImpl(::UnityEngine::RenderBuffer color, ::UnityEngine::RenderBuffer depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "SetTargetBuffersImpl", {}, { ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::UnityEngine::RenderBuffer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, depth);
}
inline void UnityEngine::Camera::SetTargetBuffers(::UnityEngine::RenderBuffer colorBuffer, ::UnityEngine::RenderBuffer depthBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetTargetBuffers", {}, { ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::UnityEngine::RenderBuffer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorBuffer, depthBuffer);
}
inline void UnityEngine::Camera::SetTargetBuffersMRTImpl(::ArrayW<::UnityEngine::RenderBuffer> color, ::UnityEngine::RenderBuffer depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "SetTargetBuffersMRTImpl", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::UnityEngine::RenderBuffer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, depth);
}
inline void UnityEngine::Camera::SetTargetBuffers(::ArrayW<::UnityEngine::RenderBuffer> colorBuffer, ::UnityEngine::RenderBuffer depthBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "SetTargetBuffers", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::UnityEngine::RenderBuffer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorBuffer, depthBuffer);
}
inline ::ArrayW<::StringW> UnityEngine::Camera::GetCameraBufferWarnings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetCameraBufferWarnings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::get_cameraToWorldMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_cameraToWorldMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::get_worldToCameraMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_worldToCameraMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_worldToCameraMatrix(::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_worldToCameraMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::get_projectionMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_projectionMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_projectionMatrix(::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_projectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::get_nonJitteredProjectionMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_nonJitteredProjectionMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_nonJitteredProjectionMatrix(::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_nonJitteredProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Camera::get_useJitteredProjectionMatrixForTransparentRendering() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_useJitteredProjectionMatrixForTransparentRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_useJitteredProjectionMatrixForTransparentRendering(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_useJitteredProjectionMatrixForTransparentRendering", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::get_previousViewProjectionMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_previousViewProjectionMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void UnityEngine::Camera::ResetWorldToCameraMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetWorldToCameraMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Camera::ResetProjectionMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetProjectionMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::CalculateObliqueMatrix(::UnityEngine::Vector4 clipPlane) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CalculateObliqueMatrix", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, clipPlane);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::WorldToScreenPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "WorldToScreenPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position, eye);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::WorldToViewportPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "WorldToViewportPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position, eye);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::ViewportToWorldPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "ViewportToWorldPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position, eye);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::ScreenToWorldPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "ScreenToWorldPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position, eye);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::WorldToScreenPoint(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "WorldToScreenPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::WorldToViewportPoint(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "WorldToViewportPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::ViewportToWorldPoint(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ViewportToWorldPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::ScreenToWorldPoint(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ScreenToWorldPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::ScreenToViewportPoint(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ScreenToViewportPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::ViewportToScreenPoint(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ViewportToScreenPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector2 UnityEngine::Camera::GetFrustumPlaneSizeAt(float_t distance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetFrustumPlaneSizeAt", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, distance);
}
inline ::UnityEngine::Ray UnityEngine::Camera::ViewportPointToRay(::UnityEngine::Vector2 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "ViewportPointToRay", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method, pos, eye);
}
inline ::UnityEngine::Ray UnityEngine::Camera::ViewportPointToRay(::UnityEngine::Vector3 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "ViewportPointToRay", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method, pos, eye);
}
inline ::UnityEngine::Ray UnityEngine::Camera::ViewportPointToRay(::UnityEngine::Vector3 pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ViewportPointToRay", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method, pos);
}
inline ::UnityEngine::Ray UnityEngine::Camera::ScreenPointToRay(::UnityEngine::Vector2 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "ScreenPointToRay", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method, pos, eye);
}
inline ::UnityEngine::Ray UnityEngine::Camera::ScreenPointToRay(::UnityEngine::Vector3 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "ScreenPointToRay", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method, pos, eye);
}
inline ::UnityEngine::Ray UnityEngine::Camera::ScreenPointToRay(::UnityEngine::Vector3 pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ScreenPointToRay", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method, pos);
}
inline void UnityEngine::Camera::CalculateFrustumCornersInternal(::UnityEngine::Rect viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                                 ::by_ref<::ArrayW<::UnityEngine::Vector3>> outCorners) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "CalculateFrustumCornersInternal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(),
                                                               ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewport, z, eye, outCorners);
}
inline void UnityEngine::Camera::CalculateFrustumCorners(::UnityEngine::Rect viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::ArrayW<::UnityEngine::Vector3> outCorners) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CalculateFrustumCorners",
                                                                       {},
                                                                       { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(),
                                                                         ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewport, z, eye, outCorners);
}
inline void UnityEngine::Camera::CalculateProjectionMatrixFromPhysicalPropertiesInternal(::by_ref<::UnityEngine::Matrix4x4> output, float_t focalLength, ::UnityEngine::Vector2 sensorSize,
                                                                                         ::UnityEngine::Vector2 lensShift, float_t nearClip, float_t farClip, float_t gateAspect,
                                                                                         ::UnityEngine::Camera_GateFitMode gateFitMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CalculateProjectionMatrixFromPhysicalPropertiesInternal",
                                                                                    {},
                                                                                    { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<float_t>(),
                                                                                      ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(),
                                                                                      ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Camera_GateFitMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, focalLength, sensorSize, lensShift, nearClip, farClip, gateAspect, gateFitMode);
}
inline void UnityEngine::Camera::CalculateProjectionMatrixFromPhysicalProperties(::by_ref<::UnityEngine::Matrix4x4> output, float_t focalLength, ::UnityEngine::Vector2 sensorSize,
                                                                                 ::UnityEngine::Vector2 lensShift, float_t nearClip, float_t farClip,
                                                                                 ::UnityEngine::Camera_GateFitParameters gateFitParameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CalculateProjectionMatrixFromPhysicalProperties",
                                                                                    {},
                                                                                    { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<float_t>(),
                                                                                      ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(),
                                                                                      ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Camera_GateFitParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, focalLength, sensorSize, lensShift, nearClip, farClip, gateFitParameters);
}
inline float_t UnityEngine::Camera::FocalLengthToFieldOfView(float_t focalLength, float_t sensorSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "FocalLengthToFieldOfView", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, focalLength, sensorSize);
}
inline float_t UnityEngine::Camera::FieldOfViewToFocalLength(float_t fieldOfView, float_t sensorSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "FieldOfViewToFocalLength", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, fieldOfView, sensorSize);
}
inline float_t UnityEngine::Camera::HorizontalToVerticalFieldOfView(float_t horizontalFieldOfView, float_t aspectRatio) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "HorizontalToVerticalFieldOfView", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, horizontalFieldOfView, aspectRatio);
}
inline float_t UnityEngine::Camera::VerticalToHorizontalFieldOfView(float_t verticalFieldOfView, float_t aspectRatio) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "VerticalToHorizontalFieldOfView", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, verticalFieldOfView, aspectRatio);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Camera::get_main() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_main", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Camera::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Camera::get_currentInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_currentInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(nullptr, ___internal_method);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::Camera::get_scene() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_scene", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_scene(::UnityEngine::SceneManagement::Scene value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_scene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Camera::get_stereoEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Camera::get_stereoSeparation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoSeparation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_stereoSeparation(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_stereoSeparation", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_stereoConvergence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoConvergence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_stereoConvergence(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_stereoConvergence", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Camera::get_areVRStereoViewMatricesWithinSingleCullTolerance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_areVRStereoViewMatricesWithinSingleCullTolerance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::StereoTargetEyeMask UnityEngine::Camera::get_stereoTargetEye() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoTargetEye", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::StereoTargetEyeMask>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_stereoTargetEye(::UnityEngine::StereoTargetEyeMask value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_stereoTargetEye", {}, { ::i2c::type_of<::UnityEngine::StereoTargetEyeMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::StereoTargetEyeMask UnityEngine::Camera::get_stereoTargetEyeInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoTargetEyeInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::StereoTargetEyeMask>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_stereoTargetEyeInternal(::UnityEngine::StereoTargetEyeMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_stereoTargetEyeInternal", {}, { ::i2c::type_of<::UnityEngine::StereoTargetEyeMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Camera_MonoOrStereoscopicEye UnityEngine::Camera::get_stereoActiveEye() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoActiveEye", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera_MonoOrStereoscopicEye>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::GetStereoNonJitteredProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetStereoNonJitteredProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, eye);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::GetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye eye) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetStereoViewMatrix", {}, { ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, eye);
}
inline void UnityEngine::Camera::CopyStereoDeviceProjectionMatrixToNonJittered(::UnityEngine::Camera_StereoscopicEye eye) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CopyStereoDeviceProjectionMatrixToNonJittered", {}, { ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eye);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::GetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetStereoProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, eye);
}
inline void UnityEngine::Camera::SetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye, ::UnityEngine::Matrix4x4 matrix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "SetStereoProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eye, matrix);
}
inline void UnityEngine::Camera::ResetStereoProjectionMatrices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetStereoProjectionMatrices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Camera::SetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye eye, ::UnityEngine::Matrix4x4 matrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "SetStereoViewMatrix", {}, { ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eye, matrix);
}
inline void UnityEngine::Camera::ResetStereoViewMatrices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetStereoViewMatrices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Camera::GetAllCamerasCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetAllCamerasCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Camera::GetAllCamerasImpl(::by_ref<::ArrayW<::UnityEngine::Camera*>> cam) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetAllCamerasImpl", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Camera*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cam);
}
inline int32_t UnityEngine::Camera::get_allCamerasCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allCamerasCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Camera>> UnityEngine::Camera::get_allCameras() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allCameras", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Camera>>>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Camera::GetAllCameras(::ArrayW<::UnityEngine::Camera*> cameras) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetAllCameras", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Camera*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cameras);
}
inline bool UnityEngine::Camera::RenderToCubemapImpl(::UnityEngine::Texture* tex, int32_t faceMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderToCubemapImpl", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tex, faceMask);
}
inline bool UnityEngine::Camera::RenderToCubemap(::UnityEngine::Cubemap* cubemap, int32_t faceMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderToCubemap", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cubemap, faceMask);
}
inline bool UnityEngine::Camera::RenderToCubemap(::UnityEngine::Cubemap* cubemap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderToCubemap", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cubemap);
}
inline bool UnityEngine::Camera::RenderToCubemap(::UnityEngine::RenderTexture* cubemap, int32_t faceMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderToCubemap", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cubemap, faceMask);
}
inline bool UnityEngine::Camera::RenderToCubemap(::UnityEngine::RenderTexture* cubemap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderToCubemap", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cubemap);
}
inline int32_t UnityEngine::Camera::GetFilterMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetFilterMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Camera_SceneViewFilterMode UnityEngine::Camera::get_sceneViewFilterMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_sceneViewFilterMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera_SceneViewFilterMode>(this, ___internal_method);
}
inline bool UnityEngine::Camera::get_renderCloudsInSceneView() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_renderCloudsInSceneView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_renderCloudsInSceneView(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_renderCloudsInSceneView", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Camera::RenderToCubemapEyeImpl(::UnityEngine::RenderTexture* cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Camera*>(),
          { "RenderToCubemapEyeImpl", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cubemap, faceMask, stereoEye);
}
inline bool UnityEngine::Camera::RenderToCubemap(::UnityEngine::RenderTexture* cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                          { "RenderToCubemap", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cubemap, faceMask, stereoEye);
}
inline void UnityEngine::Camera::Render() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "Render", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Camera::RenderWithShader(::UnityEngine::Shader* shader, ::StringW replacementTag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderWithShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader, replacementTag);
}
inline void UnityEngine::Camera::RenderDontRestore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderDontRestore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Camera::SubmitRenderRequests(::System::Collections::Generic::List_1<::UnityEngine::Camera_RenderRequest>* renderRequests) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "SubmitRenderRequests", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Camera_RenderRequest>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderRequests);
}
template <typename RequestData> inline void UnityEngine::Camera::SubmitRenderRequest(RequestData renderRequest) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SubmitRenderRequest", { ::i2c::class_of<RequestData>() }, { ::i2c::type_of<RequestData>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<RequestData>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderRequest);
}
inline void UnityEngine::Camera::SubmitRenderRequestsInternal(::System::Object* requests) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SubmitRenderRequestsInternal", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requests);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::Camera::SubmitBuiltInObjectIDRenderRequest(::UnityEngine::RenderTexture* target, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                                                                                                         int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SubmitBuiltInObjectIDRenderRequest",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(this, ___internal_method, target, mipLevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Camera::SetupCurrent(::UnityEngine::Camera* cur) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetupCurrent", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cur);
}
inline void UnityEngine::Camera::CopyFrom(::UnityEngine::Camera* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline int32_t UnityEngine::Camera::get_commandBufferCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_commandBufferCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Camera::RemoveCommandBuffersImpl(::UnityEngine::Rendering::CameraEvent evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RemoveCommandBuffersImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::Camera::RemoveAllCommandBuffersImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RemoveAllCommandBuffersImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Camera::RemoveCommandBuffers(::UnityEngine::Rendering::CameraEvent evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RemoveCommandBuffers", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::Camera::RemoveAllCommandBuffers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RemoveAllCommandBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Camera::AddCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                       { "AddCommandBufferImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, buffer);
}
inline void UnityEngine::Camera::AddCommandBufferAsyncImpl(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer,
                                                           ::UnityEngine::Rendering::ComputeQueueType queueType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "AddCommandBufferAsyncImpl",
                                                                       {},
                                                                       { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                         ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, buffer, queueType);
}
inline void UnityEngine::Camera::RemoveCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                       { "RemoveCommandBufferImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, buffer);
}
inline void UnityEngine::Camera::AddCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "AddCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, buffer);
}
inline void UnityEngine::Camera::AddCommandBufferAsync(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer,
                                                       ::UnityEngine::Rendering::ComputeQueueType queueType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "AddCommandBufferAsync",
                                                                       {},
                                                                       { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                         ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, buffer, queueType);
}
inline void UnityEngine::Camera::RemoveCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "RemoveCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, buffer);
}
inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> UnityEngine::Camera::GetCommandBuffers(::UnityEngine::Rendering::CameraEvent evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetCommandBuffers", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::CommandBuffer*>>(this, ___internal_method, evt);
}
inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> UnityEngine::Camera::GetCommandBuffersImpl(::UnityEngine::Rendering::CameraEvent evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetCommandBuffersImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::CommandBuffer*>>(this, ___internal_method, evt);
}
inline void UnityEngine::Camera::FireOnPreCull(::UnityEngine::Camera* cam) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "FireOnPreCull", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam);
}
inline void UnityEngine::Camera::FireOnPreRender(::UnityEngine::Camera* cam) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "FireOnPreRender", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam);
}
inline void UnityEngine::Camera::FireOnPostRender(::UnityEngine::Camera* cam) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "FireOnPostRender", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam);
}
inline void UnityEngine::Camera::BumpNonSerializedVersion(::UnityEngine::Camera* cam) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "BumpNonSerializedVersion", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam);
}
inline void UnityEngine::Camera::OnlyUsedForTesting1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "OnlyUsedForTesting1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Camera::OnlyUsedForTesting2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "OnlyUsedForTesting2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Camera::TryGetCullingParameters(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "TryGetCullingParameters", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cullingParameters);
}
inline bool UnityEngine::Camera::TryGetCullingParameters(bool stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "TryGetCullingParameters", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stereoAware, cullingParameters);
}
inline bool UnityEngine::Camera::GetCullingParameters_Internal(::UnityEngine::Camera* camera, bool stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                               int32_t managedCullingParametersSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetCullingParameters_Internal",
                                                                       {},
                                                                       { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(),
                                                                         ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera, stereoAware, cullingParameters, managedCullingParametersSize);
}
inline float_t UnityEngine::Camera::get_nearClipPlane_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_nearClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_nearClipPlane_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_nearClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Camera::get_farClipPlane_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_farClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_farClipPlane_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_farClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Camera::get_fieldOfView_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_fieldOfView_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_fieldOfView_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_fieldOfView_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::RenderingPath UnityEngine::Camera::get_renderingPath_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_renderingPath_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderingPath>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_renderingPath_Injected(::System::IntPtr _unity_self, ::UnityEngine::RenderingPath value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_renderingPath_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RenderingPath>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::RenderingPath UnityEngine::Camera::get_actualRenderingPath_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_actualRenderingPath_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderingPath>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::Reset_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "Reset_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Camera::get_allowHDR_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allowHDR_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_allowHDR_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_allowHDR_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Camera::get_allowMSAA_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allowMSAA_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_allowMSAA_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_allowMSAA_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Camera::get_allowDynamicResolution_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_allowDynamicResolution_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_allowDynamicResolution_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_allowDynamicResolution_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Camera::get_forceIntoRenderTexture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_forceIntoRenderTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_forceIntoRenderTexture_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_forceIntoRenderTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Camera::get_orthographicSize_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_orthographicSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_orthographicSize_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_orthographicSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Camera::get_orthographic_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_orthographic_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_orthographic_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_orthographic_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Rendering::OpaqueSortMode UnityEngine::Camera::get_opaqueSortMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_opaqueSortMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OpaqueSortMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_opaqueSortMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::OpaqueSortMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "set_opaqueSortMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::OpaqueSortMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::TransparencySortMode UnityEngine::Camera::get_transparencySortMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_transparencySortMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TransparencySortMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_transparencySortMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::TransparencySortMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "set_transparencySortMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::TransparencySortMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::get_transparencySortAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "get_transparencySortAxis_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::set_transparencySortAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "set_transparencySortAxis_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::ResetTransparencySortSettings_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetTransparencySortSettings_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Camera::get_depth_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_depth_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_depth_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_depth_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Camera::get_aspect_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_aspect_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_aspect_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_aspect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::ResetAspect_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetAspect_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::get_velocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_velocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline int32_t UnityEngine::Camera::get_cullingMask_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_cullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_cullingMask_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_cullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Camera::get_eventMask_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_eventMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_eventMask_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_eventMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Camera::get_layerCullSphericalInternal_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_layerCullSphericalInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_layerCullSphericalInternal_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_layerCullSphericalInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::CameraType UnityEngine::Camera::get_cameraType_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_cameraType_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::CameraType>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_cameraType_Injected(::System::IntPtr _unity_self, ::UnityEngine::CameraType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_cameraType_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CameraType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Camera::get_skyboxMaterial_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_skyboxMaterial_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline uint64_t UnityEngine::Camera::get_overrideSceneCullingMask_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_overrideSceneCullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_overrideSceneCullingMask_Injected(::System::IntPtr _unity_self, uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_overrideSceneCullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline uint64_t UnityEngine::Camera::get_sceneCullingMask_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_sceneCullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Camera::get_useInteractiveLightBakingData_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_useInteractiveLightBakingData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_useInteractiveLightBakingData_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_useInteractiveLightBakingData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::GetLayerCullDistances_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                       { "GetLayerCullDistances_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::SetLayerCullDistances_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                       { "SetLayerCullDistances_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, d);
}
inline bool UnityEngine::Camera::get_useOcclusionCulling_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_useOcclusionCulling_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_useOcclusionCulling_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_useOcclusionCulling_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::get_cullingMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "get_cullingMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::set_cullingMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "set_cullingMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::ResetCullingMatrix_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetCullingMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::get_backgroundColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "get_backgroundColor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::set_backgroundColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "set_backgroundColor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::CameraClearFlags UnityEngine::Camera::get_clearFlags_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_clearFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::CameraClearFlags>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_clearFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::CameraClearFlags value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_clearFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CameraClearFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::DepthTextureMode UnityEngine::Camera::get_depthTextureMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_depthTextureMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::DepthTextureMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_depthTextureMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::DepthTextureMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "set_depthTextureMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::DepthTextureMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Camera::get_clearStencilAfterLightingPass_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_clearStencilAfterLightingPass_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_clearStencilAfterLightingPass_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_clearStencilAfterLightingPass_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::SetReplacementShader_Injected(::System::IntPtr _unity_self, ::System::IntPtr shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> replacementTag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetReplacementShader_Injected",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, shader, replacementTag);
}
inline void UnityEngine::Camera::ResetReplacementShader_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetReplacementShader_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Camera_ProjectionMatrixMode UnityEngine::Camera::get_projectionMatrixMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_projectionMatrixMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera_ProjectionMatrixMode>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Camera::get_usePhysicalProperties_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_usePhysicalProperties_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_usePhysicalProperties_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_usePhysicalProperties_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Camera::get_iso_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_iso_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_iso_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_iso_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Camera::get_shutterSpeed_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_shutterSpeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_shutterSpeed_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_shutterSpeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Camera::get_aperture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_aperture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_aperture_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_aperture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Camera::get_focusDistance_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_focusDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_focusDistance_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_focusDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Camera::get_focalLength_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_focalLength_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_focalLength_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_focalLength_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Camera::get_bladeCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_bladeCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_bladeCount_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_bladeCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::get_curvature_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_curvature_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::set_curvature_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_curvature_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Camera::get_barrelClipping_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_barrelClipping_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_barrelClipping_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_barrelClipping_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Camera::get_anamorphism_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_anamorphism_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_anamorphism_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_anamorphism_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::get_sensorSize_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_sensorSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::set_sensorSize_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_sensorSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::get_lensShift_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_lensShift_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::set_lensShift_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_lensShift_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Camera_GateFitMode UnityEngine::Camera::get_gateFit_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_gateFit_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera_GateFitMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_gateFit_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_GateFitMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_gateFit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_GateFitMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Camera::GetGateFittedFieldOfView_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetGateFittedFieldOfView_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::GetGateFittedLensShift_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "GetGateFittedLensShift_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::GetLocalSpaceAim_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetLocalSpaceAim_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::get_rect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_rect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::set_rect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_rect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::get_pixelRect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_pixelRect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::set_pixelRect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_pixelRect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Camera::get_pixelWidth_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_pixelWidth_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Camera::get_pixelHeight_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_pixelHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Camera::get_scaledPixelWidth_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_scaledPixelWidth_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Camera::get_scaledPixelHeight_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_scaledPixelHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Camera::get_targetTexture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_targetTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_targetTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_targetTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Camera::get_activeTexture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_activeTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Camera::get_targetDisplay_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_targetDisplay_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_targetDisplay_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_targetDisplay_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::SetTargetBuffersImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderBuffer> color, ::by_ref<::UnityEngine::RenderBuffer> depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetTargetBuffersImpl_Injected",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(),
                                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, color, depth);
}
inline void UnityEngine::Camera::SetTargetBuffersMRTImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> color,
                                                                  ::by_ref<::UnityEngine::RenderBuffer> depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetTargetBuffersMRTImpl_Injected",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                      ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, color, depth);
}
inline ::ArrayW<::StringW> UnityEngine::Camera::GetCameraBufferWarnings_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetCameraBufferWarnings_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::get_cameraToWorldMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "get_cameraToWorldMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::get_worldToCameraMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "get_worldToCameraMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::set_worldToCameraMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "set_worldToCameraMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::get_projectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "get_projectionMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::set_projectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "set_projectionMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::get_nonJitteredProjectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "get_nonJitteredProjectionMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::set_nonJitteredProjectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "set_nonJitteredProjectionMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Camera::get_useJitteredProjectionMatrixForTransparentRendering_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_useJitteredProjectionMatrixForTransparentRendering_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_useJitteredProjectionMatrixForTransparentRendering_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "set_useJitteredProjectionMatrixForTransparentRendering_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Camera::get_previousViewProjectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "get_previousViewProjectionMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::ResetWorldToCameraMatrix_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetWorldToCameraMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::ResetProjectionMatrix_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetProjectionMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::CalculateObliqueMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4> clipPlane, ::by_ref<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "CalculateObliqueMatrix_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, clipPlane, ret);
}
inline void UnityEngine::Camera::WorldToScreenPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                             ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "WorldToScreenPoint_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                         ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, position, eye, ret);
}
inline void UnityEngine::Camera::WorldToViewportPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                               ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "WorldToViewportPoint_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                         ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, position, eye, ret);
}
inline void UnityEngine::Camera::ViewportToWorldPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                               ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ViewportToWorldPoint_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                         ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, position, eye, ret);
}
inline void UnityEngine::Camera::ScreenToWorldPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                             ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ScreenToWorldPoint_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                         ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, position, eye, ret);
}
inline void UnityEngine::Camera::ScreenToViewportPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Camera*>(),
          { "ScreenToViewportPoint_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, position, ret);
}
inline void UnityEngine::Camera::ViewportToScreenPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Camera*>(),
          { "ViewportToScreenPoint_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, position, ret);
}
inline void UnityEngine::Camera::GetFrustumPlaneSizeAt_Injected(::System::IntPtr _unity_self, float_t distance, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                          { "GetFrustumPlaneSizeAt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, distance, ret);
}
inline void UnityEngine::Camera::ViewportPointToRay_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                             ::by_ref<::UnityEngine::Ray> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ViewportPointToRay_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                                                         ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, pos, eye, ret);
}
inline void UnityEngine::Camera::ScreenPointToRay_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                           ::by_ref<::UnityEngine::Ray> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ScreenPointToRay_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                                                         ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, pos, eye, ret);
}
inline void UnityEngine::Camera::CalculateFrustumCornersInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> viewport, float_t z,
                                                                          ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> outCorners) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CalculateFrustumCornersInternal_Injected",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(),
                                                                                                          ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>(),
                                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, viewport, z, eye, outCorners);
}
inline void UnityEngine::Camera::CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected(::by_ref<::UnityEngine::Matrix4x4> output, float_t focalLength,
                                                                                                  ::by_ref<::UnityEngine::Vector2> sensorSize, ::by_ref<::UnityEngine::Vector2> lensShift,
                                                                                                  float_t nearClip, float_t farClip, float_t gateAspect,
                                                                                                  ::UnityEngine::Camera_GateFitMode gateFitMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::UnityEngine::Camera_GateFitMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, focalLength, sensorSize, lensShift, nearClip, farClip, gateAspect, gateFitMode);
}
inline ::System::IntPtr UnityEngine::Camera::get_main_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_main_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Camera::get_currentInternal_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_currentInternal_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Camera::get_scene_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SceneManagement::Scene> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "get_scene_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Camera::set_scene_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SceneManagement::Scene> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "set_scene_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Camera::get_stereoEnabled_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Camera::get_stereoSeparation_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoSeparation_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_stereoSeparation_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_stereoSeparation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Camera::get_stereoConvergence_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoConvergence_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_stereoConvergence_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_stereoConvergence_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Camera::get_areVRStereoViewMatricesWithinSingleCullTolerance_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_areVRStereoViewMatricesWithinSingleCullTolerance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::StereoTargetEyeMask UnityEngine::Camera::get_stereoTargetEyeInternal_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoTargetEyeInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::StereoTargetEyeMask>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_stereoTargetEyeInternal_Injected(::System::IntPtr _unity_self, ::UnityEngine::StereoTargetEyeMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "set_stereoTargetEyeInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::StereoTargetEyeMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Camera_MonoOrStereoscopicEye UnityEngine::Camera::get_stereoActiveEye_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_stereoActiveEye_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera_MonoOrStereoscopicEye>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::GetStereoNonJitteredProjectionMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetStereoNonJitteredProjectionMatrix_Injected",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(),
                                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, eye, ret);
}
inline void UnityEngine::Camera::GetStereoViewMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetStereoViewMatrix_Injected",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(),
                                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, eye, ret);
}
inline void UnityEngine::Camera::CopyStereoDeviceProjectionMatrixToNonJittered_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                          { "CopyStereoDeviceProjectionMatrixToNonJittered_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, eye);
}
inline void UnityEngine::Camera::GetStereoProjectionMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetStereoProjectionMatrix_Injected",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(),
                                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, eye, ret);
}
inline void UnityEngine::Camera::SetStereoProjectionMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> matrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetStereoProjectionMatrix_Injected",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(),
                                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, eye, matrix);
}
inline void UnityEngine::Camera::ResetStereoProjectionMatrices_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetStereoProjectionMatrices_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::SetStereoViewMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> matrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetStereoViewMatrix_Injected",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(),
                                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, eye, matrix);
}
inline void UnityEngine::Camera::ResetStereoViewMatrices_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "ResetStereoViewMatrices_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Camera::GetAllCamerasImpl_Injected(::by_ref<::ArrayW<::UnityEngine::Camera*>> cam) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetAllCamerasImpl_Injected", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Camera*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cam);
}
inline bool UnityEngine::Camera::RenderToCubemapImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr tex, int32_t faceMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "RenderToCubemapImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, tex, faceMask);
}
inline int32_t UnityEngine::Camera::GetFilterMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetFilterMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Camera::get_renderCloudsInSceneView_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_renderCloudsInSceneView_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::set_renderCloudsInSceneView_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "set_renderCloudsInSceneView_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Camera::RenderToCubemapEyeImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderToCubemapEyeImpl_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::Camera_MonoOrStereoscopicEye>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, cubemap, faceMask, stereoEye);
}
inline void UnityEngine::Camera::Render_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "Render_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::RenderWithShader_Injected(::System::IntPtr _unity_self, ::System::IntPtr shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> replacementTag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Camera*>(),
          { "RenderWithShader_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, shader, replacementTag);
}
inline void UnityEngine::Camera::RenderDontRestore_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RenderDontRestore_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::SubmitRenderRequestsInternal_Injected(::System::IntPtr _unity_self, ::System::Object* requests) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SubmitRenderRequestsInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, requests);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::Camera::SubmitBuiltInObjectIDRenderRequest_Injected(::System::IntPtr _unity_self, ::System::IntPtr target, int32_t mipLevel,
                                                                                                                  ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SubmitBuiltInObjectIDRenderRequest_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, _unity_self, target, mipLevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Camera::SetupCurrent_Injected(::System::IntPtr cur) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "SetupCurrent_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cur);
}
inline void UnityEngine::Camera::CopyFrom_Injected(::System::IntPtr _unity_self, ::System::IntPtr other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "CopyFrom_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, other);
}
inline int32_t UnityEngine::Camera::get_commandBufferCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "get_commandBufferCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::RemoveCommandBuffersImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                              { "RemoveCommandBuffersImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, evt);
}
inline void UnityEngine::Camera::RemoveAllCommandBuffersImpl_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "RemoveAllCommandBuffersImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Camera::AddCommandBufferImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt, ::System::IntPtr buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Camera*>(),
                       { "AddCommandBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, evt, buffer);
}
inline void UnityEngine::Camera::AddCommandBufferAsyncImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt, ::System::IntPtr buffer,
                                                                    ::UnityEngine::Rendering::ComputeQueueType queueType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "AddCommandBufferAsyncImpl_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(),
                                                                                             ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, evt, buffer, queueType);
}
inline void UnityEngine::Camera::RemoveCommandBufferImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt, ::System::IntPtr buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Camera*>(),
          { "RemoveCommandBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, evt, buffer);
}
inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> UnityEngine::Camera::GetCommandBuffersImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(),
                                                           { "GetCommandBuffersImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::CommandBuffer*>>(nullptr, ___internal_method, _unity_self, evt);
}
inline bool UnityEngine::Camera::GetCullingParameters_Internal_Injected(::System::IntPtr camera, bool stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                                        int32_t managedCullingParametersSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Camera*>(), { "GetCullingParameters_Internal_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(),
                                                                         ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera, stereoAware, cullingParameters, managedCullingParametersSize);
}
inline ::UnityEngine::Camera* UnityEngine::Camera::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Camera*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera::Camera() {}
