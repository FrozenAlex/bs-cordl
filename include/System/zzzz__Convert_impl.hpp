#pragma once
// IWYU pragma private; include "System/Convert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/zzzz__Convert_def.hpp"
#include "System/zzzz__Base64FormattingOptions_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Convert.TryDecodeFromUtf16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::System::Convert::TryDecodeFromUtf16)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5bb03fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "TryDecodeFromUtf16",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(),
                                                                                           ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<char16_t>, ::by_ref<int8_t>)>(&::System::Convert::Decode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5bb077c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "Decode", {}, { ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<::by_ref<int8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.WriteThreeLowOrderBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint8_t>, int32_t)>(&::System::Convert::WriteThreeLowOrderBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bb07cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "WriteThreeLowOrderBytes", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.GetTypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (*)(::System::Object*)>(&::System::Convert::GetTypeCode)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5bb07e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "GetTypeCode", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::TypeCode, ::System::IFormatProvider*)>(&::System::Convert::ChangeType)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x5bb08ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(),
                                                { "ChangeType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.DefaultToType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IConvertible*, ::System::Type*, ::System::IFormatProvider*)>(&::System::Convert::DefaultToType)> {
  constexpr static std::size_t size = 0xab0;
  constexpr static std::size_t addrs = 0x5bacce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Convert*>(),
                                         { "DefaultToType", {}, { ::i2c::type_of<::System::IConvertible*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*)>(&::System::Convert::ChangeType)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5bb1128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ChangeType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*, ::System::IFormatProvider*)>(&::System::Convert::ChangeType)> {
  constexpr static std::size_t size = 0x928;
  constexpr static std::size_t addrs = 0x5bb11cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(),
                                                { "ChangeType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowCharOverflowException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowCharOverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bb1af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowCharOverflowException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowByteOverflowException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowByteOverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bb1b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowByteOverflowException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowSByteOverflowException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowSByteOverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bb1b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowSByteOverflowException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowInt16OverflowException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowInt16OverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bb1bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowInt16OverflowException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowUInt16OverflowException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowUInt16OverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bb1c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowUInt16OverflowException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowInt32OverflowException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowInt32OverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bb1c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowInt32OverflowException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowUInt32OverflowException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowUInt32OverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bb1cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowUInt32OverflowException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowInt64OverflowException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowInt64OverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bb1d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowInt64OverflowException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowUInt64OverflowException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowUInt64OverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bb1d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowUInt64OverflowException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bb1da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bb1e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int8_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb1fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bae130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int16_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb1fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint16_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb1fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb1fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb1fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb1fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb1fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5bb1ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5bb2024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb2054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb2060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bb206c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::Object*)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bb20e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bb21dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int8_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb22e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint8_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bae198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int16_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb2344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint16_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bb23a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int32_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb23a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint32_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb240c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int64_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb2470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint64_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb24d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::StringW)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bb2538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5bb2590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::Object*)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bb2628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bb2720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(bool)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bac728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(char16_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5baf154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(uint8_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bae1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(int16_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bb2828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(uint16_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bb2894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(int32_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb28fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(uint32_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb2960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(int64_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb29c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(uint64_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb2a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(float_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb2a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(double_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb2aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::Decimal)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bb2c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bb2cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::Object*)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bb2ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bb2dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(bool)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bac790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(char16_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5baf218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int8_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb2ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int16_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bb2f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint16_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bb2f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int32_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb2ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint32_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb3060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int64_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb30c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint64_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb3128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(float_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb318c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(double_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb31ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::Decimal)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bb3250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::StringW)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bb32c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bb3340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::Object*)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bb3354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bb344c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(bool)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bac7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(char16_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5baf2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int8_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb3554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(uint8_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bae2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(uint16_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb355c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int32_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb35bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(uint32_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb3620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int64_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb3684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(uint64_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb36e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(float_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb374c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(double_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb37ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::Decimal)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bb3810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::StringW)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bb3888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bb3904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::Object*)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bb391c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bb3a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(bool)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bac860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(char16_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5baf398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(int8_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb3b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(uint8_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bae324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(int16_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb3b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(int32_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb3bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(uint32_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb3c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(int64_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb3ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(uint64_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb3d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(float_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb3d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(double_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb3dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::Decimal)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bb3e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bb3ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bb3ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bb3fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bac8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5baf3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bae388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int16_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb40c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint16_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb40c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb40d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb4130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb4194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb41f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(double_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5bb2b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Decimal)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bb4258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bb42d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bb434c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Object*)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bb4364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bb445c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(bool)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bac930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(char16_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5baf45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(int8_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb4564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint8_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bae3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(int16_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb45c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint16_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb4624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(int32_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb462c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(int64_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb468c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb46f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(float_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb4754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(double_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5bb47b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Decimal)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bb4854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bb48cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Object*)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bb48e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bb49dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(bool)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bac998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(char16_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5baf4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int8_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb4ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(uint8_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bae450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int16_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb4aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(uint16_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb4af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb4afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(uint32_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb4b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(uint64_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb4b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(float_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb4b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(double_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5bb4bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Decimal)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bb4ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bb4d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bb4dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Object*)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bb4df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bb4ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(bool)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5baca00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(char16_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5baf524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(int8_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb4ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint8_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bae4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(int16_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb5050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint16_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb50b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(int32_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb50b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb5118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(int64_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb5120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(float_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb5180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(double_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5bb51e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Decimal)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bb52e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bb535c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Object*)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bb5374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bb546c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int8_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb5574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint8_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bae518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int16_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb5580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint16_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb558c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb5598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint32_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb55a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int64_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb55a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint64_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb55b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(double_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb55bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Decimal)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bb55c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bb5630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bb56ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(bool)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5baca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Object*)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bb56c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bb57c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int8_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb58c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(uint8_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bae580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int16_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb58d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(uint16_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bb58e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int32_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb58ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(uint32_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb58f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int64_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb58fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(uint64_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb5904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(float_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb590c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Decimal)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bb5914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bb5980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(bool)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bacaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5bb599c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int8_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb5acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint8_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bae5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int16_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb5b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint16_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bb5b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int32_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb5bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint32_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bb5c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int64_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb5cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint64_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bb5d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(float_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5bb5d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(double_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5bb5e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5bb5e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(bool)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bacb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToDateTime)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5bb5f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDateTime", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToDateTime)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bb6064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDateTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5bb60e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToString", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t, ::System::IFormatProvider*)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5bb6280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToString", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, ::System::IFormatProvider*)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bb62b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::StringW, int32_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5bb62cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::StringW, int32_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5bb63ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::StringW, int32_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5bb651c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::StringW, int32_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5bb664c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bb676c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW, int32_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bb6848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW, int32_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bb6924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW, int32_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bb6a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t, int32_t)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bb6adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToString", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bb6b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t, int32_t)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bb6be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToString", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64String
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::System::Convert::ToBase64String)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bb6c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBase64String", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64String
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Convert::ToBase64String)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5bb6ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBase64String", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64String
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Base64FormattingOptions)>(&::System::Convert::ToBase64String)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5bb6f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Convert*>(),
            { "ToBase64String", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Base64FormattingOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64String
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Base64FormattingOptions)>(&::System::Convert::ToBase64String)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5bb6d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(),
                                                             { "ToBase64String", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Base64FormattingOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64CharArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(&::System::Convert::ToBase64CharArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5bb73b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBase64CharArray",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64CharArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t, ::System::Base64FormattingOptions)>(
    &::System::Convert::ToBase64CharArray)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5bb7440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBase64CharArray",
                                                                     {},
                                                                     { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Base64FormattingOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ConvertToBase64Array
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, uint8_t*, int32_t, int32_t, bool)>(&::System::Convert::ConvertToBase64Array)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5bb7178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Convert*>(),
                         { "ConvertToBase64Array", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64_CalculateAndValidateOutputLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, bool)>(&::System::Convert::ToBase64_CalculateAndValidateOutputLength)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bb70c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBase64_CalculateAndValidateOutputLength", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.FromBase64String
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::Convert::FromBase64String)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5bb7744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "FromBase64String", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.TryFromBase64Chars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Convert::TryFromBase64Chars)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x5bb798c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Convert*>(),
                            { "TryFromBase64Chars", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.CopyToTempBufferWithoutWhiteSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<char16_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::System::Convert::CopyToTempBufferWithoutWhiteSpace)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5bb7e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "CopyToTempBufferWithoutWhiteSpace",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>(),
                                                                                           ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.IsSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Convert::IsSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bb7fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "IsSpace", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.FromBase64CharArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Convert::FromBase64CharArray)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5bb7ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "FromBase64CharArray", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.FromBase64CharPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(char16_t*, int32_t)>(&::System::Convert::FromBase64CharPtr)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5bb77ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "FromBase64CharPtr", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.FromBase64_ComputeResultLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t)>(&::System::Convert::FromBase64_ComputeResultLength)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bb81f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "FromBase64_ComputeResultLength", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Convert::setStaticF_s_decodingMap(::ArrayW<int8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int8_t>, "s_decodingMap", ::System::Convert*>(std::forward<::ArrayW<int8_t>>(value));
}
inline ::ArrayW<int8_t> System::Convert::getStaticF_s_decodingMap() {
  return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "s_decodingMap", ::System::Convert*>();
}
inline void System::Convert::setStaticF_ConvertTypes(::ArrayW<::System::Type*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "ConvertTypes", ::System::Convert*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> System::Convert::getStaticF_ConvertTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "ConvertTypes", ::System::Convert*>();
}
inline void System::Convert::setStaticF_EnumType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "EnumType", ::System::Convert*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Convert::getStaticF_EnumType() {
  return ::cordl_internals::getStaticField<::System::Type*, "EnumType", ::System::Convert*>();
}
inline void System::Convert::setStaticF_base64Table(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "base64Table", ::System::Convert*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Convert::getStaticF_base64Table() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "base64Table", ::System::Convert*>();
}
inline void System::Convert::setStaticF_DBNull(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "DBNull", ::System::Convert*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Convert::getStaticF_DBNull() {
  return ::cordl_internals::getStaticField<::System::Object*, "DBNull", ::System::Convert*>();
}
inline bool System::Convert::TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t> utf16, ::System::Span_1<uint8_t> bytes, ::by_ref<int32_t> consumed, ::by_ref<int32_t> written) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "TryDecodeFromUtf16",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(),
                                                                                                      ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, utf16, bytes, consumed, written);
}
inline int32_t System::Convert::Decode(::by_ref<char16_t> encodedChars, ::by_ref<int8_t> decodingMap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "Decode", {}, { ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<::by_ref<int8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, encodedChars, decodingMap);
}
inline void System::Convert::WriteThreeLowOrderBytes(::by_ref<uint8_t> destination, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "WriteThreeLowOrderBytes", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, value);
}
inline ::System::TypeCode System::Convert::GetTypeCode(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "GetTypeCode", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(nullptr, ___internal_method, value);
}
inline ::System::Object* System::Convert::ChangeType(::System::Object* value, ::System::TypeCode typeCode, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(),
                                              { "ChangeType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, typeCode, provider);
}
inline ::System::Object* System::Convert::DefaultToType(::System::IConvertible* value, ::System::Type* targetType, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Convert*>(),
                                       { "DefaultToType", {}, { ::i2c::type_of<::System::IConvertible*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, targetType, provider);
}
inline ::System::Object* System::Convert::ChangeType(::System::Object* value, ::System::Type* conversionType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ChangeType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, conversionType);
}
inline ::System::Object* System::Convert::ChangeType(::System::Object* value, ::System::Type* conversionType, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(),
                                              { "ChangeType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, conversionType, provider);
}
inline void System::Convert::ThrowCharOverflowException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowCharOverflowException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowByteOverflowException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowByteOverflowException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowSByteOverflowException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowSByteOverflowException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowInt16OverflowException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowInt16OverflowException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowUInt16OverflowException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowUInt16OverflowException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowInt32OverflowException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowInt32OverflowException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowUInt32OverflowException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowUInt32OverflowException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowInt64OverflowException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowInt64OverflowException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowUInt64OverflowException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ThrowUInt64OverflowException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool System::Convert::ToBoolean(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, provider);
}
inline bool System::Convert::ToBoolean(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, provider);
}
inline bool System::Convert::ToBoolean(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBoolean", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value, provider);
}
inline char16_t System::Convert::ToChar(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToChar", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value, provider);
}
inline int8_t System::Convert::ToSByte(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value, provider);
}
inline int8_t System::Convert::ToSByte(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value, provider);
}
inline uint8_t System::Convert::ToByte(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value, provider);
}
inline uint8_t System::Convert::ToByte(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value, provider);
}
inline int16_t System::Convert::ToInt16(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value, provider);
}
inline int16_t System::Convert::ToInt16(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value, provider);
}
inline uint16_t System::Convert::ToUInt16(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value, provider);
}
inline uint16_t System::Convert::ToUInt16(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value, provider);
}
inline int32_t System::Convert::ToInt32(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, provider);
}
inline int32_t System::Convert::ToInt32(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, provider);
}
inline uint32_t System::Convert::ToUInt32(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, provider);
}
inline uint32_t System::Convert::ToUInt32(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, provider);
}
inline int64_t System::Convert::ToInt64(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, provider);
}
inline int64_t System::Convert::ToInt64(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, provider);
}
inline uint64_t System::Convert::ToUInt64(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, provider);
}
inline uint64_t System::Convert::ToUInt64(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, provider);
}
inline float_t System::Convert::ToSingle(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, provider);
}
inline float_t System::Convert::ToSingle(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, provider);
}
inline float_t System::Convert::ToSingle(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSingle", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, provider);
}
inline double_t System::Convert::ToDouble(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, provider);
}
inline double_t System::Convert::ToDouble(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDouble", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value, provider);
}
inline ::System::Decimal System::Convert::ToDecimal(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value, provider);
}
inline ::System::Decimal System::Convert::ToDecimal(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDecimal", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Convert::ToDateTime(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDateTime", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value, provider);
}
inline ::System::DateTime System::Convert::ToDateTime(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToDateTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value, provider);
}
inline ::StringW System::Convert::ToString(::System::Object* value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToString", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, provider);
}
inline ::StringW System::Convert::ToString(char16_t value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToString", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, provider);
}
inline ::StringW System::Convert::ToString(int32_t value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, provider);
}
inline uint8_t System::Convert::ToByte(::StringW value, int32_t fromBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToByte", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value, fromBase);
}
inline int8_t System::Convert::ToSByte(::StringW value, int32_t fromBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToSByte", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value, fromBase);
}
inline int16_t System::Convert::ToInt16(::StringW value, int32_t fromBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt16", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value, fromBase);
}
inline uint16_t System::Convert::ToUInt16(::StringW value, int32_t fromBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt16", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value, fromBase);
}
inline int32_t System::Convert::ToInt32(::StringW value, int32_t fromBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, fromBase);
}
inline uint32_t System::Convert::ToUInt32(::StringW value, int32_t fromBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, fromBase);
}
inline int64_t System::Convert::ToInt64(::StringW value, int32_t fromBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToInt64", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, fromBase);
}
inline uint64_t System::Convert::ToUInt64(::StringW value, int32_t fromBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToUInt64", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, fromBase);
}
inline ::StringW System::Convert::ToString(uint8_t value, int32_t toBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToString", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, toBase);
}
inline ::StringW System::Convert::ToString(int32_t value, int32_t toBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, toBase);
}
inline ::StringW System::Convert::ToString(int64_t value, int32_t toBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToString", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, toBase);
}
inline ::StringW System::Convert::ToBase64String(::ArrayW<uint8_t> inArray) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBase64String", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inArray);
}
inline ::StringW System::Convert::ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBase64String", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inArray, offset, length);
}
inline ::StringW System::Convert::ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length, ::System::Base64FormattingOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Convert*>(),
                       { "ToBase64String", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Base64FormattingOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inArray, offset, length, options);
}
inline ::StringW System::Convert::ToBase64String(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Base64FormattingOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(),
                                                           { "ToBase64String", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Base64FormattingOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes, options);
}
inline int32_t System::Convert::ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBase64CharArray",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                      ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inArray, offsetIn, length, outArray, offsetOut);
}
inline int32_t System::Convert::ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut,
                                                  ::System::Base64FormattingOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBase64CharArray",
                                                                   {},
                                                                   { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Base64FormattingOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inArray, offsetIn, length, outArray, offsetOut, options);
}
inline int32_t System::Convert::ConvertToBase64Array(char16_t* outChars, uint8_t* inData, int32_t offset, int32_t length, bool insertLineBreaks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Convert*>(),
                          { "ConvertToBase64Array", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, outChars, inData, offset, length, insertLineBreaks);
}
inline int32_t System::Convert::ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "ToBase64_CalculateAndValidateOutputLength", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inputLength, insertLineBreaks);
}
inline ::ArrayW<uint8_t> System::Convert::FromBase64String(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "FromBase64String", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, s);
}
inline bool System::Convert::TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<uint8_t> bytes, ::by_ref<int32_t> bytesWritten) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Convert*>(),
                          { "TryFromBase64Chars", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, chars, bytes, bytesWritten);
}
inline void System::Convert::CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<char16_t> tempBuffer, ::by_ref<int32_t> consumed,
                                                               ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "CopyToTempBufferWithoutWhiteSpace",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>(),
                                                                                         ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, chars, tempBuffer, consumed, charsWritten);
}
inline bool System::Convert::IsSpace(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "IsSpace", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline ::ArrayW<uint8_t> System::Convert::FromBase64CharArray(::ArrayW<char16_t> inArray, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "FromBase64CharArray", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, inArray, offset, length);
}
inline ::ArrayW<uint8_t> System::Convert::FromBase64CharPtr(char16_t* inputPtr, int32_t inputLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "FromBase64CharPtr", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, inputPtr, inputLength);
}
inline int32_t System::Convert::FromBase64_ComputeResultLength(char16_t* inputPtr, int32_t inputLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Convert*>(), { "FromBase64_ComputeResultLength", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inputPtr, inputLength);
}
// Ctor Parameters []
constexpr ::System::Convert::Convert() {}
