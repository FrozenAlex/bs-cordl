#pragma once
// IWYU pragma private; include "UnityEngine/SystemInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SystemInfo)
namespace System {
class Enum;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct CopyTextureSupport;
}
namespace UnityEngine::Rendering {
struct FoveatedRenderingCaps;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine::Rendering {
struct RenderingThreadingMode;
}
namespace UnityEngine {
struct BatteryStatus;
}
namespace UnityEngine {
struct DeviceType;
}
namespace UnityEngine {
struct HDRDisplaySupportFlags;
}
namespace UnityEngine {
struct OperatingSystemFamily;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class SystemInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::SystemInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SystemInfo*, "UnityEngine", "SystemInfo");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SystemInfo
class CORDL_TYPE SystemInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetBatteryLevel, addr 0x6ae8938, size 0x28, virtual false, abstract: false, final false
  static inline float_t GetBatteryLevel();

  /// @brief Method GetBatteryStatus, addr 0x6ae8988, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::BatteryStatus GetBatteryStatus();

  /// @brief Method GetCompatibleFormat, addr 0x6aea054, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                           ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage usage);

  /// @brief Method GetCopyTextureSupport, addr 0x6ae94f0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::CopyTextureSupport GetCopyTextureSupport();

  /// @brief Method GetDeviceModel, addr 0x6ae8e14, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW GetDeviceModel();

  /// @brief Method GetDeviceModel_Injected, addr 0x6ae9f20, size 0x3c, virtual false, abstract: false, final false
  static inline void GetDeviceModel_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetDeviceName, addr 0x6ae8d4c, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW GetDeviceName();

  /// @brief Method GetDeviceName_Injected, addr 0x6ae9ee4, size 0x3c, virtual false, abstract: false, final false
  static inline void GetDeviceName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetDeviceType, addr 0x6ae8f00, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::DeviceType GetDeviceType();

  /// @brief Method GetDeviceUniqueIdentifier, addr 0x6ae8c84, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW GetDeviceUniqueIdentifier();

  /// @brief Method GetDeviceUniqueIdentifier_Injected, addr 0x6ae9ea8, size 0x3c, virtual false, abstract: false, final false
  static inline void GetDeviceUniqueIdentifier_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetFoveatedRenderingCaps, addr 0x6ae9400, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::FoveatedRenderingCaps GetFoveatedRenderingCaps();

  /// @brief Method GetGraphicsDeviceID, addr 0x6ae9130, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGraphicsDeviceID();

  /// @brief Method GetGraphicsDeviceName, addr 0x6ae8f7c, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW GetGraphicsDeviceName();

  /// @brief Method GetGraphicsDeviceName_Injected, addr 0x6ae9f5c, size 0x3c, virtual false, abstract: false, final false
  static inline void GetGraphicsDeviceName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetGraphicsDeviceType, addr 0x6ae91a8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType();

  /// @brief Method GetGraphicsDeviceVendor, addr 0x6ae9044, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW GetGraphicsDeviceVendor();

  /// @brief Method GetGraphicsDeviceVendorID, addr 0x6ae9180, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGraphicsDeviceVendorID();

  /// @brief Method GetGraphicsDeviceVendor_Injected, addr 0x6ae9f98, size 0x3c, virtual false, abstract: false, final false
  static inline void GetGraphicsDeviceVendor_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetGraphicsDeviceVersion, addr 0x6ae9224, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW GetGraphicsDeviceVersion();

  /// @brief Method GetGraphicsDeviceVersion_Injected, addr 0x6ae9fd4, size 0x3c, virtual false, abstract: false, final false
  static inline void GetGraphicsDeviceVersion_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetGraphicsFormat, addr 0x6aea098, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method GetGraphicsMemorySize, addr 0x6ae8f50, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGraphicsMemorySize();

  /// @brief Method GetGraphicsMultiThreaded, addr 0x6ae9360, size 0x28, virtual false, abstract: false, final false
  static inline bool GetGraphicsMultiThreaded();

  /// @brief Method GetGraphicsShaderLevel, addr 0x6ae9310, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGraphicsShaderLevel();

