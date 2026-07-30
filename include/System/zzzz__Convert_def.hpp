#pragma once
// IWYU pragma private; include "System/Convert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Convert)
namespace System {
struct Base64FormattingOptions;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Convert;
}
// Write type traits
MARK_REF_T(::System::Convert*);
DEFINE_IL2CPP_CLASS(::System::Convert*, "System", "Convert");
// Dependencies System.Object, System.Type
namespace System {
// Is value type: false
// CS Name: System.Convert
class CORDL_TYPE Convert : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConvertTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ConvertTypes, put = setStaticF_ConvertTypes)) ::ArrayW<::System::Type*> ConvertTypes;

  /// @brief Field DBNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DBNull, put = setStaticF_DBNull)) ::System::Object* DBNull;

  /// @brief Field EnumType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EnumType, put = setStaticF_EnumType)) ::System::Type* EnumType;

  /// @brief Field base64Table, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_base64Table, put = setStaticF_base64Table)) ::ArrayW<char16_t> base64Table;

  /// @brief Field s_decodingMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_decodingMap, put = setStaticF_s_decodingMap)) ::ArrayW<int8_t> s_decodingMap;

  /// @brief Method ChangeType, addr 0x5bb1128, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType);

  /// @brief Method ChangeType, addr 0x5bb11cc, size 0x928, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType, ::System::IFormatProvider* provider);

  /// @brief Method ChangeType, addr 0x5bb08ac, size 0x87c, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::TypeCode typeCode, ::System::IFormatProvider* provider);

  /// @brief Method ConvertToBase64Array, addr 0x5bb7178, size 0x23c, virtual false, abstract: false, final false
  static inline int32_t ConvertToBase64Array(char16_t* outChars, uint8_t* inData, int32_t offset, int32_t length, bool insertLineBreaks);

  /// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0x5bb7e9c, size 0x138, virtual false, abstract: false, final false
  static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<char16_t> tempBuffer, ::by_ref<int32_t> consumed, ::by_ref<int32_t> charsWritten);

  /// @brief Method Decode, addr 0x5bb077c, size 0x50, virtual false, abstract: false, final false
  static inline int32_t Decode(::by_ref<char16_t> encodedChars, ::by_ref<int8_t> decodingMap);

  /// @brief Method DefaultToType, addr 0x5bacce0, size 0xab0, virtual false, abstract: false, final false
  static inline ::System::Object* DefaultToType(::System::IConvertible* value, ::System::Type* targetType, ::System::IFormatProvider* provider);

  /// @brief Method FromBase64CharArray, addr 0x5bb7ff4, size 0x204, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBase64CharArray(::ArrayW<char16_t> inArray, int32_t offset, int32_t length);

  /// @brief Method FromBase64CharPtr, addr 0x5bb77ec, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBase64CharPtr(char16_t* inputPtr, int32_t inputLength);

  /// @brief Method FromBase64String, addr 0x5bb7744, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBase64String(::StringW s);

  /// @brief Method FromBase64_ComputeResultLength, addr 0x5bb81f8, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t FromBase64_ComputeResultLength(char16_t* inputPtr, int32_t inputLength);

  /// @brief Method GetTypeCode, addr 0x5bb07e4, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::TypeCode GetTypeCode(::System::Object* value);

  /// @brief Method IsSpace, addr 0x5bb7fd4, size 0x20, virtual false, abstract: false, final false
  static inline bool IsSpace(char16_t c);

  /// @brief Method ThrowByteOverflowException, addr 0x5bb1b40, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowByteOverflowException();

  /// @brief Method ThrowCharOverflowException, addr 0x5bb1af4, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowCharOverflowException();

  /// @brief Method ThrowInt16OverflowException, addr 0x5bb1bd8, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt16OverflowException();

  /// @brief Method ThrowInt32OverflowException, addr 0x5bb1c70, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt32OverflowException();

  /// @brief Method ThrowInt64OverflowException, addr 0x5bb1d08, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt64OverflowException();

  /// @brief Method ThrowSByteOverflowException, addr 0x5bb1b8c, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowSByteOverflowException();

  /// @brief Method ThrowUInt16OverflowException, addr 0x5bb1c24, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt16OverflowException();

  /// @brief Method ThrowUInt32OverflowException, addr 0x5bb1cbc, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt32OverflowException();

  /// @brief Method ThrowUInt64OverflowException, addr 0x5bb1d54, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt64OverflowException();

  /// @brief Method ToBase64CharArray, addr 0x5bb73b4, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut);

  /// @brief Method ToBase64CharArray, addr 0x5bb7440, size 0x304, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x5bb6d20, size 0x184, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x5bb6c60, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> inArray);

  /// @brief Method ToBase64String, addr 0x5bb6ea4, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length);

  /// @brief Method ToBase64String, addr 0x5bb6f18, size 0x1b0, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0x5bb70c8, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks);

  /// @brief Method ToBoolean, addr 0x5bb1ff4, size 0x30, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean, addr 0x5bb2024, size 0x30, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x5bb206c, size 0x78, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Decimal value);

  /// @brief Method ToBoolean, addr 0x5bb1da0, size 0xf8, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToBoolean, addr 0x5bb1e98, size 0x108, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x5bb2060, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(double_t value);

  /// @brief Method ToBoolean, addr 0x5bb2054, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(float_t value);

  /// @brief Method ToBoolean, addr 0x5bb1fac, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int16_t value);

  /// @brief Method ToBoolean, addr 0x5bb1fc4, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int32_t value);

  /// @brief Method ToBoolean, addr 0x5bb1fdc, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int64_t value);

  /// @brief Method ToBoolean, addr 0x5bb1fa0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int8_t value);

  /// @brief Method ToBoolean, addr 0x5bb1fb8, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint16_t value);

  /// @brief Method ToBoolean, addr 0x5bb1fd0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint32_t value);

  /// @brief Method ToBoolean, addr 0x5bb1fe8, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint64_t value);

  /// @brief Method ToBoolean, addr 0x5bae130, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint8_t value);

  /// @brief Method ToByte, addr 0x5bb32c8, size 0x78, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value);

  /// @brief Method ToByte, addr 0x5bb62cc, size 0x120, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, int32_t fromBase);

  /// @brief Method ToByte, addr 0x5bb3340, size 0x14, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x5bb3250, size 0x78, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Decimal value);

  /// @brief Method ToByte, addr 0x5bb2ccc, size 0xf8, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value);

  /// @brief Method ToByte, addr 0x5bb2dc4, size 0x108, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x5bac790, size 0x8, virtual false, abstract: false, final false
  static inline uint8_t ToByte(bool value);

  /// @brief Method ToByte, addr 0x5baf218, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(char16_t value);

  /// @brief Method ToByte, addr 0x5bb31ec, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(double_t value);

  /// @brief Method ToByte, addr 0x5bb318c, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t ToByte(float_t value);

  /// @brief Method ToByte, addr 0x5bb2f2c, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int16_t value);

  /// @brief Method ToByte, addr 0x5bb2ffc, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int32_t value);

  /// @brief Method ToByte, addr 0x5bb30c4, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int64_t value);

  /// @brief Method ToByte, addr 0x5bb2ecc, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int8_t value);

  /// @brief Method ToByte, addr 0x5bb2f94, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint16_t value);

  /// @brief Method ToByte, addr 0x5bb3060, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint32_t value);

  /// @brief Method ToByte, addr 0x5bb3128, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint64_t value);

  /// @brief Method ToChar, addr 0x5bb2538, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value);

  /// @brief Method ToChar, addr 0x5bb2590, size 0x98, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x5bb20e4, size 0xf8, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value);

  /// @brief Method ToChar, addr 0x5bb21dc, size 0x108, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x5bb2344, size 0x60, virtual false, abstract: false, final false
  static inline char16_t ToChar(int16_t value);

  /// @brief Method ToChar, addr 0x5bb23a8, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(int32_t value);

  /// @brief Method ToChar, addr 0x5bb2470, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(int64_t value);

  /// @brief Method ToChar, addr 0x5bb22e4, size 0x60, virtual false, abstract: false, final false
  static inline char16_t ToChar(int8_t value);

  /// @brief Method ToChar, addr 0x5bb23a4, size 0x4, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint16_t value);

  /// @brief Method ToChar, addr 0x5bb240c, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint32_t value);

  /// @brief Method ToChar, addr 0x5bb24d4, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint64_t value);

  /// @brief Method ToChar, addr 0x5bae198, size 0x8, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint8_t value);

  /// @brief Method ToDateTime, addr 0x5bb6064, size 0x84, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDateTime, addr 0x5bb5f2c, size 0x138, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x5bb5e9c, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x5bb599c, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x5bacb60, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(bool value);

  /// @brief Method ToDecimal, addr 0x5bb5e04, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(double_t value);

  /// @brief Method ToDecimal, addr 0x5bb5d6c, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(float_t value);

  /// @brief Method ToDecimal, addr 0x5bb5b30, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int16_t value);

  /// @brief Method ToDecimal, addr 0x5bb5bf0, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int32_t value);

  /// @brief Method ToDecimal, addr 0x5bb5cac, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int64_t value);

  /// @brief Method ToDecimal, addr 0x5bb5acc, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int8_t value);

  /// @brief Method ToDecimal, addr 0x5bb5b94, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint16_t value);

  /// @brief Method ToDecimal, addr 0x5bb5c50, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint32_t value);

  /// @brief Method ToDecimal, addr 0x5bb5d10, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint64_t value);

  /// @brief Method ToDecimal, addr 0x5bae5e8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint8_t value);

  /// @brief Method ToDouble, addr 0x5bb5980, size 0x1c, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x5bb5914, size 0x6c, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Decimal value);

  /// @brief Method ToDouble, addr 0x5bb56c8, size 0xf8, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToDouble, addr 0x5bb57c0, size 0x108, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x5bacaec, size 0x14, virtual false, abstract: false, final false
  static inline double_t ToDouble(bool value);

  /// @brief Method ToDouble, addr 0x5bb590c, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(float_t value);

  /// @brief Method ToDouble, addr 0x5bb58d4, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int16_t value);

  /// @brief Method ToDouble, addr 0x5bb58ec, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int32_t value);

  /// @brief Method ToDouble, addr 0x5bb58fc, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int64_t value);

  /// @brief Method ToDouble, addr 0x5bb58c8, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int8_t value);

  /// @brief Method ToDouble, addr 0x5bb58e0, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint16_t value);

  /// @brief Method ToDouble, addr 0x5bb58f4, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint32_t value);

  /// @brief Method ToDouble, addr 0x5bb5904, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint64_t value);

  /// @brief Method ToDouble, addr 0x5bae580, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint8_t value);

  /// @brief Method ToInt16, addr 0x5bb3888, size 0x7c, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value);

  /// @brief Method ToInt16, addr 0x5bb651c, size 0x130, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToInt16, addr 0x5bb3904, size 0x18, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x5bb3810, size 0x78, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Decimal value);

  /// @brief Method ToInt16, addr 0x5bb3354, size 0xf8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value);

  /// @brief Method ToInt16, addr 0x5bb344c, size 0x108, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x5bac7f8, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(bool value);

  /// @brief Method ToInt16, addr 0x5baf2dc, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(char16_t value);

  /// @brief Method ToInt16, addr 0x5bb37ac, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(double_t value);

  /// @brief Method ToInt16, addr 0x5bb374c, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(float_t value);

  /// @brief Method ToInt16, addr 0x5bb35bc, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int32_t value);

  /// @brief Method ToInt16, addr 0x5bb3684, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int64_t value);

  /// @brief Method ToInt16, addr 0x5bb3554, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int8_t value);

  /// @brief Method ToInt16, addr 0x5bb355c, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint16_t value);

  /// @brief Method ToInt16, addr 0x5bb3620, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint32_t value);

  /// @brief Method ToInt16, addr 0x5bb36e8, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint64_t value);

  /// @brief Method ToInt16, addr 0x5bae2c0, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint8_t value);

  /// @brief Method ToInt32, addr 0x5bb42d0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x5bb676c, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToInt32, addr 0x5bb434c, size 0x18, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x5bb4258, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Decimal value);

  /// @brief Method ToInt32, addr 0x5bb3ec0, size 0xf8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt32, addr 0x5bb3fb8, size 0x108, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x5bac8c8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(bool value);

  /// @brief Method ToInt32, addr 0x5baf3f8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(char16_t value);

  /// @brief Method ToInt32, addr 0x5bb2b50, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t ToInt32(double_t value);

  /// @brief Method ToInt32, addr 0x5bb41f8, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ToInt32(float_t value);

  /// @brief Method ToInt32, addr 0x5bb40c0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int16_t value);

  /// @brief Method ToInt32, addr 0x5bb4130, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int64_t value);

  /// @brief Method ToInt32, addr 0x5bb40c8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint16_t value);

  /// @brief Method ToInt32, addr 0x5bb40d0, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint32_t value);

  /// @brief Method ToInt32, addr 0x5bb4194, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint64_t value);

  /// @brief Method ToInt32, addr 0x5bae388, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint8_t value);

  /// @brief Method ToInt64, addr 0x5bb4d5c, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x5bb6924, size 0xdc, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToInt64, addr 0x5bb4dd8, size 0x18, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x5bb4ce4, size 0x78, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Decimal value);

  /// @brief Method ToInt64, addr 0x5bb48e4, size 0xf8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToInt64, addr 0x5bb49dc, size 0x108, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x5bac998, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(bool value);

  /// @brief Method ToInt64, addr 0x5baf4c0, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(char16_t value);

  /// @brief Method ToInt64, addr 0x5bb4bcc, size 0x118, virtual false, abstract: false, final false
  static inline int64_t ToInt64(double_t value);

  /// @brief Method ToInt64, addr 0x5bb4b6c, size 0x60, virtual false, abstract: false, final false
  static inline int64_t ToInt64(float_t value);

  /// @brief Method ToInt64, addr 0x5bb4aec, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int16_t value);

  /// @brief Method ToInt64, addr 0x5bb4afc, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int32_t value);

  /// @brief Method ToInt64, addr 0x5bb4ae4, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int8_t value);

  /// @brief Method ToInt64, addr 0x5bb4af4, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint16_t value);

  /// @brief Method ToInt64, addr 0x5bb4b04, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint32_t value);

  /// @brief Method ToInt64, addr 0x5bb4b0c, size 0x60, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint64_t value);

  /// @brief Method ToInt64, addr 0x5bae450, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint8_t value);

  /// @brief Method ToSByte, addr 0x5bb63ec, size 0x130, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, int32_t fromBase);

  /// @brief Method ToSByte, addr 0x5bb2cbc, size 0x10, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSByte, addr 0x5bb2c44, size 0x78, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Decimal value);

  /// @brief Method ToSByte, addr 0x5bb2628, size 0xf8, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value);

  /// @brief Method ToSByte, addr 0x5bb2720, size 0x108, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSByte, addr 0x5bac728, size 0x8, virtual false, abstract: false, final false
  static inline int8_t ToSByte(bool value);

  /// @brief Method ToSByte, addr 0x5baf154, size 0x68, virtual false, abstract: false, final false
  static inline int8_t ToSByte(char16_t value);

  /// @brief Method ToSByte, addr 0x5bb2aec, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(double_t value);

  /// @brief Method ToSByte, addr 0x5bb2a8c, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(float_t value);

  /// @brief Method ToSByte, addr 0x5bb2828, size 0x6c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int16_t value);

  /// @brief Method ToSByte, addr 0x5bb28fc, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int32_t value);

  /// @brief Method ToSByte, addr 0x5bb29c4, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int64_t value);

  /// @brief Method ToSByte, addr 0x5bb2894, size 0x68, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint16_t value);

  /// @brief Method ToSByte, addr 0x5bb2960, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint32_t value);

  /// @brief Method ToSByte, addr 0x5bb2a28, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint64_t value);

  /// @brief Method ToSByte, addr 0x5bae1fc, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint8_t value);

  /// @brief Method ToSingle, addr 0x5bb5630, size 0x7c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle, addr 0x5bb56ac, size 0x1c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x5bb55c4, size 0x6c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Decimal value);

  /// @brief Method ToSingle, addr 0x5bb5374, size 0xf8, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToSingle, addr 0x5bb546c, size 0x108, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x5baca70, size 0x14, virtual false, abstract: false, final false
  static inline float_t ToSingle(bool value);

  /// @brief Method ToSingle, addr 0x5bb55bc, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(double_t value);

  /// @brief Method ToSingle, addr 0x5bb5580, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int16_t value);

  /// @brief Method ToSingle, addr 0x5bb5598, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int32_t value);

  /// @brief Method ToSingle, addr 0x5bb55a8, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int64_t value);

  /// @brief Method ToSingle, addr 0x5bb5574, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int8_t value);

  /// @brief Method ToSingle, addr 0x5bb558c, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint16_t value);

  /// @brief Method ToSingle, addr 0x5bb55a0, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint32_t value);

  /// @brief Method ToSingle, addr 0x5bb55b0, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint64_t value);

  /// @brief Method ToSingle, addr 0x5bae518, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint8_t value);

  /// @brief Method ToString, addr 0x5bb60e8, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5bb6280, size 0x30, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5bb62b0, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5bb6b60, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, int32_t toBase);

  /// @brief Method ToString, addr 0x5bb6be0, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value, int32_t toBase);

  /// @brief Method ToString, addr 0x5bb6adc, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint8_t value, int32_t toBase);

  /// @brief Method ToUInt16, addr 0x5bb664c, size 0x120, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt16, addr 0x5bb3ea8, size 0x18, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x5bb3e30, size 0x78, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Decimal value);

  /// @brief Method ToUInt16, addr 0x5bb391c, size 0xf8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value);

  /// @brief Method ToUInt16, addr 0x5bb3a14, size 0x108, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x5bac860, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(bool value);

  /// @brief Method ToUInt16, addr 0x5baf398, size 0x4, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(char16_t value);

  /// @brief Method ToUInt16, addr 0x5bb3dcc, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(double_t value);

  /// @brief Method ToUInt16, addr 0x5bb3d6c, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(float_t value);

  /// @brief Method ToUInt16, addr 0x5bb3b7c, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int16_t value);

  /// @brief Method ToUInt16, addr 0x5bb3bdc, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int32_t value);

  /// @brief Method ToUInt16, addr 0x5bb3ca4, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int64_t value);

  /// @brief Method ToUInt16, addr 0x5bb3b1c, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int8_t value);

  /// @brief Method ToUInt16, addr 0x5bb3c40, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint32_t value);

  /// @brief Method ToUInt16, addr 0x5bb3d08, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint64_t value);

  /// @brief Method ToUInt16, addr 0x5bae324, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint8_t value);

  /// @brief Method ToUInt32, addr 0x5bb6848, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt32, addr 0x5bb48cc, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt32, addr 0x5bb4854, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Decimal value);

  /// @brief Method ToUInt32, addr 0x5bb4364, size 0xf8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value);

  /// @brief Method ToUInt32, addr 0x5bb445c, size 0x108, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt32, addr 0x5bac930, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(bool value);

  /// @brief Method ToUInt32, addr 0x5baf45c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(char16_t value);

  /// @brief Method ToUInt32, addr 0x5bb47b4, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(double_t value);

  /// @brief Method ToUInt32, addr 0x5bb4754, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(float_t value);

  /// @brief Method ToUInt32, addr 0x5bb45c4, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int16_t value);

  /// @brief Method ToUInt32, addr 0x5bb462c, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int32_t value);

  /// @brief Method ToUInt32, addr 0x5bb468c, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int64_t value);

  /// @brief Method ToUInt32, addr 0x5bb4564, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int8_t value);

  /// @brief Method ToUInt32, addr 0x5bb4624, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint16_t value);

  /// @brief Method ToUInt32, addr 0x5bb46f0, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint64_t value);

  /// @brief Method ToUInt32, addr 0x5bae3ec, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint8_t value);

  /// @brief Method ToUInt64, addr 0x5bb6a00, size 0xdc, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt64, addr 0x5bb535c, size 0x18, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt64, addr 0x5bb52e4, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Decimal value);

  /// @brief Method ToUInt64, addr 0x5bb4df0, size 0xf8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value);

  /// @brief Method ToUInt64, addr 0x5bb4ee8, size 0x108, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt64, addr 0x5baca00, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(bool value);

  /// @brief Method ToUInt64, addr 0x5baf524, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(char16_t value);

  /// @brief Method ToUInt64, addr 0x5bb51e0, size 0x104, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(double_t value);

  /// @brief Method ToUInt64, addr 0x5bb5180, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(float_t value);

  /// @brief Method ToUInt64, addr 0x5bb5050, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int16_t value);

  /// @brief Method ToUInt64, addr 0x5bb50b8, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int32_t value);

  /// @brief Method ToUInt64, addr 0x5bb5120, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int64_t value);

  /// @brief Method ToUInt64, addr 0x5bb4ff0, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int8_t value);

  /// @brief Method ToUInt64, addr 0x5bb50b0, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint16_t value);

  /// @brief Method ToUInt64, addr 0x5bb5118, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint32_t value);

  /// @brief Method ToUInt64, addr 0x5bae4b4, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint8_t value);

  /// @brief Method TryDecodeFromUtf16, addr 0x5bb03fc, size 0x380, virtual false, abstract: false, final false
  static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t> utf16, ::System::Span_1<uint8_t> bytes, ::by_ref<int32_t> consumed, ::by_ref<int32_t> written);

  /// @brief Method TryFromBase64Chars, addr 0x5bb798c, size 0x510, virtual false, abstract: false, final false
  static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<uint8_t> bytes, ::by_ref<int32_t> bytesWritten);

  /// @brief Method WriteThreeLowOrderBytes, addr 0x5bb07cc, size 0x18, virtual false, abstract: false, final false
  static inline void WriteThreeLowOrderBytes(::by_ref<uint8_t> destination, int32_t value);

  static inline ::ArrayW<::System::Type*> getStaticF_ConvertTypes();

  static inline ::System::Object* getStaticF_DBNull();

  static inline ::System::Type* getStaticF_EnumType();

  static inline ::ArrayW<char16_t> getStaticF_base64Table();

  static inline ::ArrayW<int8_t> getStaticF_s_decodingMap();

  static inline void setStaticF_ConvertTypes(::ArrayW<::System::Type*> value);

  static inline void setStaticF_DBNull(::System::Object* value);

  static inline void setStaticF_EnumType(::System::Type* value);

  static inline void setStaticF_base64Table(::ArrayW<char16_t> value);

  static inline void setStaticF_s_decodingMap(::ArrayW<int8_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Convert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Convert(Convert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Convert(Convert const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2366 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Convert) == 0x10, "Size mismatch!");

} // namespace System
