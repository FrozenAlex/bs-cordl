#pragma once
// IWYU pragma private; include "MidiParser/MidiEvent.hpp"
#include "MidiParser/zzzz__MidiEvent_def.hpp"
#include "MidiParser/zzzz__MetaEventType_def.hpp"
//  Writing Method size for method: ::MidiParser::MidiEvent.get_MetaEventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MidiParser::MetaEventType (::MidiParser::MidiEvent::*)()>(&::MidiParser::MidiEvent::get_MetaEventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5947724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiEvent>(), { "get_MetaEventType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiEvent.get_Channel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MidiParser::MidiEvent::*)()>(&::MidiParser::MidiEvent::get_Channel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x594772c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiEvent>(), { "get_Channel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiEvent.get_Note
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MidiParser::MidiEvent::*)()>(&::MidiParser::MidiEvent::get_Note)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5947734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiEvent>(), { "get_Note", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiEvent.get_Velocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MidiParser::MidiEvent::*)()>(&::MidiParser::MidiEvent::get_Velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x594773c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiEvent>(), { "get_Velocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiEvent.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MidiParser::MidiEvent::*)()>(&::MidiParser::MidiEvent::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5947744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiEvent>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
inline ::MidiParser::MetaEventType MidiParser::MidiEvent::get_MetaEventType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiEvent>(), { "get_MetaEventType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::MidiParser::MetaEventType>(*this, ___internal_method);
}
inline int32_t MidiParser::MidiEvent::get_Channel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiEvent>(), { "get_Channel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MidiParser::MidiEvent::get_Note() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiEvent>(), { "get_Note", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MidiParser::MidiEvent::get_Velocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiEvent>(), { "get_Velocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MidiParser::MidiEvent::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiEvent>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "AbsoluteTicksTime", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Type", ty: "uint8_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "Arg1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Arg2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Arg3", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MidiParser::MidiEvent::MidiEvent(int32_t AbsoluteTicksTime, uint8_t Type, int32_t Arg1, int32_t Arg2, int32_t Arg3) noexcept {
  this->AbsoluteTicksTime = AbsoluteTicksTime;
  this->Type = Type;
  this->Arg1 = Arg1;
  this->Arg2 = Arg2;
  this->Arg3 = Arg3;
}
// Ctor Parameters []
constexpr ::MidiParser::MidiEvent::MidiEvent() {}