  /// @brief Method GetGraphicsUVStartsAtTop, addr 0x6ae91f8, size 0x28, virtual false, abstract: false, final false
  static inline bool GetGraphicsUVStartsAtTop();

  /// @brief Method GetHDRDisplaySupportFlags, addr 0x6ae9ca0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::HDRDisplaySupportFlags GetHDRDisplaySupportFlags();

  /// @brief Method GetMaxRenderTextureSize, addr 0x6ae9b88, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetMaxRenderTextureSize();

  /// @brief Method GetMaxTextureSize, addr 0x6ae9b38, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetMaxTextureSize();

  /// @brief Method GetOperatingSystem, addr 0x6ae89b4, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW GetOperatingSystem();

  /// @brief Method GetOperatingSystemFamily, addr 0x6ae8aa0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::OperatingSystemFamily GetOperatingSystemFamily();

  /// @brief Method GetOperatingSystem_Injected, addr 0x6ae9e30, size 0x3c, virtual false, abstract: false, final false
  static inline void GetOperatingSystem_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPhysicalMemoryMB, addr 0x6ae8c58, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetPhysicalMemoryMB();

  /// @brief Method GetProcessorCount, addr 0x6ae8c08, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetProcessorCount();

  /// @brief Method GetProcessorFrequencyMHz, addr 0x6ae8bb8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetProcessorFrequencyMHz();

  /// @brief Method GetProcessorType, addr 0x6ae8acc, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW GetProcessorType();

  /// @brief Method GetProcessorType_Injected, addr 0x6ae9e6c, size 0x3c, virtual false, abstract: false, final false
  static inline void GetProcessorType_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetRenderTextureSupportedMSAASampleCount, addr 0x6aea0d4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetRenderTextureSupportedMSAASampleCount(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method GetRenderTextureSupportedMSAASampleCount_Injected, addr 0x6aea110, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetRenderTextureSupportedMSAASampleCount_Injected(::by_ref<::UnityEngine::RenderTextureDescriptor> desc);

  /// @brief Method GetRenderingThreadingMode, addr 0x6ae93b0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderingThreadingMode GetRenderingThreadingMode();

  /// @brief Method HasHiddenSurfaceRemovalOnGPU, addr 0x6ae9450, size 0x28, virtual false, abstract: false, final false
  static inline bool HasHiddenSurfaceRemovalOnGPU();

  /// @brief Method HasRenderTextureNative, addr 0x6ae98bc, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasRenderTextureNative(::UnityEngine::RenderTextureFormat format);

  /// @brief Method IsFormatSupported, addr 0x6aea010, size 0x44, virtual false, abstract: false, final false
  static inline bool IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage usage);

  /// @brief Method IsValidEnumValue, addr 0x6ae9798, size 0x54, virtual false, abstract: false, final false
  static inline bool IsValidEnumValue(::System::Enum* value);

  /// @brief Method MaxGraphicsBufferSize, addr 0x6ae9c00, size 0x28, virtual false, abstract: false, final false
  static inline int64_t MaxGraphicsBufferSize();

  /// @brief Method SupportedRenderTargetCount, addr 0x6ae9630, size 0x28, virtual false, abstract: false, final false
  static inline int32_t SupportedRenderTargetCount();

  /// @brief Method SupportsComputeShaders, addr 0x6ae9540, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsComputeShaders();

  /// @brief Method SupportsGPUFence, addr 0x6ae9bd8, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsGPUFence();

  /// @brief Method SupportsIndirectArgumentsBuffer, addr 0x6ae9e08, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsIndirectArgumentsBuffer();

  /// @brief Method SupportsInstancing, addr 0x6ae95e0, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsInstancing();

  /// @brief Method SupportsMultisampleAutoResolve, addr 0x6ae9720, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMultisampleAutoResolve();

  /// @brief Method SupportsMultisampleResolveDepth, addr 0x6ae9d90, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMultisampleResolveDepth();

  /// @brief Method SupportsMultisampleResolveStencil, addr 0x6ae9de0, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMultisampleResolveStencil();

