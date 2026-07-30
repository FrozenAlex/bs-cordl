#pragma once
// IWYU pragma private; include "UnityEngine/Texture3D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture3D)
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine {
class Texture3D;
}
// Write type traits
MARK_REF_T(::UnityEngine::Texture3D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Texture3D*, "UnityEngine", "Texture3D");
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Texture3D
class CORDL_TYPE Texture3D : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_depth)) int32_t depth;

  __declspec(property(get = get_format)) ::UnityEngine::TextureFormat format;

  __declspec(property(get = get_isReadable)) bool isReadable;

  /// @brief Method Apply, addr 0x6ab9548, size 0xc, virtual false, abstract: false, final false
  inline void Apply();

  /// @brief Method Apply, addr 0x6ab9540, size 0x8, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps);

  /// @brief Method Apply, addr 0x6ab94dc, size 0x64, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl, addr 0x6ab7ff8, size 0x98, virtual false, abstract: false, final false
  inline void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl_Injected, addr 0x6ab8090, size 0x54, virtual false, abstract: false, final false
  static inline void ApplyImpl_Injected(::System::IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method CopyPixels, addr 0x6ab9890, size 0x80, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src);

  /// @brief Method CopyPixels, addr 0x6ab9910, size 0xb0, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t dstElement, int32_t dstMip);

  /// @brief Method CopyPixels, addr 0x6ab99c0, size 0xf8, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, int32_t dstElement, int32_t dstMip,
                         int32_t dstX, int32_t dstY);

  /// @brief Method CopyPixels_Full, addr 0x6ab87d4, size 0xc0, virtual false, abstract: false, final false
  inline void CopyPixels_Full(::UnityEngine::Texture* src);

  /// @brief Method CopyPixels_Full_Injected, addr 0x6ab8894, size 0x44, virtual false, abstract: false, final false
  static inline void CopyPixels_Full_Injected(::System::IntPtr _unity_self, ::System::IntPtr src);

  /// @brief Method CopyPixels_Region, addr 0x6ab8a3c, size 0x128, virtual false, abstract: false, final false
  inline void CopyPixels_Region(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, int32_t dstElement, int32_t dstMip,
                                int32_t dstX, int32_t dstY);

  /// @brief Method CopyPixels_Region_Injected, addr 0x6ab8b64, size 0xc0, virtual false, abstract: false, final false
  static inline void CopyPixels_Region_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight,
                                                int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// @brief Method CopyPixels_Slice, addr 0x6ab88d8, size 0xf0, virtual false, abstract: false, final false
  inline void CopyPixels_Slice(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t dstElement, int32_t dstMip);

  /// @brief Method CopyPixels_Slice_Injected, addr 0x6ab89c8, size 0x74, virtual false, abstract: false, final false
  static inline void CopyPixels_Slice_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t dstElement, int32_t dstMip);

  /// @brief Method CreateExternalTexture, addr 0x6ab93dc, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture3D> CreateExternalTexture(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat format, bool mipChain, ::System::IntPtr nativeTex);

  /// @brief Method GetImageData, addr 0x6ab8c24, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetImageData();

  /// @brief Method GetImageData_Injected, addr 0x6ab8ca4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetImageData_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPixel, addr 0x6ab96a8, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(int32_t x, int32_t y, int32_t z);

  /// @brief Method GetPixel, addr 0x6ab9720, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(int32_t x, int32_t y, int32_t z, int32_t mipLevel);

  /// @brief Method GetPixelBilinear, addr 0x6ab979c, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelBilinear(float_t u, float_t v, float_t w);

  /// @brief Method GetPixelBilinear, addr 0x6ab9810, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelBilinear(float_t u, float_t v, float_t w, int32_t mipLevel);

  /// @brief Method GetPixelBilinearImpl, addr 0x6ab7c44, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelBilinearImpl(int32_t mip, float_t u, float_t v, float_t w);

  /// @brief Method GetPixelBilinearImpl_Injected, addr 0x6ab7d18, size 0x7c, virtual false, abstract: false, final false
  static inline void GetPixelBilinearImpl_Injected(::System::IntPtr _unity_self, int32_t mip, float_t u, float_t v, float_t w, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t mipLevel);

  /// @brief Method GetPixelImpl, addr 0x6ab7b04, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelImpl(int32_t mip, int32_t x, int32_t y, int32_t z);

  /// @brief Method GetPixelImpl_Injected, addr 0x6ab7bd0, size 0x74, virtual false, abstract: false, final false
  static inline void GetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t mip, int32_t x, int32_t y, int32_t z, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method GetPixels, addr 0x6ab81b8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetPixels();

  /// @brief Method GetPixels, addr 0x6ab80e4, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetPixels(int32_t miplevel);

  /// @brief Method GetPixels32, addr 0x6ab8294, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32> GetPixels32();

  /// @brief Method GetPixels32, addr 0x6ab81c0, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32> GetPixels32(int32_t miplevel);

  /// @brief Method GetPixels32_Injected, addr 0x6ab8250, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Color32> GetPixels32_Injected(::System::IntPtr _unity_self, int32_t miplevel);

  /// @brief Method GetPixels_Injected, addr 0x6ab8174, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Color> GetPixels_Injected(::System::IntPtr _unity_self, int32_t miplevel);

  /// @brief Method Internal_Create, addr 0x6ab7e30, size 0xf4, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Texture3D* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);

  /// @brief Method Internal_CreateImpl, addr 0x6ab7d94, size 0x9c, virtual false, abstract: false, final false
  static inline bool Internal_CreateImpl(::UnityEngine::Texture3D* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                         ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool createUninitialized);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, ::System::IntPtr nativeTex);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex,
                                                   bool createUninitialized);

  /// @brief Method SetPixel, addr 0x6ab9554, size 0xa8, virtual false, abstract: false, final false
  inline void SetPixel(int32_t x, int32_t y, int32_t z, ::UnityEngine::Color color);

  /// @brief Method SetPixel, addr 0x6ab95fc, size 0xac, virtual false, abstract: false, final false
  inline void SetPixel(int32_t x, int32_t y, int32_t z, ::UnityEngine::Color color, int32_t mipLevel);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetPixelData(::ArrayW<T> data, int32_t mipLevel, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetPixelData(::Unity::Collections::NativeArray_1<T> data, int32_t mipLevel, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImpl, addr 0x6ab86a0, size 0xc0, virtual false, abstract: false, final false
  inline bool SetPixelDataImpl(::System::IntPtr data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImplArray, addr 0x6ab856c, size 0xc0, virtual false, abstract: false, final false
  inline bool SetPixelDataImplArray(::System::Array* data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImplArray_Injected, addr 0x6ab862c, size 0x74, virtual false, abstract: false, final false
  static inline bool SetPixelDataImplArray_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImpl_Injected, addr 0x6ab8760, size 0x74, virtual false, abstract: false, final false
  static inline bool SetPixelDataImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelImpl, addr 0x6ab79c8, size 0xc8, virtual false, abstract: false, final false
  inline void SetPixelImpl(int32_t mip, int32_t x, int32_t y, int32_t z, ::UnityEngine::Color color);

  /// @brief Method SetPixelImpl_Injected, addr 0x6ab7a90, size 0x74, virtual false, abstract: false, final false
  static inline void SetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t mip, int32_t x, int32_t y, int32_t z, ::by_ref<::UnityEngine::Color> color);

  /// @brief Method SetPixels, addr 0x6ab83fc, size 0x8, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color> colors);

  /// @brief Method SetPixels, addr 0x6ab829c, size 0x10c, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color> colors, int32_t miplevel);

  /// @brief Method SetPixels32, addr 0x6ab8564, size 0x8, virtual false, abstract: false, final false
  inline void SetPixels32(::ArrayW<::UnityEngine::Color32> colors);

  /// @brief Method SetPixels32, addr 0x6ab8404, size 0x10c, virtual false, abstract: false, final false
  inline void SetPixels32(::ArrayW<::UnityEngine::Color32> colors, int32_t miplevel);

  /// @brief Method SetPixels32_Injected, addr 0x6ab8510, size 0x54, virtual false, abstract: false, final false
  static inline void SetPixels32_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colors, int32_t miplevel);

  /// @brief Method SetPixels_Injected, addr 0x6ab83a8, size 0x54, virtual false, abstract: false, final false
  static inline void SetPixels_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colors, int32_t miplevel);

  /// @brief Method UpdateExternalTexture, addr 0x6ab7f24, size 0x90, virtual false, abstract: false, final false
  inline void UpdateExternalTexture(::System::IntPtr nativeTex);

  /// @brief Method UpdateExternalTexture_Injected, addr 0x6ab7fb4, size 0x44, virtual false, abstract: false, final false
  static inline void UpdateExternalTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr nativeTex);

  /// @brief Method ValidateIsNotCrunched, addr 0x6ab8f78, size 0x54, virtual false, abstract: false, final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x6ab8ce0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x6ab8e00, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  /// @brief Method .ctor, addr 0x6ab8d5c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x6ab8e8c, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  /// @brief Method .ctor, addr 0x6ab9194, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor, addr 0x6ab9254, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool createUninitialized);

  /// @brief Method .ctor, addr 0x6ab9318, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, ::System::IntPtr nativeTex);

  /// @brief Method .ctor, addr 0x6ab8fcc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount);

  /// @brief Method .ctor, addr 0x6ab8fec, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex);

  /// @brief Method .ctor, addr 0x6ab9008, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex, bool createUninitialized);

  /// @brief Method get_depth, addr 0x6ab7794, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_depth();

  /// @brief Method get_depth_Injected, addr 0x6ab7814, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_depth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_format, addr 0x6ab7850, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureFormat get_format();

  /// @brief Method get_format_Injected, addr 0x6ab78d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextureFormat get_format_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isReadable, addr 0x6ab790c, size 0x80, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_isReadable_Injected, addr 0x6ab798c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadable_Injected(::System::IntPtr _unity_self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture3D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Texture3D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture3D(Texture3D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture3D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture3D(Texture3D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10197 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Texture3D) == 0x18, "Size mismatch!");

} // namespace UnityEngine
