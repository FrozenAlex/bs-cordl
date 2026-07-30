#pragma once
// IWYU pragma private; include "UnityEngine/RenderTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTexture)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct ShadowSamplingMode;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine {
struct VRTextureUsage;
}
// Forward declare root types
namespace UnityEngine {
class RenderTexture;
}
// Write type traits
MARK_REF_T(::UnityEngine::RenderTexture*);
DEFINE_IL2CPP_CLASS(::UnityEngine::RenderTexture*, "UnityEngine", "RenderTexture");
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RenderTexture
class CORDL_TYPE RenderTexture : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_antiAliasing, put = set_antiAliasing)) int32_t antiAliasing;

  __declspec(property(put = set_autoGenerateMips)) bool autoGenerateMips;

  __declspec(property(get = get_bindTextureMS)) bool bindTextureMS;

  __declspec(property(get = get_colorBuffer)) ::UnityEngine::RenderBuffer colorBuffer;

  __declspec(property(put = set_depth)) int32_t depth;

  __declspec(property(get = get_depthBuffer)) ::UnityEngine::RenderBuffer depthBuffer;

  __declspec(property(get = get_depthStencilFormat, put = set_depthStencilFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat;

  __declspec(property(get = get_descriptor)) ::UnityEngine::RenderTextureDescriptor descriptor;

  __declspec(property(get = get_dimension, put = set_dimension)) ::UnityEngine::Rendering::TextureDimension dimension;

  __declspec(property(put = set_enableRandomWrite)) bool enableRandomWrite;

  __declspec(property(get = get_format, put = set_format)) ::UnityEngine::RenderTextureFormat format;

  __declspec(property(get = get_graphicsFormat, put = set_graphicsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat;

  __declspec(property(get = get_height, put = set_height)) int32_t height;

  __declspec(property(get = get_sRGB)) bool sRGB;

  __declspec(property(get = get_useDynamicScale, put = set_useDynamicScale)) bool useDynamicScale;

  __declspec(property(get = get_useDynamicScaleExplicit)) bool useDynamicScaleExplicit;

  __declspec(property(get = get_useMipMap, put = set_useMipMap)) bool useMipMap;

  __declspec(property(get = get_volumeDepth, put = set_volumeDepth)) int32_t volumeDepth;

  __declspec(property(get = get_width, put = set_width)) int32_t width;

  /// @brief Method ApplyDynamicScale, addr 0x6abca2c, size 0x80, virtual false, abstract: false, final false
  inline void ApplyDynamicScale();

  /// @brief Method ApplyDynamicScale_Injected, addr 0x6abcaac, size 0x3c, virtual false, abstract: false, final false
  static inline void ApplyDynamicScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method Create, addr 0x6abd0ac, size 0x80, virtual false, abstract: false, final false
  inline bool Create();

  /// @brief Method Create_Injected, addr 0x6abd12c, size 0x3c, virtual false, abstract: false, final false
  static inline bool Create_Injected(::System::IntPtr _unity_self);

  /// @brief Method DiscardContents, addr 0x6abcfc0, size 0x98, virtual false, abstract: false, final false
  inline void DiscardContents(bool discardColor, bool discardDepth);

  /// @brief Method DiscardContents_Injected, addr 0x6abd058, size 0x54, virtual false, abstract: false, final false
  static inline void DiscardContents_Injected(::System::IntPtr _unity_self, bool discardColor, bool discardDepth);

  /// @brief Method GetActive, addr 0x6abcae8, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetActive();

  /// @brief Method GetActive_Injected, addr 0x6abcbfc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetActive_Injected();

  /// @brief Method GetColorBuffer, addr 0x6abcce8, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderBuffer GetColorBuffer();

  /// @brief Method GetColorBuffer_Injected, addr 0x6abcd80, size 0x44, virtual false, abstract: false, final false
  static inline void GetColorBuffer_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderBuffer> ret);

  /// @brief Method GetColorFormat, addr 0x6abb8fc, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetColorFormat(bool suppressWarnings);

  /// @brief Method GetColorFormat_Injected, addr 0x6abb98c, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetColorFormat_Injected(::System::IntPtr _unity_self, bool suppressWarnings);

  /// @brief Method GetCompatibleFormat, addr 0x6abe8dc, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::RenderTextureFormat renderTextureFormat, ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method GetDefaultColorFormat, addr 0x6abe020, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultColorFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method GetDefaultDepthStencilFormat, addr 0x6abe070, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultDepthStencilFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t depth);

  /// @brief Method GetDepthBuffer, addr 0x6abcdc4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderBuffer GetDepthBuffer();

  /// @brief Method GetDepthBuffer_Injected, addr 0x6abce5c, size 0x44, virtual false, abstract: false, final false
  static inline void GetDepthBuffer_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderBuffer> ret);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6abe4cc, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6abec10, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6abea78, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::RenderTextureFormat format, bool disableFallback);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6abeac4, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, bool requestedShadowMap);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6abec1c, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode);

  /// @brief Method GetDescriptor, addr 0x6abbdcc, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor GetDescriptor();

  /// @brief Method GetDescriptor_Injected, addr 0x6abd4c4, size 0x44, virtual false, abstract: false, final false
  static inline void GetDescriptor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderTextureDescriptor> ret);

  /// @brief Method GetShadowSamplingModeForFormat, addr 0x6abe278, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShadowSamplingMode GetShadowSamplingModeForFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method GetShadowSamplingModeForFormat, addr 0x6abeab4, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShadowSamplingMode GetShadowSamplingModeForFormat(::UnityEngine::RenderTextureFormat format);

  /// @brief Method GetTemporary, addr 0x6abec28, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method GetTemporary, addr 0x6abeea8, size 0x64c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height);

  /// @brief Method GetTemporary, addr 0x6abee78, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer);

  /// @brief Method GetTemporary, addr 0x6abee4c, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format);

  /// @brief Method GetTemporary, addr 0x6abee24, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                    ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method GetTemporary, addr 0x6abee00, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                    ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing);

  /// @brief Method GetTemporary, addr 0x6abede0, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                    ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode);

  /// @brief Method GetTemporary, addr 0x6abedc4, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                    ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode,
                                                                    ::UnityEngine::VRTextureUsage vrUsage);

  /// @brief Method GetTemporary, addr 0x6abed20, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                    ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode,
                                                                    ::UnityEngine::VRTextureUsage vrUsage, bool useDynamicScale);

  /// @brief Method GetTemporaryImpl, addr 0x6abec6c, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporaryImpl(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                                                                        ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int32_t antiAliasing,
                                                                        ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage, bool useDynamicScale,
                                                                        ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode);

  /// @brief Method GetTemporary_Internal, addr 0x6abd508, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary_Internal(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method GetTemporary_Internal_Injected, addr 0x6abd628, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetTemporary_Internal_Injected(::by_ref<::UnityEngine::RenderTextureDescriptor> desc);

  /// @brief Method Initialize, addr 0x6abe610, size 0x190, virtual false, abstract: false, final false
  inline void Initialize(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, int32_t mipCount);

  /// @brief Method Internal_Create, addr 0x6abd3b4, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::RenderTexture* rt);

  /// @brief Method IsCreated, addr 0x6abd224, size 0x80, virtual false, abstract: false, final false
  inline bool IsCreated();

  /// @brief Method IsCreated_Injected, addr 0x6abd2a4, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsCreated_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::RenderTexture* New_ctor();

  static inline ::UnityEngine::RenderTexture* New_ctor(::UnityEngine::RenderTextureDescriptor desc);

  static inline ::UnityEngine::RenderTexture* New_ctor(::UnityEngine::RenderTexture* textureToCopy);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                                                       ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                                                       ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, int32_t mipCount);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, int32_t mipCount);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method Release, addr 0x6abd168, size 0x80, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method ReleaseTemporary, addr 0x6abd664, size 0x80, virtual false, abstract: false, final false
  static inline void ReleaseTemporary(::UnityEngine::RenderTexture* temp);

  /// @brief Method ReleaseTemporary_Injected, addr 0x6abd6e4, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseTemporary_Injected(::System::IntPtr temp);

  /// @brief Method Release_Injected, addr 0x6abd1e8, size 0x3c, virtual false, abstract: false, final false
  static inline void Release_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetActive, addr 0x6abcc24, size 0x80, virtual false, abstract: false, final false
  static inline void SetActive(::UnityEngine::RenderTexture* rt);

  /// @brief Method SetActive_Injected, addr 0x6abcca4, size 0x3c, virtual false, abstract: false, final false
  static inline void SetActive_Injected(::System::IntPtr rt);

  /// @brief Method SetColorFormat, addr 0x6abb9d0, size 0x90, virtual false, abstract: false, final false
  inline void SetColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method SetColorFormat_Injected, addr 0x6abba60, size 0x44, virtual false, abstract: false, final false
  static inline void SetColorFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method SetMipMapCount, addr 0x6abcea0, size 0x90, virtual false, abstract: false, final false
  inline void SetMipMapCount(int32_t count);

  /// @brief Method SetMipMapCount_Injected, addr 0x6abcf30, size 0x44, virtual false, abstract: false, final false
  static inline void SetMipMapCount_Injected(::System::IntPtr _unity_self, int32_t count);

  /// @brief Method SetRenderTextureDescriptor, addr 0x6abd3f0, size 0x90, virtual false, abstract: false, final false
  inline void SetRenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method SetRenderTextureDescriptor_Injected, addr 0x6abd480, size 0x44, virtual false, abstract: false, final false
  static inline void SetRenderTextureDescriptor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderTextureDescriptor> desc);

  /// @brief Method SetSRGBReadWrite, addr 0x6abd2e0, size 0x90, virtual false, abstract: false, final false
  inline void SetSRGBReadWrite(bool srgb);

  /// @brief Method SetSRGBReadWrite_Injected, addr 0x6abd370, size 0x44, virtual false, abstract: false, final false
  static inline void SetSRGBReadWrite_Injected(::System::IntPtr _unity_self, bool srgb);

  /// @brief Method SetShadowSamplingMode, addr 0x6abc14c, size 0x90, virtual false, abstract: false, final false
  inline void SetShadowSamplingMode(::UnityEngine::Rendering::ShadowSamplingMode samplingMode);

  /// @brief Method SetShadowSamplingMode_Injected, addr 0x6abcf74, size 0x44, virtual false, abstract: false, final false
  static inline void SetShadowSamplingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ShadowSamplingMode samplingMode);

  /// @brief Method ValidateRenderTextureDesc, addr 0x6abd904, size 0x42c, virtual false, abstract: false, final false
  static inline void ValidateRenderTextureDesc(::by_ref<::UnityEngine::RenderTextureDescriptor> desc);

  /// @brief Method WarnAboutFallbackTo16BitsDepth, addr 0x6abbfd8, size 0xe4, virtual false, abstract: false, final false
  static inline void WarnAboutFallbackTo16BitsDepth(::UnityEngine::RenderTextureFormat format);

  /// @brief Method .ctor, addr 0x6abd7f4, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6abd844, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method .ctor, addr 0x6abdd30, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RenderTexture* textureToCopy);

  /// @brief Method .ctor, addr 0x6abe4d4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  /// @brief Method .ctor, addr 0x6abe0d4, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                    int32_t mipCount);

  /// @brief Method .ctor, addr 0x6abe8d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth);

  /// @brief Method .ctor, addr 0x6abded4, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method .ctor, addr 0x6abe288, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method .ctor, addr 0x6abe31c, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount);

  /// @brief Method .ctor, addr 0x6abe7a0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format);

  /// @brief Method .ctor, addr 0x6abe834, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, int32_t mipCount);

  /// @brief Method .ctor, addr 0x6abe568, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method get_active, addr 0x6abcce0, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> get_active();

  /// @brief Method get_antiAliasing, addr 0x6abc4c0, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_antiAliasing();

  /// @brief Method get_antiAliasing_Injected, addr 0x6abc540, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_antiAliasing_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bindTextureMS, addr 0x6abc650, size 0x80, virtual false, abstract: false, final false
  inline bool get_bindTextureMS();

  /// @brief Method get_bindTextureMS_Injected, addr 0x6abc6d0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_bindTextureMS_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_colorBuffer, addr 0x6abcfb8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderBuffer get_colorBuffer();

  /// @brief Method get_depthBuffer, addr 0x6abcfbc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderBuffer get_depthBuffer();

  /// @brief Method get_depthStencilFormat, addr 0x6abbf58, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthStencilFormat();

  /// @brief Method get_depthStencilFormat_Injected, addr 0x6abc1dc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthStencilFormat_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_descriptor, addr 0x6abde98, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor get_descriptor();

  /// @brief Method get_dimension, addr 0x6abb76c, size 0x80, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension get_dimension();

  /// @brief Method get_dimension_Injected, addr 0x6abb7ec, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension get_dimension_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_format, addr 0x6abbcfc, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureFormat get_format();

  /// @brief Method get_graphicsFormat, addr 0x6abbaa4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();

  /// @brief Method get_height, addr 0x6abb5dc, size 0x80, virtual true, abstract: false, final false
  inline int32_t get_height();

  /// @brief Method get_height_Injected, addr 0x6abb65c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_height_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sRGB, addr 0x6abbc40, size 0x80, virtual false, abstract: false, final false
  inline bool get_sRGB();

  /// @brief Method get_sRGB_Injected, addr 0x6abbcc0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_sRGB_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useDynamicScale, addr 0x6abc7e0, size 0x80, virtual false, abstract: false, final false
  inline bool get_useDynamicScale();

  /// @brief Method get_useDynamicScaleExplicit, addr 0x6abc970, size 0x80, virtual false, abstract: false, final false
  inline bool get_useDynamicScaleExplicit();

  /// @brief Method get_useDynamicScaleExplicit_Injected, addr 0x6abc9f0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useDynamicScaleExplicit_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useDynamicScale_Injected, addr 0x6abc860, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useDynamicScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useMipMap, addr 0x6abbab0, size 0x80, virtual false, abstract: false, final false
  inline bool get_useMipMap();

  /// @brief Method get_useMipMap_Injected, addr 0x6abbb30, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useMipMap_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volumeDepth, addr 0x6abc330, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_volumeDepth();

  /// @brief Method get_volumeDepth_Injected, addr 0x6abc3b0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_volumeDepth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_width, addr 0x6abb44c, size 0x80, virtual true, abstract: false, final false
  inline int32_t get_width();

  /// @brief Method get_width_Injected, addr 0x6abb4cc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_width_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_active, addr 0x6abcce4, size 0x4, virtual false, abstract: false, final false
  static inline void set_active(::UnityEngine::RenderTexture* value);

  /// @brief Method set_antiAliasing, addr 0x6abc57c, size 0x90, virtual false, abstract: false, final false
  inline void set_antiAliasing(int32_t value);

  /// @brief Method set_antiAliasing_Injected, addr 0x6abc60c, size 0x44, virtual false, abstract: false, final false
  static inline void set_antiAliasing_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_autoGenerateMips, addr 0x6abc25c, size 0x90, virtual false, abstract: false, final false
  inline void set_autoGenerateMips(bool value);

  /// @brief Method set_autoGenerateMips_Injected, addr 0x6abc2ec, size 0x44, virtual false, abstract: false, final false
  static inline void set_autoGenerateMips_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_depth, addr 0x6abd720, size 0x90, virtual false, abstract: false, final false
  inline void set_depth(int32_t value);

  /// @brief Method set_depthStencilFormat, addr 0x6abc0bc, size 0x90, virtual false, abstract: false, final false
  inline void set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_depthStencilFormat_Injected, addr 0x6abc218, size 0x44, virtual false, abstract: false, final false
  static inline void set_depthStencilFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_depth_Injected, addr 0x6abd7b0, size 0x44, virtual false, abstract: false, final false
  static inline void set_depth_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_dimension, addr 0x6abb828, size 0x90, virtual true, abstract: false, final false
  inline void set_dimension(::UnityEngine::Rendering::TextureDimension value);

  /// @brief Method set_dimension_Injected, addr 0x6abb8b8, size 0x44, virtual false, abstract: false, final false
  static inline void set_dimension_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::TextureDimension value);

  /// @brief Method set_enableRandomWrite, addr 0x6abc70c, size 0x90, virtual false, abstract: false, final false
  inline void set_enableRandomWrite(bool value);

  /// @brief Method set_enableRandomWrite_Injected, addr 0x6abc79c, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableRandomWrite_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_format, addr 0x6abbe90, size 0xc8, virtual false, abstract: false, final false
  inline void set_format(::UnityEngine::RenderTextureFormat value);

  /// @brief Method set_graphicsFormat, addr 0x6abbaac, size 0x4, virtual false, abstract: false, final false
  inline void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_height, addr 0x6abb698, size 0x90, virtual true, abstract: false, final false
  inline void set_height(int32_t value);

  /// @brief Method set_height_Injected, addr 0x6abb728, size 0x44, virtual false, abstract: false, final false
  static inline void set_height_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_useDynamicScale, addr 0x6abc89c, size 0x90, virtual false, abstract: false, final false
  inline void set_useDynamicScale(bool value);

  /// @brief Method set_useDynamicScale_Injected, addr 0x6abc92c, size 0x44, virtual false, abstract: false, final false
  static inline void set_useDynamicScale_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_useMipMap, addr 0x6abbb6c, size 0x90, virtual false, abstract: false, final false
  inline void set_useMipMap(bool value);

  /// @brief Method set_useMipMap_Injected, addr 0x6abbbfc, size 0x44, virtual false, abstract: false, final false
  static inline void set_useMipMap_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_volumeDepth, addr 0x6abc3ec, size 0x90, virtual false, abstract: false, final false
  inline void set_volumeDepth(int32_t value);

  /// @brief Method set_volumeDepth_Injected, addr 0x6abc47c, size 0x44, virtual false, abstract: false, final false
  static inline void set_volumeDepth_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_width, addr 0x6abb508, size 0x90, virtual true, abstract: false, final false
  inline void set_width(int32_t value);

  /// @brief Method set_width_Injected, addr 0x6abb598, size 0x44, virtual false, abstract: false, final false
  static inline void set_width_Injected(::System::IntPtr _unity_self, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderTexture(RenderTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderTexture(RenderTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10200 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RenderTexture) == 0x18, "Size mismatch!");

} // namespace UnityEngine
