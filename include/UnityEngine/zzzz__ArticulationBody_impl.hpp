#pragma once
// IWYU pragma private; include "UnityEngine/ArticulationBody.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__ArticulationBody_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
#include "UnityEngine/zzzz__ArticulationDofLock_def.hpp"
#include "UnityEngine/zzzz__ArticulationDriveAxis_def.hpp"
#include "UnityEngine/zzzz__ArticulationDrive_def.hpp"
#include "UnityEngine/zzzz__ArticulationJacobian_def.hpp"
#include "UnityEngine/zzzz__ArticulationJointType_def.hpp"
#include "UnityEngine/zzzz__ArticulationReducedSpace_def.hpp"
#include "UnityEngine/zzzz__CollisionDetectionMode_def.hpp"
#include "UnityEngine/zzzz__ForceMode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_jointType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationJointType (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_jointType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1b7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_jointType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationJointType)>(&::UnityEngine::ArticulationBody::set_jointType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1b888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_jointType", {}, { ::i2c::type_of<::UnityEngine::ArticulationJointType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_anchorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_anchorPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a1b95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_anchorPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_anchorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(&::UnityEngine::ArticulationBody::set_anchorPosition)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a1ba40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_anchorPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_parentAnchorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_parentAnchorPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a1bb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_parentAnchorPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_parentAnchorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(&::UnityEngine::ArticulationBody::set_parentAnchorPosition)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a1bc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_parentAnchorPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_anchorRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_anchorRotation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6a1bcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_anchorRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_anchorRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Quaternion)>(&::UnityEngine::ArticulationBody::set_anchorRotation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a1bdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_anchorRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_parentAnchorRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_parentAnchorRotation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6a1be98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_parentAnchorRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_parentAnchorRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Quaternion)>(&::UnityEngine::ArticulationBody::set_parentAnchorRotation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a1bf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_parentAnchorRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_isRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_isRoot)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1c054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_isRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_matchAnchors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_matchAnchors)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1c110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_matchAnchors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_matchAnchors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(bool)>(&::UnityEngine::ArticulationBody::set_matchAnchors)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1c1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_matchAnchors", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_linearLockX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDofLock (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_linearLockX)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1c2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearLockX", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_linearLockX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDofLock)>(&::UnityEngine::ArticulationBody::set_linearLockX)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1c35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_linearLockX", {}, { ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_linearLockY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDofLock (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_linearLockY)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1c430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearLockY", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_linearLockY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDofLock)>(&::UnityEngine::ArticulationBody::set_linearLockY)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1c4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_linearLockY", {}, { ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_linearLockZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDofLock (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_linearLockZ)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1c5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearLockZ", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_linearLockZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDofLock)>(&::UnityEngine::ArticulationBody::set_linearLockZ)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1c67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_linearLockZ", {}, { ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_swingYLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDofLock (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_swingYLock)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1c750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_swingYLock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_swingYLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDofLock)>(&::UnityEngine::ArticulationBody::set_swingYLock)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1c80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_swingYLock", {}, { ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_swingZLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDofLock (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_swingZLock)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1c8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_swingZLock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_swingZLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDofLock)>(&::UnityEngine::ArticulationBody::set_swingZLock)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1c99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_swingZLock", {}, { ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_twistLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDofLock (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_twistLock)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1ca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_twistLock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_twistLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDofLock)>(&::UnityEngine::ArticulationBody::set_twistLock)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1cb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_twistLock", {}, { ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_xDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDrive (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_xDrive)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a1cc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_xDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_xDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDrive)>(&::UnityEngine::ArticulationBody::set_xDrive)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1ccf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_xDrive", {}, { ::i2c::type_of<::UnityEngine::ArticulationDrive>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_yDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDrive (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_yDrive)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a1cdc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_yDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_yDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDrive)>(&::UnityEngine::ArticulationBody::set_yDrive)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1ceb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_yDrive", {}, { ::i2c::type_of<::UnityEngine::ArticulationDrive>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_zDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDrive (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_zDrive)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a1cf88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_zDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_zDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDrive)>(&::UnityEngine::ArticulationBody::set_zDrive)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1d078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_zDrive", {}, { ::i2c::type_of<::UnityEngine::ArticulationDrive>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_immovable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_immovable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1d14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_immovable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_immovable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(bool)>(&::UnityEngine::ArticulationBody::set_immovable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1d208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_immovable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_useGravity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_useGravity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1d2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_useGravity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_useGravity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(bool)>(&::UnityEngine::ArticulationBody::set_useGravity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1d398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_useGravity", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_linearDamping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_linearDamping)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1d46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearDamping", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_linearDamping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(float_t)>(&::UnityEngine::ArticulationBody::set_linearDamping)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1d528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_linearDamping", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_angularDamping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_angularDamping)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1d604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_angularDamping", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_angularDamping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(float_t)>(&::UnityEngine::ArticulationBody::set_angularDamping)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1d6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_angularDamping", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_jointFriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_jointFriction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1d79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointFriction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_jointFriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(float_t)>(&::UnityEngine::ArticulationBody::set_jointFriction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1d858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_jointFriction", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_excludeLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_excludeLayers)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a1d934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_excludeLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_excludeLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::LayerMask)>(&::UnityEngine::ArticulationBody::set_excludeLayers)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a1da10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_excludeLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_includeLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_includeLayers)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a1dae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_includeLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_includeLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::LayerMask)>(&::UnityEngine::ArticulationBody::set_includeLayers)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a1dbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_includeLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetAccumulatedForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)(float_t)>(&::UnityEngine::ArticulationBody::GetAccumulatedForce)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6a1dc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetAccumulatedForce", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetAccumulatedForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::GetAccumulatedForce)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a1dda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetAccumulatedForce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetAccumulatedTorque
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)(float_t)>(&::UnityEngine::ArticulationBody::GetAccumulatedTorque)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6a1dde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetAccumulatedTorque", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetAccumulatedTorque
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::GetAccumulatedTorque)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a1dee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetAccumulatedTorque", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3, ::UnityEngine::ForceMode)>(&::UnityEngine::ArticulationBody::AddForce)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a1df24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddForce", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(&::UnityEngine::ArticulationBody::AddForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1e020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddForce", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddRelativeForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3, ::UnityEngine::ForceMode)>(
    &::UnityEngine::ArticulationBody::AddRelativeForce)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a1e028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "AddRelativeForce", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddRelativeForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(&::UnityEngine::ArticulationBody::AddRelativeForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1e124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddRelativeForce", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddTorque
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3, ::UnityEngine::ForceMode)>(&::UnityEngine::ArticulationBody::AddTorque)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a1e12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddTorque", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddTorque
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(&::UnityEngine::ArticulationBody::AddTorque)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1e228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddTorque", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddRelativeTorque
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3, ::UnityEngine::ForceMode)>(
    &::UnityEngine::ArticulationBody::AddRelativeTorque)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a1e230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "AddRelativeTorque", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddRelativeTorque
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(&::UnityEngine::ArticulationBody::AddRelativeTorque)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1e32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddRelativeTorque", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddForceAtPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::ForceMode)>(
    &::UnityEngine::ArticulationBody::AddForceAtPosition)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6a1e334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                            { "AddForceAtPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddForceAtPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::ArticulationBody::AddForceAtPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1e444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "AddForceAtPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_linearVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_linearVelocity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a1e44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_linearVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(&::UnityEngine::ArticulationBody::set_linearVelocity)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a1e530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_linearVelocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_angularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_angularVelocity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a1e60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_angularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_angularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(&::UnityEngine::ArticulationBody::set_angularVelocity)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a1e6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_angularVelocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_mass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_mass)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1e7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_mass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_mass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(float_t)>(&::UnityEngine::ArticulationBody::set_mass)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1e888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_mass", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_automaticCenterOfMass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_automaticCenterOfMass)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1e964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_automaticCenterOfMass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_automaticCenterOfMass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(bool)>(&::UnityEngine::ArticulationBody::set_automaticCenterOfMass)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1ea20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_automaticCenterOfMass", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_centerOfMass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_centerOfMass)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a1eaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_centerOfMass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_centerOfMass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(&::UnityEngine::ArticulationBody::set_centerOfMass)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a1ebd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_centerOfMass", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_worldCenterOfMass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_worldCenterOfMass)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a1ecb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_worldCenterOfMass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_automaticInertiaTensor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_automaticInertiaTensor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1ed98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_automaticInertiaTensor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_automaticInertiaTensor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(bool)>(&::UnityEngine::ArticulationBody::set_automaticInertiaTensor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1ee54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_automaticInertiaTensor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_inertiaTensor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_inertiaTensor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a1ef28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_inertiaTensor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_inertiaTensor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(&::UnityEngine::ArticulationBody::set_inertiaTensor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a1f00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_inertiaTensor", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_worldInertiaTensorMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_worldInertiaTensorMatrix)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a1f0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_worldInertiaTensorMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_inertiaTensorRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_inertiaTensorRotation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6a1f1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_inertiaTensorRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_inertiaTensorRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Quaternion)>(&::UnityEngine::ArticulationBody::set_inertiaTensorRotation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a1f2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_inertiaTensorRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.ResetCenterOfMass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::ResetCenterOfMass)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1f3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "ResetCenterOfMass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.ResetInertiaTensor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::ResetInertiaTensor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1f45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "ResetInertiaTensor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.Sleep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::Sleep)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1f518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "Sleep", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.IsSleeping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::IsSleeping)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1f5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "IsSleeping", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.WakeUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::WakeUp)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1f690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "WakeUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_sleepThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_sleepThreshold)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1f74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_sleepThreshold", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_sleepThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(float_t)>(&::UnityEngine::ArticulationBody::set_sleepThreshold)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1f808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_sleepThreshold", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_solverIterations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_solverIterations)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1f8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_solverIterations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_solverIterations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(int32_t)>(&::UnityEngine::ArticulationBody::set_solverIterations)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1f9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_solverIterations", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_solverVelocityIterations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_solverVelocityIterations)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1fa74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_solverVelocityIterations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_solverVelocityIterations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(int32_t)>(&::UnityEngine::ArticulationBody::set_solverVelocityIterations)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1fb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_solverVelocityIterations", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_maxAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_maxAngularVelocity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1fc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_maxAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(float_t)>(&::UnityEngine::ArticulationBody::set_maxAngularVelocity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1fcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxAngularVelocity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_maxLinearVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_maxLinearVelocity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1fd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxLinearVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_maxLinearVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(float_t)>(&::UnityEngine::ArticulationBody::set_maxLinearVelocity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1fe58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxLinearVelocity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_maxJointVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_maxJointVelocity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1ff34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxJointVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_maxJointVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(float_t)>(&::UnityEngine::ArticulationBody::set_maxJointVelocity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1fff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxJointVelocity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_maxDepenetrationVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_maxDepenetrationVelocity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a200cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxDepenetrationVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_maxDepenetrationVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(float_t)>(&::UnityEngine::ArticulationBody::set_maxDepenetrationVelocity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a20188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxDepenetrationVelocity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_jointPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationReducedSpace (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_jointPosition)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6a20264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_jointPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationReducedSpace)>(&::UnityEngine::ArticulationBody::set_jointPosition)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6a20388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_jointPosition", {}, { ::i2c::type_of<::UnityEngine::ArticulationReducedSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_jointVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationReducedSpace (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_jointVelocity)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6a204a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_jointVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationReducedSpace)>(&::UnityEngine::ArticulationBody::set_jointVelocity)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6a205cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_jointVelocity", {}, { ::i2c::type_of<::UnityEngine::ArticulationReducedSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_jointAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationReducedSpace (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_jointAcceleration)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6a206ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointAcceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_jointAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationReducedSpace)>(&::UnityEngine::ArticulationBody::set_jointAcceleration)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6a20810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_jointAcceleration", {}, { ::i2c::type_of<::UnityEngine::ArticulationReducedSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_jointForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationReducedSpace (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_jointForce)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6a20930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointForce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_jointForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationReducedSpace)>(&::UnityEngine::ArticulationBody::set_jointForce)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6a20a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_jointForce", {}, { ::i2c::type_of<::UnityEngine::ArticulationReducedSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_driveForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationReducedSpace (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_driveForce)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6a20b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_driveForce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_dofCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_dofCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a20c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_dofCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_index)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a20d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.TeleportRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::ArticulationBody::TeleportRoot)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6a20e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "TeleportRoot", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetClosestPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(&::UnityEngine::ArticulationBody::GetClosestPoint)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a20f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetClosestPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetRelativePointVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::ArticulationBody::GetRelativePointVelocity)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a21008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetRelativePointVelocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetPointVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(&::UnityEngine::ArticulationBody::GetPointVelocity)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a21108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetPointVelocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetDenseJacobian_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)(::by_ref<::UnityEngine::ArticulationJacobian>)>(
    &::UnityEngine::ArticulationBody::GetDenseJacobian_Internal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a21208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                           { "GetDenseJacobian_Internal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ArticulationJacobian>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetDenseJacobian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)(::by_ref<::UnityEngine::ArticulationJacobian>)>(
    &::UnityEngine::ArticulationBody::GetDenseJacobian)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a212dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetDenseJacobian", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ArticulationJacobian>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointPositions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::GetJointPositions)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6a2136c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetJointPositions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetJointPositions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::SetJointPositions)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6a21594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetJointPositions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointVelocities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::GetJointVelocities)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6a217ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetJointVelocities", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetJointVelocities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::SetJointVelocities)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6a219d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetJointVelocities", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointAccelerations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::GetJointAccelerations)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6a21bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                           { "GetJointAccelerations", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointForces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::GetJointForces)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6a21e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetJointForces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetJointForces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(&::UnityEngine::ArticulationBody::SetJointForces)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6a2203c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetJointForces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointForcesForAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationReducedSpace (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationReducedSpace)>(
    &::UnityEngine::ArticulationBody::GetJointForcesForAcceleration)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6a22254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetJointForcesForAcceleration", {}, { ::i2c::type_of<::UnityEngine::ArticulationReducedSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetDriveForces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::GetDriveForces)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6a22390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetDriveForces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointGravityForces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::GetJointGravityForces)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6a225b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                           { "GetJointGravityForces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointCoriolisCentrifugalForces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::GetJointCoriolisCentrifugalForces)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6a227e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetJointCoriolisCentrifugalForces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointExternalForces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*, float_t)>(
    &::UnityEngine::ArticulationBody::GetJointExternalForces)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6a22a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "GetJointExternalForces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetDriveTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::GetDriveTargets)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6a22c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetDriveTargets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::SetDriveTargets)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6a22e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetDriveTargets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetDriveTargetVelocities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::GetDriveTargetVelocities)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6a2308c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetDriveTargetVelocities", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveTargetVelocities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::SetDriveTargetVelocities)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6a232b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetDriveTargetVelocities", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetDofStartIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ArticulationBody::GetDofStartIndices)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6a234cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetDofStartIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDriveAxis, float_t)>(&::UnityEngine::ArticulationBody::SetDriveTarget)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a236f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetDriveTarget", {}, { ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveTargetVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDriveAxis, float_t)>(
    &::UnityEngine::ArticulationBody::SetDriveTargetVelocity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a237e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "SetDriveTargetVelocity", {}, { ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveLimits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDriveAxis, float_t, float_t)>(
    &::UnityEngine::ArticulationBody::SetDriveLimits)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a238dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "SetDriveLimits", {}, { ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveStiffness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDriveAxis, float_t)>(&::UnityEngine::ArticulationBody::SetDriveStiffness)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a239e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetDriveStiffness", {}, { ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveDamping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDriveAxis, float_t)>(&::UnityEngine::ArticulationBody::SetDriveDamping)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a23ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetDriveDamping", {}, { ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveForceLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::ArticulationDriveAxis, float_t)>(
    &::UnityEngine::ArticulationBody::SetDriveForceLimit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a23bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetDriveForceLimit", {}, { ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_collisionDetectionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::CollisionDetectionMode (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_collisionDetectionMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a23cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_collisionDetectionMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_collisionDetectionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::CollisionDetectionMode)>(
    &::UnityEngine::ArticulationBody::set_collisionDetectionMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a23d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_collisionDetectionMode", {}, { ::i2c::type_of<::UnityEngine::CollisionDetectionMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.PublishTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::PublishTransform)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a23e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "PublishTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SnapAnchorToClosestContact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::SnapAnchorToClosestContact)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x6a23f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SnapAnchorToClosestContact", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_velocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_velocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a2420c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_velocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_velocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::UnityEngine::Vector3)>(&::UnityEngine::ArticulationBody::set_velocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a24210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_velocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_computeParentAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::get_computeParentAnchor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a24214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_computeParentAnchor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_computeParentAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(bool)>(&::UnityEngine::ArticulationBody::set_computeParentAnchor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a24218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_computeParentAnchor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetJointAccelerations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationBody::SetJointAccelerations)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6a2421c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                           { "SetJointAccelerations", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationBody::*)()>(&::UnityEngine::ArticulationBody::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a24434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_jointType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationJointType (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_jointType_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1b84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointType_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_jointType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ArticulationJointType)>(&::UnityEngine::ArticulationBody::set_jointType_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1b918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_jointType_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationJointType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_anchorPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::get_anchorPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1b9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "get_anchorPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_anchorPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::set_anchorPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1bad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_anchorPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_parentAnchorPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::get_parentAnchorPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1bbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "get_parentAnchorPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_parentAnchorPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::set_parentAnchorPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1bc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_parentAnchorPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_anchorRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::ArticulationBody::get_anchorRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1bd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "get_anchorRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_anchorRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::ArticulationBody::set_anchorRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1be54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_anchorRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_parentAnchorRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::ArticulationBody::get_parentAnchorRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1bf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "get_parentAnchorRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_parentAnchorRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::ArticulationBody::set_parentAnchorRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1c010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "set_parentAnchorRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_isRoot_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_isRoot_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1c0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_isRoot_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_matchAnchors_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_matchAnchors_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1c190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_matchAnchors_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_matchAnchors_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ArticulationBody::set_matchAnchors_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1c25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_matchAnchors_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_linearLockX_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDofLock (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_linearLockX_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1c320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearLockX_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_linearLockX_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ArticulationDofLock)>(&::UnityEngine::ArticulationBody::set_linearLockX_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1c3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_linearLockX_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_linearLockY_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDofLock (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_linearLockY_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1c4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearLockY_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_linearLockY_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ArticulationDofLock)>(&::UnityEngine::ArticulationBody::set_linearLockY_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1c57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_linearLockY_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_linearLockZ_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDofLock (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_linearLockZ_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1c640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearLockZ_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_linearLockZ_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ArticulationDofLock)>(&::UnityEngine::ArticulationBody::set_linearLockZ_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1c70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_linearLockZ_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_swingYLock_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDofLock (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_swingYLock_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1c7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_swingYLock_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_swingYLock_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ArticulationDofLock)>(&::UnityEngine::ArticulationBody::set_swingYLock_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1c89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_swingYLock_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_swingZLock_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDofLock (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_swingZLock_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1c960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_swingZLock_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_swingZLock_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ArticulationDofLock)>(&::UnityEngine::ArticulationBody::set_swingZLock_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1ca2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_swingZLock_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_twistLock_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ArticulationDofLock (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_twistLock_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1caf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_twistLock_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_twistLock_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ArticulationDofLock)>(&::UnityEngine::ArticulationBody::set_twistLock_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1cbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_twistLock_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_xDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationDrive>)>(&::UnityEngine::ArticulationBody::get_xDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1ccac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "get_xDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_xDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationDrive>)>(&::UnityEngine::ArticulationBody::set_xDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1cd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_xDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_yDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationDrive>)>(&::UnityEngine::ArticulationBody::get_yDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1ce70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "get_yDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_yDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationDrive>)>(&::UnityEngine::ArticulationBody::set_yDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1cf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_yDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_zDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationDrive>)>(&::UnityEngine::ArticulationBody::get_zDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1d034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "get_zDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_zDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationDrive>)>(&::UnityEngine::ArticulationBody::set_zDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1d108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_zDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_immovable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_immovable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1d1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_immovable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_immovable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ArticulationBody::set_immovable_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1d298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_immovable_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_useGravity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_useGravity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1d35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_useGravity_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_useGravity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ArticulationBody::set_useGravity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1d428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_useGravity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_linearDamping_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_linearDamping_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1d4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearDamping_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_linearDamping_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ArticulationBody::set_linearDamping_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a1d5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                           { "set_linearDamping_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_angularDamping_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_angularDamping_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1d684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_angularDamping_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_angularDamping_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ArticulationBody::set_angularDamping_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a1d750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                           { "set_angularDamping_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_jointFriction_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_jointFriction_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1d81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointFriction_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_jointFriction_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ArticulationBody::set_jointFriction_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a1d8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                           { "set_jointFriction_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_excludeLayers_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::LayerMask>)>(&::UnityEngine::ArticulationBody::get_excludeLayers_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1d9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "get_excludeLayers_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::LayerMask>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_excludeLayers_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::LayerMask>)>(&::UnityEngine::ArticulationBody::set_excludeLayers_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1daa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_excludeLayers_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::LayerMask>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_includeLayers_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::LayerMask>)>(&::UnityEngine::ArticulationBody::get_includeLayers_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1db80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "get_includeLayers_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::LayerMask>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_includeLayers_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::LayerMask>)>(&::UnityEngine::ArticulationBody::set_includeLayers_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1dc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_includeLayers_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::LayerMask>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetAccumulatedForce_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::GetAccumulatedForce_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a1dd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                            { "GetAccumulatedForce_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetAccumulatedTorque_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::GetAccumulatedTorque_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a1de90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                            { "GetAccumulatedTorque_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddForce_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::UnityEngine::ForceMode)>(&::UnityEngine::ArticulationBody::AddForce_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a1dfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                            { "AddForce_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddRelativeForce_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::UnityEngine::ForceMode)>(
    &::UnityEngine::ArticulationBody::AddRelativeForce_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a1e0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                         { "AddRelativeForce_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddTorque_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::UnityEngine::ForceMode)>(&::UnityEngine::ArticulationBody::AddTorque_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a1e1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                            { "AddTorque_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddRelativeTorque_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::UnityEngine::ForceMode)>(
    &::UnityEngine::ArticulationBody::AddRelativeTorque_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a1e2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
            { "AddRelativeTorque_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.AddForceAtPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::UnityEngine::ForceMode)>(
    &::UnityEngine::ArticulationBody::AddForceAtPosition_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a1e3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddForceAtPosition_Injected",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                                  ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_linearVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::get_linearVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1e4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "get_linearVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_linearVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::set_linearVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1e5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_linearVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_angularVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::get_angularVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1e6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "get_angularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_angularVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::set_angularVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1e788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_angularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_mass_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_mass_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1e84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_mass_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_mass_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ArticulationBody::set_mass_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a1e918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_mass_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_automaticCenterOfMass_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_automaticCenterOfMass_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1e9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_automaticCenterOfMass_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_automaticCenterOfMass_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ArticulationBody::set_automaticCenterOfMass_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1eab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_automaticCenterOfMass_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_centerOfMass_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::get_centerOfMass_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1eb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "get_centerOfMass_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_centerOfMass_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::set_centerOfMass_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1ec70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_centerOfMass_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_worldCenterOfMass_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::get_worldCenterOfMass_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1ed54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "get_worldCenterOfMass_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_automaticInertiaTensor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_automaticInertiaTensor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1ee18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_automaticInertiaTensor_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_automaticInertiaTensor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ArticulationBody::set_automaticInertiaTensor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1eee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_automaticInertiaTensor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_inertiaTensor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::get_inertiaTensor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1efc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "get_inertiaTensor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_inertiaTensor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ArticulationBody::set_inertiaTensor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1f0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                             { "set_inertiaTensor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_worldInertiaTensorMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::ArticulationBody::get_worldInertiaTensorMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1f1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "get_worldInertiaTensorMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_inertiaTensorRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::ArticulationBody::get_inertiaTensorRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1f280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "get_inertiaTensorRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_inertiaTensorRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::ArticulationBody::set_inertiaTensorRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1f35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "set_inertiaTensorRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.ResetCenterOfMass_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::ResetCenterOfMass_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1f420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "ResetCenterOfMass_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.ResetInertiaTensor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::ResetInertiaTensor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1f4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "ResetInertiaTensor_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.Sleep_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::Sleep_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1f598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "Sleep_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.IsSleeping_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::IsSleeping_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1f654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "IsSleeping_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.WakeUp_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::WakeUp_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1f710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "WakeUp_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_sleepThreshold_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_sleepThreshold_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1f7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_sleepThreshold_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_sleepThreshold_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ArticulationBody::set_sleepThreshold_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a1f898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                           { "set_sleepThreshold_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_solverIterations_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_solverIterations_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1f964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_solverIterations_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_solverIterations_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::ArticulationBody::set_solverIterations_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1fa30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_solverIterations_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_solverVelocityIterations_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_solverVelocityIterations_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1faf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_solverVelocityIterations_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_solverVelocityIterations_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::ArticulationBody::set_solverVelocityIterations_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a1fbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_solverVelocityIterations_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_maxAngularVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_maxAngularVelocity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1fc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxAngularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_maxAngularVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ArticulationBody::set_maxAngularVelocity_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a1fd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxAngularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_maxLinearVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_maxLinearVelocity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1fe1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxLinearVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_maxLinearVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ArticulationBody::set_maxLinearVelocity_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a1fee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxLinearVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_maxJointVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_maxJointVelocity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a1ffb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxJointVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_maxJointVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ArticulationBody::set_maxJointVelocity_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a20080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxJointVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_maxDepenetrationVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_maxDepenetrationVelocity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a2014c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxDepenetrationVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_maxDepenetrationVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ArticulationBody::set_maxDepenetrationVelocity_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a20218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxDepenetrationVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_jointPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationReducedSpace>)>(&::UnityEngine::ArticulationBody::get_jointPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a20344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "get_jointPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_jointPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationReducedSpace>)>(&::UnityEngine::ArticulationBody::set_jointPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a20464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "set_jointPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_jointVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationReducedSpace>)>(&::UnityEngine::ArticulationBody::get_jointVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a20588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "get_jointVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_jointVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationReducedSpace>)>(&::UnityEngine::ArticulationBody::set_jointVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a206a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "set_jointVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_jointAcceleration_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationReducedSpace>)>(
    &::UnityEngine::ArticulationBody::get_jointAcceleration_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a207cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                         { "get_jointAcceleration_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_jointAcceleration_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationReducedSpace>)>(
    &::UnityEngine::ArticulationBody::set_jointAcceleration_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a208ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                         { "set_jointAcceleration_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_jointForce_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationReducedSpace>)>(&::UnityEngine::ArticulationBody::get_jointForce_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a20a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "get_jointForce_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_jointForce_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationReducedSpace>)>(&::UnityEngine::ArticulationBody::set_jointForce_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a20b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "set_jointForce_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_driveForce_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationReducedSpace>)>(&::UnityEngine::ArticulationBody::get_driveForce_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a20c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "get_driveForce_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_dofCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_dofCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a20d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_dofCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_index_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_index_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a20dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_index_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.TeleportRoot_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::ArticulationBody::TeleportRoot_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a20eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
            { "TeleportRoot_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetClosestPoint_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::ArticulationBody::GetClosestPoint_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a20fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
            { "GetClosestPoint_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetRelativePointVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::ArticulationBody::GetRelativePointVelocity_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a210b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "GetRelativePointVelocity_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetPointVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::ArticulationBody::GetPointVelocity_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a211b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
            { "GetPointVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetDenseJacobian_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationJacobian>)>(
    &::UnityEngine::ArticulationBody::GetDenseJacobian_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a21298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                         { "GetDenseJacobian_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationJacobian>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointPositions_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::GetJointPositions_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a21550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                         { "GetJointPositions_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetJointPositions_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::SetJointPositions_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a21768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                         { "SetJointPositions_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointVelocities_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::GetJointVelocities_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a21990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                         { "GetJointVelocities_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetJointVelocities_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::SetJointVelocities_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a21ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                         { "SetJointVelocities_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointAccelerations_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::GetJointAccelerations_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a21dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                         { "GetJointAccelerations_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointForces_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::GetJointForces_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a21ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "GetJointForces_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetJointForces_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::SetJointForces_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a22210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "SetJointForces_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointForcesForAcceleration_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ArticulationReducedSpace>, ::by_ref<::UnityEngine::ArticulationReducedSpace>)>(
    &::UnityEngine::ArticulationBody::GetJointForcesForAcceleration_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a2233c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                           { "GetJointForcesForAcceleration_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetDriveForces_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::GetDriveForces_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a22574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "GetDriveForces_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointGravityForces_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::GetJointGravityForces_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a2279c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                         { "GetJointGravityForces_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointCoriolisCentrifugalForces_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::GetJointCoriolisCentrifugalForces_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a229c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                            { "GetJointCoriolisCentrifugalForces_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetJointExternalForces_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>, float_t)>(
    &::UnityEngine::ArticulationBody::GetJointExternalForces_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a22bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
            { "GetJointExternalForces_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetDriveTargets_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::GetDriveTargets_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a22e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                         { "GetDriveTargets_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveTargets_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::SetDriveTargets_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a23048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                         { "SetDriveTargets_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetDriveTargetVelocities_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::GetDriveTargetVelocities_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a23270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                            { "GetDriveTargetVelocities_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveTargetVelocities_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::SetDriveTargetVelocities_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a23488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                            { "SetDriveTargetVelocities_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.GetDofStartIndices_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::GetDofStartIndices_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a236b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                         { "GetDofStartIndices_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ArticulationDriveAxis, float_t)>(&::UnityEngine::ArticulationBody::SetDriveTarget_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a23794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                            { "SetDriveTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveTargetVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ArticulationDriveAxis, float_t)>(&::UnityEngine::ArticulationBody::SetDriveTargetVelocity_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a23888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                            { "SetDriveTargetVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveLimits_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ArticulationDriveAxis, float_t, float_t)>(&::UnityEngine::ArticulationBody::SetDriveLimits_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a23984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
            { "SetDriveLimits_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveStiffness_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ArticulationDriveAxis, float_t)>(&::UnityEngine::ArticulationBody::SetDriveStiffness_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a23a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                            { "SetDriveStiffness_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveDamping_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ArticulationDriveAxis, float_t)>(&::UnityEngine::ArticulationBody::SetDriveDamping_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a23b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                            { "SetDriveDamping_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetDriveForceLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ArticulationDriveAxis, float_t)>(&::UnityEngine::ArticulationBody::SetDriveForceLimit_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a23c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                            { "SetDriveForceLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.get_collisionDetectionMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::CollisionDetectionMode (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::get_collisionDetectionMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a23d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_collisionDetectionMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.set_collisionDetectionMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::CollisionDetectionMode)>(&::UnityEngine::ArticulationBody::set_collisionDetectionMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a23e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                { "set_collisionDetectionMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CollisionDetectionMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.PublishTransform_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ArticulationBody::PublishTransform_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a23ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "PublishTransform_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationBody.SetJointAccelerations_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ArticulationBody::SetJointAccelerations_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a243f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                         { "SetJointAccelerations_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::ArticulationJointType UnityEngine::ArticulationBody::get_jointType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationJointType>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_jointType(::UnityEngine::ArticulationJointType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_jointType", {}, { ::i2c::type_of<::UnityEngine::ArticulationJointType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::get_anchorPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_anchorPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_anchorPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_anchorPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::get_parentAnchorPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_parentAnchorPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_parentAnchorPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_parentAnchorPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::ArticulationBody::get_anchorRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_anchorRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_anchorRotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_anchorRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::ArticulationBody::get_parentAnchorRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_parentAnchorRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_parentAnchorRotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_parentAnchorRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ArticulationBody::get_isRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_isRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ArticulationBody::get_matchAnchors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_matchAnchors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_matchAnchors(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_matchAnchors", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationBody::get_linearLockX() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearLockX", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDofLock>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_linearLockX(::UnityEngine::ArticulationDofLock value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_linearLockX", {}, { ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationBody::get_linearLockY() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearLockY", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDofLock>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_linearLockY(::UnityEngine::ArticulationDofLock value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_linearLockY", {}, { ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationBody::get_linearLockZ() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearLockZ", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDofLock>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_linearLockZ(::UnityEngine::ArticulationDofLock value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_linearLockZ", {}, { ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationBody::get_swingYLock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_swingYLock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDofLock>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_swingYLock(::UnityEngine::ArticulationDofLock value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_swingYLock", {}, { ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationBody::get_swingZLock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_swingZLock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDofLock>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_swingZLock(::UnityEngine::ArticulationDofLock value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_swingZLock", {}, { ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationBody::get_twistLock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_twistLock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDofLock>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_twistLock(::UnityEngine::ArticulationDofLock value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_twistLock", {}, { ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationDrive UnityEngine::ArticulationBody::get_xDrive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_xDrive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDrive>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_xDrive(::UnityEngine::ArticulationDrive value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_xDrive", {}, { ::i2c::type_of<::UnityEngine::ArticulationDrive>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationDrive UnityEngine::ArticulationBody::get_yDrive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_yDrive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDrive>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_yDrive(::UnityEngine::ArticulationDrive value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_yDrive", {}, { ::i2c::type_of<::UnityEngine::ArticulationDrive>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationDrive UnityEngine::ArticulationBody::get_zDrive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_zDrive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDrive>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_zDrive(::UnityEngine::ArticulationDrive value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_zDrive", {}, { ::i2c::type_of<::UnityEngine::ArticulationDrive>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ArticulationBody::get_immovable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_immovable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_immovable(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_immovable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ArticulationBody::get_useGravity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_useGravity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_useGravity(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_useGravity", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ArticulationBody::get_linearDamping() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearDamping", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_linearDamping(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_linearDamping", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ArticulationBody::get_angularDamping() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_angularDamping", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_angularDamping(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_angularDamping", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ArticulationBody::get_jointFriction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointFriction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_jointFriction(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_jointFriction", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::ArticulationBody::get_excludeLayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_excludeLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_excludeLayers(::UnityEngine::LayerMask value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_excludeLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::ArticulationBody::get_includeLayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_includeLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_includeLayers(::UnityEngine::LayerMask value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_includeLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::GetAccumulatedForce(float_t step) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetAccumulatedForce", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, step);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::GetAccumulatedForce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetAccumulatedForce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::GetAccumulatedTorque(float_t step) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetAccumulatedTorque", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, step);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::GetAccumulatedTorque() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetAccumulatedTorque", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddForce", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force, mode);
}
inline void UnityEngine::ArticulationBody::AddForce(::UnityEngine::Vector3 force) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddForce", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void UnityEngine::ArticulationBody::AddRelativeForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddRelativeForce", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force, mode);
}
inline void UnityEngine::ArticulationBody::AddRelativeForce(::UnityEngine::Vector3 force) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddRelativeForce", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void UnityEngine::ArticulationBody::AddTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddTorque", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, torque, mode);
}
inline void UnityEngine::ArticulationBody::AddTorque(::UnityEngine::Vector3 torque) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddTorque", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, torque);
}
inline void UnityEngine::ArticulationBody::AddRelativeTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddRelativeTorque", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, torque, mode);
}
inline void UnityEngine::ArticulationBody::AddRelativeTorque(::UnityEngine::Vector3 torque) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddRelativeTorque", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, torque);
}
inline void UnityEngine::ArticulationBody::AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, ::UnityEngine::ForceMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                          { "AddForceAtPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force, position, mode);
}
inline void UnityEngine::ArticulationBody::AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddForceAtPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force, position);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::get_linearVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_linearVelocity(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_linearVelocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::get_angularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_angularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_angularVelocity(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_angularVelocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ArticulationBody::get_mass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_mass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_mass(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_mass", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ArticulationBody::get_automaticCenterOfMass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_automaticCenterOfMass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_automaticCenterOfMass(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_automaticCenterOfMass", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::get_centerOfMass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_centerOfMass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_centerOfMass(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_centerOfMass", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::get_worldCenterOfMass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_worldCenterOfMass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool UnityEngine::ArticulationBody::get_automaticInertiaTensor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_automaticInertiaTensor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_automaticInertiaTensor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_automaticInertiaTensor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::get_inertiaTensor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_inertiaTensor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_inertiaTensor(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_inertiaTensor", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::ArticulationBody::get_worldInertiaTensorMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_worldInertiaTensorMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion UnityEngine::ArticulationBody::get_inertiaTensorRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_inertiaTensorRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_inertiaTensorRotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_inertiaTensorRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ArticulationBody::ResetCenterOfMass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "ResetCenterOfMass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::ResetInertiaTensor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "ResetInertiaTensor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::Sleep() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "Sleep", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ArticulationBody::IsSleeping() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "IsSleeping", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::WakeUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "WakeUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::ArticulationBody::get_sleepThreshold() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_sleepThreshold", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_sleepThreshold(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_sleepThreshold", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ArticulationBody::get_solverIterations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_solverIterations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_solverIterations(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_solverIterations", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ArticulationBody::get_solverVelocityIterations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_solverVelocityIterations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_solverVelocityIterations(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_solverVelocityIterations", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ArticulationBody::get_maxAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_maxAngularVelocity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxAngularVelocity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ArticulationBody::get_maxLinearVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxLinearVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_maxLinearVelocity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxLinearVelocity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ArticulationBody::get_maxJointVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxJointVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_maxJointVelocity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxJointVelocity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ArticulationBody::get_maxDepenetrationVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxDepenetrationVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_maxDepenetrationVelocity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxDepenetrationVelocity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationReducedSpace UnityEngine::ArticulationBody::get_jointPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationReducedSpace>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_jointPosition(::UnityEngine::ArticulationReducedSpace value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_jointPosition", {}, { ::i2c::type_of<::UnityEngine::ArticulationReducedSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationReducedSpace UnityEngine::ArticulationBody::get_jointVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationReducedSpace>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_jointVelocity(::UnityEngine::ArticulationReducedSpace value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_jointVelocity", {}, { ::i2c::type_of<::UnityEngine::ArticulationReducedSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationReducedSpace UnityEngine::ArticulationBody::get_jointAcceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointAcceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationReducedSpace>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_jointAcceleration(::UnityEngine::ArticulationReducedSpace value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_jointAcceleration", {}, { ::i2c::type_of<::UnityEngine::ArticulationReducedSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationReducedSpace UnityEngine::ArticulationBody::get_jointForce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointForce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationReducedSpace>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_jointForce(::UnityEngine::ArticulationReducedSpace value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_jointForce", {}, { ::i2c::type_of<::UnityEngine::ArticulationReducedSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ArticulationReducedSpace UnityEngine::ArticulationBody::get_driveForce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_driveForce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationReducedSpace>(this, ___internal_method);
}
inline int32_t UnityEngine::ArticulationBody::get_dofCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_dofCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ArticulationBody::get_index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::TeleportRoot(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "TeleportRoot", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::GetClosestPoint(::UnityEngine::Vector3 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetClosestPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetRelativePointVelocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, relativePoint);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::GetPointVelocity(::UnityEngine::Vector3 worldPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetPointVelocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldPoint);
}
inline int32_t UnityEngine::ArticulationBody::GetDenseJacobian_Internal(::by_ref<::UnityEngine::ArticulationJacobian> jacobian) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetDenseJacobian_Internal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ArticulationJacobian>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, jacobian);
}
inline int32_t UnityEngine::ArticulationBody::GetDenseJacobian(::by_ref<::UnityEngine::ArticulationJacobian> jacobian) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetDenseJacobian", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ArticulationJacobian>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, jacobian);
}
inline int32_t UnityEngine::ArticulationBody::GetJointPositions(::System::Collections::Generic::List_1<float_t>* positions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetJointPositions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, positions);
}
inline void UnityEngine::ArticulationBody::SetJointPositions(::System::Collections::Generic::List_1<float_t>* positions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetJointPositions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions);
}
inline int32_t UnityEngine::ArticulationBody::GetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetJointVelocities", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, velocities);
}
inline void UnityEngine::ArticulationBody::SetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetJointVelocities", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocities);
}
inline int32_t UnityEngine::ArticulationBody::GetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetJointAccelerations", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, accelerations);
}
inline int32_t UnityEngine::ArticulationBody::GetJointForces(::System::Collections::Generic::List_1<float_t>* forces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetJointForces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, forces);
}
inline void UnityEngine::ArticulationBody::SetJointForces(::System::Collections::Generic::List_1<float_t>* forces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetJointForces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forces);
}
inline ::UnityEngine::ArticulationReducedSpace UnityEngine::ArticulationBody::GetJointForcesForAcceleration(::UnityEngine::ArticulationReducedSpace acceleration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetJointForcesForAcceleration", {}, { ::i2c::type_of<::UnityEngine::ArticulationReducedSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationReducedSpace>(this, ___internal_method, acceleration);
}
inline int32_t UnityEngine::ArticulationBody::GetDriveForces(::System::Collections::Generic::List_1<float_t>* forces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetDriveForces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, forces);
}
inline int32_t UnityEngine::ArticulationBody::GetJointGravityForces(::System::Collections::Generic::List_1<float_t>* forces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetJointGravityForces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, forces);
}
inline int32_t UnityEngine::ArticulationBody::GetJointCoriolisCentrifugalForces(::System::Collections::Generic::List_1<float_t>* forces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetJointCoriolisCentrifugalForces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, forces);
}
inline int32_t UnityEngine::ArticulationBody::GetJointExternalForces(::System::Collections::Generic::List_1<float_t>* forces, float_t step) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "GetJointExternalForces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, forces, step);
}
inline int32_t UnityEngine::ArticulationBody::GetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetDriveTargets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, targets);
}
inline void UnityEngine::ArticulationBody::SetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetDriveTargets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline int32_t UnityEngine::ArticulationBody::GetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                         { "GetDriveTargetVelocities", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, targetVelocities);
}
inline void UnityEngine::ArticulationBody::SetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                         { "SetDriveTargetVelocities", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetVelocities);
}
inline int32_t UnityEngine::ArticulationBody::GetDofStartIndices(::System::Collections::Generic::List_1<int32_t>* dofStartIndices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetDofStartIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dofStartIndices);
}
inline void UnityEngine::ArticulationBody::SetDriveTarget(::UnityEngine::ArticulationDriveAxis axis, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetDriveTarget", {}, { ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, value);
}
inline void UnityEngine::ArticulationBody::SetDriveTargetVelocity(::UnityEngine::ArticulationDriveAxis axis, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "SetDriveTargetVelocity", {}, { ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, value);
}
inline void UnityEngine::ArticulationBody::SetDriveLimits(::UnityEngine::ArticulationDriveAxis axis, float_t lower, float_t upper) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "SetDriveLimits", {}, { ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, lower, upper);
}
inline void UnityEngine::ArticulationBody::SetDriveStiffness(::UnityEngine::ArticulationDriveAxis axis, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetDriveStiffness", {}, { ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, value);
}
inline void UnityEngine::ArticulationBody::SetDriveDamping(::UnityEngine::ArticulationDriveAxis axis, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetDriveDamping", {}, { ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, value);
}
inline void UnityEngine::ArticulationBody::SetDriveForceLimit(::UnityEngine::ArticulationDriveAxis axis, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetDriveForceLimit", {}, { ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, value);
}
inline ::UnityEngine::CollisionDetectionMode UnityEngine::ArticulationBody::get_collisionDetectionMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_collisionDetectionMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::CollisionDetectionMode>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_collisionDetectionMode", {}, { ::i2c::type_of<::UnityEngine::CollisionDetectionMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ArticulationBody::PublishTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "PublishTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::SnapAnchorToClosestContact() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SnapAnchorToClosestContact", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ArticulationBody::get_velocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_velocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_velocity(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_velocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ArticulationBody::get_computeParentAnchor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_computeParentAnchor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ArticulationBody::set_computeParentAnchor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_computeParentAnchor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ArticulationBody::SetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "SetJointAccelerations", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accelerations);
}
inline void UnityEngine::ArticulationBody::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ArticulationJointType UnityEngine::ArticulationBody::get_jointType_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointType_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationJointType>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_jointType_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationJointType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_jointType_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationJointType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_anchorPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "get_anchorPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_anchorPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_anchorPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_parentAnchorPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "get_parentAnchorPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_parentAnchorPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_parentAnchorPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_anchorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "get_anchorRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_anchorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_anchorRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_parentAnchorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "get_parentAnchorRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_parentAnchorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "set_parentAnchorRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ArticulationBody::get_isRoot_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_isRoot_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::ArticulationBody::get_matchAnchors_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_matchAnchors_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_matchAnchors_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_matchAnchors_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationBody::get_linearLockX_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearLockX_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDofLock>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_linearLockX_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_linearLockX_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationBody::get_linearLockY_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearLockY_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDofLock>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_linearLockY_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_linearLockY_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationBody::get_linearLockZ_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearLockZ_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDofLock>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_linearLockZ_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_linearLockZ_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationBody::get_swingYLock_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_swingYLock_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDofLock>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_swingYLock_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_swingYLock_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationBody::get_swingZLock_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_swingZLock_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDofLock>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_swingZLock_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_swingZLock_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationBody::get_twistLock_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_twistLock_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ArticulationDofLock>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_twistLock_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_twistLock_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDofLock>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_xDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationDrive> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "get_xDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_xDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationDrive> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_xDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_yDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationDrive> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "get_yDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_yDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationDrive> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_yDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_zDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationDrive> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "get_zDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_zDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationDrive> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_zDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ArticulationBody::get_immovable_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_immovable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_immovable_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_immovable_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ArticulationBody::get_useGravity_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_useGravity_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_useGravity_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_useGravity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ArticulationBody::get_linearDamping_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_linearDamping_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_linearDamping_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_linearDamping_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ArticulationBody::get_angularDamping_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_angularDamping_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_angularDamping_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_angularDamping_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ArticulationBody::get_jointFriction_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_jointFriction_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_jointFriction_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_jointFriction_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_excludeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "get_excludeLayers_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::LayerMask>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_excludeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_excludeLayers_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::LayerMask>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_includeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "get_includeLayers_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::LayerMask>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_includeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_includeLayers_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::LayerMask>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::GetAccumulatedForce_Injected(::System::IntPtr _unity_self, float_t step, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                       { "GetAccumulatedForce_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, step, ret);
}
inline void UnityEngine::ArticulationBody::GetAccumulatedTorque_Injected(::System::IntPtr _unity_self, float_t step, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                          { "GetAccumulatedTorque_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, step, ret);
}
inline void UnityEngine::ArticulationBody::AddForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                          { "AddForce_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, force, mode);
}
inline void UnityEngine::ArticulationBody::AddRelativeForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                       { "AddRelativeForce_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, force, mode);
}
inline void UnityEngine::ArticulationBody::AddTorque_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                          { "AddTorque_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, torque, mode);
}
inline void UnityEngine::ArticulationBody::AddRelativeTorque_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                       { "AddRelativeTorque_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, torque, mode);
}
inline void UnityEngine::ArticulationBody::AddForceAtPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> force, ::by_ref<::UnityEngine::Vector3> position,
                                                                       ::UnityEngine::ForceMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "AddForceAtPosition_Injected",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                                ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ForceMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, force, position, mode);
}
inline void UnityEngine::ArticulationBody::get_linearVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "get_linearVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_linearVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_linearVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_angularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "get_angularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_angularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_angularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ArticulationBody::get_mass_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_mass_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_mass_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_mass_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ArticulationBody::get_automaticCenterOfMass_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_automaticCenterOfMass_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_automaticCenterOfMass_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_automaticCenterOfMass_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_centerOfMass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "get_centerOfMass_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_centerOfMass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_centerOfMass_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_worldCenterOfMass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "get_worldCenterOfMass_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline bool UnityEngine::ArticulationBody::get_automaticInertiaTensor_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_automaticInertiaTensor_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_automaticInertiaTensor_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_automaticInertiaTensor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_inertiaTensor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "get_inertiaTensor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_inertiaTensor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                           { "set_inertiaTensor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_worldInertiaTensorMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "get_worldInertiaTensorMatrix_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::get_inertiaTensorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "get_inertiaTensorRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_inertiaTensorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "set_inertiaTensorRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::ResetCenterOfMass_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "ResetCenterOfMass_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::ResetInertiaTensor_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "ResetInertiaTensor_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::Sleep_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "Sleep_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::ArticulationBody::IsSleeping_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "IsSleeping_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::WakeUp_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "WakeUp_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::ArticulationBody::get_sleepThreshold_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_sleepThreshold_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_sleepThreshold_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_sleepThreshold_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::ArticulationBody::get_solverIterations_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_solverIterations_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_solverIterations_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                         { "set_solverIterations_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::ArticulationBody::get_solverVelocityIterations_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_solverVelocityIterations_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_solverVelocityIterations_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_solverVelocityIterations_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ArticulationBody::get_maxAngularVelocity_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxAngularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_maxAngularVelocity_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxAngularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ArticulationBody::get_maxLinearVelocity_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxLinearVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_maxLinearVelocity_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                         { "set_maxLinearVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ArticulationBody::get_maxJointVelocity_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxJointVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_maxJointVelocity_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                                                                         { "set_maxJointVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ArticulationBody::get_maxDepenetrationVelocity_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_maxDepenetrationVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_maxDepenetrationVelocity_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "set_maxDepenetrationVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_jointPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "get_jointPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_jointPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "set_jointPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_jointVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "get_jointVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_jointVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "set_jointVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_jointAcceleration_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "get_jointAcceleration_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_jointAcceleration_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "set_jointAcceleration_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_jointForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "get_jointForce_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ArticulationBody::set_jointForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "set_jointForce_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::get_driveForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "get_driveForce_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline int32_t UnityEngine::ArticulationBody::get_dofCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_dofCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::ArticulationBody::get_index_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_index_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::TeleportRoot_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Quaternion> rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
          { "TeleportRoot_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, position, rotation);
}
inline void UnityEngine::ArticulationBody::GetClosestPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> point, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
          { "GetClosestPoint_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, point, ret);
}
inline void UnityEngine::ArticulationBody::GetRelativePointVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> relativePoint, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "GetRelativePointVelocity_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, relativePoint, ret);
}
inline void UnityEngine::ArticulationBody::GetPointVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> worldPoint, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
          { "GetPointVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, worldPoint, ret);
}
inline int32_t UnityEngine::ArticulationBody::GetDenseJacobian_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationJacobian> jacobian) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "GetDenseJacobian_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationJacobian>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, jacobian);
}
inline int32_t UnityEngine::ArticulationBody::GetJointPositions_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> positions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                       { "GetJointPositions_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, positions);
}
inline void UnityEngine::ArticulationBody::SetJointPositions_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> positions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                       { "SetJointPositions_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, positions);
}
inline int32_t UnityEngine::ArticulationBody::GetJointVelocities_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> velocities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                       { "GetJointVelocities_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, velocities);
}
inline void UnityEngine::ArticulationBody::SetJointVelocities_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> velocities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                       { "SetJointVelocities_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, velocities);
}
inline int32_t UnityEngine::ArticulationBody::GetJointAccelerations_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> accelerations) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                       { "GetJointAccelerations_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, accelerations);
}
inline int32_t UnityEngine::ArticulationBody::GetJointForces_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> forces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "GetJointForces_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, forces);
}
inline void UnityEngine::ArticulationBody::SetJointForces_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> forces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "SetJointForces_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, forces);
}
inline void UnityEngine::ArticulationBody::GetJointForcesForAcceleration_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> acceleration,
                                                                                  ::by_ref<::UnityEngine::ArticulationReducedSpace> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "GetJointForcesForAcceleration_Injected",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>(),
                                                                                                ::i2c::type_of<::by_ref<::UnityEngine::ArticulationReducedSpace>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, acceleration, ret);
}
inline int32_t UnityEngine::ArticulationBody::GetDriveForces_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> forces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "GetDriveForces_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, forces);
}
inline int32_t UnityEngine::ArticulationBody::GetJointGravityForces_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> forces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                       { "GetJointGravityForces_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, forces);
}
inline int32_t UnityEngine::ArticulationBody::GetJointCoriolisCentrifugalForces_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> forces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                          { "GetJointCoriolisCentrifugalForces_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, forces);
}
inline int32_t UnityEngine::ArticulationBody::GetJointExternalForces_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> forces, float_t step) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
          { "GetJointExternalForces_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, forces, step);
}
inline int32_t UnityEngine::ArticulationBody::GetDriveTargets_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> targets) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "GetDriveTargets_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, targets);
}
inline void UnityEngine::ArticulationBody::SetDriveTargets_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> targets) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "SetDriveTargets_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, targets);
}
inline int32_t UnityEngine::ArticulationBody::GetDriveTargetVelocities_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> targetVelocities) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                          { "GetDriveTargetVelocities_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, targetVelocities);
}
inline void UnityEngine::ArticulationBody::SetDriveTargetVelocities_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> targetVelocities) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                          { "SetDriveTargetVelocities_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, targetVelocities);
}
inline int32_t UnityEngine::ArticulationBody::GetDofStartIndices_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> dofStartIndices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                       { "GetDofStartIndices_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, dofStartIndices);
}
inline void UnityEngine::ArticulationBody::SetDriveTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                       { "SetDriveTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, axis, value);
}
inline void UnityEngine::ArticulationBody::SetDriveTargetVelocity_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                          { "SetDriveTargetVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, axis, value);
}
inline void UnityEngine::ArticulationBody::SetDriveLimits_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t lower, float_t upper) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ArticulationBody*>(),
          { "SetDriveLimits_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, axis, lower, upper);
}
inline void UnityEngine::ArticulationBody::SetDriveStiffness_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                          { "SetDriveStiffness_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, axis, value);
}
inline void UnityEngine::ArticulationBody::SetDriveDamping_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                       { "SetDriveDamping_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, axis, value);
}
inline void UnityEngine::ArticulationBody::SetDriveForceLimit_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                          { "SetDriveForceLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ArticulationDriveAxis>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, axis, value);
}
inline ::UnityEngine::CollisionDetectionMode UnityEngine::ArticulationBody::get_collisionDetectionMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "get_collisionDetectionMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::CollisionDetectionMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::set_collisionDetectionMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::CollisionDetectionMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                              { "set_collisionDetectionMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CollisionDetectionMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ArticulationBody::PublishTransform_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(), { "PublishTransform_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ArticulationBody::SetJointAccelerations_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> accelerations) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationBody*>(),
                                       { "SetJointAccelerations_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, accelerations);
}
inline ::UnityEngine::ArticulationBody* UnityEngine::ArticulationBody::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ArticulationBody*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ArticulationBody::ArticulationBody() {}
