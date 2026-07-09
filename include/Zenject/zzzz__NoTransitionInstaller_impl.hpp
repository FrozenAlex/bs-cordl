#pragma once
// IWYU pragma private; include "Zenject/NoTransitionInstaller.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::NoTransitionInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::NoTransitionInstaller::*)(::Zenject::DiContainer*)>(&::Zenject::NoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d2c17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionInstaller*>(), { ::i2c::class_of<::Zenject::NoTransitionInstaller*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionInstaller.PostInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::NoTransitionInstaller::*)(::Zenject::DiContainer*)>(&::Zenject::NoTransitionInstaller::PostInstall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d2c180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionInstaller*>(), { ::i2c::class_of<::Zenject::NoTransitionInstaller*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::NoTransitionInstaller::*)()>(&::Zenject::NoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d2c184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionInstaller.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::NoTransitionInstaller::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6d2c188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionInstaller*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::NoTransitionInstaller::InstallBindings(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::NoTransitionInstaller*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Zenject::NoTransitionInstaller::PostInstall(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::NoTransitionInstaller*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Zenject::NoTransitionInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::InjectTypeInfo* Zenject::NoTransitionInstaller::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoTransitionInstaller*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::NoTransitionInstaller* Zenject::NoTransitionInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::NoTransitionInstaller*>());
}
// Ctor Parameters []
constexpr ::Zenject::NoTransitionInstaller::NoTransitionInstaller() {}
