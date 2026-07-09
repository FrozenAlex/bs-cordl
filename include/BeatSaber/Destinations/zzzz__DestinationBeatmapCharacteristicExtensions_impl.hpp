#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/DestinationBeatmapCharacteristicExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationBeatmapCharacteristicExtensions_def.hpp"
#include "BeatSaber/Destinations/zzzz__BeatmapCharacteristic_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions.ToSerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::BeatSaber::Destinations::BeatmapCharacteristic)>(
    &::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions::ToSerializedName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x31e8a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions*>(),
                                                                                           { "ToSerializedName", {}, { ::i2c::type_of<::BeatSaber::Destinations::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions.FromSerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Destinations::BeatmapCharacteristic (*)(::StringW)>(
    &::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions::FromSerializedName)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x31e8b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions*>(), { "FromSerializedName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions::ToSerializedName(::BeatSaber::Destinations::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions*>(),
                                                                                         { "ToSerializedName", {}, { ::i2c::type_of<::BeatSaber::Destinations::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, characteristic);
}
inline ::BeatSaber::Destinations::BeatmapCharacteristic BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions::FromSerializedName(::StringW serializedName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions*>(), { "FromSerializedName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Destinations::BeatmapCharacteristic>(nullptr, ___internal_method, serializedName);
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions::DestinationBeatmapCharacteristicExtensions() {}
