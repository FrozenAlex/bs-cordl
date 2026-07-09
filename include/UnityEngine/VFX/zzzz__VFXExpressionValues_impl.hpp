#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXExpressionValues.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXExpressionValues_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXExpressionValues::*)()>(&::UnityEngine::VFX::VFXExpressionValues::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd4960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues.CreateExpressionValuesWrapper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXExpressionValues* (*)(::System::IntPtr)>(&::UnityEngine::VFX::VFXExpressionValues::CreateExpressionValuesWrapper)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6cd4964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "CreateExpressionValuesWrapper", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::VFX::VFXExpressionValues::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::VFX::VFXExpressionValues::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::VFX::VFXExpressionValues::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
inline void UnityEngine::VFX::VFXExpressionValues::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VFXExpressionValues* UnityEngine::VFX::VFXExpressionValues::CreateExpressionValuesWrapper(::System::IntPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "CreateExpressionValuesWrapper", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXExpressionValues*>(nullptr, ___internal_method, ptr);
}
inline ::UnityEngine::VFX::VFXExpressionValues* UnityEngine::VFX::VFXExpressionValues::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VFXExpressionValues*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXExpressionValues::VFXExpressionValues() {}
