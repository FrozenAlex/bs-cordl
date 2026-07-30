#pragma once
// IWYU pragma private; include "UnityEngine/Time.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Time)
namespace Unity::IntegerTime {
struct RationalTime;
}
// Forward declare root types
namespace UnityEngine {
class Time;
}
// Write type traits
MARK_REF_T(::UnityEngine::Time*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Time*, "UnityEngine", "Time");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Time
class CORDL_TYPE Time : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_captureDeltaTime, addr 0x6aea3f4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_captureDeltaTime();

  /// @brief Method get_captureFramerate, addr 0x6aea454, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t get_captureFramerate();

  /// @brief Method get_deltaTime, addr 0x6aea21c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_deltaTime();

  /// @brief Method get_fixedDeltaTime, addr 0x6aea2bc, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fixedDeltaTime();

  /// @brief Method get_fixedUnscaledTime, addr 0x6aea26c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fixedUnscaledTime();

  /// @brief Method get_frameCount, addr 0x6ad4c7c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_frameCount();

  /// @brief Method get_inFixedTimeStep, addr 0x6aea594, size 0x28, virtual false, abstract: false, final false
  static inline bool get_inFixedTimeStep();

  /// @brief Method get_maximumDeltaTime, addr 0x6aea31c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_maximumDeltaTime();

  /// @brief Method get_realtimeSinceStartup, addr 0x6ae4528, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_realtimeSinceStartup();

  /// @brief Method get_realtimeSinceStartupAsDouble, addr 0x6ae4694, size 0x28, virtual false, abstract: false, final false
  static inline double_t get_realtimeSinceStartupAsDouble();

  /// @brief Method get_renderedFrameCount, addr 0x6aea3cc, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_renderedFrameCount();

  /// @brief Method get_smoothDeltaTime, addr 0x6aea344, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_smoothDeltaTime();

  /// @brief Method get_time, addr 0x6aea14c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_time();

  /// @brief Method get_timeAsDouble, addr 0x6ae46bc, size 0x28, virtual false, abstract: false, final false
  static inline double_t get_timeAsDouble();

  /// @brief Method get_timeAsRational, addr 0x6aea174, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::IntegerTime::RationalTime get_timeAsRational();

  /// @brief Method get_timeAsRational_Injected, addr 0x6aea1b8, size 0x3c, virtual false, abstract: false, final false
  static inline void get_timeAsRational_Injected(::by_ref<::Unity::IntegerTime::RationalTime> ret);

  /// @brief Method get_timeScale, addr 0x6aea36c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_timeScale();

  /// @brief Method get_timeSinceLevelLoad, addr 0x6aea1f4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_timeSinceLevelLoad();

  /// @brief Method get_unscaledDeltaTime, addr 0x6aea294, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_unscaledDeltaTime();

  /// @brief Method get_unscaledTime, addr 0x6aea244, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_unscaledTime();

  /// @brief Method set_captureDeltaTime, addr 0x6aea41c, size 0x38, virtual false, abstract: false, final false
  static inline void set_captureDeltaTime(float_t value);

  /// @brief Method set_captureFramerate, addr 0x6aea548, size 0x4c, virtual false, abstract: false, final false
  static inline void set_captureFramerate(int32_t value);

  /// @brief Method set_fixedDeltaTime, addr 0x6aea2e4, size 0x38, virtual false, abstract: false, final false
  static inline void set_fixedDeltaTime(float_t value);

  /// @brief Method set_timeScale, addr 0x6aea394, size 0x38, virtual false, abstract: false, final false
  static inline void set_timeScale(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Time();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Time(Time&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Time(Time const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10378 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Time) == 0x10, "Size mismatch!");

} // namespace UnityEngine
