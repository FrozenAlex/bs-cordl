#pragma once
// IWYU pragma private; include "MidiParser/MidiTrack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MidiParser/zzzz__MidiTrack_def.hpp"
#include "MidiParser/zzzz__MidiEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::MidiParser::MidiTrack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MidiParser::MidiTrack::*)()>(&::MidiParser::MidiTrack::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x594747c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiTrack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& MidiParser::MidiTrack::__cordl_internal_get_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr int32_t const& MidiParser::MidiTrack::__cordl_internal_get_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr void MidiParser::MidiTrack::__cordl_internal_set_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Index = value;
}
constexpr ::System::Collections::Generic::List_1<::MidiParser::MidiEvent>*& MidiParser::MidiTrack::__cordl_internal_get_MidiEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MidiEvents;
}
constexpr ::System::Collections::Generic::List_1<::MidiParser::MidiEvent>* const& MidiParser::MidiTrack::__cordl_internal_get_MidiEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MidiEvents;
}
constexpr void MidiParser::MidiTrack::__cordl_internal_set_MidiEvents(::System::Collections::Generic::List_1<::MidiParser::MidiEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MidiEvents = value;
}
inline void MidiParser::MidiTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiTrack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MidiParser::MidiTrack* MidiParser::MidiTrack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MidiParser::MidiTrack*>());
}
// Ctor Parameters []
constexpr ::MidiParser::MidiTrack::MidiTrack() {}
