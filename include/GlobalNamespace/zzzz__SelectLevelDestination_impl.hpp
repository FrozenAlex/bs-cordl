#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectLevelDestination.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__SelectLevelDestination_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectLevelDestination._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectLevelDestination::*)(::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*,
                                                                                                           ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*)>(
    &::GlobalNamespace::SelectLevelDestination::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3648cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLevelDestination*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelPack*& GlobalNamespace::SelectLevelDestination::__cordl_internal_get_beatmapLevelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelPack;
}
constexpr ::GlobalNamespace::BeatmapLevelPack* const& GlobalNamespace::SelectLevelDestination::__cordl_internal_get_beatmapLevelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelPack;
}
constexpr void GlobalNamespace::SelectLevelDestination::__cordl_internal_set_beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevelPack = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::SelectLevelDestination::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::SelectLevelDestination::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::SelectLevelDestination::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevel = value;
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::SelectLevelDestination::__cordl_internal_get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::SelectLevelDestination::__cordl_internal_get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void GlobalNamespace::SelectLevelDestination::__cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapDifficulty = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& GlobalNamespace::SelectLevelDestination::__cordl_internal_get_beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& GlobalNamespace::SelectLevelDestination::__cordl_internal_get_beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr void GlobalNamespace::SelectLevelDestination::__cordl_internal_set_beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapCharacteristic = value;
}
inline void GlobalNamespace::SelectLevelDestination::_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                           ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLevelDestination*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelPack, beatmapLevel, beatmapDifficulty, beatmapCharacteristic);
}
inline ::GlobalNamespace::SelectLevelDestination* GlobalNamespace::SelectLevelDestination::New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack,
                                                                                                    ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                                                    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectLevelDestination*>(beatmapLevelPack, beatmapLevel, beatmapDifficulty, beatmapCharacteristic));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectLevelDestination::SelectLevelDestination() {}
