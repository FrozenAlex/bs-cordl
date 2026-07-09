#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraXRSettings_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXManager_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraBufferTypes_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraXRSettings_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.ProcessCameraCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::VFX::VFXCameraXRSettings,
                                                                ::UnityEngine::Rendering::CullingResults)>(&::UnityEngine::VFX::VFXManager::ProcessCameraCommand)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6cd49bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                                             { "ProcessCameraCommand",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                 ::i2c::type_of<::UnityEngine::VFX::VFXCameraXRSettings>(), ::i2c::type_of<::UnityEngine::Rendering::CullingResults>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.Internal_ProcessCameraCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::VFX::VFXCameraXRSettings, ::System::IntPtr)>(
    &::UnityEngine::VFX::VFXManager::Internal_ProcessCameraCommand)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6cd4a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "Internal_ProcessCameraCommand",
                                                                                               {},
                                                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                                                 ::i2c::type_of<::UnityEngine::VFX::VFXCameraXRSettings>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.IsCameraBufferNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXCameraBufferTypes (*)(::UnityEngine::Camera*)>(&::UnityEngine::VFX::VFXManager::IsCameraBufferNeeded)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6cd4bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "IsCameraBufferNeeded", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.SetCameraBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::VFX::VFXCameraBufferTypes, ::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::VFX::VFXManager::SetCameraBuffer)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6cd4cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                                { "SetCameraBuffer",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::VFX::VFXCameraBufferTypes>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.Internal_ProcessCameraCommand_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::VFX::VFXCameraXRSettings>, ::System::IntPtr)>(
    &::UnityEngine::VFX::VFXManager::Internal_ProcessCameraCommand_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6cd4b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "Internal_ProcessCameraCommand_Injected",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                    ::i2c::type_of<::by_ref<::UnityEngine::VFX::VFXCameraXRSettings>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.IsCameraBufferNeeded_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXCameraBufferTypes (*)(::System::IntPtr)>(&::UnityEngine::VFX::VFXManager::IsCameraBufferNeeded_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd4c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "IsCameraBufferNeeded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.SetCameraBuffer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::VFX::VFXCameraBufferTypes, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::VFX::VFXManager::SetCameraBuffer_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6cd4df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                                             { "SetCameraBuffer_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::VFX::VFXCameraBufferTypes>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::VFXManager::setStaticF_kDefaultCameraXRSettings(::UnityEngine::VFX::VFXCameraXRSettings value) {
  ::cordl_internals::setStaticField<::UnityEngine::VFX::VFXCameraXRSettings, "kDefaultCameraXRSettings", ::UnityEngine::VFX::VFXManager*>(std::forward<::UnityEngine::VFX::VFXCameraXRSettings>(value));
}
inline ::UnityEngine::VFX::VFXCameraXRSettings UnityEngine::VFX::VFXManager::getStaticF_kDefaultCameraXRSettings() {
  return ::cordl_internals::getStaticField<::UnityEngine::VFX::VFXCameraXRSettings, "kDefaultCameraXRSettings", ::UnityEngine::VFX::VFXManager*>();
}
inline void UnityEngine::VFX::VFXManager::ProcessCameraCommand(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings,
                                                               ::UnityEngine::Rendering::CullingResults results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                                           { "ProcessCameraCommand",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                               ::i2c::type_of<::UnityEngine::VFX::VFXCameraXRSettings>(), ::i2c::type_of<::UnityEngine::Rendering::CullingResults>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam, cmd, camXRSettings, results);
}
inline void UnityEngine::VFX::VFXManager::Internal_ProcessCameraCommand(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings,
                                                                        ::System::IntPtr cullResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "Internal_ProcessCameraCommand",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                                               ::i2c::type_of<::UnityEngine::VFX::VFXCameraXRSettings>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam, cmd, camXRSettings, cullResults);
}
inline ::UnityEngine::VFX::VFXCameraBufferTypes UnityEngine::VFX::VFXManager::IsCameraBufferNeeded(::UnityEngine::Camera* cam) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "IsCameraBufferNeeded", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXCameraBufferTypes>(nullptr, ___internal_method, cam);
}
inline void UnityEngine::VFX::VFXManager::SetCameraBuffer(::UnityEngine::Camera* cam, ::UnityEngine::VFX::VFXCameraBufferTypes type, ::UnityEngine::Texture* buffer, int32_t x, int32_t y,
                                                          int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                              { "SetCameraBuffer",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::VFX::VFXCameraBufferTypes>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam, type, buffer, x, y, width, height);
}
inline void UnityEngine::VFX::VFXManager::Internal_ProcessCameraCommand_Injected(::System::IntPtr cam, ::System::IntPtr cmd, ::by_ref<::UnityEngine::VFX::VFXCameraXRSettings> camXRSettings,
                                                                                 ::System::IntPtr cullResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "Internal_ProcessCameraCommand_Injected",
                                                                                {},
                                                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                  ::i2c::type_of<::by_ref<::UnityEngine::VFX::VFXCameraXRSettings>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam, cmd, camXRSettings, cullResults);
}
inline ::UnityEngine::VFX::VFXCameraBufferTypes UnityEngine::VFX::VFXManager::IsCameraBufferNeeded_Injected(::System::IntPtr cam) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "IsCameraBufferNeeded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXCameraBufferTypes>(nullptr, ___internal_method, cam);
}
inline void UnityEngine::VFX::VFXManager::SetCameraBuffer_Injected(::System::IntPtr cam, ::UnityEngine::VFX::VFXCameraBufferTypes type, ::System::IntPtr buffer, int32_t x, int32_t y, int32_t width,
                                                                   int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                                           { "SetCameraBuffer_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::VFX::VFXCameraBufferTypes>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam, type, buffer, x, y, width, height);
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXManager::VFXManager() {}
