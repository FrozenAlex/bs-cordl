#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePass.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePass_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRenderDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePass_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BloomPrePass_Mode::BloomPrePass_Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePass_Mode::BloomPrePass_Mode() {}
constexpr ::GlobalNamespace::BloomPrePass_Mode GlobalNamespace::BloomPrePass_Mode::RenderAndSetData{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::BloomPrePass_Mode GlobalNamespace::BloomPrePass_Mode::SetDataOnly{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x571c03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.LazyInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::LazyInit)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x571c040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { "LazyInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::OnDestroy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x571c274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.OnPreRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::OnPreRender)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x571c324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { "OnPreRender", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.OnPostRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::OnPostRender)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x571d3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { "OnPostRender", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.SetMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePass::*)(::GlobalNamespace::BloomPrePass_Mode)>(&::GlobalNamespace::BloomPrePass::SetMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x571d4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { "SetMode", {}, { ::i2c::type_of<::GlobalNamespace::BloomPrePass_Mode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x571d4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO>& GlobalNamespace::BloomPrePass::__cordl_internal_get__bloomPrepassRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrepassRenderer;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> const& GlobalNamespace::BloomPrePass::__cordl_internal_get__bloomPrepassRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrepassRenderer;
}
constexpr void GlobalNamespace::BloomPrePass::__cordl_internal_set__bloomPrepassRenderer(::UnityW<::GlobalNamespace::BloomPrePassRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomPrepassRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>& GlobalNamespace::BloomPrePass::__cordl_internal_get__bloomPrePassEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> const& GlobalNamespace::BloomPrePass::__cordl_internal_get__bloomPrePassEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr void GlobalNamespace::BloomPrePass::__cordl_internal_set__bloomPrePassEffectContainer(::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomPrePassEffectContainer = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassRenderDataSO>& GlobalNamespace::BloomPrePass::__cordl_internal_get__bloomPrePassRenderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassRenderData;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassRenderDataSO> const& GlobalNamespace::BloomPrePass::__cordl_internal_get__bloomPrePassRenderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassRenderData;
}
constexpr void GlobalNamespace::BloomPrePass::__cordl_internal_set__bloomPrePassRenderData(::UnityW<::GlobalNamespace::BloomPrePassRenderDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomPrePassRenderData = value;
}
constexpr ::GlobalNamespace::BloomPrePass_Mode& GlobalNamespace::BloomPrePass::__cordl_internal_get__mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mode;
}
constexpr ::GlobalNamespace::BloomPrePass_Mode const& GlobalNamespace::BloomPrePass::__cordl_internal_get__mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mode;
}
constexpr void GlobalNamespace::BloomPrePass::__cordl_internal_set__mode(::GlobalNamespace::BloomPrePass_Mode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mode = value;
}
constexpr ::GlobalNamespace::BloomPrePassRenderDataSO_Data*& GlobalNamespace::BloomPrePass::__cordl_internal_get__renderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderData;
}
constexpr ::GlobalNamespace::BloomPrePassRenderDataSO_Data* const& GlobalNamespace::BloomPrePass::__cordl_internal_get__renderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderData;
}
constexpr void GlobalNamespace::BloomPrePass::__cordl_internal_set__renderData(::GlobalNamespace::BloomPrePassRenderDataSO_Data* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderData = value;
}
inline void GlobalNamespace::BloomPrePass::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::LazyInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { "LazyInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::OnPreRender() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { "OnPreRender", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::OnPostRender() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { "OnPostRender", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::SetMode(::GlobalNamespace::BloomPrePass_Mode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { "SetMode", {}, { ::i2c::type_of<::GlobalNamespace::BloomPrePass_Mode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void GlobalNamespace::BloomPrePass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePass* GlobalNamespace::BloomPrePass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePass*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePass::BloomPrePass() {}
