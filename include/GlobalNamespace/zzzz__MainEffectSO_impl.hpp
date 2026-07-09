#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectSO.PreRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectSO::*)()>(&::GlobalNamespace::MainEffectSO::PreRender)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e09660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectSO.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectSO::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, float_t)>(
    &::GlobalNamespace::MainEffectSO::Render)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e09664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectSO.PostRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectSO::*)(float_t)>(&::GlobalNamespace::MainEffectSO::PostRender)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e09668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectSO.get_hasPostProcessEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MainEffectSO::*)()>(&::GlobalNamespace::MainEffectSO::get_hasPostProcessEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e0966c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectSO::*)()>(&::GlobalNamespace::MainEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e08d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainEffectSO::PreRender() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectSO::Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float_t fade) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dest, fade);
}
inline void GlobalNamespace::MainEffectSO::PostRender(float_t fade) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fade);
}
inline bool GlobalNamespace::MainEffectSO::get_hasPostProcessEffect() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectSO* GlobalNamespace::MainEffectSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectSO::MainEffectSO() {}
