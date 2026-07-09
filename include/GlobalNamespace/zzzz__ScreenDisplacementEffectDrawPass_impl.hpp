#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenDisplacementEffectDrawPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectDrawPass_def.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectDrawPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::*)()>(
    &::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e0e75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::__cordl_internal_get_rendererListHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::__cordl_internal_get_rendererListHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHandle;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::__cordl_internal_set_rendererListHandle(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererListHandle = value;
}
inline void GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData* GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::ScreenDisplacementEffectDrawPass_PassData() {}
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectDrawPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectDrawPass::*)(::UnityEngine::LayerMask)>(
    &::GlobalNamespace::ScreenDisplacementEffectDrawPass::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5e0d090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectDrawPass.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectDrawPass::*)()>(&::GlobalNamespace::ScreenDisplacementEffectDrawPass::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e0d198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectDrawPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectDrawPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::ScreenDisplacementEffectDrawPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x9dc;
  constexpr static std::size_t addrs = 0x5e0daac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectDrawPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectDrawPass::*)(
    ::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::GlobalNamespace::ScreenDisplacementEffectDrawPass::Render)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e0e488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>(),
            { "Render", {}, { ::i2c::type_of<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GlobalNamespace::ScreenDisplacementEffectDrawPass::__cordl_internal_get__layerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::ScreenDisplacementEffectDrawPass::__cordl_internal_get__layerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerMask;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectDrawPass::__cordl_internal_set__layerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layerMask = value;
}
inline void GlobalNamespace::ScreenDisplacementEffectDrawPass::setStaticF__shaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "_shaderTagIdList", ::GlobalNamespace::ScreenDisplacementEffectDrawPass*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* GlobalNamespace::ScreenDisplacementEffectDrawPass::getStaticF__shaderTagIdList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "_shaderTagIdList", ::GlobalNamespace::ScreenDisplacementEffectDrawPass*>();
}
inline void GlobalNamespace::ScreenDisplacementEffectDrawPass::_ctor(::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerMask);
}
inline void GlobalNamespace::ScreenDisplacementEffectDrawPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenDisplacementEffectDrawPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                 ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void GlobalNamespace::ScreenDisplacementEffectDrawPass::Render(::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData* data,
                                                                      ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>(),
          { "Render", {}, { ::i2c::type_of<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::ScreenDisplacementEffectDrawPass* GlobalNamespace::ScreenDisplacementEffectDrawPass::New_ctor(::UnityEngine::LayerMask layerMask) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>(layerMask));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ScreenDisplacementEffectDrawPass::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ScreenDisplacementEffectDrawPass::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenDisplacementEffectDrawPass::ScreenDisplacementEffectDrawPass() {}
