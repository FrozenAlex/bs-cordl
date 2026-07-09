#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__ScriptableObjectReferenceAsyncInstaller_1_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicInstaller_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollectionSO_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicInstaller.get_assetRuntimeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapCharacteristicInstaller::*)()>(&::GlobalNamespace::BeatmapCharacteristicInstaller::get_assetRuntimeKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x36ac9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicInstaller*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicInstaller*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicInstaller::*)()>(&::GlobalNamespace::BeatmapCharacteristicInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x36aca1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicInstaller*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicInstaller.LoadCharacteristicCollectionAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO>> (*)()>(
        &::GlobalNamespace::BeatmapCharacteristicInstaller::LoadCharacteristicCollectionAsync)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x36acab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicInstaller*>(), { "LoadCharacteristicCollectionAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicInstaller::*)()>(&::GlobalNamespace::BeatmapCharacteristicInstaller::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x36acb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::BeatmapCharacteristicInstaller::get_assetRuntimeKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicInstaller*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO>>
GlobalNamespace::BeatmapCharacteristicInstaller::LoadCharacteristicCollectionAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicInstaller*>(), { "LoadCharacteristicCollectionAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO>>>(
      nullptr, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristicInstaller* GlobalNamespace::BeatmapCharacteristicInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCharacteristicInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicInstaller::BeatmapCharacteristicInstaller() {}
