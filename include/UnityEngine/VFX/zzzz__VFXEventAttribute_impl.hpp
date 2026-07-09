#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXEventAttribute.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::VFX::VFXEventAttribute*)>(&::UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6cd494c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller::ConvertToNative(::UnityEngine::VFX::VFXEventAttribute* eventAttibute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, eventAttibute);
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller::VFXEventAttribute_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::VFX::VFXEventAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXEventAttribute::*)(::System::IntPtr, bool, ::UnityEngine::VFX::VisualEffectAsset*)>(
    &::UnityEngine::VFX::VFXEventAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cd45a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::VFX::VisualEffectAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXEventAttribute.CreateEventAttributeWrapper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXEventAttribute* (*)()>(&::UnityEngine::VFX::VFXEventAttribute::CreateEventAttributeWrapper)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6cd45b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "CreateEventAttributeWrapper", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXEventAttribute.SetWrapValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXEventAttribute::*)(::System::IntPtr)>(&::UnityEngine::VFX::VFXEventAttribute::SetWrapValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6cd4608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "SetWrapValue", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXEventAttribute.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::VFX::VFXEventAttribute::Internal_Create)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6cd4664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "Internal_Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXEventAttribute.Internal_InstanciateVFXEventAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXEventAttribute* (*)(::UnityEngine::VFX::VisualEffectAsset*)>(
    &::UnityEngine::VFX::VFXEventAttribute::Internal_InstanciateVFXEventAttribute)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6cd468c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "Internal_InstanciateVFXEventAttribute", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXEventAttribute.Internal_InitFromAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXEventAttribute::*)(::UnityEngine::VFX::VisualEffectAsset*)>(
    &::UnityEngine::VFX::VFXEventAttribute::Internal_InitFromAsset)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6cd4720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "Internal_InitFromAsset", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXEventAttribute.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXEventAttribute::*)()>(&::UnityEngine::VFX::VFXEventAttribute::Release)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6cd4810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXEventAttribute.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXEventAttribute::*)()>(&::UnityEngine::VFX::VFXEventAttribute::Finalize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6cd48a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { ::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXEventAttribute.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXEventAttribute::*)()>(&::UnityEngine::VFX::VFXEventAttribute::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6cd48e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXEventAttribute.Internal_Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::VFX::VFXEventAttribute::Internal_Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd4868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "Internal_Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXEventAttribute.Internal_InitFromAsset_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::VFX::VFXEventAttribute::Internal_InitFromAsset_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6cd47cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(),
                                                             { "Internal_InitFromAsset_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::VFX::VFXEventAttribute::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::VFX::VFXEventAttribute::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::VFX::VFXEventAttribute::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr bool& UnityEngine::VFX::VFXEventAttribute::__cordl_internal_get_m_Owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Owner;
}
constexpr bool const& UnityEngine::VFX::VFXEventAttribute::__cordl_internal_get_m_Owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Owner;
}
constexpr void UnityEngine::VFX::VFXEventAttribute::__cordl_internal_set_m_Owner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Owner = value;
}
constexpr ::UnityW<::UnityEngine::VFX::VisualEffectAsset>& UnityEngine::VFX::VFXEventAttribute::__cordl_internal_get_m_VfxAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VfxAsset;
}
constexpr ::UnityW<::UnityEngine::VFX::VisualEffectAsset> const& UnityEngine::VFX::VFXEventAttribute::__cordl_internal_get_m_VfxAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VfxAsset;
}
constexpr void UnityEngine::VFX::VFXEventAttribute::__cordl_internal_set_m_VfxAsset(::UnityW<::UnityEngine::VFX::VisualEffectAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VfxAsset = value;
}
inline void UnityEngine::VFX::VFXEventAttribute::_ctor(::System::IntPtr ptr, bool owner, ::UnityEngine::VFX::VisualEffectAsset* vfxAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::VFX::VisualEffectAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr, owner, vfxAsset);
}
inline ::UnityEngine::VFX::VFXEventAttribute* UnityEngine::VFX::VFXEventAttribute::CreateEventAttributeWrapper() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "CreateEventAttributeWrapper", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXEventAttribute*>(nullptr, ___internal_method);
}
inline void UnityEngine::VFX::VFXEventAttribute::SetWrapValue(::System::IntPtr ptrToEventAttribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "SetWrapValue", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptrToEventAttribute);
}
inline ::System::IntPtr UnityEngine::VFX::VFXEventAttribute::Internal_Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "Internal_Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::UnityEngine::VFX::VFXEventAttribute* UnityEngine::VFX::VFXEventAttribute::Internal_InstanciateVFXEventAttribute(::UnityEngine::VFX::VisualEffectAsset* vfxAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "Internal_InstanciateVFXEventAttribute", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXEventAttribute*>(nullptr, ___internal_method, vfxAsset);
}
inline void UnityEngine::VFX::VFXEventAttribute::Internal_InitFromAsset(::UnityEngine::VFX::VisualEffectAsset* vfxAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "Internal_InitFromAsset", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vfxAsset);
}
inline void UnityEngine::VFX::VFXEventAttribute::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::VFXEventAttribute::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::VFXEventAttribute::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::VFXEventAttribute::Internal_Destroy(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(), { "Internal_Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline void UnityEngine::VFX::VFXEventAttribute::Internal_InitFromAsset_Injected(::System::IntPtr _unity_self, ::System::IntPtr vfxAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXEventAttribute*>(),
                                                           { "Internal_InitFromAsset_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, vfxAsset);
}
inline ::UnityEngine::VFX::VFXEventAttribute* UnityEngine::VFX::VFXEventAttribute::New_ctor(::System::IntPtr ptr, bool owner, ::UnityEngine::VFX::VisualEffectAsset* vfxAsset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VFXEventAttribute*>(ptr, owner, vfxAsset));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::VFX::VFXEventAttribute::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::VFX::VFXEventAttribute::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXEventAttribute::VFXEventAttribute() {}
