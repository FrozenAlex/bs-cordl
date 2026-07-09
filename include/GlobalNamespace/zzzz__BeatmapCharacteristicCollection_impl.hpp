#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicCollection::*)(
    ::GlobalNamespace::BeatmapCharacteristicCollectionSO*, ::GlobalNamespace::AppStaticSettingsSO*)>(&::GlobalNamespace::BeatmapCharacteristicCollection::_ctor)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x364fa68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>(), ::i2c::type_of<::GlobalNamespace::AppStaticSettingsSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollection.GetBeatmapCharacteristicBySerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> (::GlobalNamespace::BeatmapCharacteristicCollection::*)(::StringW)>(
    &::GlobalNamespace::BeatmapCharacteristicCollection::GetBeatmapCharacteristicBySerializedName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x364ffa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(), { "GetBeatmapCharacteristicBySerializedName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get__beatmapCharacteristicsBySerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicsBySerializedName;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get__beatmapCharacteristicsBySerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicsBySerializedName;
}
constexpr void GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_set__beatmapCharacteristicsBySerializedName(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicsBySerializedName = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get_beatmapCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristics;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get_beatmapCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristics;
}
constexpr void GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_set_beatmapCharacteristics(
    ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapCharacteristics = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get_disabledBeatmapCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disabledBeatmapCharacteristics;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get_disabledBeatmapCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disabledBeatmapCharacteristics;
}
constexpr void GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_set_disabledBeatmapCharacteristics(
    ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disabledBeatmapCharacteristics = value;
}
inline void GlobalNamespace::BeatmapCharacteristicCollection::_ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO* collection, ::GlobalNamespace::AppStaticSettingsSO* appStaticSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>(), ::i2c::type_of<::GlobalNamespace::AppStaticSettingsSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection, appStaticSettings);
}
inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> GlobalNamespace::BeatmapCharacteristicCollection::GetBeatmapCharacteristicBySerializedName(::StringW serializedName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(), { "GetBeatmapCharacteristicBySerializedName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>(this, ___internal_method, serializedName);
}
inline ::GlobalNamespace::BeatmapCharacteristicCollection* GlobalNamespace::BeatmapCharacteristicCollection::New_ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO* collection,
                                                                                                                      ::GlobalNamespace::AppStaticSettingsSO* appStaticSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCharacteristicCollection*>(collection, appStaticSettings));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection::BeatmapCharacteristicCollection() {}
