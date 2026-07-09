#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffect.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXOutputEventArgs_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffect.get_visualEffectAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::VFX::VisualEffectAsset> (::UnityEngine::VFX::VisualEffect::*)()>(
    &::UnityEngine::VFX::VisualEffect::get_visualEffectAsset)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6cd5250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffect*>(), { "get_visualEffectAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffect.CreateVFXEventAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXEventAttribute* (::UnityEngine::VFX::VisualEffect::*)()>(&::UnityEngine::VFX::VisualEffect::CreateVFXEventAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6cd53dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffect*>(), { "CreateVFXEventAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffect.InvokeGetCachedEventAttributeForOutputEvent_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXEventAttribute* (*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::VisualEffect::InvokeGetCachedEventAttributeForOutputEvent_Internal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd546c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffect*>(),
                                                             { "InvokeGetCachedEventAttributeForOutputEvent_Internal", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffect.InvokeOutputEventReceived_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::VFX::VisualEffect*, int32_t)>(&::UnityEngine::VFX::VisualEffect::InvokeOutputEventReceived_Internal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6cd54a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffect*>(),
                                                             { "InvokeOutputEventReceived_Internal", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffect.get_visualEffectAsset_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::VFX::VisualEffect::get_visualEffectAsset_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd53a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffect*>(), { "get_visualEffectAsset_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::VFXEventAttribute*& UnityEngine::VFX::VisualEffect::__cordl_internal_get_m_cachedEventAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cachedEventAttribute;
}
constexpr ::UnityEngine::VFX::VFXEventAttribute* const& UnityEngine::VFX::VisualEffect::__cordl_internal_get_m_cachedEventAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cachedEventAttribute;
}
constexpr void UnityEngine::VFX::VisualEffect::__cordl_internal_set_m_cachedEventAttribute(::UnityEngine::VFX::VFXEventAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cachedEventAttribute = value;
}
constexpr ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>*& UnityEngine::VFX::VisualEffect::__cordl_internal_get_outputEventReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputEventReceived;
}
constexpr ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* const& UnityEngine::VFX::VisualEffect::__cordl_internal_get_outputEventReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputEventReceived;
}
constexpr void UnityEngine::VFX::VisualEffect::__cordl_internal_set_outputEventReceived(::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outputEventReceived = value;
}
inline ::UnityW<::UnityEngine::VFX::VisualEffectAsset> UnityEngine::VFX::VisualEffect::get_visualEffectAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffect*>(), { "get_visualEffectAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::VFX::VisualEffectAsset>>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VFXEventAttribute* UnityEngine::VFX::VisualEffect::CreateVFXEventAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffect*>(), { "CreateVFXEventAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXEventAttribute*>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VFXEventAttribute* UnityEngine::VFX::VisualEffect::InvokeGetCachedEventAttributeForOutputEvent_Internal(::UnityEngine::VFX::VisualEffect* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffect*>(),
                                                           { "InvokeGetCachedEventAttributeForOutputEvent_Internal", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXEventAttribute*>(nullptr, ___internal_method, source);
}
inline void UnityEngine::VFX::VisualEffect::InvokeOutputEventReceived_Internal(::UnityEngine::VFX::VisualEffect* source, int32_t eventNameId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffect*>(),
                                                           { "InvokeOutputEventReceived_Internal", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, eventNameId);
}
inline ::System::IntPtr UnityEngine::VFX::VisualEffect::get_visualEffectAsset_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffect*>(), { "get_visualEffectAsset_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffect::VisualEffect() {}
