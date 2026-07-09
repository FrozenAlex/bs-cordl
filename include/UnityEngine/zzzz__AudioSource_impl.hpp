#pragma once
// IWYU pragma private; include "UnityEngine/AudioSource.hpp"
#include "UnityEngine/zzzz__AudioBehaviour_impl.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioResource_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/zzzz__ActivePlayable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioRolloffMode_def.hpp"
#include "UnityEngine/zzzz__AudioSourceCurveType_def.hpp"
#include "UnityEngine/zzzz__AudioVelocityUpdateMode_def.hpp"
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AudioSource.GetPitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::AudioSource*)>(&::UnityEngine::AudioSource::GetPitch)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x68f292c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetPitch", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SetPitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioSource*, float_t)>(&::UnityEngine::AudioSource::SetPitch)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x68f2a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetPitch", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.PlayHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioSource*, uint64_t)>(&::UnityEngine::AudioSource::PlayHelper)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x68f2b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayHelper", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(double_t)>(&::UnityEngine::AudioSource::Play)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f2c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Play", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.PlayOneShotHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioSource*, ::UnityEngine::AudioClip*, float_t)>(&::UnityEngine::AudioSource::PlayOneShotHelper)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x68f2ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                         { "PlayOneShotHelper", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(bool)>(&::UnityEngine::AudioSource::Stop)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f2e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Stop", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SetCustomCurveHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioSource*, ::UnityEngine::AudioSourceCurveType, ::UnityEngine::AnimationCurve*)>(
    &::UnityEngine::AudioSource::SetCustomCurveHelper)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x68f2f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                            { "SetCustomCurveHelper",
                              {},
                              { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::UnityEngine::AudioSourceCurveType>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetCustomCurveHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)(::UnityEngine::AudioSource*, ::UnityEngine::AudioSourceCurveType)>(
    &::UnityEngine::AudioSource::GetCustomCurveHelper)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x68f3040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                { "GetCustomCurveHelper", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::UnityEngine::AudioSourceCurveType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetOutputDataHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioSource*, ::by_ref<::ArrayW<float_t>>, int32_t)>(&::UnityEngine::AudioSource::GetOutputDataHelper)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x68f3154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                         { "GetOutputDataHelper", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetSpectrumDataHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioSource*, ::by_ref<::ArrayW<float_t>>, int32_t, ::UnityEngine::FFTWindow)>(
    &::UnityEngine::AudioSource::GetSpectrumDataHelper)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x68f3338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetSpectrumDataHelper",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(),
                                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_volume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_volume)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f3534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_volume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_volume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::set_volume)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f35f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_volume", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_pitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_pitch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f36cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_pitch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_pitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::set_pitch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f36d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_pitch", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_time)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f36d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::set_time)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f3790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_timeSamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_timeSamples)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f386c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_timeSamples", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_timeSamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(int32_t)>(&::UnityEngine::AudioSource::set_timeSamples)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f3928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_timeSamples", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_clip)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68f39fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_clip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::AudioSource::set_clip)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f3bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_clip", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_resource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Audio::AudioResource> (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_resource)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x68f3a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_resource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_resource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(::UnityEngine::Audio::AudioResource*)>(&::UnityEngine::AudioSource::set_resource)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x68f3bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_resource", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioResource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_outputAudioMixerGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Audio::AudioMixerGroup> (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_outputAudioMixerGroup)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x68f3cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_outputAudioMixerGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_outputAudioMixerGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(::UnityEngine::Audio::AudioMixerGroup*)>(&::UnityEngine::AudioSource::set_outputAudioMixerGroup)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x68f3e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_outputAudioMixerGroup", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::Play)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f3f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Play", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(uint64_t)>(&::UnityEngine::AudioSource::Play)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f3f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Play", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.PlayDelayed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::PlayDelayed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68f3f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayDelayed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.PlayScheduled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(double_t)>(&::UnityEngine::AudioSource::PlayScheduled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x68f3fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayScheduled", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.PlayOneShot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::AudioSource::PlayOneShot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f3fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayOneShot", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.PlayOneShot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(::UnityEngine::AudioClip*, float_t)>(&::UnityEngine::AudioSource::PlayOneShot)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x68f3fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayOneShot", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SetScheduledStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(double_t)>(&::UnityEngine::AudioSource::SetScheduledStartTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f40bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetScheduledStartTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SetScheduledEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(double_t)>(&::UnityEngine::AudioSource::SetScheduledEndTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f4198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetScheduledEndTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::Stop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f4274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::Pause)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f427c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Pause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.UnPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::UnPause)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f4338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "UnPause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SkipToNextElementIfHasContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::SkipToNextElementIfHasContainer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f43f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SkipToNextElementIfHasContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_isPlaying
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_isPlaying)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f44b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_isPlaying", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_isContainerPlaying
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_isContainerPlaying)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f456c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_isContainerPlaying", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_containerActivePlayables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ActivePlayable> (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_containerActivePlayables)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f4628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_containerActivePlayables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_isVirtual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_isVirtual)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f46e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_isVirtual", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.PlayClipAtPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioClip*, ::UnityEngine::Vector3)>(&::UnityEngine::AudioSource::PlayClipAtPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f47a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayClipAtPoint", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.PlayClipAtPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioClip*, ::UnityEngine::Vector3, float_t)>(&::UnityEngine::AudioSource::PlayClipAtPoint)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x68f47a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                { "PlayClipAtPoint", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_loop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_loop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f4a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_loop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_loop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(bool)>(&::UnityEngine::AudioSource::set_loop)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f4af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_loop", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_ignoreListenerVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_ignoreListenerVolume)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f4bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_ignoreListenerVolume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_ignoreListenerVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(bool)>(&::UnityEngine::AudioSource::set_ignoreListenerVolume)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f4c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_ignoreListenerVolume", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_playOnAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_playOnAwake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f4d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_playOnAwake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_playOnAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(bool)>(&::UnityEngine::AudioSource::set_playOnAwake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f4e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_playOnAwake", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_ignoreListenerPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_ignoreListenerPause)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f4eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_ignoreListenerPause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_ignoreListenerPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(bool)>(&::UnityEngine::AudioSource::set_ignoreListenerPause)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f4fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_ignoreListenerPause", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_velocityUpdateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioVelocityUpdateMode (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_velocityUpdateMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f507c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_velocityUpdateMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_velocityUpdateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(::UnityEngine::AudioVelocityUpdateMode)>(&::UnityEngine::AudioSource::set_velocityUpdateMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f5138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_velocityUpdateMode", {}, { ::i2c::type_of<::UnityEngine::AudioVelocityUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_panStereo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_panStereo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f520c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_panStereo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_panStereo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::set_panStereo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f52c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_panStereo", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_spatialBlend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_spatialBlend)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f53a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spatialBlend", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_spatialBlend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::set_spatialBlend)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f49ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spatialBlend", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_spatialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_spatialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f54ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spatialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_spatialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(bool)>(&::UnityEngine::AudioSource::set_spatialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f5568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spatialize", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_spatializePostEffects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_spatializePostEffects)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f563c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spatializePostEffects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_spatializePostEffects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(bool)>(&::UnityEngine::AudioSource::set_spatializePostEffects)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f56f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spatializePostEffects", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SetCustomCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(::UnityEngine::AudioSourceCurveType, ::UnityEngine::AnimationCurve*)>(
    &::UnityEngine::AudioSource::SetCustomCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f57cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                             { "SetCustomCurve", {}, { ::i2c::type_of<::UnityEngine::AudioSourceCurveType>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetCustomCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::UnityEngine::AudioSource::*)(::UnityEngine::AudioSourceCurveType)>(
    &::UnityEngine::AudioSource::GetCustomCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f57d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetCustomCurve", {}, { ::i2c::type_of<::UnityEngine::AudioSourceCurveType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_reverbZoneMix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_reverbZoneMix)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f57d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_reverbZoneMix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_reverbZoneMix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::set_reverbZoneMix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f5890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_reverbZoneMix", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_bypassEffects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_bypassEffects)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f596c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_bypassEffects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_bypassEffects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(bool)>(&::UnityEngine::AudioSource::set_bypassEffects)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f5a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_bypassEffects", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_bypassListenerEffects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_bypassListenerEffects)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f5afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_bypassListenerEffects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_bypassListenerEffects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(bool)>(&::UnityEngine::AudioSource::set_bypassListenerEffects)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f5bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_bypassListenerEffects", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_bypassReverbZones
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_bypassReverbZones)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f5c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_bypassReverbZones", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_bypassReverbZones
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(bool)>(&::UnityEngine::AudioSource::set_bypassReverbZones)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f5d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_bypassReverbZones", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_dopplerLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_dopplerLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f5e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_dopplerLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_dopplerLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::set_dopplerLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f5ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_dopplerLevel", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_spread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_spread)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f5fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_spread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::set_spread)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f6070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spread", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_priority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_priority)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f614c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_priority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_priority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(int32_t)>(&::UnityEngine::AudioSource::set_priority)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f6208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_priority", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_mute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_mute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f62dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_mute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_mute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(bool)>(&::UnityEngine::AudioSource::set_mute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f6398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_mute", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_minDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_minDistance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f646c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_minDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_minDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::set_minDistance)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f6528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_minDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_maxDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_maxDistance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f6604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_maxDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_maxDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::set_maxDistance)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f66c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_maxDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_rolloffMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioRolloffMode (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_rolloffMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f679c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_rolloffMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_rolloffMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(::UnityEngine::AudioRolloffMode)>(&::UnityEngine::AudioSource::set_rolloffMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f6858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_rolloffMode", {}, { ::i2c::type_of<::UnityEngine::AudioRolloffMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetOutputData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::UnityEngine::AudioSource::*)(int32_t, int32_t)>(&::UnityEngine::AudioSource::GetOutputData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x68f692c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetOutputData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetOutputData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(::ArrayW<float_t>, int32_t)>(&::UnityEngine::AudioSource::GetOutputData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f69a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetOutputData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetSpectrumData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::UnityEngine::AudioSource::*)(int32_t, int32_t, ::UnityEngine::FFTWindow)>(&::UnityEngine::AudioSource::GetSpectrumData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x68f69a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                             { "GetSpectrumData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetSpectrumData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(::ArrayW<float_t>, int32_t, ::UnityEngine::FFTWindow)>(&::UnityEngine::AudioSource::GetSpectrumData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f6a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                { "GetSpectrumData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_minVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_minVolume)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x68f6a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_minVolume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_minVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::set_minVolume)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68f6aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_minVolume", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_maxVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_maxVolume)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x68f6b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_maxVolume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_maxVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::set_maxVolume)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68f6b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_maxVolume", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_rolloffFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::get_rolloffFactor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x68f6c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_rolloffFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_rolloffFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)(float_t)>(&::UnityEngine::AudioSource::set_rolloffFactor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68f6c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_rolloffFactor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SetSpatializerFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)(int32_t, float_t)>(&::UnityEngine::AudioSource::SetSpatializerFloat)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x68f6cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetSpatializerFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetSpatializerFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)(int32_t, ::by_ref<float_t>)>(&::UnityEngine::AudioSource::GetSpatializerFloat)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x68f6de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetSpatializerFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetAmbisonicDecoderFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)(int32_t, ::by_ref<float_t>)>(&::UnityEngine::AudioSource::GetAmbisonicDecoderFloat)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x68f6ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetAmbisonicDecoderFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SetAmbisonicDecoderFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioSource::*)(int32_t, float_t)>(&::UnityEngine::AudioSource::SetAmbisonicDecoderFloat)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x68f6fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetAmbisonicDecoderFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetAudioRandomContainerRuntimeMeterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::GetAudioRandomContainerRuntimeMeterValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68f70ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetAudioRandomContainerRuntimeMeterValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSource::*)()>(&::UnityEngine::AudioSource::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f7168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetPitch_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::GetPitch_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f29d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetPitch_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SetPitch_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AudioSource::SetPitch_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68f2ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetPitch_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.PlayHelper_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint64_t)>(&::UnityEngine::AudioSource::PlayHelper_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f2bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayHelper_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.Play_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, double_t)>(&::UnityEngine::AudioSource::Play_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68f2c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Play_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.PlayOneShotHelper_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, float_t)>(&::UnityEngine::AudioSource::PlayOneShotHelper_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68f2e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                { "PlayOneShotHelper_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.Stop_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AudioSource::Stop_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f2ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Stop_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SetCustomCurveHelper_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AudioSourceCurveType, ::System::IntPtr)>(&::UnityEngine::AudioSource::SetCustomCurveHelper_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68f2fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::AudioSource*>(),
                         { "SetCustomCurveHelper_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AudioSourceCurveType>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetCustomCurveHelper_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::UnityEngine::AudioSourceCurveType)>(&::UnityEngine::AudioSource::GetCustomCurveHelper_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f3110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                             { "GetCustomCurveHelper_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AudioSourceCurveType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetOutputDataHelper_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t)>(
    &::UnityEngine::AudioSource::GetOutputDataHelper_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68f32e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AudioSource*>(),
            { "GetOutputDataHelper_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetSpectrumDataHelper_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t, ::UnityEngine::FFTWindow)>(
    &::UnityEngine::AudioSource::GetSpectrumDataHelper_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68f34d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetSpectrumDataHelper_Injected",
                                                                              {},
                                                                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_volume_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_volume_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f35b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_volume_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_volume_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AudioSource::set_volume_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68f3680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_volume_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_time_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_time_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f3754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_time_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AudioSource::set_time_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68f3820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_timeSamples_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_timeSamples_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f38ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_timeSamples_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_timeSamples_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AudioSource::set_timeSamples_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f39b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_timeSamples_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_resource_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_resource_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f3c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_resource_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_resource_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AudioSource::set_resource_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f3cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_resource_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_outputAudioMixerGroup_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_outputAudioMixerGroup_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f3e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_outputAudioMixerGroup_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_outputAudioMixerGroup_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AudioSource::set_outputAudioMixerGroup_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f3f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_outputAudioMixerGroup_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SetScheduledStartTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, double_t)>(&::UnityEngine::AudioSource::SetScheduledStartTime_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68f414c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetScheduledStartTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SetScheduledEndTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, double_t)>(&::UnityEngine::AudioSource::SetScheduledEndTime_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68f4228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetScheduledEndTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.Pause_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::Pause_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f42fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Pause_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.UnPause_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::UnPause_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f43b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "UnPause_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SkipToNextElementIfHasContainer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::SkipToNextElementIfHasContainer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f4474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SkipToNextElementIfHasContainer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_isPlaying_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_isPlaying_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f4530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_isPlaying_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_isContainerPlaying_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_isContainerPlaying_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f45ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_isContainerPlaying_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_containerActivePlayables_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ActivePlayable> (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_containerActivePlayables_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f46a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_containerActivePlayables_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_isVirtual_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_isVirtual_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f4764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_isVirtual_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_loop_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_loop_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f4abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_loop_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_loop_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AudioSource::set_loop_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f4b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_loop_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_ignoreListenerVolume_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_ignoreListenerVolume_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f4c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_ignoreListenerVolume_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_ignoreListenerVolume_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AudioSource::set_ignoreListenerVolume_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f4d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_ignoreListenerVolume_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_playOnAwake_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_playOnAwake_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f4ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_playOnAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_playOnAwake_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AudioSource::set_playOnAwake_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f4ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_playOnAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_ignoreListenerPause_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_ignoreListenerPause_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f4f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_ignoreListenerPause_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_ignoreListenerPause_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AudioSource::set_ignoreListenerPause_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f5038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_ignoreListenerPause_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_velocityUpdateMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioVelocityUpdateMode (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_velocityUpdateMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f50fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_velocityUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_velocityUpdateMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AudioVelocityUpdateMode)>(&::UnityEngine::AudioSource::set_velocityUpdateMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f51c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                { "set_velocityUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AudioVelocityUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_panStereo_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_panStereo_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f528c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_panStereo_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_panStereo_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AudioSource::set_panStereo_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68f5358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_panStereo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_spatialBlend_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_spatialBlend_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f5424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spatialBlend_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_spatialBlend_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AudioSource::set_spatialBlend_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68f5460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spatialBlend_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_spatialize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_spatialize_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f552c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spatialize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_spatialize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AudioSource::set_spatialize_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f55f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spatialize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_spatializePostEffects_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_spatializePostEffects_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f56bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spatializePostEffects_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_spatializePostEffects_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AudioSource::set_spatializePostEffects_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f5788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spatializePostEffects_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_reverbZoneMix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_reverbZoneMix_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f5854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_reverbZoneMix_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_reverbZoneMix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AudioSource::set_reverbZoneMix_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68f5920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_reverbZoneMix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_bypassEffects_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_bypassEffects_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f59ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_bypassEffects_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_bypassEffects_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AudioSource::set_bypassEffects_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f5ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_bypassEffects_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_bypassListenerEffects_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_bypassListenerEffects_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f5b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_bypassListenerEffects_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_bypassListenerEffects_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AudioSource::set_bypassListenerEffects_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f5c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_bypassListenerEffects_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_bypassReverbZones_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_bypassReverbZones_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f5d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_bypassReverbZones_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_bypassReverbZones_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AudioSource::set_bypassReverbZones_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f5dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_bypassReverbZones_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_dopplerLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_dopplerLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f5e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_dopplerLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_dopplerLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AudioSource::set_dopplerLevel_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68f5f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_dopplerLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_spread_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_spread_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f6034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spread_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_spread_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AudioSource::set_spread_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68f6100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spread_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_priority_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_priority_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f61cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_priority_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_priority_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AudioSource::set_priority_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f6298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_priority_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_mute_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_mute_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f635c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_mute_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_mute_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AudioSource::set_mute_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f6428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_mute_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_minDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_minDistance_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f64ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_minDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_minDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AudioSource::set_minDistance_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68f65b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_minDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_maxDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_maxDistance_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f6684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_maxDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_maxDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AudioSource::set_maxDistance_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68f6750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_maxDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.get_rolloffMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioRolloffMode (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::get_rolloffMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f681c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_rolloffMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.set_rolloffMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AudioRolloffMode)>(&::UnityEngine::AudioSource::set_rolloffMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f68e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                             { "set_rolloffMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AudioRolloffMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SetSpatializerFloat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, float_t)>(&::UnityEngine::AudioSource::SetSpatializerFloat_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68f6d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                             { "SetSpatializerFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetSpatializerFloat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, ::by_ref<float_t>)>(&::UnityEngine::AudioSource::GetSpatializerFloat_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68f6e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                { "GetSpatializerFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetAmbisonicDecoderFloat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, ::by_ref<float_t>)>(&::UnityEngine::AudioSource::GetAmbisonicDecoderFloat_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68f6f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                { "GetAmbisonicDecoderFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.SetAmbisonicDecoderFloat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, float_t)>(&::UnityEngine::AudioSource::SetAmbisonicDecoderFloat_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68f7058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                { "SetAmbisonicDecoderFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSource.GetAudioRandomContainerRuntimeMeterValue_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioSource::GetAudioRandomContainerRuntimeMeterValue_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f712c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetAudioRandomContainerRuntimeMeterValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::AudioSource::GetPitch(::UnityEngine::AudioSource* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetPitch", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, source);
}
inline void UnityEngine::AudioSource::SetPitch(::UnityEngine::AudioSource* source, float_t pitch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetPitch", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, pitch);
}
inline void UnityEngine::AudioSource::PlayHelper(::UnityEngine::AudioSource* source, uint64_t delay) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayHelper", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, delay);
}
inline void UnityEngine::AudioSource::Play(double_t delay) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Play", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delay);
}
inline void UnityEngine::AudioSource::PlayOneShotHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioClip* clip, float_t volumeScale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                              { "PlayOneShotHelper", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, clip, volumeScale);
}
inline void UnityEngine::AudioSource::Stop(bool stopOneShots) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Stop", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stopOneShots);
}
inline void UnityEngine::AudioSource::SetCustomCurveHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioSourceCurveType type, ::UnityEngine::AnimationCurve* curve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::AudioSource*>(),
          { "SetCustomCurveHelper", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::UnityEngine::AudioSourceCurveType>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, type, curve);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::AudioSource::GetCustomCurveHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioSourceCurveType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                           { "GetCustomCurveHelper", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::UnityEngine::AudioSourceCurveType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method, source, type);
}
inline void UnityEngine::AudioSource::GetOutputDataHelper(::UnityEngine::AudioSource* source, ::by_ref<::ArrayW<float_t>> samples, int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                       { "GetOutputDataHelper", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, samples, channel);
}
inline void UnityEngine::AudioSource::GetSpectrumDataHelper(::UnityEngine::AudioSource* source, ::by_ref<::ArrayW<float_t>> samples, int32_t channel, ::UnityEngine::FFTWindow window) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetSpectrumDataHelper",
                                                                                                {},
                                                                                                { ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(),
                                                                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, samples, channel, window);
}
inline float_t UnityEngine::AudioSource::get_volume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_volume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_volume(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_volume", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AudioSource::get_pitch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_pitch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_pitch(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_pitch", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AudioSource::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_time(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AudioSource::get_timeSamples() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_timeSamples", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_timeSamples(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_timeSamples", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::AudioSource::get_clip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_clip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_clip(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_clip", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Audio::AudioResource> UnityEngine::AudioSource::get_resource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_resource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Audio::AudioResource>>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_resource(::UnityEngine::Audio::AudioResource* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_resource", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioResource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Audio::AudioMixerGroup> UnityEngine::AudioSource::get_outputAudioMixerGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_outputAudioMixerGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_outputAudioMixerGroup", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AudioSource::Play() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Play", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::Play(uint64_t delay) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Play", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delay);
}
inline void UnityEngine::AudioSource::PlayDelayed(float_t delay) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayDelayed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delay);
}
inline void UnityEngine::AudioSource::PlayScheduled(double_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayScheduled", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void UnityEngine::AudioSource::PlayOneShot(::UnityEngine::AudioClip* clip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayOneShot", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void UnityEngine::AudioSource::PlayOneShot(::UnityEngine::AudioClip* clip, float_t volumeScale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayOneShot", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip, volumeScale);
}
inline void UnityEngine::AudioSource::SetScheduledStartTime(double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetScheduledStartTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void UnityEngine::AudioSource::SetScheduledEndTime(double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetScheduledEndTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void UnityEngine::AudioSource::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::Pause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Pause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::UnPause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "UnPause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::SkipToNextElementIfHasContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SkipToNextElementIfHasContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AudioSource::get_isPlaying() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_isPlaying", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::AudioSource::get_isContainerPlaying() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_isContainerPlaying", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ActivePlayable> UnityEngine::AudioSource::get_containerActivePlayables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_containerActivePlayables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ActivePlayable>>(this, ___internal_method);
}
inline bool UnityEngine::AudioSource::get_isVirtual() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_isVirtual", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::PlayClipAtPoint(::UnityEngine::AudioClip* clip, ::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayClipAtPoint", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clip, position);
}
inline void UnityEngine::AudioSource::PlayClipAtPoint(::UnityEngine::AudioClip* clip, ::UnityEngine::Vector3 position, float_t volume) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                              { "PlayClipAtPoint", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clip, position, volume);
}
inline bool UnityEngine::AudioSource::get_loop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_loop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_loop(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_loop", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AudioSource::get_ignoreListenerVolume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_ignoreListenerVolume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_ignoreListenerVolume(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_ignoreListenerVolume", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AudioSource::get_playOnAwake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_playOnAwake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_playOnAwake(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_playOnAwake", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AudioSource::get_ignoreListenerPause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_ignoreListenerPause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_ignoreListenerPause(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_ignoreListenerPause", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AudioVelocityUpdateMode UnityEngine::AudioSource::get_velocityUpdateMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_velocityUpdateMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioVelocityUpdateMode>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_velocityUpdateMode", {}, { ::i2c::type_of<::UnityEngine::AudioVelocityUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AudioSource::get_panStereo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_panStereo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_panStereo(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_panStereo", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AudioSource::get_spatialBlend() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spatialBlend", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_spatialBlend(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spatialBlend", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AudioSource::get_spatialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spatialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_spatialize(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spatialize", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AudioSource::get_spatializePostEffects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spatializePostEffects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_spatializePostEffects(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spatializePostEffects", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AudioSource::SetCustomCurve(::UnityEngine::AudioSourceCurveType type, ::UnityEngine::AnimationCurve* curve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                           { "SetCustomCurve", {}, { ::i2c::type_of<::UnityEngine::AudioSourceCurveType>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, curve);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::AudioSource::GetCustomCurve(::UnityEngine::AudioSourceCurveType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetCustomCurve", {}, { ::i2c::type_of<::UnityEngine::AudioSourceCurveType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method, type);
}
inline float_t UnityEngine::AudioSource::get_reverbZoneMix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_reverbZoneMix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_reverbZoneMix(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_reverbZoneMix", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AudioSource::get_bypassEffects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_bypassEffects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_bypassEffects(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_bypassEffects", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AudioSource::get_bypassListenerEffects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_bypassListenerEffects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_bypassListenerEffects(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_bypassListenerEffects", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AudioSource::get_bypassReverbZones() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_bypassReverbZones", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_bypassReverbZones(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_bypassReverbZones", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AudioSource::get_dopplerLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_dopplerLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_dopplerLevel(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_dopplerLevel", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AudioSource::get_spread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_spread(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spread", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AudioSource::get_priority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_priority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_priority(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_priority", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AudioSource::get_mute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_mute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_mute(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_mute", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AudioSource::get_minDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_minDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_minDistance(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_minDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AudioSource::get_maxDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_maxDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_maxDistance(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_maxDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AudioRolloffMode UnityEngine::AudioSource::get_rolloffMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_rolloffMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioRolloffMode>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_rolloffMode(::UnityEngine::AudioRolloffMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_rolloffMode", {}, { ::i2c::type_of<::UnityEngine::AudioRolloffMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<float_t> UnityEngine::AudioSource::GetOutputData(int32_t numSamples, int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetOutputData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method, numSamples, channel);
}
inline void UnityEngine::AudioSource::GetOutputData(::ArrayW<float_t> samples, int32_t channel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetOutputData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples, channel);
}
inline ::ArrayW<float_t> UnityEngine::AudioSource::GetSpectrumData(int32_t numSamples, int32_t channel, ::UnityEngine::FFTWindow window) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                           { "GetSpectrumData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method, numSamples, channel, window);
}
inline void UnityEngine::AudioSource::GetSpectrumData(::ArrayW<float_t> samples, int32_t channel, ::UnityEngine::FFTWindow window) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                           { "GetSpectrumData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples, channel, window);
}
inline float_t UnityEngine::AudioSource::get_minVolume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_minVolume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_minVolume(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_minVolume", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AudioSource::get_maxVolume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_maxVolume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_maxVolume(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_maxVolume", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AudioSource::get_rolloffFactor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_rolloffFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::set_rolloffFactor(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_rolloffFactor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AudioSource::SetSpatializerFloat(int32_t index, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetSpatializerFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, value);
}
inline bool UnityEngine::AudioSource::GetSpatializerFloat(int32_t index, ::by_ref<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetSpatializerFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, value);
}
inline bool UnityEngine::AudioSource::GetAmbisonicDecoderFloat(int32_t index, ::by_ref<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetAmbisonicDecoderFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, value);
}
inline bool UnityEngine::AudioSource::SetAmbisonicDecoderFloat(int32_t index, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetAmbisonicDecoderFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, value);
}
inline float_t UnityEngine::AudioSource::GetAudioRandomContainerRuntimeMeterValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetAudioRandomContainerRuntimeMeterValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::AudioSource::GetPitch_Injected(::System::IntPtr source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetPitch_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, source);
}
inline void UnityEngine::AudioSource::SetPitch_Injected(::System::IntPtr source, float_t pitch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetPitch_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, pitch);
}
inline void UnityEngine::AudioSource::PlayHelper_Injected(::System::IntPtr source, uint64_t delay) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "PlayHelper_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, delay);
}
inline void UnityEngine::AudioSource::Play_Injected(::System::IntPtr _unity_self, double_t delay) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Play_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, delay);
}
inline void UnityEngine::AudioSource::PlayOneShotHelper_Injected(::System::IntPtr source, ::System::IntPtr clip, float_t volumeScale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                              { "PlayOneShotHelper_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, clip, volumeScale);
}
inline void UnityEngine::AudioSource::Stop_Injected(::System::IntPtr _unity_self, bool stopOneShots) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Stop_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, stopOneShots);
}
inline void UnityEngine::AudioSource::SetCustomCurveHelper_Injected(::System::IntPtr source, ::UnityEngine::AudioSourceCurveType type, ::System::IntPtr curve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                          { "SetCustomCurveHelper_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AudioSourceCurveType>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, type, curve);
}
inline ::System::IntPtr UnityEngine::AudioSource::GetCustomCurveHelper_Injected(::System::IntPtr source, ::UnityEngine::AudioSourceCurveType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                           { "GetCustomCurveHelper_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AudioSourceCurveType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, source, type);
}
inline void UnityEngine::AudioSource::GetOutputDataHelper_Injected(::System::IntPtr source, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> samples, int32_t channel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::AudioSource*>(),
          { "GetOutputDataHelper_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, samples, channel);
}
inline void UnityEngine::AudioSource::GetSpectrumDataHelper_Injected(::System::IntPtr source, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> samples, int32_t channel,
                                                                     ::UnityEngine::FFTWindow window) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetSpectrumDataHelper_Injected",
                                                                            {},
                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, samples, channel, window);
}
inline float_t UnityEngine::AudioSource::get_volume_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_volume_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_volume_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_volume_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::AudioSource::get_time_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_time_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::AudioSource::get_timeSamples_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_timeSamples_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_timeSamples_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_timeSamples_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::AudioSource::get_resource_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_resource_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_resource_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_resource_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::AudioSource::get_outputAudioMixerGroup_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_outputAudioMixerGroup_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_outputAudioMixerGroup_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_outputAudioMixerGroup_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::AudioSource::SetScheduledStartTime_Injected(::System::IntPtr _unity_self, double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetScheduledStartTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, time);
}
inline void UnityEngine::AudioSource::SetScheduledEndTime_Injected(::System::IntPtr _unity_self, double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SetScheduledEndTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, time);
}
inline void UnityEngine::AudioSource::Pause_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "Pause_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::UnPause_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "UnPause_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::SkipToNextElementIfHasContainer_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "SkipToNextElementIfHasContainer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AudioSource::get_isPlaying_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_isPlaying_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AudioSource::get_isContainerPlaying_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_isContainerPlaying_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<::UnityEngine::ActivePlayable> UnityEngine::AudioSource::get_containerActivePlayables_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_containerActivePlayables_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ActivePlayable>>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AudioSource::get_isVirtual_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_isVirtual_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AudioSource::get_loop_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_loop_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_loop_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_loop_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::AudioSource::get_ignoreListenerVolume_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_ignoreListenerVolume_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_ignoreListenerVolume_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_ignoreListenerVolume_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::AudioSource::get_playOnAwake_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_playOnAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_playOnAwake_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_playOnAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::AudioSource::get_ignoreListenerPause_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_ignoreListenerPause_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_ignoreListenerPause_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_ignoreListenerPause_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::AudioVelocityUpdateMode UnityEngine::AudioSource::get_velocityUpdateMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_velocityUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioVelocityUpdateMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_velocityUpdateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AudioVelocityUpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                              { "set_velocityUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AudioVelocityUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::AudioSource::get_panStereo_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_panStereo_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_panStereo_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_panStereo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::AudioSource::get_spatialBlend_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spatialBlend_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_spatialBlend_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spatialBlend_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::AudioSource::get_spatialize_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spatialize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_spatialize_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spatialize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::AudioSource::get_spatializePostEffects_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spatializePostEffects_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_spatializePostEffects_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spatializePostEffects_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::AudioSource::get_reverbZoneMix_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_reverbZoneMix_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_reverbZoneMix_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_reverbZoneMix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::AudioSource::get_bypassEffects_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_bypassEffects_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_bypassEffects_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_bypassEffects_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::AudioSource::get_bypassListenerEffects_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_bypassListenerEffects_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_bypassListenerEffects_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_bypassListenerEffects_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::AudioSource::get_bypassReverbZones_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_bypassReverbZones_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_bypassReverbZones_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_bypassReverbZones_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::AudioSource::get_dopplerLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_dopplerLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_dopplerLevel_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_dopplerLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::AudioSource::get_spread_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_spread_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_spread_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_spread_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::AudioSource::get_priority_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_priority_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_priority_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_priority_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::AudioSource::get_mute_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_mute_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_mute_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_mute_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::AudioSource::get_minDistance_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_minDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_minDistance_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_minDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::AudioSource::get_maxDistance_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_maxDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_maxDistance_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "set_maxDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::AudioRolloffMode UnityEngine::AudioSource::get_rolloffMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "get_rolloffMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioRolloffMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioSource::set_rolloffMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AudioRolloffMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                           { "set_rolloffMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AudioRolloffMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::AudioSource::SetSpatializerFloat_Injected(::System::IntPtr _unity_self, int32_t index, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                           { "SetSpatializerFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, index, value);
}
inline bool UnityEngine::AudioSource::GetSpatializerFloat_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                              { "GetSpatializerFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, index, value);
}
inline bool UnityEngine::AudioSource::GetAmbisonicDecoderFloat_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                              { "GetAmbisonicDecoderFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, index, value);
}
inline bool UnityEngine::AudioSource::SetAmbisonicDecoderFloat_Injected(::System::IntPtr _unity_self, int32_t index, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(),
                                                           { "SetAmbisonicDecoderFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, index, value);
}
inline float_t UnityEngine::AudioSource::GetAudioRandomContainerRuntimeMeterValue_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSource*>(), { "GetAudioRandomContainerRuntimeMeterValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AudioSource* UnityEngine::AudioSource::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AudioSource*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioSource::AudioSource() {}
