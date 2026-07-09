#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/Poser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__Poser_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::BeatSaber::RecPlay::Poser.InterpolatePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, float_t)>(&::BeatSaber::RecPlay::Poser::InterpolatePose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x322d45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::Poser*>(),
                                         { "InterpolatePose", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::Poser.InvertPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose)>(&::BeatSaber::RecPlay::Poser::InvertPose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x322d6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::Poser*>(), { "InvertPose", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::Poser.MirrorPoseYZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose)>(&::BeatSaber::RecPlay::Poser::MirrorPoseYZ)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x322d71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::Poser*>(), { "MirrorPoseYZ", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Pose BeatSaber::RecPlay::Poser::InterpolatePose(::by_ref<::UnityEngine::Pose> a, ::by_ref<::UnityEngine::Pose> b, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::Poser*>(),
                                       { "InterpolatePose", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Pose BeatSaber::RecPlay::Poser::InvertPose(::UnityEngine::Pose pose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::Poser*>(), { "InvertPose", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, pose);
}
inline ::UnityEngine::Pose BeatSaber::RecPlay::Poser::MirrorPoseYZ(::UnityEngine::Pose pose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::Poser*>(), { "MirrorPoseYZ", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, pose);
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::Poser::Poser() {}
