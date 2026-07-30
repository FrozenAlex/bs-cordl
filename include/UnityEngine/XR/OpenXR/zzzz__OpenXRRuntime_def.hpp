#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRRuntime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRRuntime)
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRRuntime;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::OpenXRRuntime*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRRuntime*, "UnityEngine.XR.OpenXR", "OpenXRRuntime");
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRRuntime
class CORDL_TYPE OpenXRRuntime : public ::System::Object {
public:
  // Declarations
  /// @brief Field wantsToQuit, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_wantsToQuit, put = setStaticF_wantsToQuit)) ::System::Func_1<bool>* wantsToQuit;

  /// @brief Field wantsToRestart, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_wantsToRestart, put = setStaticF_wantsToRestart)) ::System::Func_1<bool>* wantsToRestart;

  /// @brief Method GetAvailableExtensions, addr 0x69e6b58, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetAvailableExtensions();

  /// @brief Method GetEnabledExtensions, addr 0x69e6a80, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetEnabledExtensions();

  /// @brief Method GetExtensionVersion, addr 0x69e6d2c, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t GetExtensionVersion(::StringW extensionName);

  /// @brief Method GetLastError, addr 0x69eed9c, size 0xa8, virtual false, abstract: false, final false
  static inline bool GetLastError(::by_ref<::StringW> error);

  /// @brief Method Internal_GetAPIVersion, addr 0x69ee11c, size 0x9c, virtual false, abstract: false, final false
  static inline bool Internal_GetAPIVersion(::by_ref<uint16_t> major, ::by_ref<uint16_t> minor, ::by_ref<uint32_t> patch);

  /// @brief Method Internal_GetAvailableExtensionCount, addr 0x69ee4d4, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t Internal_GetAvailableExtensionCount();

  /// @brief Method Internal_GetAvailableExtensionName, addr 0x69ee538, size 0xb0, virtual false, abstract: false, final false
  static inline bool Internal_GetAvailableExtensionName(uint32_t index, ::by_ref<::StringW> extensionName);

  /// @brief Method Internal_GetAvailableExtensionNamePtr, addr 0x69eec9c, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_GetAvailableExtensionNamePtr(uint32_t index, ::by_ref<::System::IntPtr> extensionName);

  /// @brief Method Internal_GetEnabledExtensionCount, addr 0x69ee3c0, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t Internal_GetEnabledExtensionCount();

  /// @brief Method Internal_GetEnabledExtensionName, addr 0x69ee424, size 0xb0, virtual false, abstract: false, final false
  static inline bool Internal_GetEnabledExtensionName(uint32_t index, ::by_ref<::StringW> extensionName);

  /// @brief Method Internal_GetEnabledExtensionNamePtr, addr 0x69eec18, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_GetEnabledExtensionNamePtr(uint32_t index, ::by_ref<::System::IntPtr> outName);

  /// @brief Method Internal_GetExtensionVersion, addr 0x69ee328, size 0x98, virtual false, abstract: false, final false
  static inline uint32_t Internal_GetExtensionVersion(::StringW extensionName);

  /// @brief Method Internal_GetLastError, addr 0x69eed20, size 0x7c, virtual false, abstract: false, final false
  static inline bool Internal_GetLastError(::by_ref<::System::IntPtr> error);

  /// @brief Method Internal_GetPluginVersion, addr 0x69ee1b8, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_GetPluginVersion(::by_ref<::System::IntPtr> pluginVersionPtr);

  /// @brief Method Internal_GetRuntimeName, addr 0x69edffc, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_GetRuntimeName(::by_ref<::System::IntPtr> runtimeNamePtr);

  /// @brief Method Internal_GetRuntimeVersion, addr 0x69ee080, size 0x9c, virtual false, abstract: false, final false
  static inline bool Internal_GetRuntimeVersion(::by_ref<uint16_t> major, ::by_ref<uint16_t> minor, ::by_ref<uint32_t> patch);

