#pragma once
// IWYU pragma private; include "BGLib/AppFlow/FeatureAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "BGLib/AppFlow/zzzz__FeatureAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::FeatureAsyncInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::AppFlow::FeatureAsyncInstaller::*)()>(&::BGLib::AppFlow::FeatureAsyncInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324edfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::FeatureAsyncInstaller*>(), { ::i2c::class_of<::BGLib::AppFlow::FeatureAsyncInstaller*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::FeatureAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::FeatureAsyncInstaller::*)(::System::Collections::Generic::IList_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*,
                                                                                                         ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*)>(
    &::BGLib::AppFlow::FeatureAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x324ee40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::FeatureAsyncInstaller*>(), { ::i2c::class_of<::BGLib::AppFlow::FeatureAsyncInstaller*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::FeatureAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::FeatureAsyncInstaller::*)()>(&::BGLib::AppFlow::FeatureAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x324f168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::FeatureAsyncInstaller*>(), { ::i2c::class_of<::BGLib::AppFlow::FeatureAsyncInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::FeatureAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::FeatureAsyncInstaller::*)()>(&::BGLib::AppFlow::FeatureAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324f16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::FeatureAsyncInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW BGLib::AppFlow::FeatureAsyncInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::FeatureAsyncInstaller*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BGLib::AppFlow::FeatureAsyncInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* scriptableObjectInstallers,
                                                                              ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::FeatureAsyncInstaller*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scriptableObjectInstallers, registry);
}
inline void BGLib::AppFlow::FeatureAsyncInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::FeatureAsyncInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::AppFlow::FeatureAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::FeatureAsyncInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::AppFlow::FeatureAsyncInstaller* BGLib::AppFlow::FeatureAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::FeatureAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::FeatureAsyncInstaller::FeatureAsyncInstaller() {}
