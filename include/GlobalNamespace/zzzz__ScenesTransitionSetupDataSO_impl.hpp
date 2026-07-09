#pragma once
// IWYU pragma private; include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.get_scenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::ScenesTransitionSetupDataSO::get_scenes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324ec90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), { "get_scenes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.set_scenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupDataSO::*)(::ArrayW<::StringW>)>(&::GlobalNamespace::ScenesTransitionSetupDataSO::set_scenes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324ec98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), { "set_scenes", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupDataSO::*)(::ArrayW<::StringW>, ::ArrayW<::GlobalNamespace::SceneSetupData*>)>(
    &::GlobalNamespace::ScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324ec80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(),
                                                             { "Init", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupDataSO::*)(::StringW, ::ArrayW<::GlobalNamespace::SceneSetupData*>)>(
    &::GlobalNamespace::ScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x324ebdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(),
                                                             { "Init", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.BeforeScenesWillBeActivated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x324eca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), { ::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.BeforeScenesWillBeActivatedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivatedAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x324eca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), { ::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupDataSO::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::ScenesTransitionSetupDataSO::InstallBindings)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x324bf68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), { "InstallBindings", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::ScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324ec60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_get__scenes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenes_k__BackingField;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_get__scenes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenes_k__BackingField;
}
constexpr void GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_set__scenes_k__BackingField(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scenes_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*>& GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_get__sceneSetupDataArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupDataArray;
}
constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*> const& GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_get__sceneSetupDataArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupDataArray;
}
constexpr void GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_set__sceneSetupDataArray(::ArrayW<::GlobalNamespace::SceneSetupData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneSetupDataArray = value;
}
inline ::ArrayW<::StringW> GlobalNamespace::ScenesTransitionSetupDataSO::get_scenes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), { "get_scenes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void GlobalNamespace::ScenesTransitionSetupDataSO::set_scenes(::ArrayW<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), { "set_scenes", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScenesTransitionSetupDataSO::Init(::ArrayW<::StringW> newScenes, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(),
                                                           { "Init", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newScenes, sceneSetupData);
}
inline void GlobalNamespace::ScenesTransitionSetupDataSO::Init(::StringW scene, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(),
                                                           { "Init", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, sceneSetupData);
}
inline void GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivated() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivatedAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::ScenesTransitionSetupDataSO::InstallBindings(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), { "InstallBindings", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void GlobalNamespace::ScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScenesTransitionSetupDataSO* GlobalNamespace::ScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScenesTransitionSetupDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO::ScenesTransitionSetupDataSO() {}
