#pragma once
// IWYU pragma private; include "GlobalNamespace/NullAllowedIf.hpp"
#include "GlobalNamespace/zzzz__ComparisonOperation_impl.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_impl.hpp"
#include "GlobalNamespace/zzzz__NullAllowedIf_def.hpp"
#include "GlobalNamespace/zzzz__ComparisonOperation_def.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NullAllowedIf._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NullAllowedIf::*)(::StringW, ::System::Object*, ::GlobalNamespace::NullAllowed_Context)>(
    &::GlobalNamespace::NullAllowedIf::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x325116c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedIf*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NullAllowed_Context>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullAllowedIf._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NullAllowedIf::*)(::StringW, ::GlobalNamespace::ComparisonOperation, ::System::Object*,
                                                                                                  ::GlobalNamespace::NullAllowed_Context)>(&::GlobalNamespace::NullAllowedIf::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3251180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedIf*>(), { ".ctor",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ComparisonOperation>(),
                                                                                                   ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NullAllowed_Context>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullAllowedIf.IsNullAllowedFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NullAllowedIf::*)(::System::Object*, ::GlobalNamespace::NullAllowed_Context)>(
    &::GlobalNamespace::NullAllowedIf::IsNullAllowedFor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3251194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedIf*>(),
                                                             { "IsNullAllowedFor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NullAllowed_Context>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::NullAllowedIf::__cordl_internal_get_propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr ::StringW const& GlobalNamespace::NullAllowedIf::__cordl_internal_get_propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr void GlobalNamespace::NullAllowedIf::__cordl_internal_set_propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___propertyName = value;
}
constexpr ::System::Object*& GlobalNamespace::NullAllowedIf::__cordl_internal_get__valueToCompare() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueToCompare;
}
constexpr ::System::Object* const& GlobalNamespace::NullAllowedIf::__cordl_internal_get__valueToCompare() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueToCompare;
}
constexpr void GlobalNamespace::NullAllowedIf::__cordl_internal_set__valueToCompare(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueToCompare = value;
}
constexpr ::GlobalNamespace::ComparisonOperation& GlobalNamespace::NullAllowedIf::__cordl_internal_get__comparisonOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparisonOperation;
}
constexpr ::GlobalNamespace::ComparisonOperation const& GlobalNamespace::NullAllowedIf::__cordl_internal_get__comparisonOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparisonOperation;
}
constexpr void GlobalNamespace::NullAllowedIf::__cordl_internal_set__comparisonOperation(::GlobalNamespace::ComparisonOperation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____comparisonOperation = value;
}
inline void GlobalNamespace::NullAllowedIf::_ctor(::StringW propertyName, ::System::Object* equalsTo, ::GlobalNamespace::NullAllowed_Context context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedIf*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NullAllowed_Context>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, equalsTo, context);
}
inline void GlobalNamespace::NullAllowedIf::_ctor(::StringW propertyName, ::GlobalNamespace::ComparisonOperation comparisonOperation, ::System::Object* valueToCompare,
                                                  ::GlobalNamespace::NullAllowed_Context context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedIf*>(), { ".ctor",
                                                                                               {},
                                                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ComparisonOperation>(),
                                                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NullAllowed_Context>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, comparisonOperation, valueToCompare, context);
}
inline bool GlobalNamespace::NullAllowedIf::IsNullAllowedFor(::System::Object* value, ::GlobalNamespace::NullAllowed_Context context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedIf*>(),
                                                           { "IsNullAllowedFor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NullAllowed_Context>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, context);
}
inline ::GlobalNamespace::NullAllowedIf* GlobalNamespace::NullAllowedIf::New_ctor(::StringW propertyName, ::System::Object* equalsTo, ::GlobalNamespace::NullAllowed_Context context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NullAllowedIf*>(propertyName, equalsTo, context));
}
inline ::GlobalNamespace::NullAllowedIf* GlobalNamespace::NullAllowedIf::New_ctor(::StringW propertyName, ::GlobalNamespace::ComparisonOperation comparisonOperation, ::System::Object* valueToCompare,
                                                                                  ::GlobalNamespace::NullAllowed_Context context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NullAllowedIf*>(propertyName, comparisonOperation, valueToCompare, context));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullAllowedIf::NullAllowedIf() {}
