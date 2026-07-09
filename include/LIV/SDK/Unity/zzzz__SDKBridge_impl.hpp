#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKBridge.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKBridge_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKApplicationOutput_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKBridge_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPlane_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTexture_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "data", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::LIV::SDK::Unity::SDKBridge_SDKInjection_1<T>::SDKBridge_SDKInjection_1(bool active, ::System::Action* action, T data) noexcept {
  this->active = active;
  this->action = action;
  this->data = data;
}
// Ctor Parameters []
template <typename T> constexpr ::LIV::SDK::Unity::SDKBridge_SDKInjection_1<T>::SDKBridge_SDKInjection_1() {}
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddStringToChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::System::IntPtr, int32_t, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::AddStringToChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                                         { "AddStringToChannel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.addtexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::addtexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "addtexture", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetObjectTimeStamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::LIV::SDK::Unity::SDKBridge::GetObjectTimeStamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetObjectTimeStamp", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetCurrentTimeTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)()>(&::LIV::SDK::Unity::SDKBridge::GetCurrentTimeTicks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetCurrentTimeTicks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetIsCaptureActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::LIV::SDK::Unity::SDKBridge::GetIsCaptureActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetIsCaptureActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetRenderEventFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::LIV::SDK::Unity::SDKBridge::GetRenderEventFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetRenderEventFunc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetCompositorChannelObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t, uint64_t, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::GetCompositorChannelObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                                                             { "GetCompositorChannelObject", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddObjectToCompositorChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::System::IntPtr, int32_t, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::AddObjectToCompositorChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                            { "AddObjectToCompositorChannel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddObjectToFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::AddObjectToFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                                                             { "AddObjectToFrame", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.updatinputframe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::LIV::SDK::Unity::SDKBridge::updatinputframe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "updatinputframe", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetViewportTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::LIV::SDK::Unity::SDKBridge::GetViewportTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetViewportTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetChannelObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t, uint64_t, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::GetChannelObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetChannelObject", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddObjectToChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::System::IntPtr, int32_t, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::AddObjectToChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                                         { "AddObjectToChannel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.Tag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW)>(&::LIV::SDK::Unity::SDKBridge::Tag)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x576b274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "Tag", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, int32_t)>(&::LIV::SDK::Unity::SDKBridge::AddString)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x576b2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "AddString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LIV::SDK::Unity::SDKTexture, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::AddTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x576b3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "AddTexture", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKTexture>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetObjectTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::LIV::SDK::Unity::SDKBridge::GetObjectTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x576b49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetObjectTime", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetCurrentTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)()>(&::LIV::SDK::Unity::SDKBridge::GetCurrentTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x576b4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetCurrentTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.get_IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::LIV::SDK::Unity::SDKBridge::get_IsActive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x576a4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "get_IsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.IssuePluginEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LIV::SDK::Unity::SDKBridge::IssuePluginEvent)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x576b55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "IssuePluginEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.SubmitApplicationOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LIV::SDK::Unity::SDKApplicationOutput)>(&::LIV::SDK::Unity::SDKBridge::SubmitApplicationOutput)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x576acb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "SubmitApplicationOutput", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKApplicationOutput>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.UpdateInputFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::LIV::SDK::Unity::SDKInputFrame>)>(&::LIV::SDK::Unity::SDKBridge::UpdateInputFrame)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x576b5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "UpdateInputFrame", {}, { ::i2c::type_of<::by_ref<::LIV::SDK::Unity::SDKInputFrame>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetViewfinderTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LIV::SDK::Unity::SDKTexture (*)()>(&::LIV::SDK::Unity::SDKBridge::GetViewfinderTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x576b87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetViewfinderTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LIV::SDK::Unity::SDKTexture)>(&::LIV::SDK::Unity::SDKBridge::AddTexture)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x576b950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "AddTexture", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKTexture>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.CreateFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LIV::SDK::Unity::SDKOutputFrame)>(&::LIV::SDK::Unity::SDKBridge::CreateFrame)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x576ba8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "CreateFrame", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKOutputFrame>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.SetGroundPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LIV::SDK::Unity::SDKPlane)>(&::LIV::SDK::Unity::SDKBridge::SetGroundPlane)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x576bbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "SetGroundPlane", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKPlane>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::LIV::SDK::Unity::SDKResolution>)>(&::LIV::SDK::Unity::SDKBridge::GetResolution)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x576bc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetResolution", {}, { ::i2c::type_of<::by_ref<::LIV::SDK::Unity::SDKResolution>>() } })));
    return ___internal_method;
  }
};
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_SDKInputFrame(::LIV::SDK::Unity::SDKBridge_SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame> value) {
  ::cordl_internals::setStaticField<::LIV::SDK::Unity::SDKBridge_SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame>, "_injection_SDKInputFrame", ::LIV::SDK::Unity::SDKBridge*>(
      std::forward<::LIV::SDK::Unity::SDKBridge_SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame>>(value));
}
inline ::LIV::SDK::Unity::SDKBridge_SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame> LIV::SDK::Unity::SDKBridge::getStaticF__injection_SDKInputFrame() {
  return ::cordl_internals::getStaticField<::LIV::SDK::Unity::SDKBridge_SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame>, "_injection_SDKInputFrame", ::LIV::SDK::Unity::SDKBridge*>();
}
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_SDKResolution(::LIV::SDK::Unity::SDKBridge_SDKInjection_1<::LIV::SDK::Unity::SDKResolution> value) {
  ::cordl_internals::setStaticField<::LIV::SDK::Unity::SDKBridge_SDKInjection_1<::LIV::SDK::Unity::SDKResolution>, "_injection_SDKResolution", ::LIV::SDK::Unity::SDKBridge*>(
      std::forward<::LIV::SDK::Unity::SDKBridge_SDKInjection_1<::LIV::SDK::Unity::SDKResolution>>(value));
}
inline ::LIV::SDK::Unity::SDKBridge_SDKInjection_1<::LIV::SDK::Unity::SDKResolution> LIV::SDK::Unity::SDKBridge::getStaticF__injection_SDKResolution() {
  return ::cordl_internals::getStaticField<::LIV::SDK::Unity::SDKBridge_SDKInjection_1<::LIV::SDK::Unity::SDKResolution>, "_injection_SDKResolution", ::LIV::SDK::Unity::SDKBridge*>();
}
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_IsActive(::LIV::SDK::Unity::SDKBridge_SDKInjection_1<bool> value) {
  ::cordl_internals::setStaticField<::LIV::SDK::Unity::SDKBridge_SDKInjection_1<bool>, "_injection_IsActive", ::LIV::SDK::Unity::SDKBridge*>(
      std::forward<::LIV::SDK::Unity::SDKBridge_SDKInjection_1<bool>>(value));
}
inline ::LIV::SDK::Unity::SDKBridge_SDKInjection_1<bool> LIV::SDK::Unity::SDKBridge::getStaticF__injection_IsActive() {
  return ::cordl_internals::getStaticField<::LIV::SDK::Unity::SDKBridge_SDKInjection_1<bool>, "_injection_IsActive", ::LIV::SDK::Unity::SDKBridge*>();
}
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_DisableSubmit(bool value) {
  ::cordl_internals::setStaticField<bool, "_injection_DisableSubmit", ::LIV::SDK::Unity::SDKBridge*>(std::forward<bool>(value));
}
inline bool LIV::SDK::Unity::SDKBridge::getStaticF__injection_DisableSubmit() {
  return ::cordl_internals::getStaticField<bool, "_injection_DisableSubmit", ::LIV::SDK::Unity::SDKBridge*>();
}
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_DisableSubmitApplicationOutput(bool value) {
  ::cordl_internals::setStaticField<bool, "_injection_DisableSubmitApplicationOutput", ::LIV::SDK::Unity::SDKBridge*>(std::forward<bool>(value));
}
inline bool LIV::SDK::Unity::SDKBridge::getStaticF__injection_DisableSubmitApplicationOutput() {
  return ::cordl_internals::getStaticField<bool, "_injection_DisableSubmitApplicationOutput", ::LIV::SDK::Unity::SDKBridge*>();
}
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_DisableAddTexture(bool value) {
  ::cordl_internals::setStaticField<bool, "_injection_DisableAddTexture", ::LIV::SDK::Unity::SDKBridge*>(std::forward<bool>(value));
}
inline bool LIV::SDK::Unity::SDKBridge::getStaticF__injection_DisableAddTexture() {
  return ::cordl_internals::getStaticField<bool, "_injection_DisableAddTexture", ::LIV::SDK::Unity::SDKBridge*>();
}
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_DisableCreateFrame(bool value) {
  ::cordl_internals::setStaticField<bool, "_injection_DisableCreateFrame", ::LIV::SDK::Unity::SDKBridge*>(std::forward<bool>(value));
}
inline bool LIV::SDK::Unity::SDKBridge::getStaticF__injection_DisableCreateFrame() {
  return ::cordl_internals::getStaticField<bool, "_injection_DisableCreateFrame", ::LIV::SDK::Unity::SDKBridge*>();
}
inline int32_t LIV::SDK::Unity::SDKBridge::AddStringToChannel(int32_t slot, ::System::IntPtr str, int32_t length, uint64_t tag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                                              { "AddStringToChannel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, slot, str, length, tag);
}
inline int32_t LIV::SDK::Unity::SDKBridge::addtexture(::System::IntPtr sourcetexture, uint64_t tag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "addtexture", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sourcetexture, tag);
}
inline uint64_t LIV::SDK::Unity::SDKBridge::GetObjectTimeStamp(::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetObjectTimeStamp", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, obj);
}
inline uint64_t LIV::SDK::Unity::SDKBridge::GetCurrentTimeTicks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetCurrentTimeTicks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKBridge::GetIsCaptureActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetIsCaptureActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::IntPtr LIV::SDK::Unity::SDKBridge::GetRenderEventFunc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetRenderEventFunc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr LIV::SDK::Unity::SDKBridge::GetCompositorChannelObject(int32_t slot, uint64_t tag, uint64_t timestamp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                                                           { "GetCompositorChannelObject", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, slot, tag, timestamp);
}
inline int32_t LIV::SDK::Unity::SDKBridge::AddObjectToCompositorChannel(int32_t slot, ::System::IntPtr obj, int32_t objectsize, uint64_t tag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                          { "AddObjectToCompositorChannel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, slot, obj, objectsize, tag);
}
inline int32_t LIV::SDK::Unity::SDKBridge::AddObjectToFrame(::System::IntPtr obj, int32_t objectsize, uint64_t tag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                                                           { "AddObjectToFrame", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, obj, objectsize, tag);
}
inline ::System::IntPtr LIV::SDK::Unity::SDKBridge::updatinputframe(::System::IntPtr InputFrame) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "updatinputframe", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, InputFrame);
}
inline ::System::IntPtr LIV::SDK::Unity::SDKBridge::GetViewportTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetViewportTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr LIV::SDK::Unity::SDKBridge::GetChannelObject(int32_t slot, uint64_t tag, uint64_t timestamp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetChannelObject", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, slot, tag, timestamp);
}
inline int32_t LIV::SDK::Unity::SDKBridge::AddObjectToChannel(int32_t slot, ::System::IntPtr obj, int32_t objectsize, uint64_t tag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                                              { "AddObjectToChannel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, slot, obj, objectsize, tag);
}
inline uint64_t LIV::SDK::Unity::SDKBridge::Tag(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "Tag", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, str);
}
inline void LIV::SDK::Unity::SDKBridge::AddString(::StringW tag, ::StringW value, int32_t slot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "AddString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tag, value, slot);
}
inline void LIV::SDK::Unity::SDKBridge::AddTexture(::LIV::SDK::Unity::SDKTexture texture, uint64_t tag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "AddTexture", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKTexture>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture, tag);
}
inline uint64_t LIV::SDK::Unity::SDKBridge::GetObjectTime(::System::IntPtr objectptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetObjectTime", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, objectptr);
}
inline uint64_t LIV::SDK::Unity::SDKBridge::GetCurrentTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetCurrentTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKBridge::get_IsActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "get_IsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void LIV::SDK::Unity::SDKBridge::IssuePluginEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "IssuePluginEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void LIV::SDK::Unity::SDKBridge::SubmitApplicationOutput(::LIV::SDK::Unity::SDKApplicationOutput applicationOutput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "SubmitApplicationOutput", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKApplicationOutput>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, applicationOutput);
}
template <typename T> inline bool LIV::SDK::Unity::SDKBridge::GetStructFromGlobalChannel(::by_ref<T> mystruct, int32_t channel, uint64_t tag) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                                              { "GetStructFromGlobalChannel", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mystruct, channel, tag);
}
template <typename T> inline int32_t LIV::SDK::Unity::SDKBridge::AddStructToGlobalChannel(::by_ref<T> mystruct, int32_t channel, uint64_t tag) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                                              { "AddStructToGlobalChannel", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mystruct, channel, tag);
}
template <typename T> inline bool LIV::SDK::Unity::SDKBridge::GetStructFromLocalChannel(::by_ref<T> mystruct, int32_t channel, uint64_t tag) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                                              { "GetStructFromLocalChannel", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mystruct, channel, tag);
}
template <typename T> inline int32_t LIV::SDK::Unity::SDKBridge::AddStructToLocalChannel(::by_ref<T> mystruct, int32_t channel, uint64_t tag) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(),
                                              { "AddStructToLocalChannel", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mystruct, channel, tag);
}
template <typename T> inline void LIV::SDK::Unity::SDKBridge::AddStructToFrame(::by_ref<T> mystruct, uint64_t tag) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "AddStructToFrame", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint64_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mystruct, tag);
}
inline bool LIV::SDK::Unity::SDKBridge::UpdateInputFrame(::by_ref<::LIV::SDK::Unity::SDKInputFrame> setframe) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "UpdateInputFrame", {}, { ::i2c::type_of<::by_ref<::LIV::SDK::Unity::SDKInputFrame>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, setframe);
}
inline ::LIV::SDK::Unity::SDKTexture LIV::SDK::Unity::SDKBridge::GetViewfinderTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetViewfinderTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKTexture>(nullptr, ___internal_method);
}
inline void LIV::SDK::Unity::SDKBridge::AddTexture(::LIV::SDK::Unity::SDKTexture texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "AddTexture", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKTexture>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture);
}
inline void LIV::SDK::Unity::SDKBridge::CreateFrame(::LIV::SDK::Unity::SDKOutputFrame frame) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "CreateFrame", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKOutputFrame>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, frame);
}
inline void LIV::SDK::Unity::SDKBridge::SetGroundPlane(::LIV::SDK::Unity::SDKPlane groundPlane) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "SetGroundPlane", {}, { ::i2c::type_of<::LIV::SDK::Unity::SDKPlane>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, groundPlane);
}
inline bool LIV::SDK::Unity::SDKBridge::GetResolution(::by_ref<::LIV::SDK::Unity::SDKResolution> sdkResolution) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LIV::SDK::Unity::SDKBridge*>(), { "GetResolution", {}, { ::i2c::type_of<::by_ref<::LIV::SDK::Unity::SDKResolution>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sdkResolution);
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKBridge::SDKBridge() {}
