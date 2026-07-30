#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioContainerElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioContainerElement)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioContainerElement;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::AudioContainerElement*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioContainerElement*, "UnityEngine.Audio", "AudioContainerElement");
// Dependencies UnityEngine.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioContainerElement
class CORDL_TYPE AudioContainerElement : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_audioClip, put = set_audioClip)) ::UnityW<::UnityEngine::AudioClip> audioClip;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_volume, put = set_volume)) float_t volume;

  /// @brief Method Internal_Create, addr 0x6a51730, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Audio::AudioContainerElement* self);

  static inline ::UnityEngine::Audio::AudioContainerElement* New_ctor();

  /// @brief Method .ctor, addr 0x6a516b8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_audioClip, addr 0x6a5176c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClip();

  /// @brief Method get_audioClip_Injected, addr 0x6a518bc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_audioClip_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enabled, addr 0x6a51b94, size 0x80, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_enabled_Injected, addr 0x6a51c14, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volume, addr 0x6a519fc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_volume();

  /// @brief Method get_volume_Injected, addr 0x6a51a7c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_volume_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_audioClip, addr 0x6a518f8, size 0xc0, virtual false, abstract: false, final false
  inline void set_audioClip(::UnityEngine::AudioClip* value);

  /// @brief Method set_audioClip_Injected, addr 0x6a519b8, size 0x44, virtual false, abstract: false, final false
  static inline void set_audioClip_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_enabled, addr 0x6a51c50, size 0x90, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_enabled_Injected, addr 0x6a51ce0, size 0x44, virtual false, abstract: false, final false
  static inline void set_enabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_volume, addr 0x6a51ab8, size 0x90, virtual false, abstract: false, final false
  inline void set_volume(float_t value);

  /// @brief Method set_volume_Injected, addr 0x6a51b48, size 0x4c, virtual false, abstract: false, final false
  static inline void set_volume_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioContainerElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioContainerElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioContainerElement(AudioContainerElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioContainerElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioContainerElement(AudioContainerElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21041 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::AudioContainerElement) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
