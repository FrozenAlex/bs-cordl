#pragma once
// IWYU pragma private; include "GlobalNamespace/NullAllowed.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_def.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NullAllowed_Context::NullAllowed_Context(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullAllowed_Context::NullAllowed_Context() {}
constexpr ::GlobalNamespace::NullAllowed_Context GlobalNamespace::NullAllowed_Context::Everywhere{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::NullAllowed_Context GlobalNamespace::NullAllowed_Context::Prefab{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::NullAllowed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NullAllowed::*)(::GlobalNamespace::NullAllowed_Context)>(&::GlobalNamespace::NullAllowed::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x325114c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowed*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::NullAllowed_Context>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullAllowed.IsNullAllowedFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NullAllowed::*)(::GlobalNamespace::NullAllowed_Context)>(&::GlobalNamespace::NullAllowed::IsNullAllowedFor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3251158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowed*>(), { "IsNullAllowedFor", {}, { ::i2c::type_of<::GlobalNamespace::NullAllowed_Context>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NullAllowed_Context& GlobalNamespace::NullAllowed::__cordl_internal_get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr ::GlobalNamespace::NullAllowed_Context const& GlobalNamespace::NullAllowed::__cordl_internal_get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr void GlobalNamespace::NullAllowed::__cordl_internal_set__context(::GlobalNamespace::NullAllowed_Context value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____context = value;
}
inline void GlobalNamespace::NullAllowed::_ctor(::GlobalNamespace::NullAllowed_Context context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowed*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::NullAllowed_Context>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool GlobalNamespace::NullAllowed::IsNullAllowedFor(::GlobalNamespace::NullAllowed_Context context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowed*>(), { "IsNullAllowedFor", {}, { ::i2c::type_of<::GlobalNamespace::NullAllowed_Context>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline ::GlobalNamespace::NullAllowed* GlobalNamespace::NullAllowed::New_ctor(::GlobalNamespace::NullAllowed_Context context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NullAllowed*>(context));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullAllowed::NullAllowed() {}
