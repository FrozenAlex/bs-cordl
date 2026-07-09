#pragma once
// IWYU pragma private; include "GlobalNamespace/HapticFeedbackManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RumbleHapticFeedbackPlayer_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackManager.PlayHapticFeedback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HapticFeedbackManager::*)(::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(
    &::GlobalNamespace::HapticFeedbackManager::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5715580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HapticFeedbackManager*>(),
                                                { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::Libraries::HM::HMLib::VR::HapticPresetSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HapticFeedbackManager::*)()>(&::GlobalNamespace::HapticFeedbackManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57157d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HapticFeedbackManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RumbleHapticFeedbackPlayer>& GlobalNamespace::HapticFeedbackManager::__cordl_internal_get__rumbleHapticFeedbackPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumbleHapticFeedbackPlayer;
}
constexpr ::UnityW<::GlobalNamespace::RumbleHapticFeedbackPlayer> const& GlobalNamespace::HapticFeedbackManager::__cordl_internal_get__rumbleHapticFeedbackPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumbleHapticFeedbackPlayer;
}
constexpr void GlobalNamespace::HapticFeedbackManager::__cordl_internal_set__rumbleHapticFeedbackPlayer(::UnityW<::GlobalNamespace::RumbleHapticFeedbackPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rumbleHapticFeedbackPlayer = value;
}
constexpr ::GlobalNamespace::IHapticFeedbackPlayer*& GlobalNamespace::HapticFeedbackManager::__cordl_internal_get__advancedHapticFeedbackPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____advancedHapticFeedbackPlayer;
}
constexpr ::GlobalNamespace::IHapticFeedbackPlayer* const& GlobalNamespace::HapticFeedbackManager::__cordl_internal_get__advancedHapticFeedbackPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____advancedHapticFeedbackPlayer;
}
constexpr void GlobalNamespace::HapticFeedbackManager::__cordl_internal_set__advancedHapticFeedbackPlayer(::GlobalNamespace::IHapticFeedbackPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____advancedHapticFeedbackPlayer = value;
}
constexpr bool& GlobalNamespace::HapticFeedbackManager::__cordl_internal_get_hapticFeedbackEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticFeedbackEnabled;
}
constexpr bool const& GlobalNamespace::HapticFeedbackManager::__cordl_internal_get_hapticFeedbackEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticFeedbackEnabled;
}
constexpr void GlobalNamespace::HapticFeedbackManager::__cordl_internal_set_hapticFeedbackEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hapticFeedbackEnabled = value;
}
inline void GlobalNamespace::HapticFeedbackManager::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HapticFeedbackManager*>(),
                                              { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::Libraries::HM::HMLib::VR::HapticPresetSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, hapticPreset);
}
inline void GlobalNamespace::HapticFeedbackManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HapticFeedbackManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HapticFeedbackManager* GlobalNamespace::HapticFeedbackManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HapticFeedbackManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HapticFeedbackManager::HapticFeedbackManager() {}
