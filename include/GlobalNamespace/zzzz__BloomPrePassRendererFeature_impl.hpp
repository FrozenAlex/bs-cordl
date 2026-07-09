#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassRendererFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererFeature_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererFeature.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererFeature::*)()>(&::GlobalNamespace::BloomPrePassRendererFeature::Create)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57207b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::BloomPrePassRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57207b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererFeature::*)()>(&::GlobalNamespace::BloomPrePassRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57207bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>& GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__sceneEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneEffectContainer;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> const& GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__sceneEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneEffectContainer;
}
constexpr void GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_set__sceneEffectContainer(::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneEffectContainer = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO>& GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__sceneRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneRenderer;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> const& GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__sceneRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneRenderer;
}
constexpr void GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_set__sceneRenderer(::UnityW<::GlobalNamespace::BloomPrePassRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__bloomFog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__bloomFog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr void GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomFog = value;
}
inline void GlobalNamespace::BloomPrePassRendererFeature::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                          ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::BloomPrePassRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassRendererFeature* GlobalNamespace::BloomPrePassRendererFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassRendererFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRendererFeature::BloomPrePassRendererFeature() {}
