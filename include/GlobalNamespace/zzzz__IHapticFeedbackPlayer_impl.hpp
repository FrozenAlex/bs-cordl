#pragma once
// IWYU pragma private; include "GlobalNamespace/IHapticFeedbackPlayer.hpp"
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IHapticFeedbackPlayer.PlayHapticFeedback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IHapticFeedbackPlayer::*)(::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(
    &::GlobalNamespace::IHapticFeedbackPlayer::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IHapticFeedbackPlayer*>(), { ::i2c::class_of<::GlobalNamespace::IHapticFeedbackPlayer*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IHapticFeedbackPlayer.CanPlayHapticPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IHapticFeedbackPlayer::*)(::Libraries::HM::HMLib::VR::HapticPresetSO*, ::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::IHapticFeedbackPlayer::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IHapticFeedbackPlayer*>(), { ::i2c::class_of<::GlobalNamespace::IHapticFeedbackPlayer*>(), 1 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IHapticFeedbackPlayer::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IHapticFeedbackPlayer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, hapticPreset);
}
inline bool GlobalNamespace::IHapticFeedbackPlayer::CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IHapticFeedbackPlayer*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hapticPreset, node);
}
