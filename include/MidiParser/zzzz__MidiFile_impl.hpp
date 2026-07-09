#pragma once
// IWYU pragma private; include "MidiParser/MidiFile.hpp"
#include "MidiParser/zzzz__MidiTrack_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MidiParser/zzzz__MidiFile_def.hpp"
#include "MidiParser/zzzz__MidiFile_def.hpp"
#include "MidiParser/zzzz__MidiTrack_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::MidiParser::MidiFile_Reader.Read16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::MidiParser::MidiFile_Reader::Read16)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5946f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile_Reader*>(), { "Read16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile_Reader.Read32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::MidiParser::MidiFile_Reader::Read32)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5946efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile_Reader*>(), { "Read32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile_Reader.Read8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::MidiParser::MidiFile_Reader::Read8)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59474f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile_Reader*>(), { "Read8", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile_Reader.ReadAllBytesFromStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*)>(&::MidiParser::MidiFile_Reader::ReadAllBytesFromStream)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5947528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile_Reader*>(), { "ReadAllBytesFromStream", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile_Reader.ReadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, int32_t)>(&::MidiParser::MidiFile_Reader::ReadString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5946ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile_Reader*>(),
                                                             { "ReadString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile_Reader.ReadVarInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::MidiParser::MidiFile_Reader::ReadVarInt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59473ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile_Reader*>(), { "ReadVarInt", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
inline int32_t MidiParser::MidiFile_Reader::Read16(::ArrayW<uint8_t> data, ::by_ref<int32_t> i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile_Reader*>(), { "Read16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, i);
}
inline int32_t MidiParser::MidiFile_Reader::Read32(::ArrayW<uint8_t> data, ::by_ref<int32_t> i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile_Reader*>(), { "Read32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, i);
}
inline uint8_t MidiParser::MidiFile_Reader::Read8(::ArrayW<uint8_t> data, ::by_ref<int32_t> i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile_Reader*>(), { "Read8", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, data, i);
}
inline ::ArrayW<uint8_t> MidiParser::MidiFile_Reader::ReadAllBytesFromStream(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile_Reader*>(), { "ReadAllBytesFromStream", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, input);
}
inline ::StringW MidiParser::MidiFile_Reader::ReadString(::ArrayW<uint8_t> data, ::by_ref<int32_t> i, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile_Reader*>(),
                                                           { "ReadString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, i, length);
}
inline int32_t MidiParser::MidiFile_Reader::ReadVarInt(::ArrayW<uint8_t> data, ::by_ref<int32_t> i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile_Reader*>(), { "ReadVarInt", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, i);
}
// Ctor Parameters []
constexpr ::MidiParser::MidiFile_Reader::MidiFile_Reader() {}
//  Writing Method size for method: ::MidiParser::MidiFile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MidiParser::MidiFile::*)(::StringW)>(&::MidiParser::MidiFile::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5946b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MidiParser::MidiFile::*)(::ArrayW<uint8_t>)>(&::MidiParser::MidiFile::_ctor)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5946b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile.ParseMetaEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, uint8_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::MidiParser::MidiFile::ParseMetaEvent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59472fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile*>(), { "ParseMetaEvent",
                                                                                              {},
                                                                                              { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint8_t>(),
                                                                                                ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile.ParseTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MidiParser::MidiTrack* (*)(int32_t, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::MidiParser::MidiFile::ParseTrack)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5946fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile*>(),
                                                             { "ParseTrack", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& MidiParser::MidiFile::__cordl_internal_get_format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr int32_t const& MidiParser::MidiFile::__cordl_internal_get_format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr void MidiParser::MidiFile::__cordl_internal_set_format(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___format = value;
}
constexpr int32_t& MidiParser::MidiFile::__cordl_internal_get_ticksPerQuarterNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ticksPerQuarterNote;
}
constexpr int32_t const& MidiParser::MidiFile::__cordl_internal_get_ticksPerQuarterNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ticksPerQuarterNote;
}
constexpr void MidiParser::MidiFile::__cordl_internal_set_ticksPerQuarterNote(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ticksPerQuarterNote = value;
}
constexpr ::ArrayW<::MidiParser::MidiTrack*>& MidiParser::MidiFile::__cordl_internal_get_tracks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracks;
}
constexpr ::ArrayW<::MidiParser::MidiTrack*> const& MidiParser::MidiFile::__cordl_internal_get_tracks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracks;
}
constexpr void MidiParser::MidiFile::__cordl_internal_set_tracks(::ArrayW<::MidiParser::MidiTrack*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tracks = value;
}
constexpr int32_t& MidiParser::MidiFile::__cordl_internal_get_tracksCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracksCount;
}
constexpr int32_t const& MidiParser::MidiFile::__cordl_internal_get_tracksCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracksCount;
}
constexpr void MidiParser::MidiFile::__cordl_internal_set_tracksCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tracksCount = value;
}
inline void MidiParser::MidiFile::_ctor(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void MidiParser::MidiFile::_ctor(::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline bool MidiParser::MidiFile::ParseMetaEvent(::ArrayW<uint8_t> data, ::by_ref<int32_t> position, uint8_t metaEventType, ::by_ref<int32_t> data1, ::by_ref<int32_t> data2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile*>(), { "ParseMetaEvent",
                                                                                            {},
                                                                                            { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint8_t>(),
                                                                                              ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, position, metaEventType, data1, data2);
}
inline ::MidiParser::MidiTrack* MidiParser::MidiFile::ParseTrack(int32_t index, ::ArrayW<uint8_t> data, ::by_ref<int32_t> position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::MidiParser::MidiFile*>(), { "ParseTrack", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::MidiParser::MidiTrack*>(nullptr, ___internal_method, index, data, position);
}
inline ::MidiParser::MidiFile* MidiParser::MidiFile::New_ctor(::StringW path) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MidiParser::MidiFile*>(path));
}
inline ::MidiParser::MidiFile* MidiParser::MidiFile::New_ctor(::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MidiParser::MidiFile*>(data));
}
// Ctor Parameters []
constexpr ::MidiParser::MidiFile::MidiFile() {}
