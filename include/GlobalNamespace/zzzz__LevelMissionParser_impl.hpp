#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelMissionParser.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelMissionParser_def.hpp"
#include "GlobalNamespace/zzzz__LevelMissionParser_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelMissionParser_ParserFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelMissionParser_ParserFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::LevelMissionParser_ParserFunction::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x364f954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser_ParserFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelMissionParser_ParserFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelMissionParser_ParserFunction::*)(::ArrayW<float_t>, int32_t)>(
    &::GlobalNamespace::LevelMissionParser_ParserFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x364f9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser_ParserFunction*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LevelMissionParser_ParserFunction*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelMissionParser_ParserFunction.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::LevelMissionParser_ParserFunction::*)(::ArrayW<float_t>, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::LevelMissionParser_ParserFunction::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x364f9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser_ParserFunction*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LevelMissionParser_ParserFunction*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelMissionParser_ParserFunction.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelMissionParser_ParserFunction::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::LevelMissionParser_ParserFunction::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x364fa44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser_ParserFunction*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LevelMissionParser_ParserFunction*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelMissionParser_ParserFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser_ParserFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool GlobalNamespace::LevelMissionParser_ParserFunction::Invoke(::ArrayW<float_t> functionParams, int32_t paramCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelMissionParser_ParserFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, functionParams, paramCount);
}
inline ::System::IAsyncResult* GlobalNamespace::LevelMissionParser_ParserFunction::BeginInvoke(::ArrayW<float_t> functionParams, int32_t paramCount, ::System::AsyncCallback* callback,
                                                                                               ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelMissionParser_ParserFunction*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, functionParams, paramCount, callback, object);
}
inline bool GlobalNamespace::LevelMissionParser_ParserFunction::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelMissionParser_ParserFunction*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::GlobalNamespace::LevelMissionParser_ParserFunction* GlobalNamespace::LevelMissionParser_ParserFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelMissionParser_ParserFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelMissionParser_ParserFunction::LevelMissionParser_ParserFunction() {}
//  Writing Method size for method: ::GlobalNamespace::LevelMissionParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelMissionParser::*)()>(&::GlobalNamespace::LevelMissionParser::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x364f2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelMissionParser.AddFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelMissionParser::*)(::StringW, ::GlobalNamespace::LevelMissionParser_ParserFunction*)>(
    &::GlobalNamespace::LevelMissionParser::AddFunction)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x364f380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser*>(),
                                                             { "AddFunction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LevelMissionParser_ParserFunction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelMissionParser.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelMissionParser::*)(::StringW)>(&::GlobalNamespace::LevelMissionParser::Parse)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x364f3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelMissionParser.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelMissionParser::*)(::StringW, int32_t, int32_t)>(&::GlobalNamespace::LevelMissionParser::Parse)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x364f414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser*>(),
                                                                                           { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelMissionParser.ParseFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelMissionParser::*)(::StringW, int32_t, int32_t)>(&::GlobalNamespace::LevelMissionParser::ParseFunction)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x364f65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser*>(),
                                                             { "ParseFunction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser_ParserFunction*>*& GlobalNamespace::LevelMissionParser::__cordl_internal_get__functions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser_ParserFunction*>* const&
GlobalNamespace::LevelMissionParser::__cordl_internal_get__functions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functions;
}
constexpr void
GlobalNamespace::LevelMissionParser::__cordl_internal_set__functions(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser_ParserFunction*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____functions = value;
}
inline void GlobalNamespace::LevelMissionParser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelMissionParser::AddFunction(::StringW name, ::GlobalNamespace::LevelMissionParser_ParserFunction* function) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser*>(),
                                                           { "AddFunction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LevelMissionParser_ParserFunction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, function);
}
inline bool GlobalNamespace::LevelMissionParser::Parse(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline bool GlobalNamespace::LevelMissionParser::Parse(::StringW s, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser*>(),
                                                                                         { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s, start, length);
}
inline bool GlobalNamespace::LevelMissionParser::ParseFunction(::StringW s, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelMissionParser*>(), { "ParseFunction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s, start, length);
}
inline ::GlobalNamespace::LevelMissionParser* GlobalNamespace::LevelMissionParser::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelMissionParser*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelMissionParser::LevelMissionParser() {}
