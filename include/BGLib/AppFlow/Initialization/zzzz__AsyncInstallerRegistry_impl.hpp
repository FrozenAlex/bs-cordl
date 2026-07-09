#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AsyncInstallerRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstallerRegistry_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry.AddMonoInstaller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::*)(::Zenject::MonoInstaller*)>(
    &::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddMonoInstaller)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x324f1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>(), { "AddMonoInstaller", {}, { ::i2c::type_of<::Zenject::MonoInstaller*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry.AddScriptableObjectInstaller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::*)(::Zenject::ScriptableObjectInstaller*)>(
    &::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddScriptableObjectInstaller)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x324f268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>(),
                                                                                           { "AddScriptableObjectInstaller", {}, { ::i2c::type_of<::Zenject::ScriptableObjectInstaller*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::*)()>(&::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x324f31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*& BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_get_monoInstallers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoInstallers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* const& BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_get_monoInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoInstallers;
}
constexpr void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_set_monoInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___monoInstallers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*&
BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_get_scriptableObjectInstallers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scriptableObjectInstallers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* const&
BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_get_scriptableObjectInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scriptableObjectInstallers;
}
constexpr void
BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_set_scriptableObjectInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scriptableObjectInstallers = value;
}
inline void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddMonoInstaller(::Zenject::MonoInstaller* newMonoInstaller) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>(), { "AddMonoInstaller", {}, { ::i2c::type_of<::Zenject::MonoInstaller*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMonoInstaller);
}
inline void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddScriptableObjectInstaller(::Zenject::ScriptableObjectInstaller* newScriptableObjectInstaller) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>(),
                                                                                         { "AddScriptableObjectInstaller", {}, { ::i2c::type_of<::Zenject::ScriptableObjectInstaller*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newScriptableObjectInstaller);
}
inline void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* BGLib::AppFlow::Initialization::AsyncInstallerRegistry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>());
}
/// @brief Convert operator to "::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry"
constexpr BGLib::AppFlow::Initialization::AsyncInstallerRegistry::operator ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*() noexcept {
  return static_cast<::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry"
constexpr ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*
BGLib::AppFlow::Initialization::AsyncInstallerRegistry::i___BGLib__AppFlow__Initialization__AsyncInstaller_IInstallerRegistry() noexcept {
  return static_cast<::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AsyncInstallerRegistry() {}
