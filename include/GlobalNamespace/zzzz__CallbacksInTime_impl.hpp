#pragma once
// IWYU pragma private; include "GlobalNamespace/CallbacksInTime.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CallbacksInTime_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CallbacksInTime.get_isEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CallbacksInTime::*)()>(&::GlobalNamespace::CallbacksInTime::get_isEmpty)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5788678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CallbacksInTime*>(), { "get_isEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallbacksInTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CallbacksInTime::*)(float_t)>(&::GlobalNamespace::CallbacksInTime::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5789adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CallbacksInTime*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallbacksInTime.AddCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CallbacksInTime::*)(::GlobalNamespace::BeatmapDataCallbackWrapper*)>(
    &::GlobalNamespace::CallbacksInTime::AddCallback)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5789bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CallbacksInTime*>(), { "AddCallback", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataCallbackWrapper*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallbacksInTime.RemoveCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CallbacksInTime::*)(::GlobalNamespace::BeatmapDataCallbackWrapper*)>(
    &::GlobalNamespace::CallbacksInTime::RemoveCallback)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5788460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CallbacksInTime*>(), { "RemoveCallback", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataCallbackWrapper*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallbacksInTime.CallCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CallbacksInTime::*)(::GlobalNamespace::BeatmapDataItem*)>(&::GlobalNamespace::CallbacksInTime::CallCallbacks)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5788840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CallbacksInTime*>(), { "CallCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallbacksInTime.CallCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CallbacksInTime::*)(::System::Type*, ::GlobalNamespace::BeatmapDataItem*)>(
    &::GlobalNamespace::CallbacksInTime::CallCallbacks)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5789f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CallbacksInTime*>(),
                                                             { "CallCallbacks", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*& GlobalNamespace::CallbacksInTime::__cordl_internal_get_lastProcessedNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastProcessedNode;
}
constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* const& GlobalNamespace::CallbacksInTime::__cordl_internal_get_lastProcessedNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastProcessedNode;
}
constexpr void GlobalNamespace::CallbacksInTime::__cordl_internal_set_lastProcessedNode(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastProcessedNode = value;
}
constexpr float_t& GlobalNamespace::CallbacksInTime::__cordl_internal_get_aheadTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aheadTime;
}
constexpr float_t const& GlobalNamespace::CallbacksInTime::__cordl_internal_get_aheadTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aheadTime;
}
constexpr void GlobalNamespace::CallbacksInTime::__cordl_internal_set_aheadTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___aheadTime = value;
}
constexpr ::GlobalNamespace::BeatmapEventData*& GlobalNamespace::CallbacksInTime::__cordl_internal_get_beatmapEventDataForCallbacksAfterNodeRemoval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataForCallbacksAfterNodeRemoval;
}
constexpr ::GlobalNamespace::BeatmapEventData* const& GlobalNamespace::CallbacksInTime::__cordl_internal_get_beatmapEventDataForCallbacksAfterNodeRemoval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataForCallbacksAfterNodeRemoval;
}
constexpr void GlobalNamespace::CallbacksInTime::__cordl_internal_set_beatmapEventDataForCallbacksAfterNodeRemoval(::GlobalNamespace::BeatmapEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapEventDataForCallbacksAfterNodeRemoval = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*&
GlobalNamespace::CallbacksInTime::__cordl_internal_get__callbacksWithSubtypeIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacksWithSubtypeIdentifier;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>,
                                                       ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* const&
GlobalNamespace::CallbacksInTime::__cordl_internal_get__callbacksWithSubtypeIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacksWithSubtypeIdentifier;
}
constexpr void GlobalNamespace::CallbacksInTime::__cordl_internal_set__callbacksWithSubtypeIdentifier(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callbacksWithSubtypeIdentifier = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*&
GlobalNamespace::CallbacksInTime::__cordl_internal_get__callbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacks;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* const&
GlobalNamespace::CallbacksInTime::__cordl_internal_get__callbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacks;
}
constexpr void GlobalNamespace::CallbacksInTime::__cordl_internal_set__callbacks(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callbacks = value;
}
inline bool GlobalNamespace::CallbacksInTime::get_isEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CallbacksInTime*>(), { "get_isEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CallbacksInTime::_ctor(float_t aheadTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CallbacksInTime*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aheadTime);
}
inline void GlobalNamespace::CallbacksInTime::AddCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CallbacksInTime*>(), { "AddCallback", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataCallbackWrapper*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackWrapper);
}
inline void GlobalNamespace::CallbacksInTime::RemoveCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CallbacksInTime*>(), { "RemoveCallback", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataCallbackWrapper*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackWrapper);
}
inline void GlobalNamespace::CallbacksInTime::CallCallbacks(::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CallbacksInTime*>(), { "CallCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapDataItem);
}
inline void GlobalNamespace::CallbacksInTime::CallCallbacks(::System::Type* beatmapEventDataType, ::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CallbacksInTime*>(),
                                                           { "CallCallbacks", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapEventDataType, beatmapDataItem);
}
inline ::GlobalNamespace::CallbacksInTime* GlobalNamespace::CallbacksInTime::New_ctor(float_t aheadTime) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CallbacksInTime*>(aheadTime));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CallbacksInTime::CallbacksInTime() {}
