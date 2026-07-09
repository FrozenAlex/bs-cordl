#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/ExtendedAxisEventData.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__ExtendedAxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedAxisEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedAxisEventData::*)(::UnityEngine::EventSystems::EventSystem*)>(
    &::UnityEngine::InputSystem::UI::ExtendedAxisEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x644fd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedAxisEventData*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedAxisEventData.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::UI::ExtendedAxisEventData::*)()>(&::UnityEngine::InputSystem::UI::ExtendedAxisEventData::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x644fd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedAxisEventData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedAxisEventData*>(), 3 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::UI::ExtendedAxisEventData::_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedAxisEventData*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventSystem);
}
inline ::StringW UnityEngine::InputSystem::UI::ExtendedAxisEventData::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedAxisEventData*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::UI::ExtendedAxisEventData* UnityEngine::InputSystem::UI::ExtendedAxisEventData::New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::UI::ExtendedAxisEventData*>(eventSystem));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::ExtendedAxisEventData::ExtendedAxisEventData() {}
