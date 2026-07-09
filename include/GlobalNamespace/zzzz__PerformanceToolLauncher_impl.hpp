#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceToolLauncher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceVisualizer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__RecPlayBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
// Ctor Parameters [CppParam { name: "visualizer", ty: "::UnityW<::GlobalNamespace::PerformanceVisualizer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "recorder", ty:
// "::UnityW<::GlobalNamespace::PerformanceRecorder>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceToolLauncher_Assets::PerformanceToolLauncher_Assets(::UnityW<::GlobalNamespace::PerformanceVisualizer> visualizer,
                                                                                            ::UnityW<::GlobalNamespace::PerformanceRecorder> recorder) noexcept {
  this->visualizer = visualizer;
  this->recorder = recorder;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceToolLauncher_Assets::PerformanceToolLauncher_Assets() {}
inline void GlobalNamespace::PerformanceToolLauncher_OverrideConfig::setStaticF_kDefault(::GlobalNamespace::PerformanceToolLauncher_OverrideConfig value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig, "kDefault", ::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>(
      std::forward<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>(value));
}
inline ::GlobalNamespace::PerformanceToolLauncher_OverrideConfig GlobalNamespace::PerformanceToolLauncher_OverrideConfig::getStaticF_kDefault() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig, "kDefault", ::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>();
}
// Ctor Parameters [CppParam { name: "enableAutoplay", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableRecording", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceToolLauncher_OverrideConfig::PerformanceToolLauncher_OverrideConfig(bool enableAutoplay, bool enableRecording) noexcept {
  this->enableAutoplay = enableAutoplay;
  this->enableRecording = enableRecording;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceToolLauncher_OverrideConfig::PerformanceToolLauncher_OverrideConfig() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57d7638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0._Run_g__HandleSongControllerSongDidStart_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::_Run_g__HandleSongControllerSongDidStart_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x57d7690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>(), { "<Run>g__HandleSongControllerSongDidStart|0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0._Run_g__HandleSongControllerSongDidFinish_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::_Run_g__HandleSongControllerSongDidFinish_1)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x57d7734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>(), { "<Run>g__HandleSongControllerSongDidFinish|1", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SongController>& GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::__cordl_internal_get_songController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songController;
}
constexpr ::UnityW<::GlobalNamespace::SongController> const& GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::__cordl_internal_get_songController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songController;
}
constexpr void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::__cordl_internal_set_songController(::UnityW<::GlobalNamespace::SongController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songController = value;
}
constexpr ::UnityW<::GlobalNamespace::PerformanceRecorder>& GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::__cordl_internal_get_recorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recorder;
}
constexpr ::UnityW<::GlobalNamespace::PerformanceRecorder> const& GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::__cordl_internal_get_recorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recorder;
}
constexpr void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::__cordl_internal_set_recorder(::UnityW<::GlobalNamespace::PerformanceRecorder> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recorder = value;
}
inline void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::_Run_g__HandleSongControllerSongDidStart_0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>(), { "<Run>g__HandleSongControllerSongDidStart|0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::_Run_g__HandleSongControllerSongDidFinish_1() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>(), { "<Run>g__HandleSongControllerSongDidFinish|1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0* GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::PerformanceToolLauncher___c__DisplayClass4_0() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher::*)(
    ::GlobalNamespace::SettingsManager*, ::GlobalNamespace::PlayerDataModel*, ::GlobalNamespace::MainCamera*, ::GlobalNamespace::RecPlayBehaviour_State*, ::GlobalNamespace::SongController*,
    ::GlobalNamespace::AudioTimeSyncController*, ::GlobalNamespace::IGamePause*, ::GlobalNamespace::GameplayCoreSceneSetupData*, ::GlobalNamespace::BeatmapObjectManager*,
    ::GlobalNamespace::BeatmapCallbacksController*, ::System::Nullable_1<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>)>(&::GlobalNamespace::PerformanceToolLauncher::Initialize)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x57d725c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher*>(),
            { "Initialize",
              {},
              { ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>(), ::i2c::type_of<::GlobalNamespace::MainCamera*>(),
                ::i2c::type_of<::GlobalNamespace::RecPlayBehaviour_State*>(), ::i2c::type_of<::GlobalNamespace::SongController*>(), ::i2c::type_of<::GlobalNamespace::AudioTimeSyncController*>(),
                ::i2c::type_of<::GlobalNamespace::IGamePause*>(), ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager*>(),
                ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PerformanceRecorder*, ::GlobalNamespace::SongController*)>(&::GlobalNamespace::PerformanceToolLauncher::Run)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x57d74c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher*>(),
                                                             { "Run", {}, { ::i2c::type_of<::GlobalNamespace::PerformanceRecorder*>(), ::i2c::type_of<::GlobalNamespace::SongController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher::*)()>(&::GlobalNamespace::PerformanceToolLauncher::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57d763c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PerformanceToolLauncher_Assets& GlobalNamespace::PerformanceToolLauncher::__cordl_internal_get__assets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assets;
}
constexpr ::GlobalNamespace::PerformanceToolLauncher_Assets const& GlobalNamespace::PerformanceToolLauncher::__cordl_internal_get__assets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assets;
}
constexpr void GlobalNamespace::PerformanceToolLauncher::__cordl_internal_set__assets(::GlobalNamespace::PerformanceToolLauncher_Assets value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____assets = value;
}
inline void GlobalNamespace::PerformanceToolLauncher::Initialize(::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::PlayerDataModel* playerDataModel,
                                                                 ::GlobalNamespace::MainCamera* mainCamera, ::GlobalNamespace::RecPlayBehaviour_State* recPlayState,
                                                                 ::GlobalNamespace::SongController* songController, ::GlobalNamespace::AudioTimeSyncController* timeSync,
                                                                 ::GlobalNamespace::IGamePause* gamePause, ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData,
                                                                 ::GlobalNamespace::BeatmapObjectManager* objectManager, ::GlobalNamespace::BeatmapCallbacksController* callbackController,
                                                                 ::System::Nullable_1<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig> overrideConfig) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher*>(),
          { "Initialize",
            {},
            { ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>(), ::i2c::type_of<::GlobalNamespace::MainCamera*>(),
              ::i2c::type_of<::GlobalNamespace::RecPlayBehaviour_State*>(), ::i2c::type_of<::GlobalNamespace::SongController*>(), ::i2c::type_of<::GlobalNamespace::AudioTimeSyncController*>(),
              ::i2c::type_of<::GlobalNamespace::IGamePause*>(), ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager*>(),
              ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingsManager, playerDataModel, mainCamera, recPlayState, songController, timeSync, gamePause, sceneSetupData,
                                                   objectManager, callbackController, overrideConfig);
}
inline void GlobalNamespace::PerformanceToolLauncher::Run(::GlobalNamespace::PerformanceRecorder* recorder, ::GlobalNamespace::SongController* songController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher*>(),
                                                           { "Run", {}, { ::i2c::type_of<::GlobalNamespace::PerformanceRecorder*>(), ::i2c::type_of<::GlobalNamespace::SongController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, recorder, songController);
}
inline void GlobalNamespace::PerformanceToolLauncher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceToolLauncher* GlobalNamespace::PerformanceToolLauncher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerformanceToolLauncher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceToolLauncher::PerformanceToolLauncher() {}
