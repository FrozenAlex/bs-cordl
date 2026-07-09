#pragma once
// IWYU pragma private; include "GlobalNamespace/EventsTestScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__EventsTestScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EventsTestScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestScenesTransitionSetupDataSO::*)(::GlobalNamespace::EnvironmentsListModel*)>(
    &::GlobalNamespace::EventsTestScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x57eec58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestScenesTransitionSetupDataSO*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::EventsTestScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57eee30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EventsTestScenesTransitionSetupDataSO::Init(::GlobalNamespace::EnvironmentsListModel* environmentsListModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestScenesTransitionSetupDataSO*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, environmentsListModel);
}
inline void GlobalNamespace::EventsTestScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EventsTestScenesTransitionSetupDataSO* GlobalNamespace::EventsTestScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EventsTestScenesTransitionSetupDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventsTestScenesTransitionSetupDataSO::EventsTestScenesTransitionSetupDataSO() {}
