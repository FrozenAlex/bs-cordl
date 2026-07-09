#pragma once
// IWYU pragma private; include "GlobalNamespace/CreditsScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__CreditsScenesTransitionSetupDataSO_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreditsScenesTransitionSetupDataSO.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsScenesTransitionSetupDataSO::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>*)>(&::GlobalNamespace::CreditsScenesTransitionSetupDataSO::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57ee9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>(),
                                                { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsScenesTransitionSetupDataSO.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsScenesTransitionSetupDataSO::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>*)>(&::GlobalNamespace::CreditsScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57eeab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>(),
                                                { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::CreditsScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57eeb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsScenesTransitionSetupDataSO.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::CreditsScenesTransitionSetupDataSO::Finish)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57eec30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::CreditsScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57eec50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>*& GlobalNamespace::CreditsScenesTransitionSetupDataSO::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>* const& GlobalNamespace::CreditsScenesTransitionSetupDataSO::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::CreditsScenesTransitionSetupDataSO::__cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline void GlobalNamespace::CreditsScenesTransitionSetupDataSO::add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>(),
                                                           { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CreditsScenesTransitionSetupDataSO::remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>(),
                                              { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CreditsScenesTransitionSetupDataSO::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CreditsScenesTransitionSetupDataSO::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CreditsScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreditsScenesTransitionSetupDataSO* GlobalNamespace::CreditsScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreditsScenesTransitionSetupDataSO::CreditsScenesTransitionSetupDataSO() {}
