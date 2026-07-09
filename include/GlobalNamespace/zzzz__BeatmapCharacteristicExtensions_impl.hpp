#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.SerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(&::GlobalNamespace::BeatmapCharacteristicExtensions::SerializedName)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x365008c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                           { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::BeatmapCharacteristicExtensions::SerializedName(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                         { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, beatmapCharacteristic);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicExtensions::BeatmapCharacteristicExtensions() {}
