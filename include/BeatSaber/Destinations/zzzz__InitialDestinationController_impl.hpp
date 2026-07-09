#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/InitialDestinationController.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationSource_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/Destinations/zzzz__InitialDestinationController_def.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationSource_def.hpp"
#include "BeatSaber/Destinations/zzzz__Destination_def.hpp"
#include "BeatSaber/Destinations/zzzz__IInitialDestinationResolver_def.hpp"
#include "BeatSaber/Destinations/zzzz__InitialDestinationController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12::*)()>(
    &::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x31e9558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31e9824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BeatSaber::Destinations::InitialDestinationController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12::InitialDestinationController__InitializeInternalAsync_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::BeatSaber::Destinations::InitialDestinationController> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12::InitialDestinationController__InitializeInternalAsync_d__12() {}
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.get_initialDestination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Destinations::Destination* (::BeatSaber::Destinations::InitialDestinationController::*)()>(
    &::BeatSaber::Destinations::InitialDestinationController::get_initialDestination)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x31e909c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "get_initialDestination", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.GetDestinationSourcePriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::BeatSaber::Destinations::DestinationSource)>(
    &::BeatSaber::Destinations::InitialDestinationController::GetDestinationSourcePriority)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31e9104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(),
                                                             { "GetDestinationSourcePriority", {}, { ::i2c::type_of<::BeatSaber::Destinations::DestinationSource>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.OverrideDestination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitialDestinationController::*)(
    ::BeatSaber::Destinations::DestinationSource, ::BeatSaber::Destinations::Destination*)>(&::BeatSaber::Destinations::InitialDestinationController::OverrideDestination)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x31e9108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(),
                            { "OverrideDestination", {}, { ::i2c::type_of<::BeatSaber::Destinations::DestinationSource>(), ::i2c::type_of<::BeatSaber::Destinations::Destination*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.InitializeScenesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::Destinations::InitialDestinationController::*)()>(
    &::BeatSaber::Destinations::InitialDestinationController::InitializeScenesAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x31e9348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "InitializeScenesAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.SetDestinationResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitialDestinationController::*)(::BeatSaber::Destinations::IInitialDestinationResolver*)>(
    &::BeatSaber::Destinations::InitialDestinationController::SetDestinationResolver)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x31e9460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(),
                                                             { "SetDestinationResolver", {}, { ::i2c::type_of<::BeatSaber::Destinations::IInitialDestinationResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitialDestinationController::*)()>(&::BeatSaber::Destinations::InitialDestinationController::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x31e94bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.InitializeInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::Destinations::InitialDestinationController::*)()>(
    &::BeatSaber::Destinations::InitialDestinationController::InitializeInternalAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x31e93b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "InitializeInternalAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitialDestinationController::*)()>(&::BeatSaber::Destinations::InitialDestinationController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31e94cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Destinations::Destination*& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initialDestinationOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialDestinationOverride;
}
constexpr ::BeatSaber::Destinations::Destination* const& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initialDestinationOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialDestinationOverride;
}
constexpr void BeatSaber::Destinations::InitialDestinationController::__cordl_internal_set__initialDestinationOverride(::BeatSaber::Destinations::Destination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialDestinationOverride = value;
}
constexpr ::BeatSaber::Destinations::DestinationSource& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initialDestinationOverrideSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialDestinationOverrideSource;
}
constexpr ::BeatSaber::Destinations::DestinationSource const& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initialDestinationOverrideSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialDestinationOverrideSource;
}
constexpr void BeatSaber::Destinations::InitialDestinationController::__cordl_internal_set__initialDestinationOverrideSource(::BeatSaber::Destinations::DestinationSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialDestinationOverrideSource = value;
}
constexpr ::BeatSaber::Destinations::IInitialDestinationResolver*& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initialDestinationResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialDestinationResolver;
}
constexpr ::BeatSaber::Destinations::IInitialDestinationResolver* const& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initialDestinationResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialDestinationResolver;
}
constexpr void BeatSaber::Destinations::InitialDestinationController::__cordl_internal_set__initialDestinationResolver(::BeatSaber::Destinations::IInitialDestinationResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialDestinationResolver = value;
}
constexpr ::System::Threading::Tasks::Task*& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initializationTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr ::System::Threading::Tasks::Task* const& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initializationTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr void BeatSaber::Destinations::InitialDestinationController::__cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initializationTask = value;
}
inline void BeatSaber::Destinations::InitialDestinationController::setStaticF_kDefaultInitialDestination(::BeatSaber::Destinations::Destination* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Destinations::Destination*, "kDefaultInitialDestination", ::BeatSaber::Destinations::InitialDestinationController*>(
      std::forward<::BeatSaber::Destinations::Destination*>(value));
}
inline ::BeatSaber::Destinations::Destination* BeatSaber::Destinations::InitialDestinationController::getStaticF_kDefaultInitialDestination() {
  return ::cordl_internals::getStaticField<::BeatSaber::Destinations::Destination*, "kDefaultInitialDestination", ::BeatSaber::Destinations::InitialDestinationController*>();
}
inline ::BeatSaber::Destinations::Destination* BeatSaber::Destinations::InitialDestinationController::get_initialDestination() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "get_initialDestination", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Destinations::Destination*>(this, ___internal_method);
}
inline int32_t BeatSaber::Destinations::InitialDestinationController::GetDestinationSourcePriority(::BeatSaber::Destinations::DestinationSource destinationSource) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(),
                                                                                         { "GetDestinationSourcePriority", {}, { ::i2c::type_of<::BeatSaber::Destinations::DestinationSource>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, destinationSource);
}
inline void BeatSaber::Destinations::InitialDestinationController::OverrideDestination(::BeatSaber::Destinations::DestinationSource destinationSource,
                                                                                       ::BeatSaber::Destinations::Destination* destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(),
                                       { "OverrideDestination", {}, { ::i2c::type_of<::BeatSaber::Destinations::DestinationSource>(), ::i2c::type_of<::BeatSaber::Destinations::Destination*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destinationSource, destination);
}
inline ::System::Threading::Tasks::Task* BeatSaber::Destinations::InitialDestinationController::InitializeScenesAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "InitializeScenesAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void BeatSaber::Destinations::InitialDestinationController::SetDestinationResolver(::BeatSaber::Destinations::IInitialDestinationResolver* initialDestinationResolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(),
                                                           { "SetDestinationResolver", {}, { ::i2c::type_of<::BeatSaber::Destinations::IInitialDestinationResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialDestinationResolver);
}
inline void BeatSaber::Destinations::InitialDestinationController::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::Destinations::InitialDestinationController::InitializeInternalAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "InitializeInternalAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void BeatSaber::Destinations::InitialDestinationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Destinations::InitialDestinationController* BeatSaber::Destinations::InitialDestinationController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::InitialDestinationController*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::InitialDestinationController::InitialDestinationController() {}
