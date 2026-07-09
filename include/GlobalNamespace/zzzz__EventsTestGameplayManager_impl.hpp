#pragma once
// IWYU pragma private; include "GlobalNamespace/EventsTestGameplayManager.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupList_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EventsTestGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__EventsTestGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::*)(float_t)>(
    &::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5869ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter.ConvertBeatToTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::*)(float_t)>(
    &::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::ConvertBeatToTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x586cf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter*>(), { "ConvertBeatToTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::__cordl_internal_get__bpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpm;
}
constexpr float_t const& GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::__cordl_internal_get__bpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpm;
}
constexpr void GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::__cordl_internal_set__bpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bpm = value;
}
inline void GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::_ctor(float_t bpm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bpm);
}
inline float_t GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::ConvertBeatToTime(float_t beat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter*>(), { "ConvertBeatToTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, beat);
}
inline ::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter* GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::New_ctor(float_t bpm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter*>(bpm));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatToTimeConverter"
constexpr GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::operator ::GlobalNamespace::IBeatToTimeConverter*() noexcept {
  return static_cast<::GlobalNamespace::IBeatToTimeConverter*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatToTimeConverter"
constexpr ::GlobalNamespace::IBeatToTimeConverter* GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::i___GlobalNamespace__IBeatToTimeConverter() noexcept {
  return static_cast<::GlobalNamespace::IBeatToTimeConverter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::EventsTestGameplayManager_MockBeatToTimeConverter() {}
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::*)()>(
    &::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586c4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0._AddEventsForLightGroup_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::*)(::GlobalNamespace::LightGroup*)>(
    &::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::_AddEventsForLightGroup_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x586cf90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0*>(),
                                                                                           { "<AddEventsForLightGroup>b__0", {}, { ::i2c::type_of<::GlobalNamespace::LightGroup*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::__cordl_internal_get_lightGroupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroupId;
}
constexpr int32_t const& GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::__cordl_internal_get_lightGroupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroupId;
}
constexpr void GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::__cordl_internal_set_lightGroupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightGroupId = value;
}
inline void GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::_AddEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0*>(),
                                                                                         { "<AddEventsForLightGroup>b__0", {}, { ::i2c::type_of<::GlobalNamespace::LightGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0* GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::EventsTestGameplayManager___c__DisplayClass18_0() {}
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::*)()>(
    &::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586c4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0._AddInstantToggleEventsForLightGroup_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::*)(::GlobalNamespace::LightGroup*)>(
    &::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::_AddInstantToggleEventsForLightGroup_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x586cfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0*>(),
                                                                                           { "<AddInstantToggleEventsForLightGroup>b__0", {}, { ::i2c::type_of<::GlobalNamespace::LightGroup*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::__cordl_internal_get_lightGroupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroupId;
}
constexpr int32_t const& GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::__cordl_internal_get_lightGroupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroupId;
}
constexpr void GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::__cordl_internal_set_lightGroupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightGroupId = value;
}
inline void GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::_AddInstantToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0*>(),
                                                                                         { "<AddInstantToggleEventsForLightGroup>b__0", {}, { ::i2c::type_of<::GlobalNamespace::LightGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0* GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::EventsTestGameplayManager___c__DisplayClass19_0() {}
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::*)()>(
    &::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586c4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0._AddToggleEventsForLightGroup_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::*)(::GlobalNamespace::LightGroup*)>(
    &::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::_AddToggleEventsForLightGroup_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x586cff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0*>(),
                                                                                           { "<AddToggleEventsForLightGroup>b__0", {}, { ::i2c::type_of<::GlobalNamespace::LightGroup*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::__cordl_internal_get_lightGroupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroupId;
}
constexpr int32_t const& GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::__cordl_internal_get_lightGroupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroupId;
}
constexpr void GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::__cordl_internal_set_lightGroupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightGroupId = value;
}
inline void GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::_AddToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0*>(),
                                                                                         { "<AddToggleEventsForLightGroup>b__0", {}, { ::i2c::type_of<::GlobalNamespace::LightGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0* GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::EventsTestGameplayManager___c__DisplayClass20_0() {}
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::Start)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5869d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::Update)> {
  constexpr static std::size_t size = 0x8b4;
  constexpr static std::size_t addrs = 0x5869ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddEventsForLightGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)(int32_t)>(&::GlobalNamespace::EventsTestGameplayManager::AddEventsForLightGroup)> {
  constexpr static std::size_t size = 0x8e8;
  constexpr static std::size_t addrs = 0x586a788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(), { "AddEventsForLightGroup", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddInstantToggleEventsForLightGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)(int32_t)>(
    &::GlobalNamespace::EventsTestGameplayManager::AddInstantToggleEventsForLightGroup)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x586b5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(), { "AddInstantToggleEventsForLightGroup", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddToggleEventsForLightGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)(int32_t, ::GlobalNamespace::EnvironmentColorType)>(
    &::GlobalNamespace::EventsTestGameplayManager::AddToggleEventsForLightGroup)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x586b070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(),
                                                             { "AddToggleEventsForLightGroup", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::EnvironmentColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddTestBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::AddTestBox)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0x586ba74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(), { "AddTestBox", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::_ctor)> {
  constexpr static std::size_t size = 0xacc;
  constexpr static std::size_t addrs = 0x586c4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__moveTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveTime;
}
constexpr bool const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__moveTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveTime;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__moveTime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveTime = value;
}
constexpr bool& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__spawnTestBox() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnTestBox;
}
constexpr bool const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__spawnTestBox() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnTestBox;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__spawnTestBox(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnTestBox = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::BeatmapData*& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr ::GlobalNamespace::BeatmapData* const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__beatmapData(::GlobalNamespace::BeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapData = value;
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSource = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__basicBeatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicBeatmapEventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__basicBeatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicBeatmapEventType;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__basicBeatmapEventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____basicBeatmapEventType = value;
}
constexpr float_t& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__floatValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValue;
}
constexpr float_t const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__floatValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValue;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__floatValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatValue = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*>& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapEventDataBoxGroupLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventDataBoxGroupLists;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*> const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapEventDataBoxGroupLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventDataBoxGroupLists;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__beatmapEventDataBoxGroupLists(::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventDataBoxGroupLists = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get_groupState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupState;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get_groupState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupState;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set_groupState(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupState = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>*&
GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapEventTypeBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventTypeBindings;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>* const&
GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapEventTypeBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventTypeBindings;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__beatmapEventTypeBindings(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventTypeBindings = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__intBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intBindings;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__intBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intBindings;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__intBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intBindings = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapValuesBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapValuesBindings;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapValuesBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapValuesBindings;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__beatmapValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapValuesBindings = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>*& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__floatValuesBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValuesBindings;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>* const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__floatValuesBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValuesBindings;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__floatValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatValuesBindings = value;
}
constexpr bool& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__rotatingLasers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotatingLasers;
}
constexpr bool const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__rotatingLasers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotatingLasers;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__rotatingLasers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotatingLasers = value;
}
inline void GlobalNamespace::EventsTestGameplayManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EventsTestGameplayManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EventsTestGameplayManager::AddEventsForLightGroup(int32_t lightGroupId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(), { "AddEventsForLightGroup", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightGroupId);
}
inline void GlobalNamespace::EventsTestGameplayManager::AddInstantToggleEventsForLightGroup(int32_t lightGroupId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(), { "AddInstantToggleEventsForLightGroup", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightGroupId);
}
inline void GlobalNamespace::EventsTestGameplayManager::AddToggleEventsForLightGroup(int32_t lightGroupId, ::GlobalNamespace::EnvironmentColorType color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(),
                                                           { "AddToggleEventsForLightGroup", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::EnvironmentColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightGroupId, color);
}
inline void GlobalNamespace::EventsTestGameplayManager::AddTestBox() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(), { "AddTestBox", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EventsTestGameplayManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventsTestGameplayManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EventsTestGameplayManager* GlobalNamespace::EventsTestGameplayManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EventsTestGameplayManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventsTestGameplayManager::EventsTestGameplayManager() {}
