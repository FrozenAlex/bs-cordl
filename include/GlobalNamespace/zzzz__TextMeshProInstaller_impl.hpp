#pragma once
// IWYU pragma private; include "GlobalNamespace/TextMeshProInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "GlobalNamespace/zzzz__TextMeshProInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextMeshProInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TextMeshProInstaller::*)()>(&::GlobalNamespace::TextMeshProInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x36b73c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProInstaller*>(), { ::i2c::class_of<::GlobalNamespace::TextMeshProInstaller*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextMeshProInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextMeshProInstaller::*)(::System::Collections::Generic::IList_1<::UnityW<::TMPro::TMP_FontAsset>>*,
                                                                                                         ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*)>(
    &::GlobalNamespace::TextMeshProInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x36b7408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProInstaller*>(), { ::i2c::class_of<::GlobalNamespace::TextMeshProInstaller*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextMeshProInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextMeshProInstaller::*)()>(&::GlobalNamespace::TextMeshProInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x36b747c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProInstaller*>(), { ::i2c::class_of<::GlobalNamespace::TextMeshProInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextMeshProInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextMeshProInstaller::*)()>(&::GlobalNamespace::TextMeshProInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x36b7578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& GlobalNamespace::TextMeshProInstaller::__cordl_internal_get__fontAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* const& GlobalNamespace::TextMeshProInstaller::__cordl_internal_get__fontAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontAssets;
}
constexpr void GlobalNamespace::TextMeshProInstaller::__cordl_internal_set__fontAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fontAssets = value;
}
inline ::StringW GlobalNamespace::TextMeshProInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextMeshProInstaller*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::TextMeshProInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::TMPro::TMP_FontAsset>>* fontAssets,
                                                                              ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextMeshProInstaller*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fontAssets, registry);
}
inline void GlobalNamespace::TextMeshProInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextMeshProInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextMeshProInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextMeshProInstaller* GlobalNamespace::TextMeshProInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextMeshProInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextMeshProInstaller::TextMeshProInstaller() {}
