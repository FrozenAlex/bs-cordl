#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityPlayerLoopManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityPlayerLoopManager_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityPlayerLoopManager.InitializePlayerLoop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::UnityPlayerLoopManager::InitializePlayerLoop)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x570c1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager*>(), { "InitializePlayerLoop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityPlayerLoopManager.RemoveDisabledSubsystems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>, ::ArrayW<::System::Type*>)>(
    &::GlobalNamespace::UnityPlayerLoopManager::RemoveDisabledSubsystems)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x570c38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager*>(),
                                         { "RemoveDisabledSubsystems", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnityPlayerLoopManager::InitializePlayerLoop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager*>(), { "InitializePlayerLoop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::UnityPlayerLoopManager::RemoveDisabledSubsystems(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem> loop, ::ArrayW<::System::Type*> typesToRemove) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager*>(),
                                       { "RemoveDisabledSubsystems", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, loop, typesToRemove);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityPlayerLoopManager::UnityPlayerLoopManager() {}
