#pragma once
// IWYU pragma private; include "GlobalNamespace/VRControllersRecorderExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VRControllersRecorderExtensions_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_def.hpp"
#include "GlobalNamespace/zzzz__VRControllersRecorder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorderExtensions.ToVRControllersRecorderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VRControllersRecorder_Mode (*)(::GlobalNamespace::PlaymodeOptions)>(
    &::GlobalNamespace::VRControllersRecorderExtensions::ToVRControllersRecorderMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57c0af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRControllersRecorderExtensions*>(),
                                                                                           { "ToVRControllersRecorderMode", {}, { ::i2c::type_of<::GlobalNamespace::PlaymodeOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorderExtensions.ToVRControllersRecorderInitData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VRControllersRecorder_InitData* (*)(::GlobalNamespace::GameplayAdditionalInformation*)>(
    &::GlobalNamespace::VRControllersRecorderExtensions::ToVRControllersRecorderInitData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x57c0b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRControllersRecorderExtensions*>(),
                                                             { "ToVRControllersRecorderInitData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::VRControllersRecorder_Mode GlobalNamespace::VRControllersRecorderExtensions::ToVRControllersRecorderMode(::GlobalNamespace::PlaymodeOptions playmodeOptions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRControllersRecorderExtensions*>(),
                                                                                         { "ToVRControllersRecorderMode", {}, { ::i2c::type_of<::GlobalNamespace::PlaymodeOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRControllersRecorder_Mode>(nullptr, ___internal_method, playmodeOptions);
}
inline ::GlobalNamespace::VRControllersRecorder_InitData*
GlobalNamespace::VRControllersRecorderExtensions::ToVRControllersRecorderInitData(::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRControllersRecorderExtensions*>(),
                                                           { "ToVRControllersRecorderInitData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRControllersRecorder_InitData*>(nullptr, ___internal_method, gameplayAdditionalInformation);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRControllersRecorderExtensions::VRControllersRecorderExtensions() {}
