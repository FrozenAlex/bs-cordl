#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicSegmentedControlController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSegmentedControlController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSegmentedControlController_def.hpp"
#include "HMUI/zzzz__IconSegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c::*)()>(
    &::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e7218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c._SetData_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c::*)(
    ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::BeatmapCharacteristicSO*)>(&::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c::_SetData_b__10_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58e721c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*>(),
                            { "<SetData>b__10_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c::setStaticF___9(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*, "<>9", ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*>(
      std::forward<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*>(value));
}
inline ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c* GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*, "<>9", ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*>();
}
inline void GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c::setStaticF___9__10_0(::System::Comparison_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*, "<>9__10_0",
                                    ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*>(
      std::forward<::System::Comparison_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*, "<>9__10_0",
                                           ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*>();
}
inline void GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c::_SetData_b__10_0(::GlobalNamespace::BeatmapCharacteristicSO* a, ::GlobalNamespace::BeatmapCharacteristicSO* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*>(),
                                       { "<SetData>b__10_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c* GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c::BeatmapCharacteristicSegmentedControlController___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController.add_didSelectBeatmapCharacteristicEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*)>(
    &::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::add_didSelectBeatmapCharacteristicEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58e6678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(),
            { "add_didSelectBeatmapCharacteristicEvent",
              {},
              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController.remove_didSelectBeatmapCharacteristicEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*)>(
    &::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::remove_didSelectBeatmapCharacteristicEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58e6738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(),
            { "remove_didSelectBeatmapCharacteristicEvent",
              {},
              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController.get_selectedBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> (::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)()>(
    &::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::get_selectedBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e67f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(), { "get_selectedBeatmapCharacteristic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)()>(
    &::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58e6800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)()>(
    &::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58e6890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*, ::GlobalNamespace::BeatmapCharacteristicSO*,
    ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*)>(&::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::SetData)> {
  constexpr static std::size_t size = 0x744;
  constexpr static std::size_t addrs = 0x58e696c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(),
                                                             { "SetData",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController.HandleBeatmapCharacteristicSegmentedControlDidSelectCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)(::HMUI::SegmentedControl*, int32_t)>(
    &::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::HandleBeatmapCharacteristicSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58e70b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(),
                                                { "HandleBeatmapCharacteristicSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)()>(
    &::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58e7148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::IconSegmentedControl>& GlobalNamespace::BeatmapCharacteristicSegmentedControlController::__cordl_internal_get__segmentedControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentedControl;
}
constexpr ::UnityW<::HMUI::IconSegmentedControl> const& GlobalNamespace::BeatmapCharacteristicSegmentedControlController::__cordl_internal_get__segmentedControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentedControl;
}
constexpr void GlobalNamespace::BeatmapCharacteristicSegmentedControlController::__cordl_internal_set__segmentedControl(::UnityW<::HMUI::IconSegmentedControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____segmentedControl = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*&
GlobalNamespace::BeatmapCharacteristicSegmentedControlController::__cordl_internal_get_didSelectBeatmapCharacteristicEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectBeatmapCharacteristicEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const&
GlobalNamespace::BeatmapCharacteristicSegmentedControlController::__cordl_internal_get_didSelectBeatmapCharacteristicEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectBeatmapCharacteristicEvent;
}
constexpr void GlobalNamespace::BeatmapCharacteristicSegmentedControlController::__cordl_internal_set_didSelectBeatmapCharacteristicEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectBeatmapCharacteristicEvent = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& GlobalNamespace::BeatmapCharacteristicSegmentedControlController::__cordl_internal_get__selectedBeatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedBeatmapCharacteristic;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& GlobalNamespace::BeatmapCharacteristicSegmentedControlController::__cordl_internal_get__selectedBeatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedBeatmapCharacteristic;
}
constexpr void GlobalNamespace::BeatmapCharacteristicSegmentedControlController::__cordl_internal_set__selectedBeatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedBeatmapCharacteristic = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*&
GlobalNamespace::BeatmapCharacteristicSegmentedControlController::__cordl_internal_get__currentlyAvailableBeatmapCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentlyAvailableBeatmapCharacteristics;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const&
GlobalNamespace::BeatmapCharacteristicSegmentedControlController::__cordl_internal_get__currentlyAvailableBeatmapCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentlyAvailableBeatmapCharacteristics;
}
constexpr void GlobalNamespace::BeatmapCharacteristicSegmentedControlController::__cordl_internal_set__currentlyAvailableBeatmapCharacteristics(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentlyAvailableBeatmapCharacteristics = value;
}
inline void GlobalNamespace::BeatmapCharacteristicSegmentedControlController::add_didSelectBeatmapCharacteristicEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(),
          { "add_didSelectBeatmapCharacteristicEvent",
            {},
            { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapCharacteristicSegmentedControlController::remove_didSelectBeatmapCharacteristicEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(),
          { "remove_didSelectBeatmapCharacteristicEvent",
            {},
            { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> GlobalNamespace::BeatmapCharacteristicSegmentedControlController::get_selectedBeatmapCharacteristic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(), { "get_selectedBeatmapCharacteristic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicSegmentedControlController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicSegmentedControlController::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void
GlobalNamespace::BeatmapCharacteristicSegmentedControlController::SetData(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* beatmapCharacteristics,
                                                                          ::GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic,
                                                                          ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* notAllowedCharacteristics) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(),
                                                           { "SetData",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCharacteristics, selectedBeatmapCharacteristic, notAllowedCharacteristics);
}
inline void GlobalNamespace::BeatmapCharacteristicSegmentedControlController::HandleBeatmapCharacteristicSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(),
                                              { "HandleBeatmapCharacteristicSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentedControl, cellIdx);
}
inline void GlobalNamespace::BeatmapCharacteristicSegmentedControlController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* GlobalNamespace::BeatmapCharacteristicSegmentedControlController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::BeatmapCharacteristicSegmentedControlController() {}
