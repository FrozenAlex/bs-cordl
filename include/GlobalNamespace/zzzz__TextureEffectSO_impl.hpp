#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureEffectSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__TextureEffectSO_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextureEffectSO.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureEffectSO::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::TextureEffectSO::Render)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x572e9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::TextureEffectSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureEffectSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureEffectSO::*)()>(&::GlobalNamespace::TextureEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x572ea0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureEffectSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TextureEffectSO::Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextureEffectSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dest);
}
inline void GlobalNamespace::TextureEffectSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureEffectSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextureEffectSO* GlobalNamespace::TextureEffectSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextureEffectSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureEffectSO::TextureEffectSO() {}