  /// @brief Method Internal_GetSoftRestartLoopAtInitialization, addr 0x69ee974, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_GetSoftRestartLoopAtInitialization();

  /// @brief Method Internal_IsExtensionEnabled, addr 0x69ee28c, size 0x9c, virtual false, abstract: false, final false
  static inline bool Internal_IsExtensionEnabled(::StringW extensionName);

  /// @brief Method Internal_SetSoftRestartLoopAtInitialization, addr 0x69ee9e4, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetSoftRestartLoopAtInitialization(bool value);

  /// @brief Method InvokeEvent, addr 0x69eea60, size 0x1b8, virtual false, abstract: false, final false
  static inline bool InvokeEvent(::System::Func_1<bool>* func);

  /// @brief Method IsExtensionEnabled, addr 0x69ee288, size 0x4, virtual false, abstract: false, final false
  static inline bool IsExtensionEnabled(::StringW extensionName);

  /// @brief Method LogLastError, addr 0x69eee44, size 0x78, virtual false, abstract: false, final false
  static inline void LogLastError();

  /// @brief Method ShouldQuit, addr 0x69edf30, size 0x4c, virtual false, abstract: false, final false
  static inline bool ShouldQuit();

  /// @brief Method ShouldRestart, addr 0x69edee4, size 0x4c, virtual false, abstract: false, final false
  static inline bool ShouldRestart();

  /// @brief Method add_wantsToQuit, addr 0x69ee5e8, size 0xe0, virtual false, abstract: false, final false
  static inline void add_wantsToQuit(::System::Func_1<bool>* value);

  /// @brief Method add_wantsToRestart, addr 0x69ee7a8, size 0xe4, virtual false, abstract: false, final false
  static inline void add_wantsToRestart(::System::Func_1<bool>* value);

  static inline ::System::Func_1<bool>* getStaticF_wantsToQuit();

  static inline ::System::Func_1<bool>* getStaticF_wantsToRestart();

  /// @brief Method get_apiVersion, addr 0x69e6970, size 0x110, virtual false, abstract: false, final false
  static inline ::StringW get_apiVersion();

  /// @brief Method get_name, addr 0x69e6748, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW get_name();

  /// @brief Method get_pluginVersion, addr 0x69e68e4, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW get_pluginVersion();

  /// @brief Method get_retryInitializationOnFormFactorErrors, addr 0x69ee970, size 0x4, virtual false, abstract: false, final false
  static inline bool get_retryInitializationOnFormFactorErrors();

  /// @brief Method get_version, addr 0x69e67d4, size 0x110, virtual false, abstract: false, final false
  static inline ::StringW get_version();

  /// @brief Method isRuntimeAPIVersionGreaterThan1_1, addr 0x69ee23c, size 0x4c, virtual false, abstract: false, final false
  static inline bool isRuntimeAPIVersionGreaterThan1_1();

  /// @brief Method remove_wantsToQuit, addr 0x69ee6c8, size 0xe0, virtual false, abstract: false, final false
  static inline void remove_wantsToQuit(::System::Func_1<bool>* value);

  /// @brief Method remove_wantsToRestart, addr 0x69ee88c, size 0xe4, virtual false, abstract: false, final false
  static inline void remove_wantsToRestart(::System::Func_1<bool>* value);

  static inline void setStaticF_wantsToQuit(::System::Func_1<bool>* value);

  static inline void setStaticF_wantsToRestart(::System::Func_1<bool>* value);

  /// @brief Method set_retryInitializationOnFormFactorErrors, addr 0x69ee9e0, size 0x4, virtual false, abstract: false, final false
  static inline void set_retryInitializationOnFormFactorErrors(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRRuntime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRRuntime(OpenXRRuntime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRRuntime(OpenXRRuntime const&) = delete;

  /// @brief Field LibraryName offset 0xffffffff size 0x8
  static constexpr ::ConstString LibraryName{ u"UnityOpenXR" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18481 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRRuntime) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
