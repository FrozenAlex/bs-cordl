#pragma once
// IWYU pragma private; include "GlobalNamespace/UnsupportedAdvancedHapticsPlayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnsupportedAdvancedHapticsPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnsupportedAdvancedHapticsPlayer.PlayHapticFeedback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnsupportedAdvancedHapticsPlayer::*)(::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(
    &::GlobalNamespace::UnsupportedAdvancedHapticsPlayer::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x571400c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnsupportedAdvancedHapticsPlayer*>(),
                                                { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::Libraries::HM::HMLib::VR::HapticPresetSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnsupportedAdvancedHapticsPlayer.CanPlayHapticPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnsupportedAdvancedHapticsPlayer::*)(::Libraries::HM::HMLib::VR::HapticPresetSO*, ::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::UnsupportedAdvancedHapticsPlayer::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5714010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnsupportedAdvancedHapticsPlayer*>(),
                                                { "CanPlayHapticPreset", {}, { ::i2c::type_of<::Libraries::HM::HMLib::VR::HapticPresetSO*>(), ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnsupportedAdvancedHapticsPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnsupportedAdvancedHapticsPlayer::*)()>(&::GlobalNamespace::UnsupportedAdvancedHapticsPlayer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5714018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnsupportedAdvancedHapticsPlayer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnsupportedAdvancedHapticsPlayer::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnsupportedAdvancedHapticsPlayer*>(),
                                              { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::Libraries::HM::HMLib::VR::HapticPresetSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, hapticPreset);
}
inline bool GlobalNamespace::UnsupportedAdvancedHapticsPlayer::CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnsupportedAdvancedHapticsPlayer*>(),
                                              { "CanPlayHapticPreset", {}, { ::i2c::type_of<::Libraries::HM::HMLib::VR::HapticPresetSO*>(), ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hapticPreset, node);
}
inline void GlobalNamespace::UnsupportedAdvancedHapticsPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnsupportedAdvancedHapticsPlayer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnsupportedAdvancedHapticsPlayer* GlobalNamespace::UnsupportedAdvancedHapticsPlayer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnsupportedAdvancedHapticsPlayer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
constexpr GlobalNamespace::UnsupportedAdvancedHapticsPlayer::operator ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IHapticFeedbackPlayer"
constexpr ::GlobalNamespace::IHapticFeedbackPlayer* GlobalNamespace::UnsupportedAdvancedHapticsPlayer::i___GlobalNamespace__IHapticFeedbackPlayer() noexcept {
  return static_cast<::GlobalNamespace::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnsupportedAdvancedHapticsPlayer::UnsupportedAdvancedHapticsPlayer() {}
