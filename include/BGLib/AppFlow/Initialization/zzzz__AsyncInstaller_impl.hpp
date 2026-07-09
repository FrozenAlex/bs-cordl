#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AsyncInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry.AddMonoInstaller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry::*)(::Zenject::MonoInstaller*)>(
    &::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry::AddMonoInstaller)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*>(),
                                                                                          { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry.AddScriptableObjectInstaller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry::*)(::Zenject::ScriptableObjectInstaller*)>(
    &::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry::AddScriptableObjectInstaller)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*>(),
                                                                                          { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*>(), 1 }));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry::AddMonoInstaller(::Zenject::MonoInstaller* newMonoInstaller) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMonoInstaller);
}
inline void BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry::AddScriptableObjectInstaller(::Zenject::ScriptableObjectInstaller* newScriptableObjectInstaller) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newScriptableObjectInstaller);
}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstaller::*)(
    ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*, ::Zenject::DiContainer*)>(&::BGLib::AppFlow::Initialization::AsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller*>(), { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstaller.LoadResourcesBeforeInstallAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (::BGLib::AppFlow::Initialization::AsyncInstaller::*)(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*, ::Zenject::DiContainer*)>(
        &::BGLib::AppFlow::Initialization::AsyncInstaller::LoadResourcesBeforeInstallAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller*>(), { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstaller::*)()>(&::BGLib::AppFlow::Initialization::AsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x324f1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::AsyncInstaller::LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry,
                                                                                       ::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, registry, container);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::AsyncInstaller::LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry,
                                                                                                                         ::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, registry, container);
}
inline void BGLib::AppFlow::Initialization::AsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::AsyncInstaller* BGLib::AppFlow::Initialization::AsyncInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::AsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncInstaller::AsyncInstaller() {}
