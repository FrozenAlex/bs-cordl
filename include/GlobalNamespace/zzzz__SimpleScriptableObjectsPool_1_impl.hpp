#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleScriptableObjectsPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleScriptableObjectsPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::Queue_1<T>*& GlobalNamespace::SimpleScriptableObjectsPool_1<T>::__cordl_internal_get__pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename T> constexpr ::System::Collections::Generic::Queue_1<T>* const& GlobalNamespace::SimpleScriptableObjectsPool_1<T>::__cordl_internal_get__pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename T> constexpr void GlobalNamespace::SimpleScriptableObjectsPool_1<T>::__cordl_internal_set__pool(::System::Collections::Generic::Queue_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pool = value;
}
template <typename T> inline T GlobalNamespace::SimpleScriptableObjectsPool_1<T>::Spawn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleScriptableObjectsPool_1<T>*>(), { "Spawn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::SimpleScriptableObjectsPool_1<T>::Despawn(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleScriptableObjectsPool_1<T>*>(), { "Despawn", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::SimpleScriptableObjectsPool_1<T>::Destroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleScriptableObjectsPool_1<T>*>(), { "Destroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::SimpleScriptableObjectsPool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleScriptableObjectsPool_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::SimpleScriptableObjectsPool_1<T>* GlobalNamespace::SimpleScriptableObjectsPool_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleScriptableObjectsPool_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SimpleScriptableObjectsPool_1<T>::SimpleScriptableObjectsPool_1() {}