  /// @brief Method SupportsMultisampledBackBuffer, addr 0x6ae96d0, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMultisampledBackBuffer();

  /// @brief Method SupportsMultisampledTextures, addr 0x6ae9680, size 0x28, virtual false, abstract: false, final false
  static inline int32_t SupportsMultisampledTextures();

  /// @brief Method SupportsMultiview, addr 0x6ae9cf0, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMultiview();

  /// @brief Method SupportsRandomWriteOnRenderTextureFormat, addr 0x6ae98f8, size 0xd0, virtual false, abstract: false, final false
  static inline bool SupportsRandomWriteOnRenderTextureFormat(::UnityEngine::RenderTextureFormat format);

  /// @brief Method SupportsRandomWriteOnRenderTextureFormatNative, addr 0x6ae99c8, size 0x3c, virtual false, abstract: false, final false
  static inline bool SupportsRandomWriteOnRenderTextureFormatNative(::UnityEngine::RenderTextureFormat format);

  /// @brief Method SupportsRenderTargetArrayIndexFromVertexShader, addr 0x6ae9590, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsRenderTargetArrayIndexFromVertexShader();

  /// @brief Method SupportsRenderTextureFormat, addr 0x6ae97ec, size 0xd0, virtual false, abstract: false, final false
  static inline bool SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat format);

  /// @brief Method SupportsShadows, addr 0x6ae94a0, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsShadows();

  /// @brief Method SupportsStoreAndResolveAction, addr 0x6ae9d40, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsStoreAndResolveAction();

  /// @brief Method SupportsTextureFormat, addr 0x6ae9a04, size 0xd0, virtual false, abstract: false, final false
  static inline bool SupportsTextureFormat(::UnityEngine::TextureFormat format);

  /// @brief Method SupportsTextureFormatNative, addr 0x6ae9ad4, size 0x3c, virtual false, abstract: false, final false
  static inline bool SupportsTextureFormatNative(::UnityEngine::TextureFormat format);

  /// @brief Method UsesLoadStoreActions, addr 0x6ae9c50, size 0x28, virtual false, abstract: false, final false
  static inline bool UsesLoadStoreActions();

  /// @brief Method UsesReversedZBuffer, addr 0x6ae9770, size 0x28, virtual false, abstract: false, final false
  static inline bool UsesReversedZBuffer();

  /// @brief Method get_batteryLevel, addr 0x6ae8910, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_batteryLevel();

  /// @brief Method get_batteryStatus, addr 0x6ae8960, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::BatteryStatus get_batteryStatus();

  /// @brief Method get_copyTextureSupport, addr 0x6ae94c8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::CopyTextureSupport get_copyTextureSupport();

  /// @brief Method get_deviceModel, addr 0x6ae8e10, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_deviceModel();

  /// @brief Method get_deviceName, addr 0x6ae8d48, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_deviceName();

  /// @brief Method get_deviceType, addr 0x6ae8ed8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::DeviceType get_deviceType();

  /// @brief Method get_deviceUniqueIdentifier, addr 0x6ae8c80, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_deviceUniqueIdentifier();

  /// @brief Method get_foveatedRenderingCaps, addr 0x6ae93d8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::FoveatedRenderingCaps get_foveatedRenderingCaps();

  /// @brief Method get_graphicsDeviceID, addr 0x6ae9108, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_graphicsDeviceID();

  /// @brief Method get_graphicsDeviceName, addr 0x6ae8f78, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_graphicsDeviceName();

  /// @brief Method get_graphicsDeviceType, addr 0x6ae8250, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType();

  /// @brief Method get_graphicsDeviceVendor, addr 0x6ae9040, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_graphicsDeviceVendor();

  /// @brief Method get_graphicsDeviceVendorID, addr 0x6ae9158, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_graphicsDeviceVendorID();

  /// @brief Method get_graphicsDeviceVersion, addr 0x6ae9220, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_graphicsDeviceVersion();

  /// @brief Method get_graphicsMemorySize, addr 0x6ae8f28, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_graphicsMemorySize();

  /// @brief Method get_graphicsMultiThreaded, addr 0x6ae9338, size 0x28, virtual false, abstract: false, final false
  static inline bool get_graphicsMultiThreaded();

  /// @brief Method get_graphicsShaderLevel, addr 0x6ae92e8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_graphicsShaderLevel();

  /// @brief Method get_graphicsUVStartsAtTop, addr 0x6ae91d0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_graphicsUVStartsAtTop();

  /// @brief Method get_hasHiddenSurfaceRemovalOnGPU, addr 0x6ae9428, size 0x28, virtual false, abstract: false, final false
  static inline bool get_hasHiddenSurfaceRemovalOnGPU();

  /// @brief Method get_hdrDisplaySupportFlags, addr 0x6ae9c78, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::HDRDisplaySupportFlags get_hdrDisplaySupportFlags();

  /// @brief Method get_maxGraphicsBufferSize, addr 0x6ae4c54, size 0x28, virtual false, abstract: false, final false
  static inline int64_t get_maxGraphicsBufferSize();

  /// @brief Method get_maxRenderTextureSize, addr 0x6ae9b60, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxRenderTextureSize();

  /// @brief Method get_maxTextureSize, addr 0x6ae9b10, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxTextureSize();

  /// @brief Method get_operatingSystem, addr 0x6ae89b0, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_operatingSystem();

  /// @brief Method get_operatingSystemFamily, addr 0x6ae8a78, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::OperatingSystemFamily get_operatingSystemFamily();

  /// @brief Method get_processorCount, addr 0x6ae8be0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_processorCount();

  /// @brief Method get_processorFrequency, addr 0x6ae8b90, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_processorFrequency();

  /// @brief Method get_processorType, addr 0x6ae8ac8, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_processorType();

  /// @brief Method get_renderingThreadingMode, addr 0x6ae9388, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderingThreadingMode get_renderingThreadingMode();

  /// @brief Method get_supportedRenderTargetCount, addr 0x6ae9608, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_supportedRenderTargetCount();

  /// @brief Method get_supportsComputeShaders, addr 0x6ae9518, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsComputeShaders();

  /// @brief Method get_supportsGraphicsFence, addr 0x6ae9bb0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsGraphicsFence();

  /// @brief Method get_supportsIndirectArgumentsBuffer, addr 0x6ae8278, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsIndirectArgumentsBuffer();

  /// @brief Method get_supportsInstancing, addr 0x6ae95b8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsInstancing();

  /// @brief Method get_supportsMultisampleAutoResolve, addr 0x6ae96f8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMultisampleAutoResolve();

  /// @brief Method get_supportsMultisampleResolveDepth, addr 0x6ae9d68, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMultisampleResolveDepth();

  /// @brief Method get_supportsMultisampleResolveStencil, addr 0x6ae9db8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMultisampleResolveStencil();

  /// @brief Method get_supportsMultisampledBackBuffer, addr 0x6ae96a8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMultisampledBackBuffer();

  /// @brief Method get_supportsMultisampledTextures, addr 0x6ae9658, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_supportsMultisampledTextures();

  /// @brief Method get_supportsMultiview, addr 0x6ae9cc8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMultiview();

  /// @brief Method get_supportsRenderTargetArrayIndexFromVertexShader, addr 0x6ae9568, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsRenderTargetArrayIndexFromVertexShader();

  /// @brief Method get_supportsShadows, addr 0x6ae9478, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsShadows();

  /// @brief Method get_supportsStoreAndResolveAction, addr 0x6ae9d18, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsStoreAndResolveAction();

  /// @brief Method get_systemMemorySize, addr 0x6ae8c30, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_systemMemorySize();

  /// @brief Method get_usesLoadStoreActions, addr 0x6ae9c28, size 0x28, virtual false, abstract: false, final false
  static inline bool get_usesLoadStoreActions();

  /// @brief Method get_usesReversedZBuffer, addr 0x6ae9748, size 0x28, virtual false, abstract: false, final false
  static inline bool get_usesReversedZBuffer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemInfo(SystemInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemInfo(SystemInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10377 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SystemInfo) == 0x10, "Size mismatch!");

} // namespace UnityEngine
