#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO::*)(::GlobalNamespace::RecordingToolSceneSetupData*)>(
    &::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57ec5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::RecordingToolSceneSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f26d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RecordingToolScenesTransitionSetupDataSO::Init(::GlobalNamespace::RecordingToolSceneSetupData* recordingToolSceneSetupData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::GlobalNamespace::RecordingToolSceneSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordingToolSceneSetupData);
}
inline void GlobalNamespace::RecordingToolScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO* GlobalNamespace::RecordingToolScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO::RecordingToolScenesTransitionSetupDataSO() {}
