#pragma once
// IWYU pragma private; include "GlobalNamespace/ImageEffectController.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ImageEffectController_def.hpp"
#include "GlobalNamespace/zzzz__ImageEffectController_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController_RenderImageCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImageEffectController_RenderImageCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::ImageEffectController_RenderImageCallback::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x57256f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImageEffectController_RenderImageCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController_RenderImageCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImageEffectController_RenderImageCallback::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::ImageEffectController_RenderImageCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5725840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImageEffectController_RenderImageCallback*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ImageEffectController_RenderImageCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController_RenderImageCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::ImageEffectController_RenderImageCallback::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::ImageEffectController_RenderImageCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5725854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImageEffectController_RenderImageCallback*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ImageEffectController_RenderImageCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController_RenderImageCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImageEffectController_RenderImageCallback::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::ImageEffectController_RenderImageCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x572587c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImageEffectController_RenderImageCallback*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ImageEffectController_RenderImageCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ImageEffectController_RenderImageCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImageEffectController_RenderImageCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::ImageEffectController_RenderImageCallback::Invoke(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ImageEffectController_RenderImageCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dest);
}
inline ::System::IAsyncResult* GlobalNamespace::ImageEffectController_RenderImageCallback::BeginInvoke(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest,
                                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ImageEffectController_RenderImageCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, src, dest, callback, object);
}
inline void GlobalNamespace::ImageEffectController_RenderImageCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ImageEffectController_RenderImageCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::ImageEffectController_RenderImageCallback* GlobalNamespace::ImageEffectController_RenderImageCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ImageEffectController_RenderImageCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImageEffectController_RenderImageCallback::ImageEffectController_RenderImageCallback() {}
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController.SetCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImageEffectController::*)(::GlobalNamespace::ImageEffectController_RenderImageCallback*)>(
    &::GlobalNamespace::ImageEffectController::SetCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57256d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImageEffectController*>(), { "SetCallback", {}, { ::i2c::type_of<::GlobalNamespace::ImageEffectController_RenderImageCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController.OnRenderImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImageEffectController::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::ImageEffectController::OnRenderImage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57256d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImageEffectController*>(),
                                                             { "OnRenderImage", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImageEffectController::*)()>(&::GlobalNamespace::ImageEffectController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57256f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImageEffectController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ImageEffectController_RenderImageCallback*& GlobalNamespace::ImageEffectController::__cordl_internal_get__renderImageCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderImageCallback;
}
constexpr ::GlobalNamespace::ImageEffectController_RenderImageCallback* const& GlobalNamespace::ImageEffectController::__cordl_internal_get__renderImageCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderImageCallback;
}
constexpr void GlobalNamespace::ImageEffectController::__cordl_internal_set__renderImageCallback(::GlobalNamespace::ImageEffectController_RenderImageCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderImageCallback = value;
}
inline void GlobalNamespace::ImageEffectController::SetCallback(::GlobalNamespace::ImageEffectController_RenderImageCallback* renderImageCallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImageEffectController*>(),
                                                                                         { "SetCallback", {}, { ::i2c::type_of<::GlobalNamespace::ImageEffectController_RenderImageCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderImageCallback);
}
inline void GlobalNamespace::ImageEffectController::OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImageEffectController*>(),
                                                           { "OnRenderImage", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dest);
}
inline void GlobalNamespace::ImageEffectController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImageEffectController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ImageEffectController* GlobalNamespace::ImageEffectController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ImageEffectController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImageEffectController::ImageEffectController() {}
