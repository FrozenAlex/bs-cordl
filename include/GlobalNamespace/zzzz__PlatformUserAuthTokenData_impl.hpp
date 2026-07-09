#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformUserAuthTokenData.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformUserAuthTokenData_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData.get_token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlatformUserAuthTokenData::*)()>(&::GlobalNamespace::PlatformUserAuthTokenData::get_token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e060e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUserAuthTokenData*>(), { "get_token", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData.set_token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformUserAuthTokenData::*)(::StringW)>(&::GlobalNamespace::PlatformUserAuthTokenData::set_token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e060e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUserAuthTokenData*>(), { "set_token", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData.get_validPlatformEnvironment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlatformEnvironment (::GlobalNamespace::PlatformUserAuthTokenData::*)()>(
    &::GlobalNamespace::PlatformUserAuthTokenData::get_validPlatformEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e060f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUserAuthTokenData*>(), { "get_validPlatformEnvironment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData.set_validPlatformEnvironment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformUserAuthTokenData::*)(::GlobalNamespace::PlatformEnvironment)>(
    &::GlobalNamespace::PlatformUserAuthTokenData::set_validPlatformEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e060f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUserAuthTokenData*>(),
                                                                                           { "set_validPlatformEnvironment", {}, { ::i2c::type_of<::GlobalNamespace::PlatformEnvironment>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformUserAuthTokenData::*)(::StringW, ::GlobalNamespace::PlatformEnvironment)>(
    &::GlobalNamespace::PlatformUserAuthTokenData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e06100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUserAuthTokenData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlatformEnvironment>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlatformUserAuthTokenData::__cordl_internal_get__token_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::PlatformUserAuthTokenData::__cordl_internal_get__token_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token_k__BackingField;
}
constexpr void GlobalNamespace::PlatformUserAuthTokenData::__cordl_internal_set__token_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____token_k__BackingField = value;
}
constexpr ::GlobalNamespace::PlatformEnvironment& GlobalNamespace::PlatformUserAuthTokenData::__cordl_internal_get__validPlatformEnvironment_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validPlatformEnvironment_k__BackingField;
}
constexpr ::GlobalNamespace::PlatformEnvironment const& GlobalNamespace::PlatformUserAuthTokenData::__cordl_internal_get__validPlatformEnvironment_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validPlatformEnvironment_k__BackingField;
}
constexpr void GlobalNamespace::PlatformUserAuthTokenData::__cordl_internal_set__validPlatformEnvironment_k__BackingField(::GlobalNamespace::PlatformEnvironment value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validPlatformEnvironment_k__BackingField = value;
}
inline ::StringW GlobalNamespace::PlatformUserAuthTokenData::get_token() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUserAuthTokenData*>(), { "get_token", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformUserAuthTokenData::set_token(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUserAuthTokenData*>(), { "set_token", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlatformEnvironment GlobalNamespace::PlatformUserAuthTokenData::get_validPlatformEnvironment() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUserAuthTokenData*>(), { "get_validPlatformEnvironment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlatformEnvironment>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformUserAuthTokenData::set_validPlatformEnvironment(::GlobalNamespace::PlatformEnvironment value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUserAuthTokenData*>(),
                                                                                         { "set_validPlatformEnvironment", {}, { ::i2c::type_of<::GlobalNamespace::PlatformEnvironment>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlatformUserAuthTokenData::_ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment validPlatformEnvironment) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUserAuthTokenData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlatformEnvironment>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, validPlatformEnvironment);
}
inline ::GlobalNamespace::PlatformUserAuthTokenData* GlobalNamespace::PlatformUserAuthTokenData::New_ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment validPlatformEnvironment) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformUserAuthTokenData*>(token, validPlatformEnvironment));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformUserAuthTokenData::PlatformUserAuthTokenData() {}
