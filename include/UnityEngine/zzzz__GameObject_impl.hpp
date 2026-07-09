#pragma once
// IWYU pragma private; include "UnityEngine/GameObject.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__PrimitiveType_def.hpp"
#include "UnityEngine/zzzz__SendMessageOptions_def.hpp"
#include "UnityEngine/zzzz__TagHandle_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::GameObject.CreatePrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::PrimitiveType)>(&::UnityEngine::GameObject::CreatePrimitive)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6989da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "CreatePrimitive", {}, { ::i2c::type_of<::UnityEngine::PrimitiveType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(::System::Type*)>(&::UnityEngine::GameObject::GetComponent)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6986e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponent", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentFastPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::System::Type*, ::System::IntPtr)>(&::UnityEngine::GameObject::GetComponentFastPath)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6989f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentFastPath", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(::StringW)>(&::UnityEngine::GameObject::GetComponentByName)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x698a034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentByName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentByNameWithCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(::StringW, bool)>(&::UnityEngine::GameObject::GetComponentByNameWithCase)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x698a310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentByNameWithCase", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(::StringW)>(&::UnityEngine::GameObject::GetComponent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x698a604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponent", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentInChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(::System::Type*, bool)>(&::UnityEngine::GameObject::GetComponentInChildren)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6987410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentInChildren", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentInChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(::System::Type*)>(&::UnityEngine::GameObject::GetComponentInChildren)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698a65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentInChildren", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentInParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(::System::Type*, bool)>(&::UnityEngine::GameObject::GetComponentInParent)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6987668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentInParent", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentInParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(::System::Type*)>(&::UnityEngine::GameObject::GetComponentInParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698a6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentInParent", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::UnityEngine::GameObject::*)(::System::Type*, bool, bool, bool, bool, ::System::Object*)>(
    &::UnityEngine::GameObject::GetComponentsInternal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x698a6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInternal",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                                   ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Component>> (::UnityEngine::GameObject::*)(::System::Type*)>(&::UnityEngine::GameObject::GetComponents)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x69878b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponents", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::System::Type*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*)>(
    &::UnityEngine::GameObject::GetComponents)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x698a80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                            { "GetComponents", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentsInChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Component>> (::UnityEngine::GameObject::*)(::System::Type*)>(
    &::UnityEngine::GameObject::GetComponentsInChildren)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698a824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInChildren", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentsInChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Component>> (::UnityEngine::GameObject::*)(::System::Type*, bool)>(
    &::UnityEngine::GameObject::GetComponentsInChildren)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x69875a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInChildren", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentsInParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Component>> (::UnityEngine::GameObject::*)(::System::Type*)>(
    &::UnityEngine::GameObject::GetComponentsInParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698a82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInParent", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentsInParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Component>> (::UnityEngine::GameObject::*)(::System::Type*, bool)>(
    &::UnityEngine::GameObject::GetComponentsInParent)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x69877f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInParent", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.TryGetComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GameObject::*)(::System::Type*, ::by_ref<::UnityEngine::Component*>)>(&::UnityEngine::GameObject::TryGetComponent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6987084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "TryGetComponent", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::Component*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.TryGetComponentInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(::System::Type*)>(&::UnityEngine::GameObject::TryGetComponentInternal)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x698a834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "TryGetComponentInternal", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.TryGetComponentFastPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::System::Type*, ::System::IntPtr)>(&::UnityEngine::GameObject::TryGetComponentFastPath)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x698aa44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "TryGetComponentFastPath", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.FindWithTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW)>(&::UnityEngine::GameObject::FindWithTag)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x698ab30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "FindWithTag", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.FindGameObjectsWithTagForListInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Object*)>(&::UnityEngine::GameObject::FindGameObjectsWithTagForListInternal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x698ada8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "FindGameObjectsWithTagForListInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.FindGameObjectsWithTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(
    &::UnityEngine::GameObject::FindGameObjectsWithTag)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x698af20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                            { "FindGameObjectsWithTag", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SendMessageUpwards
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW, ::UnityEngine::SendMessageOptions)>(&::UnityEngine::GameObject::SendMessageUpwards)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x698af24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessageUpwards", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SendMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW, ::UnityEngine::SendMessageOptions)>(&::UnityEngine::GameObject::SendMessage)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x698b0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.BroadcastMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW, ::UnityEngine::SendMessageOptions)>(&::UnityEngine::GameObject::BroadcastMessage)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x698b244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "BroadcastMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.AddComponentInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(::StringW)>(&::UnityEngine::GameObject::AddComponentInternal)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x698b3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "AddComponentInternal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.Internal_AddComponentWithType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(::System::Type*)>(&::UnityEngine::GameObject::Internal_AddComponentWithType)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x698b6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "Internal_AddComponentWithType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.AddComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(::System::Type*)>(&::UnityEngine::GameObject::AddComponent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x698b84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "AddComponent", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::GameObject::*)()>(&::UnityEngine::GameObject::GetComponentCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x698b850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.QueryComponentAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(int32_t)>(&::UnityEngine::GameObject::QueryComponentAtIndex)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x698b90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "QueryComponentAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::GameObject::*)(int32_t)>(&::UnityEngine::GameObject::GetComponentAtIndex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x698baa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::GameObject::*)(::UnityEngine::Component*)>(&::UnityEngine::GameObject::GetComponentIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x698bb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentIndex", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::GameObject::*)()>(&::UnityEngine::GameObject::get_transform)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x698bc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_transform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_layer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::GameObject::*)()>(&::UnityEngine::GameObject::get_layer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x698bdc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_layer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.set_layer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(int32_t)>(&::UnityEngine::GameObject::set_layer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x698be84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_layer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GameObject::*)()>(&::UnityEngine::GameObject::get_active)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x698bf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_active", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.set_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(bool)>(&::UnityEngine::GameObject::set_active)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x698c014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_active", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SetActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(bool)>(&::UnityEngine::GameObject::SetActive)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x698c0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SetActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_activeSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GameObject::*)()>(&::UnityEngine::GameObject::get_activeSelf)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x698c1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_activeSelf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_activeInHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GameObject::*)()>(&::UnityEngine::GameObject::get_activeInHierarchy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x698c278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_activeInHierarchy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SetActiveRecursively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(bool)>(&::UnityEngine::GameObject::SetActiveRecursively)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x698c334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SetActiveRecursively", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_isStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GameObject::*)()>(&::UnityEngine::GameObject::get_isStatic)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x698c408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_isStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.set_isStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(bool)>(&::UnityEngine::GameObject::set_isStatic)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x698c4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_isStatic", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_isStaticBatchable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GameObject::*)()>(&::UnityEngine::GameObject::get_isStaticBatchable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x698c598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_isStaticBatchable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_tag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::GameObject::*)()>(&::UnityEngine::GameObject::get_tag)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6987a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_tag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.set_tag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW)>(&::UnityEngine::GameObject::set_tag)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6987ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_tag", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.CompareTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GameObject::*)(::StringW)>(&::UnityEngine::GameObject::CompareTag)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6987d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "CompareTag", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.CompareTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GameObject::*)(::UnityEngine::TagHandle)>(&::UnityEngine::GameObject::CompareTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698c854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "CompareTag", {}, { ::i2c::type_of<::UnityEngine::TagHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.CompareTag_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GameObject::*)(::StringW)>(&::UnityEngine::GameObject::CompareTag_Internal)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x698c6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "CompareTag_Internal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.CompareTagHandle_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GameObject::*)(::UnityEngine::TagHandle)>(&::UnityEngine::GameObject::CompareTagHandle_Internal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x698c85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "CompareTagHandle_Internal", {}, { ::i2c::type_of<::UnityEngine::TagHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.FindGameObjectWithTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW)>(&::UnityEngine::GameObject::FindGameObjectWithTag)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x698ab34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "FindGameObjectWithTag", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.FindGameObjectsWithTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::GameObject>> (*)(::StringW)>(&::UnityEngine::GameObject::FindGameObjectsWithTag)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x698c9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "FindGameObjectsWithTag", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SendMessageUpwards
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW, ::System::Object*, ::UnityEngine::SendMessageOptions)>(
    &::UnityEngine::GameObject::SendMessageUpwards)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x698af30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                         { "SendMessageUpwards", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SendMessageUpwards
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW, ::System::Object*)>(&::UnityEngine::GameObject::SendMessageUpwards)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698cb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessageUpwards", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SendMessageUpwards
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW)>(&::UnityEngine::GameObject::SendMessageUpwards)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x698cb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessageUpwards", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SendMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW, ::System::Object*, ::UnityEngine::SendMessageOptions)>(&::UnityEngine::GameObject::SendMessage)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x698b0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                { "SendMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SendMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW, ::System::Object*)>(&::UnityEngine::GameObject::SendMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698cbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SendMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW)>(&::UnityEngine::GameObject::SendMessage)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x698cbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessage", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.BroadcastMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW, ::System::Object*, ::UnityEngine::SendMessageOptions)>(
    &::UnityEngine::GameObject::BroadcastMessage)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x698b250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                         { "BroadcastMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.BroadcastMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW, ::System::Object*)>(&::UnityEngine::GameObject::BroadcastMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698cc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "BroadcastMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.BroadcastMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW)>(&::UnityEngine::GameObject::BroadcastMessage)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x698cc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "BroadcastMessage", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW)>(&::UnityEngine::GameObject::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x698cc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)()>(&::UnityEngine::GameObject::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x698ce0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GameObject::*)(::StringW, ::ArrayW<::System::Type*>)>(&::UnityEngine::GameObject::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x698ce68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.Internal_CreateGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::StringW)>(&::UnityEngine::GameObject::Internal_CreateGameObject)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x698ccd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "Internal_CreateGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW)>(&::UnityEngine::GameObject::Find)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x698cf64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "Find", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SetGameObjectsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, bool)>(&::UnityEngine::GameObject::SetGameObjectsActive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x698d214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SetGameObjectsActive", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SetGameObjectsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<int32_t>, bool)>(&::UnityEngine::GameObject::SetGameObjectsActive)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x698d268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                             { "SetGameObjectsActive", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SetGameObjectsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<int32_t>, bool)>(&::UnityEngine::GameObject::SetGameObjectsActive)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x698d36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SetGameObjectsActive", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.InstantiateGameObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr, ::System::IntPtr, int32_t, ::UnityEngine::SceneManagement::Scene)>(
    &::UnityEngine::GameObject::InstantiateGameObjects)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x698d418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "InstantiateGameObjects",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.InstantiateGameObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>,
                                                                ::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::GameObject::InstantiateGameObjects)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x698d4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                             { "InstantiateGameObjects",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (*)(int32_t)>(&::UnityEngine::GameObject::GetScene)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x698d698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetScene", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_scene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (::UnityEngine::GameObject::*)()>(&::UnityEngine::GameObject::get_scene)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x698d728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_scene", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_sceneCullingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::GameObject::*)()>(&::UnityEngine::GameObject::get_sceneCullingMask)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x698d804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_sceneCullingMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_gameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::GameObject::*)()>(&::UnityEngine::GameObject::get_gameObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x698d8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_gameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.CreatePrimitive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::PrimitiveType)>(&::UnityEngine::GameObject::CreatePrimitive_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6989ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "CreatePrimitive_Injected", {}, { ::i2c::type_of<::UnityEngine::PrimitiveType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponent_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::Type*)>(&::UnityEngine::GameObject::GetComponent_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6989f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponent_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentFastPath_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Type*, ::System::IntPtr)>(&::UnityEngine::GameObject::GetComponentFastPath_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6989fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                         { "GetComponentFastPath_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentByName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::GameObject::GetComponentByName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698a2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                         { "GetComponentByName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentByNameWithCase_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool)>(
    &::UnityEngine::GameObject::GetComponentByNameWithCase_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x698a5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::GameObject*>(),
            { "GetComponentByNameWithCase_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentInChildren_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::Type*, bool)>(&::UnityEngine::GameObject::GetComponentInChildren_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x698a608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                { "GetComponentInChildren_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentInParent_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::Type*, bool)>(&::UnityEngine::GameObject::GetComponentInParent_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x698a664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                { "GetComponentInParent_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentsInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::IntPtr, ::System::Type*, bool, bool, bool, bool, ::System::Object*)>(
    &::UnityEngine::GameObject::GetComponentsInternal_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x698a788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInternal_Injected",
                                                                             {},
                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.TryGetComponentInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::Type*)>(&::UnityEngine::GameObject::TryGetComponentInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698aa00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "TryGetComponentInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.TryGetComponentFastPath_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Type*, ::System::IntPtr)>(&::UnityEngine::GameObject::TryGetComponentFastPath_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x698aadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                         { "TryGetComponentFastPath_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.FindGameObjectsWithTagForListInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::Object*)>(
    &::UnityEngine::GameObject::FindGameObjectsWithTagForListInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698aedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::GameObject*>(),
                         { "FindGameObjectsWithTagForListInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.AddComponentInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::GameObject::AddComponentInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698b66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                         { "AddComponentInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.Internal_AddComponentWithType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::Type*)>(&::UnityEngine::GameObject::Internal_AddComponentWithType_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698b808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                             { "Internal_AddComponentWithType_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::GameObject::GetComponentCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698b8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.QueryComponentAtIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::GameObject::QueryComponentAtIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698ba64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "QueryComponentAtIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetComponentIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::GameObject::GetComponentIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698bbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_transform_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::GameObject::get_transform_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698bd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_transform_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_layer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::GameObject::get_layer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698be48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_layer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.set_layer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::GameObject::set_layer_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698bf14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_layer_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_active_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::GameObject::get_active_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698bfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_active_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.set_active_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::GameObject::set_active_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698c0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_active_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SetActive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::GameObject::SetActive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698c178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SetActive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_activeSelf_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::GameObject::get_activeSelf_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698c23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_activeSelf_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_activeInHierarchy_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::GameObject::get_activeInHierarchy_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698c2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_activeInHierarchy_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SetActiveRecursively_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::GameObject::SetActiveRecursively_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698c3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SetActiveRecursively_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_isStatic_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::GameObject::get_isStatic_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698c488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_isStatic_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.set_isStatic_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::GameObject::set_isStatic_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698c554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_isStatic_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_isStaticBatchable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::GameObject::get_isStaticBatchable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698c618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_isStaticBatchable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_tag_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::GameObject::get_tag_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698c654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                { "get_tag_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.set_tag_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::GameObject::set_tag_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698c698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                { "set_tag_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.CompareTag_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::GameObject::CompareTag_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698c8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                         { "CompareTag_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.CompareTagHandle_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::TagHandle>)>(&::UnityEngine::GameObject::CompareTagHandle_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698c938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                { "CompareTagHandle_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::TagHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.FindGameObjectWithTag_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::GameObject::FindGameObjectWithTag_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698c97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "FindGameObjectWithTag_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.FindGameObjectsWithTag_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::GameObject>> (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::GameObject::FindGameObjectsWithTag_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698cae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "FindGameObjectsWithTag_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SendMessageUpwards_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::Object*, ::UnityEngine::SendMessageOptions)>(
    &::UnityEngine::GameObject::SendMessageUpwards_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x698cb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessageUpwards_Injected",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                            ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.SendMessage_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::Object*, ::UnityEngine::SendMessageOptions)>(
    &::UnityEngine::GameObject::SendMessage_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x698cb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessage_Injected",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                            ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.BroadcastMessage_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::Object*, ::UnityEngine::SendMessageOptions)>(
    &::UnityEngine::GameObject::BroadcastMessage_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x698cc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "BroadcastMessage_Injected",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                            ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.Internal_CreateGameObject_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::GameObject::Internal_CreateGameObject_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698cf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                            { "Internal_CreateGameObject_Injected", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.Find_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::GameObject::Find_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698d1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "Find_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.InstantiateGameObjects_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr, ::System::IntPtr, int32_t, ::by_ref<::UnityEngine::SceneManagement::Scene>)>(
    &::UnityEngine::GameObject::InstantiateGameObjects_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x698d488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "InstantiateGameObjects_Injected",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.GetScene_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::GameObject::GetScene_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698d6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                             { "GetScene_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_scene_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::GameObject::get_scene_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698d7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                             { "get_scene_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GameObject.get_sceneCullingMask_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::UnityEngine::GameObject::get_sceneCullingMask_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698d884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_sceneCullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::GameObject::CreatePrimitive(::UnityEngine::PrimitiveType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "CreatePrimitive", {}, { ::i2c::type_of<::UnityEngine::PrimitiveType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, type);
}
template <typename T> inline T UnityEngine::GameObject::GetComponent() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponent", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::GetComponent(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponent", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, type);
}
inline void UnityEngine::GameObject::GetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentFastPath", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, oneFurtherThanResultValue);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::GetComponentByName(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentByName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::GetComponentByNameWithCase(::StringW type, bool caseSensitive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentByNameWithCase", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, type, caseSensitive);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::GetComponent(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponent", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::GetComponentInChildren(::System::Type* type, bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentInChildren", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, type, includeInactive);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::GetComponentInChildren(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentInChildren", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, type);
}
template <typename T> inline T UnityEngine::GameObject::GetComponentInChildren() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentInChildren", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::GameObject::GetComponentInChildren(bool includeInactive) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentInChildren", { ::i2c::class_of<T>() }, { ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, includeInactive);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::GetComponentInParent(::System::Type* type, bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentInParent", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, type, includeInactive);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::GetComponentInParent(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentInParent", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, type);
}
template <typename T> inline T UnityEngine::GameObject::GetComponentInParent() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentInParent", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::GameObject::GetComponentInParent(bool includeInactive) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentInParent", { ::i2c::class_of<T>() }, { ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, includeInactive);
}
inline ::System::Array* UnityEngine::GameObject::GetComponentsInternal(::System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse,
                                                                       ::System::Object* resultList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInternal",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method, type, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse, resultList);
}
inline ::ArrayW<::UnityW<::UnityEngine::Component>> UnityEngine::GameObject::GetComponents(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponents", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Component>>>(this, ___internal_method, type);
}
template <typename T> inline ::ArrayW<T> UnityEngine::GameObject::GetComponents() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponents", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
inline void UnityEngine::GameObject::GetComponents(::System::Type* type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                       { "GetComponents", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, results);
}
template <typename T> inline void UnityEngine::GameObject::GetComponents(::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponents", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline ::ArrayW<::UnityW<::UnityEngine::Component>> UnityEngine::GameObject::GetComponentsInChildren(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInChildren", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Component>>>(this, ___internal_method, type);
}
inline ::ArrayW<::UnityW<::UnityEngine::Component>> UnityEngine::GameObject::GetComponentsInChildren(::System::Type* type, bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInChildren", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Component>>>(this, ___internal_method, type, includeInactive);
}
template <typename T> inline ::ArrayW<T> UnityEngine::GameObject::GetComponentsInChildren(bool includeInactive) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInChildren", { ::i2c::class_of<T>() }, { ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, includeInactive);
}
template <typename T> inline void UnityEngine::GameObject::GetComponentsInChildren(bool includeInactive, ::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                              { "GetComponentsInChildren", { ::i2c::class_of<T>() }, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, includeInactive, results);
}
template <typename T> inline ::ArrayW<T> UnityEngine::GameObject::GetComponentsInChildren() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInChildren", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::GameObject::GetComponentsInChildren(::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInChildren", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline ::ArrayW<::UnityW<::UnityEngine::Component>> UnityEngine::GameObject::GetComponentsInParent(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInParent", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Component>>>(this, ___internal_method, type);
}
inline ::ArrayW<::UnityW<::UnityEngine::Component>> UnityEngine::GameObject::GetComponentsInParent(::System::Type* type, bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInParent", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Component>>>(this, ___internal_method, type, includeInactive);
}
template <typename T> inline void UnityEngine::GameObject::GetComponentsInParent(bool includeInactive, ::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                              { "GetComponentsInParent", { ::i2c::class_of<T>() }, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, includeInactive, results);
}
template <typename T> inline ::ArrayW<T> UnityEngine::GameObject::GetComponentsInParent(bool includeInactive) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInParent", { ::i2c::class_of<T>() }, { ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, includeInactive);
}
template <typename T> inline ::ArrayW<T> UnityEngine::GameObject::GetComponentsInParent() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInParent", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::GameObject::TryGetComponent(::by_ref<T> component) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "TryGetComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline bool UnityEngine::GameObject::TryGetComponent(::System::Type* type, ::by_ref<::UnityEngine::Component*> component) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "TryGetComponent", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::Component*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, component);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::TryGetComponentInternal(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "TryGetComponentInternal", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, type);
}
inline void UnityEngine::GameObject::TryGetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "TryGetComponentFastPath", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, oneFurtherThanResultValue);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::GameObject::FindWithTag(::StringW tag) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "FindWithTag", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, tag);
}
inline void UnityEngine::GameObject::FindGameObjectsWithTagForListInternal(::StringW tag, ::System::Object* results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "FindGameObjectsWithTagForListInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tag, results);
}
inline void UnityEngine::GameObject::FindGameObjectsWithTag(::StringW tag, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                          { "FindGameObjectsWithTag", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tag, results);
}
inline void UnityEngine::GameObject::SendMessageUpwards(::StringW methodName, ::UnityEngine::SendMessageOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessageUpwards", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, options);
}
inline void UnityEngine::GameObject::SendMessage(::StringW methodName, ::UnityEngine::SendMessageOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, options);
}
inline void UnityEngine::GameObject::BroadcastMessage(::StringW methodName, ::UnityEngine::SendMessageOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "BroadcastMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, options);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::AddComponentInternal(::StringW className) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "AddComponentInternal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, className);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::Internal_AddComponentWithType(::System::Type* componentType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "Internal_AddComponentWithType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, componentType);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::AddComponent(::System::Type* componentType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "AddComponent", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, componentType);
}
template <typename T> inline T UnityEngine::GameObject::AddComponent() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "AddComponent", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline int32_t UnityEngine::GameObject::GetComponentCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::QueryComponentAtIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "QueryComponentAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, index);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::GameObject::GetComponentAtIndex(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, index);
}
template <typename T> inline T UnityEngine::GameObject::GetComponentAtIndex(int32_t index) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentAtIndex", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
inline int32_t UnityEngine::GameObject::GetComponentIndex(::UnityEngine::Component* component) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentIndex", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, component);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::GameObject::get_transform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_transform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline int32_t UnityEngine::GameObject::get_layer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_layer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::GameObject::set_layer(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_layer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::GameObject::get_active() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_active", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::GameObject::set_active(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_active", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::GameObject::SetActive(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SetActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::GameObject::get_activeSelf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_activeSelf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::GameObject::get_activeInHierarchy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_activeInHierarchy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::GameObject::SetActiveRecursively(bool state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SetActiveRecursively", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline bool UnityEngine::GameObject::get_isStatic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_isStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::GameObject::set_isStatic(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_isStatic", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::GameObject::get_isStaticBatchable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_isStaticBatchable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW UnityEngine::GameObject::get_tag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_tag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::GameObject::set_tag(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_tag", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::GameObject::CompareTag(::StringW tag) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "CompareTag", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tag);
}
inline bool UnityEngine::GameObject::CompareTag(::UnityEngine::TagHandle tag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "CompareTag", {}, { ::i2c::type_of<::UnityEngine::TagHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tag);
}
inline bool UnityEngine::GameObject::CompareTag_Internal(::StringW tag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "CompareTag_Internal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tag);
}
inline bool UnityEngine::GameObject::CompareTagHandle_Internal(::UnityEngine::TagHandle tag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "CompareTagHandle_Internal", {}, { ::i2c::type_of<::UnityEngine::TagHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tag);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::GameObject::FindGameObjectWithTag(::StringW tag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "FindGameObjectWithTag", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, tag);
}
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> UnityEngine::GameObject::FindGameObjectsWithTag(::StringW tag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "FindGameObjectsWithTag", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::GameObject>>>(nullptr, ___internal_method, tag);
}
inline void UnityEngine::GameObject::SendMessageUpwards(::StringW methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                       { "SendMessageUpwards", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, value, options);
}
inline void UnityEngine::GameObject::SendMessageUpwards(::StringW methodName, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessageUpwards", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, value);
}
inline void UnityEngine::GameObject::SendMessageUpwards(::StringW methodName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessageUpwards", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName);
}
inline void UnityEngine::GameObject::SendMessage(::StringW methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                              { "SendMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, value, options);
}
inline void UnityEngine::GameObject::SendMessage(::StringW methodName, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, value);
}
inline void UnityEngine::GameObject::SendMessage(::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessage", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName);
}
inline void UnityEngine::GameObject::BroadcastMessage(::StringW methodName, ::System::Object* parameter, ::UnityEngine::SendMessageOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                              { "BroadcastMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, parameter, options);
}
inline void UnityEngine::GameObject::BroadcastMessage(::StringW methodName, ::System::Object* parameter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "BroadcastMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, parameter);
}
inline void UnityEngine::GameObject::BroadcastMessage(::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "BroadcastMessage", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName);
}
inline void UnityEngine::GameObject::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::GameObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GameObject::_ctor(::StringW name, ::ArrayW<::System::Type*> components) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, components);
}
inline void UnityEngine::GameObject::Internal_CreateGameObject(::UnityEngine::GameObject* self, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "Internal_CreateGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, name);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::GameObject::Find(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "Find", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, name);
}
inline void UnityEngine::GameObject::SetGameObjectsActive(::System::IntPtr instanceIds, int32_t instanceCount, bool active) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SetGameObjectsActive", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceIds, instanceCount, active);
}
inline void UnityEngine::GameObject::SetGameObjectsActive(::Unity::Collections::NativeArray_1<int32_t> instanceIDs, bool active) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SetGameObjectsActive", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceIDs, active);
}
inline void UnityEngine::GameObject::SetGameObjectsActive(::System::ReadOnlySpan_1<int32_t> instanceIDs, bool active) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SetGameObjectsActive", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceIDs, active);
}
inline void UnityEngine::GameObject::InstantiateGameObjects(int32_t sourceInstanceID, ::System::IntPtr newInstanceIDs, ::System::IntPtr newTransformInstanceIDs, int32_t count,
                                                            ::UnityEngine::SceneManagement::Scene destinationScene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "InstantiateGameObjects",
                                                                                               {},
                                                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceInstanceID, newInstanceIDs, newTransformInstanceIDs, count, destinationScene);
}
inline void UnityEngine::GameObject::InstantiateGameObjects(int32_t sourceInstanceID, int32_t count, ::Unity::Collections::NativeArray_1<int32_t> newInstanceIDs,
                                                            ::Unity::Collections::NativeArray_1<int32_t> newTransformInstanceIDs, ::UnityEngine::SceneManagement::Scene destinationScene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                           { "InstantiateGameObjects",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceInstanceID, count, newInstanceIDs, newTransformInstanceIDs, destinationScene);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::GameObject::GetScene(int32_t instanceID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetScene", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(nullptr, ___internal_method, instanceID);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::GameObject::get_scene() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_scene", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(this, ___internal_method);
}
inline uint64_t UnityEngine::GameObject::get_sceneCullingMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_sceneCullingMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::GameObject::get_gameObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_gameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::GameObject::CreatePrimitive_Injected(::UnityEngine::PrimitiveType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "CreatePrimitive_Injected", {}, { ::i2c::type_of<::UnityEngine::PrimitiveType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, type);
}
inline ::System::IntPtr UnityEngine::GameObject::GetComponent_Injected(::System::IntPtr _unity_self, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponent_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, type);
}
inline void UnityEngine::GameObject::GetComponentFastPath_Injected(::System::IntPtr _unity_self, ::System::Type* type, ::System::IntPtr oneFurtherThanResultValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                              { "GetComponentFastPath_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, type, oneFurtherThanResultValue);
}
inline ::System::IntPtr UnityEngine::GameObject::GetComponentByName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                              { "GetComponentByName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, type);
}
inline ::System::IntPtr UnityEngine::GameObject::GetComponentByNameWithCase_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> type, bool caseSensitive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::GameObject*>(),
          { "GetComponentByNameWithCase_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, type, caseSensitive);
}
inline ::System::IntPtr UnityEngine::GameObject::GetComponentInChildren_Injected(::System::IntPtr _unity_self, ::System::Type* type, bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                              { "GetComponentInChildren_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, type, includeInactive);
}
inline ::System::IntPtr UnityEngine::GameObject::GetComponentInParent_Injected(::System::IntPtr _unity_self, ::System::Type* type, bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                              { "GetComponentInParent_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, type, includeInactive);
}
inline ::System::Array* UnityEngine::GameObject::GetComponentsInternal_Injected(::System::IntPtr _unity_self, ::System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive,
                                                                                bool includeInactive, bool reverse, ::System::Object* resultList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentsInternal_Injected",
                                                                           {},
                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, _unity_self, type, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse, resultList);
}
inline ::System::IntPtr UnityEngine::GameObject::TryGetComponentInternal_Injected(::System::IntPtr _unity_self, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "TryGetComponentInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, type);
}
inline void UnityEngine::GameObject::TryGetComponentFastPath_Injected(::System::IntPtr _unity_self, ::System::Type* type, ::System::IntPtr oneFurtherThanResultValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                       { "TryGetComponentFastPath_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, type, oneFurtherThanResultValue);
}
inline void UnityEngine::GameObject::FindGameObjectsWithTagForListInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag, ::System::Object* results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                          { "FindGameObjectsWithTagForListInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tag, results);
}
inline ::System::IntPtr UnityEngine::GameObject::AddComponentInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> className) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                       { "AddComponentInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, className);
}
inline ::System::IntPtr UnityEngine::GameObject::Internal_AddComponentWithType_Injected(::System::IntPtr _unity_self, ::System::Type* componentType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "Internal_AddComponentWithType_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, componentType);
}
inline int32_t UnityEngine::GameObject::GetComponentCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::GameObject::QueryComponentAtIndex_Injected(::System::IntPtr _unity_self, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "QueryComponentAtIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, index);
}
inline int32_t UnityEngine::GameObject::GetComponentIndex_Injected(::System::IntPtr _unity_self, ::System::IntPtr component) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "GetComponentIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, component);
}
inline ::System::IntPtr UnityEngine::GameObject::get_transform_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_transform_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::GameObject::get_layer_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_layer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::GameObject::set_layer_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_layer_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::GameObject::get_active_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_active_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::GameObject::set_active_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_active_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::GameObject::SetActive_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SetActive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::GameObject::get_activeSelf_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_activeSelf_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::GameObject::get_activeInHierarchy_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_activeInHierarchy_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::GameObject::SetActiveRecursively_Injected(::System::IntPtr _unity_self, bool state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SetActiveRecursively_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, state);
}
inline bool UnityEngine::GameObject::get_isStatic_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_isStatic_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::GameObject::set_isStatic_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "set_isStatic_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::GameObject::get_isStaticBatchable_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_isStaticBatchable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::GameObject::get_tag_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                              { "get_tag_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::GameObject::set_tag_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                              { "set_tag_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::GameObject::CompareTag_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                       { "CompareTag_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, tag);
}
inline bool UnityEngine::GameObject::CompareTagHandle_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::TagHandle> tag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                              { "CompareTagHandle_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::TagHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, tag);
}
inline ::System::IntPtr UnityEngine::GameObject::FindGameObjectWithTag_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "FindGameObjectWithTag_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, tag);
}
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> UnityEngine::GameObject::FindGameObjectsWithTag_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "FindGameObjectsWithTag_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::GameObject>>>(nullptr, ___internal_method, tag);
}
inline void UnityEngine::GameObject::SendMessageUpwards_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, ::System::Object* value,
                                                                 ::UnityEngine::SendMessageOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessageUpwards_Injected",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                          ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, methodName, value, options);
}
inline void UnityEngine::GameObject::SendMessage_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, ::System::Object* value,
                                                          ::UnityEngine::SendMessageOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "SendMessage_Injected",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                          ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, methodName, value, options);
}
inline void UnityEngine::GameObject::BroadcastMessage_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, ::System::Object* parameter,
                                                               ::UnityEngine::SendMessageOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "BroadcastMessage_Injected",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                          ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SendMessageOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, methodName, parameter, options);
}
inline void UnityEngine::GameObject::Internal_CreateGameObject_Injected(::UnityEngine::GameObject* self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                          { "Internal_CreateGameObject_Injected", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, name);
}
inline ::System::IntPtr UnityEngine::GameObject::Find_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "Find_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, name);
}
inline void UnityEngine::GameObject::InstantiateGameObjects_Injected(int32_t sourceInstanceID, ::System::IntPtr newInstanceIDs, ::System::IntPtr newTransformInstanceIDs, int32_t count,
                                                                     ::by_ref<::UnityEngine::SceneManagement::Scene> destinationScene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "InstantiateGameObjects_Injected",
                                                                                               {},
                                                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceInstanceID, newInstanceIDs, newTransformInstanceIDs, count, destinationScene);
}
inline void UnityEngine::GameObject::GetScene_Injected(int32_t instanceID, ::by_ref<::UnityEngine::SceneManagement::Scene> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                           { "GetScene_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceID, ret);
}
inline void UnityEngine::GameObject::get_scene_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SceneManagement::Scene> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(),
                                                           { "get_scene_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline uint64_t UnityEngine::GameObject::get_sceneCullingMask_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GameObject*>(), { "get_sceneCullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::GameObject* UnityEngine::GameObject::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GameObject*>(name));
}
inline ::UnityEngine::GameObject* UnityEngine::GameObject::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GameObject*>());
}
inline ::UnityEngine::GameObject* UnityEngine::GameObject::New_ctor(::StringW name, ::ArrayW<::System::Type*> components) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GameObject*>(name, components));
}
// Ctor Parameters []
constexpr ::UnityEngine::GameObject::GameObject() {}
