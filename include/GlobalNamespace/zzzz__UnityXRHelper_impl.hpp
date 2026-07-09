#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityXRHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__UnityXRHelper_def.hpp"
#include "GlobalNamespace/zzzz__ControllerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRController_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRHelper_def.hpp"
#include "GlobalNamespace/zzzz__VRPlatformSDK_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::UnityXRHelper_Runtime::UnityXRHelper_Runtime(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityXRHelper_Runtime::UnityXRHelper_Runtime() {}
constexpr ::GlobalNamespace::UnityXRHelper_Runtime GlobalNamespace::UnityXRHelper_Runtime::OVRInput{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::UnityXRHelper_Runtime GlobalNamespace::UnityXRHelper_Runtime::OpenXR{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_inputFocusWasCapturedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f8c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_inputFocusWasCapturedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_inputFocusWasCapturedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f8d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_inputFocusWasCapturedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_inputFocusWasReleasedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f8dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_inputFocusWasReleasedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_inputFocusWasReleasedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f8e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_inputFocusWasReleasedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_vrFocusWasCapturedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f8f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_vrFocusWasCapturedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_vrFocusWasCapturedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f8fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_vrFocusWasCapturedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_vrFocusWasReleasedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f906c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_vrFocusWasReleasedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_vrFocusWasReleasedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f9118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_vrFocusWasReleasedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_hmdUnmountedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f91c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_hmdUnmountedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_hmdUnmountedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f9270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_hmdUnmountedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_hmdMountedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_hmdMountedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f931c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_hmdMountedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_hmdMountedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_hmdMountedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f93c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_hmdMountedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_controllersDidChangeReferenceEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f9474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_controllersDidChangeReferenceEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_controllersDidChangeReferenceEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f9520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_controllersDidChangeReferenceEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_controllersDidDisconnectEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_controllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f95cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_controllersDidDisconnectEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_controllersDidDisconnectEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_controllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f9678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_controllersDidDisconnectEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_isHmdMounted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_isHmdMounted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f9724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_isHmdMounted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_hasInputFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_hasInputFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f972c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_hasInputFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_hasVrFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_hasVrFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f9734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_hasVrFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.set_hasVrFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(bool)>(&::GlobalNamespace::UnityXRHelper::set_hasVrFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f973c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "set_hasVrFocus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_isAlwaysWireless
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_isAlwaysWireless)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f9744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_isAlwaysWireless", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_vrPlatformSDK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VRPlatformSDK (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_vrPlatformSDK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f974c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_vrPlatformSDK", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_loggerPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_loggerPrefix)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x57f9754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_loggerPrefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_leftController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityXRController* (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_leftController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f9798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_leftController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_rightController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityXRController* (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_rightController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f97a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_rightController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::Start)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x57f97a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57f9df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::LateUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f9dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::OnDestroy)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x57f9e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnApplicationPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(bool)>(&::GlobalNamespace::UnityXRHelper::OnApplicationPause)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57fa058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "OnApplicationPause", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetAnyJoystickMaxAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::GetAnyJoystickMaxAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57fa090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetAnyJoystickMaxAxis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetTriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::UnityXRHelper::GetTriggerValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57fa098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetTriggerValue", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetThumbstickValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::UnityXRHelper::GetThumbstickValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57fa0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetThumbstickValue", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.IsAdvancedHapticsSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::UnityXRHelper::IsAdvancedHapticsSupported)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57fa194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "IsAdvancedHapticsSupported", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetMenuButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::GetMenuButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57fa1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetMenuButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetMenuButtonDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::GetMenuButtonDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57fa1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetMenuButtonDown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.RefreshControllersReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::RefreshControllersReference)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57fa1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "RefreshControllersReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.TriggerHapticPulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode, float_t, float_t, float_t)>(
    &::GlobalNamespace::UnityXRHelper::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x57fa1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(),
                            { "TriggerHapticPulse", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.StopHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::UnityXRHelper::StopHaptics)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x57fa38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "StopHaptics", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.TryGetPoseOffsetForNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode, ::by_ref<::UnityEngine::Pose>)>(
    &::GlobalNamespace::UnityXRHelper::TryGetPoseOffsetForNode)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x57fa530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(),
                                                             { "TryGetPoseOffsetForNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetNodePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode, int32_t, ::by_ref<::UnityEngine::Vector3>,
                                                                                                  ::by_ref<::UnityEngine::Quaternion>)>(&::GlobalNamespace::UnityXRHelper::GetNodePose)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x57fa798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetNodePose",
                                                                                    {},
                                                                                    { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetRootPositionOffsetForLegacyNodePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::UnityXRHelper::GetRootPositionOffsetForLegacyNodePose)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x57faa74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetRootPositionOffsetForLegacyNodePose", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.TryGetLegacyPoseOffsetForNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::UnityXRHelper::TryGetLegacyPoseOffsetForNode)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x57faccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(),
                                         { "TryGetLegacyPoseOffsetForNode",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.ReadHeadPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(
    &::GlobalNamespace::UnityXRHelper::ReadHeadPose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x57fa9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(),
                                                             { "ReadHeadPose", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.SetUserPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(bool)>(&::GlobalNamespace::UnityXRHelper::SetUserPresence)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x57faf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "SetUserPresence", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.SetInputFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(bool)>(&::GlobalNamespace::UnityXRHelper::SetInputFocus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x57faf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "SetInputFocus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.UpdateUserPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::UpdateUserPresence)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x57f9ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "UpdateUserPresence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.UpdateManufacturerOnNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::UnityXRHelper::UpdateManufacturerOnNode)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f9c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "UpdateManufacturerOnNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetControllerFromNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityXRController* (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::UnityXRHelper::GetControllerFromNode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x57fa168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetControllerFromNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.HandleRemovedXRNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNodeState)>(&::GlobalNamespace::UnityXRHelper::HandleRemovedXRNode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x57fafd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "HandleRemovedXRNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNodeState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.HandleTrackingOriginUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRInputSubsystem*)>(
    &::GlobalNamespace::UnityXRHelper::HandleTrackingOriginUpdated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57fb02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "HandleTrackingOriginUpdated", {}, { ::i2c::type_of<::UnityEngine::XR::XRInputSubsystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.HandleBoundaryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRInputSubsystem*)>(&::GlobalNamespace::UnityXRHelper::HandleBoundaryChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57fb048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "HandleBoundaryChanged", {}, { ::i2c::type_of<::UnityEngine::XR::XRInputSubsystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.HandlePauseGamePerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::GlobalNamespace::UnityXRHelper::HandlePauseGamePerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57fb064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "HandlePauseGamePerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.HandlePauseGameCancelled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::GlobalNamespace::UnityXRHelper::HandlePauseGameCancelled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57fb070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "HandlePauseGameCancelled", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.HandleNewXRNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNodeState)>(&::GlobalNamespace::UnityXRHelper::HandleNewXRNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57fb078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "HandleNewXRNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNodeState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57fb080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ControllerConfiguration*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__leftControllerConfiguration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftControllerConfiguration;
}
constexpr ::GlobalNamespace::ControllerConfiguration* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__leftControllerConfiguration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftControllerConfiguration;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__leftControllerConfiguration(::GlobalNamespace::ControllerConfiguration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftControllerConfiguration = value;
}
constexpr ::GlobalNamespace::ControllerConfiguration*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__rightControllerConfiguration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightControllerConfiguration;
}
constexpr ::GlobalNamespace::ControllerConfiguration* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__rightControllerConfiguration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightControllerConfiguration;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__rightControllerConfiguration(::GlobalNamespace::ControllerConfiguration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightControllerConfiguration = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& GlobalNamespace::UnityXRHelper::__cordl_internal_get__userPresenceActionReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresenceActionReference;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__userPresenceActionReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresenceActionReference;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__userPresenceActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userPresenceActionReference = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headPositionActionReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPositionActionReference;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headPositionActionReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPositionActionReference;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__headPositionActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headPositionActionReference = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headOrientationActionReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headOrientationActionReference;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headOrientationActionReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headOrientationActionReference;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__headOrientationActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headOrientationActionReference = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& GlobalNamespace::UnityXRHelper::__cordl_internal_get__pauseGameActionReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseGameActionReference;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__pauseGameActionReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseGameActionReference;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__pauseGameActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pauseGameActionReference = value;
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_inputFocusWasCapturedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFocusWasCapturedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_inputFocusWasCapturedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFocusWasCapturedEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_inputFocusWasCapturedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputFocusWasCapturedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_inputFocusWasReleasedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFocusWasReleasedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_inputFocusWasReleasedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFocusWasReleasedEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_inputFocusWasReleasedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputFocusWasReleasedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_vrFocusWasCapturedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrFocusWasCapturedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_vrFocusWasCapturedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrFocusWasCapturedEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_vrFocusWasCapturedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vrFocusWasCapturedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_vrFocusWasReleasedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrFocusWasReleasedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_vrFocusWasReleasedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrFocusWasReleasedEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_vrFocusWasReleasedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vrFocusWasReleasedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_hmdUnmountedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdUnmountedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_hmdUnmountedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdUnmountedEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_hmdUnmountedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hmdUnmountedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_hmdMountedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdMountedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_hmdMountedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdMountedEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_hmdMountedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hmdMountedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_controllersDidChangeReferenceEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersDidChangeReferenceEvent;
}
constexpr ::System::Action* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_controllersDidChangeReferenceEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersDidChangeReferenceEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_controllersDidChangeReferenceEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllersDidChangeReferenceEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_controllersDidDisconnectEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersDidDisconnectEvent;
}
constexpr ::System::Action* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_controllersDidDisconnectEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersDidDisconnectEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_controllersDidDisconnectEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllersDidDisconnectEvent = value;
}
constexpr bool& GlobalNamespace::UnityXRHelper::__cordl_internal_get__hasVrFocus_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasVrFocus_k__BackingField;
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__hasVrFocus_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasVrFocus_k__BackingField;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__hasVrFocus_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasVrFocus_k__BackingField = value;
}
constexpr ::GlobalNamespace::UnityXRHelper_Runtime& GlobalNamespace::UnityXRHelper::__cordl_internal_get__runtime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtime;
}
constexpr ::GlobalNamespace::UnityXRHelper_Runtime const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__runtime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtime;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__runtime(::GlobalNamespace::UnityXRHelper_Runtime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____runtime = value;
}
constexpr ::GlobalNamespace::UnityXRController*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__leftController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftController;
}
constexpr ::GlobalNamespace::UnityXRController* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__leftController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftController;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__leftController(::GlobalNamespace::UnityXRController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftController = value;
}
constexpr ::GlobalNamespace::UnityXRController*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__rightController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightController;
}
constexpr ::GlobalNamespace::UnityXRController* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__rightController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightController;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__rightController(::GlobalNamespace::UnityXRController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightController = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headPositionAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPositionAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headPositionAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPositionAction;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__headPositionAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headPositionAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headOrientationAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headOrientationAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headOrientationAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headOrientationAction;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__headOrientationAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headOrientationAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__pauseGameAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseGameAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__pauseGameAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseGameAction;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__pauseGameAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pauseGameAction = value;
}
constexpr bool& GlobalNamespace::UnityXRHelper::__cordl_internal_get__userPresence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresence;
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__userPresence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresence;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__userPresence(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userPresence = value;
}
constexpr bool& GlobalNamespace::UnityXRHelper::__cordl_internal_get__hasInputFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInputFocus;
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__hasInputFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInputFocus;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__hasInputFocus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasInputFocus = value;
}
constexpr bool& GlobalNamespace::UnityXRHelper::__cordl_internal_get__isPausePressed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPausePressed;
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__isPausePressed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPausePressed;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__isPausePressed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPausePressed = value;
}
constexpr bool& GlobalNamespace::UnityXRHelper::__cordl_internal_get__wasPausePressedThisFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasPausePressedThisFrame;
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__wasPausePressedThisFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasPausePressedThisFrame;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__wasPausePressedThisFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasPausePressedThisFrame = value;
}
inline void GlobalNamespace::UnityXRHelper::setStaticF_kOculusOffsetDefaultPose(::UnityEngine::Pose value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pose, "kOculusOffsetDefaultPose", ::GlobalNamespace::UnityXRHelper*>(std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose GlobalNamespace::UnityXRHelper::getStaticF_kOculusOffsetDefaultPose() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pose, "kOculusOffsetDefaultPose", ::GlobalNamespace::UnityXRHelper*>();
}
inline void GlobalNamespace::UnityXRHelper::setStaticF_kOculusTouchOriginOffsetToLegacy(::UnityEngine::Pose value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pose, "kOculusTouchOriginOffsetToLegacy", ::GlobalNamespace::UnityXRHelper*>(std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose GlobalNamespace::UnityXRHelper::getStaticF_kOculusTouchOriginOffsetToLegacy() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pose, "kOculusTouchOriginOffsetToLegacy", ::GlobalNamespace::UnityXRHelper*>();
}
inline void GlobalNamespace::UnityXRHelper::setStaticF_kOculusTouchLegacyPositionOffset(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "kOculusTouchLegacyPositionOffset", ::GlobalNamespace::UnityXRHelper*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::UnityXRHelper::getStaticF_kOculusTouchLegacyPositionOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kOculusTouchLegacyPositionOffset", ::GlobalNamespace::UnityXRHelper*>();
}
inline void GlobalNamespace::UnityXRHelper::setStaticF_kOculusTouchLegacyRotationOffset(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "kOculusTouchLegacyRotationOffset", ::GlobalNamespace::UnityXRHelper*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::UnityXRHelper::getStaticF_kOculusTouchLegacyRotationOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kOculusTouchLegacyRotationOffset", ::GlobalNamespace::UnityXRHelper*>();
}
inline void GlobalNamespace::UnityXRHelper::setStaticF_kValveIndexOffsetDefaultPose(::UnityEngine::Pose value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pose, "kValveIndexOffsetDefaultPose", ::GlobalNamespace::UnityXRHelper*>(std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose GlobalNamespace::UnityXRHelper::getStaticF_kValveIndexOffsetDefaultPose() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pose, "kValveIndexOffsetDefaultPose", ::GlobalNamespace::UnityXRHelper*>();
}
inline void GlobalNamespace::UnityXRHelper::setStaticF_kValveIndexOriginOffsetToLegacy(::UnityEngine::Pose value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pose, "kValveIndexOriginOffsetToLegacy", ::GlobalNamespace::UnityXRHelper*>(std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose GlobalNamespace::UnityXRHelper::getStaticF_kValveIndexOriginOffsetToLegacy() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pose, "kValveIndexOriginOffsetToLegacy", ::GlobalNamespace::UnityXRHelper*>();
}
inline void GlobalNamespace::UnityXRHelper::setStaticF_kValveIndexLegacyPositionOffset(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "kValveIndexLegacyPositionOffset", ::GlobalNamespace::UnityXRHelper*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::UnityXRHelper::getStaticF_kValveIndexLegacyPositionOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kValveIndexLegacyPositionOffset", ::GlobalNamespace::UnityXRHelper*>();
}
inline void GlobalNamespace::UnityXRHelper::setStaticF_kValveIndexLegacyRotationOffset(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "kValveIndexLegacyRotationOffset", ::GlobalNamespace::UnityXRHelper*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::UnityXRHelper::getStaticF_kValveIndexLegacyRotationOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kValveIndexLegacyRotationOffset", ::GlobalNamespace::UnityXRHelper*>();
}
inline void GlobalNamespace::UnityXRHelper::setStaticF_kHTCViveOffsetDefaultPose(::UnityEngine::Pose value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pose, "kHTCViveOffsetDefaultPose", ::GlobalNamespace::UnityXRHelper*>(std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose GlobalNamespace::UnityXRHelper::getStaticF_kHTCViveOffsetDefaultPose() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pose, "kHTCViveOffsetDefaultPose", ::GlobalNamespace::UnityXRHelper*>();
}
inline void GlobalNamespace::UnityXRHelper::setStaticF_kHTCViveOriginOffsetToLegacy(::UnityEngine::Pose value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pose, "kHTCViveOriginOffsetToLegacy", ::GlobalNamespace::UnityXRHelper*>(std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose GlobalNamespace::UnityXRHelper::getStaticF_kHTCViveOriginOffsetToLegacy() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pose, "kHTCViveOriginOffsetToLegacy", ::GlobalNamespace::UnityXRHelper*>();
}
inline void GlobalNamespace::UnityXRHelper::setStaticF_kHTCViveLegacyPositionOffset(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "kHTCViveLegacyPositionOffset", ::GlobalNamespace::UnityXRHelper*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::UnityXRHelper::getStaticF_kHTCViveLegacyPositionOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kHTCViveLegacyPositionOffset", ::GlobalNamespace::UnityXRHelper*>();
}
inline void GlobalNamespace::UnityXRHelper::setStaticF_kHTCViveLegacyRotationOffset(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "kHTCViveLegacyRotationOffset", ::GlobalNamespace::UnityXRHelper*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::UnityXRHelper::getStaticF_kHTCViveLegacyRotationOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kHTCViveLegacyRotationOffset", ::GlobalNamespace::UnityXRHelper*>();
}
inline void GlobalNamespace::UnityXRHelper::add_inputFocusWasCapturedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_inputFocusWasCapturedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_inputFocusWasCapturedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_inputFocusWasCapturedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_inputFocusWasReleasedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_inputFocusWasReleasedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_inputFocusWasReleasedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_inputFocusWasReleasedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_vrFocusWasCapturedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_vrFocusWasCapturedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_vrFocusWasCapturedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_vrFocusWasCapturedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_vrFocusWasReleasedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_vrFocusWasReleasedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_vrFocusWasReleasedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_vrFocusWasReleasedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_hmdUnmountedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_hmdUnmountedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_hmdUnmountedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_hmdUnmountedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_hmdMountedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_hmdMountedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_hmdMountedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_hmdMountedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_controllersDidChangeReferenceEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_controllersDidChangeReferenceEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_controllersDidChangeReferenceEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_controllersDidChangeReferenceEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_controllersDidDisconnectEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "add_controllersDidDisconnectEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_controllersDidDisconnectEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "remove_controllersDidDisconnectEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UnityXRHelper::get_isHmdMounted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_isHmdMounted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::UnityXRHelper::get_hasInputFocus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_hasInputFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::UnityXRHelper::get_hasVrFocus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_hasVrFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::set_hasVrFocus(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "set_hasVrFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UnityXRHelper::get_isAlwaysWireless() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_isAlwaysWireless", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::VRPlatformSDK GlobalNamespace::UnityXRHelper::get_vrPlatformSDK() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_vrPlatformSDK", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRPlatformSDK>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::UnityXRHelper::get_loggerPrefix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_loggerPrefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityXRController* GlobalNamespace::UnityXRHelper::get_leftController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_leftController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityXRController*>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityXRController* GlobalNamespace::UnityXRHelper::get_rightController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "get_rightController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityXRController*>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::OnApplicationPause(bool pauseStatus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "OnApplicationPause", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pauseStatus);
}
inline ::UnityEngine::Vector2 GlobalNamespace::UnityXRHelper::GetAnyJoystickMaxAxis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetAnyJoystickMaxAxis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline float_t GlobalNamespace::UnityXRHelper::GetTriggerValue(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetTriggerValue", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, node);
}
inline ::UnityEngine::Vector2 GlobalNamespace::UnityXRHelper::GetThumbstickValue(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetThumbstickValue", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, node);
}
inline bool GlobalNamespace::UnityXRHelper::IsAdvancedHapticsSupported(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "IsAdvancedHapticsSupported", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline bool GlobalNamespace::UnityXRHelper::GetMenuButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetMenuButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::UnityXRHelper::GetMenuButtonDown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetMenuButtonDown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::RefreshControllersReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "RefreshControllersReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(),
                          { "TriggerHapticPulse", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, duration, strength, frequency);
}
inline void GlobalNamespace::UnityXRHelper::StopHaptics(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "StopHaptics", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline bool GlobalNamespace::UnityXRHelper::TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::by_ref<::UnityEngine::Pose> poseOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(),
                                                           { "TryGetPoseOffsetForNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, poseOffset);
}
inline bool GlobalNamespace::UnityXRHelper::GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t id, ::by_ref<::UnityEngine::Vector3> pos, ::by_ref<::UnityEngine::Quaternion> rot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetNodePose",
                                                                                  {},
                                                                                  { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nodeType, id, pos, rot);
}
inline ::UnityEngine::Pose GlobalNamespace::UnityXRHelper::GetRootPositionOffsetForLegacyNodePose(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetRootPositionOffsetForLegacyNodePose", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, node);
}
inline bool GlobalNamespace::UnityXRHelper::TryGetLegacyPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(),
                                       { "TryGetLegacyPoseOffsetForNode",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, position, rotation);
}
inline void GlobalNamespace::UnityXRHelper::ReadHeadPose(::by_ref<::UnityEngine::Vector3> pos, ::by_ref<::UnityEngine::Quaternion> rot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(),
                                                           { "ReadHeadPose", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline void GlobalNamespace::UnityXRHelper::SetUserPresence(bool newUserPresence) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "SetUserPresence", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newUserPresence);
}
inline void GlobalNamespace::UnityXRHelper::SetInputFocus(bool newInputFocus) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "SetInputFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newInputFocus);
}
inline void GlobalNamespace::UnityXRHelper::UpdateUserPresence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "UpdateUserPresence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::UpdateManufacturerOnNode(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "UpdateManufacturerOnNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::GlobalNamespace::UnityXRController* GlobalNamespace::UnityXRHelper::GetControllerFromNode(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "GetControllerFromNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityXRController*>(this, ___internal_method, node);
}
inline void GlobalNamespace::UnityXRHelper::HandleRemovedXRNode(::UnityEngine::XR::XRNodeState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "HandleRemovedXRNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNodeState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::UnityXRHelper::HandleTrackingOriginUpdated(::UnityEngine::XR::XRInputSubsystem* inputSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "HandleTrackingOriginUpdated", {}, { ::i2c::type_of<::UnityEngine::XR::XRInputSubsystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputSystem);
}
inline void GlobalNamespace::UnityXRHelper::HandleBoundaryChanged(::UnityEngine::XR::XRInputSubsystem* inputSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "HandleBoundaryChanged", {}, { ::i2c::type_of<::UnityEngine::XR::XRInputSubsystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputSystem);
}
inline void GlobalNamespace::UnityXRHelper::HandlePauseGamePerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "HandlePauseGamePerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void GlobalNamespace::UnityXRHelper::HandlePauseGameCancelled(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "HandlePauseGameCancelled", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void GlobalNamespace::UnityXRHelper::HandleNewXRNode(::UnityEngine::XR::XRNodeState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { "HandleNewXRNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNodeState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::UnityXRHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityXRHelper* GlobalNamespace::UnityXRHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnityXRHelper*>());
}
/// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
constexpr GlobalNamespace::UnityXRHelper::operator ::GlobalNamespace::IVRPlatformHelper*() noexcept {
  return static_cast<::GlobalNamespace::IVRPlatformHelper*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVRPlatformHelper"
constexpr ::GlobalNamespace::IVRPlatformHelper* GlobalNamespace::UnityXRHelper::i___GlobalNamespace__IVRPlatformHelper() noexcept {
  return static_cast<::GlobalNamespace::IVRPlatformHelper*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
constexpr GlobalNamespace::UnityXRHelper::operator ::GlobalNamespace::IVerboseLogger*() noexcept {
  return static_cast<::GlobalNamespace::IVerboseLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVerboseLogger"
constexpr ::GlobalNamespace::IVerboseLogger* GlobalNamespace::UnityXRHelper::i___GlobalNamespace__IVerboseLogger() noexcept {
  return static_cast<::GlobalNamespace::IVerboseLogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityXRHelper::UnityXRHelper() {}
