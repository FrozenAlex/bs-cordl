#pragma once
// IWYU pragma private; include "GlobalNamespace/RumbleHapticFeedbackPlayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RumbleHapticFeedbackPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__RumbleHapticFeedbackPlayer_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::*)()>(&::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5717f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_get_active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___active;
}
constexpr bool const& GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_get_active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___active;
}
constexpr void GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_set_active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___active = value;
}
constexpr bool& GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_get_continuous() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuous;
}
constexpr bool const& GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_get_continuous() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuous;
}
constexpr void GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_set_continuous(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___continuous = value;
}
constexpr float_t& GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_get_strength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strength;
}
constexpr float_t const& GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_get_strength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strength;
}
constexpr void GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_set_strength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strength = value;
}
constexpr float_t& GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_get_endTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endTime;
}
constexpr float_t const& GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_get_endTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endTime;
}
constexpr void GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_set_endTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endTime = value;
}
constexpr float_t& GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_get_frequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frequency;
}
constexpr float_t const& GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_get_frequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frequency;
}
constexpr void GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::__cordl_internal_set_frequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frequency = value;
}
inline void GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData* GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData::RumbleHapticFeedbackPlayer_RumbleData() {}
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer.PlayHapticFeedback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RumbleHapticFeedbackPlayer::*)(::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(
    &::GlobalNamespace::RumbleHapticFeedbackPlayer::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x57156f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer*>(),
                                                { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::Libraries::HM::HMLib::VR::HapticPresetSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer.CanPlayHapticPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RumbleHapticFeedbackPlayer::*)(::Libraries::HM::HMLib::VR::HapticPresetSO*, ::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::RumbleHapticFeedbackPlayer::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x57179dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer*>(),
                                                { "CanPlayHapticPreset", {}, { ::i2c::type_of<::Libraries::HM::HMLib::VR::HapticPresetSO*>(), ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RumbleHapticFeedbackPlayer::*)()>(&::GlobalNamespace::RumbleHapticFeedbackPlayer::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5717a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer.UpdateRumbles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RumbleHapticFeedbackPlayer::*)()>(&::GlobalNamespace::RumbleHapticFeedbackPlayer::UpdateRumbles)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x5717a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer*>(), { "UpdateRumbles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer.GetRumble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData* (
    ::GlobalNamespace::RumbleHapticFeedbackPlayer::*)(::UnityEngine::XR::XRNode, ::System::Object*)>(&::GlobalNamespace::RumbleHapticFeedbackPlayer::GetRumble)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5717810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer*>(),
                                                                                           { "GetRumble", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RumbleHapticFeedbackPlayer::*)()>(&::GlobalNamespace::RumbleHapticFeedbackPlayer::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5717f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::RumbleHapticFeedbackPlayer::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& GlobalNamespace::RumbleHapticFeedbackPlayer::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::RumbleHapticFeedbackPlayer::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrPlatformHelper = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                       ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData*>*>*&
GlobalNamespace::RumbleHapticFeedbackPlayer::__cordl_internal_get__rumblesByNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblesByNode;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                       ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData*>*>* const&
GlobalNamespace::RumbleHapticFeedbackPlayer::__cordl_internal_get__rumblesByNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblesByNode;
}
constexpr void GlobalNamespace::RumbleHapticFeedbackPlayer::__cordl_internal_set__rumblesByNode(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                 ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rumblesByNode = value;
}
inline void GlobalNamespace::RumbleHapticFeedbackPlayer::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer*>(),
                                              { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::Libraries::HM::HMLib::VR::HapticPresetSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, hapticPreset);
}
inline bool GlobalNamespace::RumbleHapticFeedbackPlayer::CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer*>(),
                                              { "CanPlayHapticPreset", {}, { ::i2c::type_of<::Libraries::HM::HMLib::VR::HapticPresetSO*>(), ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hapticPreset, node);
}
inline void GlobalNamespace::RumbleHapticFeedbackPlayer::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RumbleHapticFeedbackPlayer::UpdateRumbles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer*>(), { "UpdateRumbles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData* GlobalNamespace::RumbleHapticFeedbackPlayer::GetRumble(::UnityEngine::XR::XRNode node, ::System::Object* preset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer*>(),
                                                                                         { "GetRumble", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData*>(this, ___internal_method, node, preset);
}
inline void GlobalNamespace::RumbleHapticFeedbackPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RumbleHapticFeedbackPlayer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RumbleHapticFeedbackPlayer* GlobalNamespace::RumbleHapticFeedbackPlayer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RumbleHapticFeedbackPlayer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
constexpr GlobalNamespace::RumbleHapticFeedbackPlayer::operator ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IHapticFeedbackPlayer"
constexpr ::GlobalNamespace::IHapticFeedbackPlayer* GlobalNamespace::RumbleHapticFeedbackPlayer::i___GlobalNamespace__IHapticFeedbackPlayer() noexcept {
  return static_cast<::GlobalNamespace::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RumbleHapticFeedbackPlayer::RumbleHapticFeedbackPlayer() {}
