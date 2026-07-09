#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/Destination.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationTarget_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__Destination_def.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationTarget_def.hpp"
#include "BeatSaber/Destinations/zzzz__LevelStartDestinationParameters_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::Destination._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::Destination::*)(
    ::BeatSaber::Destinations::DestinationTarget, ::BeatSaber::Destinations::LevelStartDestinationParameters*, ::ArrayW<::StringW>, bool, bool)>(&::BeatSaber::Destinations::Destination::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x31e8f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::Destination*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::BeatSaber::Destinations::DestinationTarget>(), ::i2c::type_of<::BeatSaber::Destinations::LevelStartDestinationParameters*>(),
                                                    ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Destinations::DestinationTarget& BeatSaber::Destinations::Destination::__cordl_internal_get_stage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stage;
}
constexpr ::BeatSaber::Destinations::DestinationTarget const& BeatSaber::Destinations::Destination::__cordl_internal_get_stage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stage;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_stage(::BeatSaber::Destinations::DestinationTarget value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stage = value;
}
constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters*& BeatSaber::Destinations::Destination::__cordl_internal_get_levelStartParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelStartParameters;
}
constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters* const& BeatSaber::Destinations::Destination::__cordl_internal_get_levelStartParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelStartParameters;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_levelStartParameters(::BeatSaber::Destinations::LevelStartDestinationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelStartParameters = value;
}
constexpr ::ArrayW<::StringW>& BeatSaber::Destinations::Destination::__cordl_internal_get_arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arguments;
}
constexpr ::ArrayW<::StringW> const& BeatSaber::Destinations::Destination::__cordl_internal_get_arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arguments;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_arguments(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arguments = value;
}
constexpr bool& BeatSaber::Destinations::Destination::__cordl_internal_get_requiresHealthWarning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresHealthWarning;
}
constexpr bool const& BeatSaber::Destinations::Destination::__cordl_internal_get_requiresHealthWarning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresHealthWarning;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_requiresHealthWarning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requiresHealthWarning = value;
}
constexpr bool& BeatSaber::Destinations::Destination::__cordl_internal_get_loadMenu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadMenu;
}
constexpr bool const& BeatSaber::Destinations::Destination::__cordl_internal_get_loadMenu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadMenu;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_loadMenu(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadMenu = value;
}
inline void BeatSaber::Destinations::Destination::_ctor(::BeatSaber::Destinations::DestinationTarget stage, ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination,
                                                        ::ArrayW<::StringW> arguments, bool requiresHealthWarning, bool loadMenu) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::Destination*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::BeatSaber::Destinations::DestinationTarget>(), ::i2c::type_of<::BeatSaber::Destinations::LevelStartDestinationParameters*>(),
                                                  ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stage, levelStartDestination, arguments, requiresHealthWarning, loadMenu);
}
inline ::BeatSaber::Destinations::Destination* BeatSaber::Destinations::Destination::New_ctor(::BeatSaber::Destinations::DestinationTarget stage,
                                                                                              ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination,
                                                                                              ::ArrayW<::StringW> arguments, bool requiresHealthWarning, bool loadMenu) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::Destination*>(stage, levelStartDestination, arguments, requiresHealthWarning, loadMenu));
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::Destination::Destination() {}
