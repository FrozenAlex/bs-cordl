#pragma once
// IWYU pragma private; include "Zenject/NoTransitionContext.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__NoTransitionContext_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
//  Writing Method size for method: ::Zenject::NoTransitionContext.get_installMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Zenject::DiContainer*>* (::Zenject::NoTransitionContext::*)()>(&::Zenject::NoTransitionContext::get_installMethod)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d2becc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionContext*>(), { "get_installMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionContext.get_postInstallMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Zenject::DiContainer*>* (::Zenject::NoTransitionContext::*)()>(&::Zenject::NoTransitionContext::get_postInstallMethod)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d2bf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionContext*>(), { "get_postInstallMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionContext.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::NoTransitionContext::*)()>(&::Zenject::NoTransitionContext::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6d2bfb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionContext*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::NoTransitionContext::*)()>(&::Zenject::NoTransitionContext::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d2c030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionContext.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::NoTransitionContext::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6d2c034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionContext*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Zenject::NoTransitionInstaller>& Zenject::NoTransitionContext::__cordl_internal_get__noScenesTransitionInstaller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noScenesTransitionInstaller;
}
constexpr ::UnityW<::Zenject::NoTransitionInstaller> const& Zenject::NoTransitionContext::__cordl_internal_get__noScenesTransitionInstaller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noScenesTransitionInstaller;
}
constexpr void Zenject::NoTransitionContext::__cordl_internal_set__noScenesTransitionInstaller(::UnityW<::Zenject::NoTransitionInstaller> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noScenesTransitionInstaller = value;
}
inline ::System::Action_1<::Zenject::DiContainer*>* Zenject::NoTransitionContext::get_installMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionContext*>(), { "get_installMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Zenject::DiContainer*>*>(this, ___internal_method);
}
inline ::System::Action_1<::Zenject::DiContainer*>* Zenject::NoTransitionContext::get_postInstallMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionContext*>(), { "get_postInstallMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Zenject::DiContainer*>*>(this, ___internal_method);
}
inline void Zenject::NoTransitionContext::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionContext*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::NoTransitionContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::InjectTypeInfo* Zenject::NoTransitionContext::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionContext*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::NoTransitionContext* Zenject::NoTransitionContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::NoTransitionContext*>());
}
// Ctor Parameters []
constexpr ::Zenject::NoTransitionContext::NoTransitionContext() {}
