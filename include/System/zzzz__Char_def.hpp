#pragma once
// IWYU pragma private; include "System/Char.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Char)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
struct UnicodeCategory;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
class IConvertible;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct Char;
}
// Write type traits
MARK_VAL_T(::System::Char);
DEFINE_IL2CPP_CLASS(::System::Char, "System", "Char");
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Char
struct CORDL_TYPE Char {
public:
  // Declarations
  /// @brief Field s_categoryForLatin1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_categoryForLatin1, put = setStaticF_s_categoryForLatin1)) ::ArrayW<uint8_t> s_categoryForLatin1;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<char16_t>"
  constexpr operator ::System::IComparable_1<char16_t>*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IEquatable_1<char16_t>"
  constexpr operator ::System::IEquatable_1<char16_t>*();

  /// @brief Method CheckLetter, addr 0x5bae9dc, size 0xc, virtual false, abstract: false, final false
  static inline bool CheckLetter(::System::Globalization::UnicodeCategory uc);

  /// @brief Method CheckLetterOrDigit, addr 0x5baeca0, size 0x18, virtual false, abstract: false, final false
  static inline bool CheckLetterOrDigit(::System::Globalization::UnicodeCategory uc);

  /// @brief Method CheckNumber, addr 0x5baf840, size 0x10, virtual false, abstract: false, final false
  static inline bool CheckNumber(::System::Globalization::UnicodeCategory uc);

  /// @brief Method CheckPunctuation, addr 0x5baec08, size 0x10, virtual false, abstract: false, final false
  static inline bool CheckPunctuation(::System::Globalization::UnicodeCategory uc);

  /// @brief Method CheckSeparator, addr 0x5bafa5c, size 0x10, virtual false, abstract: false, final false
  static inline bool CheckSeparator(::System::Globalization::UnicodeCategory uc);

  /// @brief Method CompareTo, addr 0x5bae834, size 0x78, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x5bae8ac, size 0xc, virtual true, abstract: false, final true
  inline int32_t CompareTo(char16_t value);

  /// @brief Method ConvertFromUtf32, addr 0x5baffd8, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW ConvertFromUtf32(int32_t utf32);

  /// @brief Method ConvertToUtf32, addr 0x5bb00c4, size 0x114, virtual false, abstract: false, final false
  static inline int32_t ConvertToUtf32(char16_t highSurrogate, char16_t lowSurrogate);

  /// @brief Method Equals, addr 0x5bae7f0, size 0x34, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5bae824, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(char16_t obj);

  /// @brief Method GetHashCode, addr 0x5bae7e4, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetLatin1UnicodeCategory, addr 0x5bae788, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Globalization::UnicodeCategory GetLatin1UnicodeCategory(char16_t ch);

  /// @brief Method GetTypeCode, addr 0x5baf064, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method GetUnicodeCategory, addr 0x5bafd38, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Globalization::UnicodeCategory GetUnicodeCategory(char16_t c);

  /// @brief Method GetUnicodeCategory, addr 0x5bafda0, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Globalization::UnicodeCategory GetUnicodeCategory(::StringW s, int32_t index);

  /// @brief Method IsAscii, addr 0x5bae778, size 0x10, virtual false, abstract: false, final false
  static inline bool IsAscii(char16_t ch);

  /// @brief Method IsControl, addr 0x5baf7d4, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsControl(char16_t c);

  /// @brief Method IsDigit, addr 0x5ba86fc, size 0x64, virtual false, abstract: false, final false
  static inline bool IsDigit(char16_t c);

  /// @brief Method IsHighSurrogate, addr 0x5bafed8, size 0x10, virtual false, abstract: false, final false
  static inline bool IsHighSurrogate(char16_t c);

  /// @brief Method IsHighSurrogate, addr 0x5bafee8, size 0xc4, virtual false, abstract: false, final false
  static inline bool IsHighSurrogate(::StringW s, int32_t index);

  /// @brief Method IsLatin1, addr 0x5bae768, size 0x10, virtual false, abstract: false, final false
  static inline bool IsLatin1(char16_t ch);

  /// @brief Method IsLetter, addr 0x5bae9e8, size 0xb8, virtual false, abstract: false, final false
  static inline bool IsLetter(char16_t c);

  /// @brief Method IsLetterOrDigit, addr 0x5baecb8, size 0xac, virtual false, abstract: false, final false
  static inline bool IsLetterOrDigit(char16_t c);

  /// @brief Method IsLowSurrogate, addr 0x5baffac, size 0x10, virtual false, abstract: false, final false
  static inline bool IsLowSurrogate(char16_t c);

  /// @brief Method IsLower, addr 0x5baeb68, size 0xa0, virtual false, abstract: false, final false
  static inline bool IsLower(char16_t c);

  /// @brief Method IsNumber, addr 0x5baf850, size 0xb4, virtual false, abstract: false, final false
  static inline bool IsNumber(char16_t c);

  /// @brief Method IsNumber, addr 0x5baf904, size 0x158, virtual false, abstract: false, final false
  static inline bool IsNumber(::StringW s, int32_t index);

  /// @brief Method IsPunctuation, addr 0x5baec18, size 0x88, virtual false, abstract: false, final false
  static inline bool IsPunctuation(char16_t c);

  /// @brief Method IsSeparator, addr 0x5bafa80, size 0x8c, virtual false, abstract: false, final false
  static inline bool IsSeparator(char16_t c);

  /// @brief Method IsSeparatorLatin1, addr 0x5bafa6c, size 0x14, virtual false, abstract: false, final false
  static inline bool IsSeparatorLatin1(char16_t c);

  /// @brief Method IsSurrogate, addr 0x5bafb0c, size 0x10, virtual false, abstract: false, final false
  static inline bool IsSurrogate(char16_t c);

  /// @brief Method IsSurrogate, addr 0x5bafb1c, size 0xd4, virtual false, abstract: false, final false
  static inline bool IsSurrogate(::StringW s, int32_t index);

  /// @brief Method IsSurrogatePair, addr 0x5baffbc, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsSurrogatePair(char16_t highSurrogate, char16_t lowSurrogate);

  /// @brief Method IsUpper, addr 0x5baeacc, size 0x9c, virtual false, abstract: false, final false
  static inline bool IsUpper(char16_t c);

  /// @brief Method IsWhiteSpace, addr 0x5bac59c, size 0x90, virtual false, abstract: false, final false
  static inline bool IsWhiteSpace(char16_t c);

  /// @brief Method IsWhiteSpace, addr 0x5bafbf0, size 0x148, virtual false, abstract: false, final false
  static inline bool IsWhiteSpace(::StringW s, int32_t index);

  /// @brief Method IsWhiteSpaceLatin1, addr 0x5baeaa0, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsWhiteSpaceLatin1(char16_t c);

  /// @brief Method Parse, addr 0x5bae918, size 0x98, virtual false, abstract: false, final false
  static inline char16_t Parse(::StringW s);

  /// @brief Method System.IConvertible.ToBoolean, addr 0x5baf06c, size 0x84, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x5baf1bc, size 0x5c, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x5baf0f0, size 0x8, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x5baf6b8, size 0x84, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x5baf634, size 0x84, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x5baf5b0, size 0x84, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x5baf280, size 0x5c, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x5baf39c, size 0x5c, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x5baf464, size 0x5c, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x5baf0f8, size 0x5c, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x5baf52c, size 0x84, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x5baf73c, size 0x98, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x5baf33c, size 0x5c, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x5baf400, size 0x5c, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x5baf4c8, size 0x5c, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method ToLower, addr 0x5baef64, size 0x80, virtual false, abstract: false, final false
  static inline char16_t ToLower(char16_t c);

  /// @brief Method ToLower, addr 0x5baeee4, size 0x80, virtual false, abstract: false, final false
  static inline char16_t ToLower(char16_t c, ::System::Globalization::CultureInfo* culture);

  /// @brief Method ToLowerInvariant, addr 0x5baefe4, size 0x80, virtual false, abstract: false, final false
  static inline char16_t ToLowerInvariant(char16_t c);

  /// @brief Method ToString, addr 0x5b9ef94, size 0x3c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x5bae8b8, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t c);

  /// @brief Method ToString, addr 0x5bae8dc, size 0x3c, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToUpper, addr 0x5baede4, size 0x80, virtual false, abstract: false, final false
  static inline char16_t ToUpper(char16_t c);

  /// @brief Method ToUpper, addr 0x5baed64, size 0x80, virtual false, abstract: false, final false
  static inline char16_t ToUpper(char16_t c, ::System::Globalization::CultureInfo* culture);

  /// @brief Method ToUpperInvariant, addr 0x5baee64, size 0x80, virtual false, abstract: false, final false
  static inline char16_t ToUpperInvariant(char16_t c);

  /// @brief Method TryParse, addr 0x5bae9b0, size 0x2c, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::by_ref<char16_t> result);

  static inline ::ArrayW<uint8_t> getStaticF_s_categoryForLatin1();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<char16_t>"
  constexpr ::System::IComparable_1<char16_t>* i___System__IComparable_1_char16_t_();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  /// @brief Convert to "::System::IEquatable_1<char16_t>"
  constexpr ::System::IEquatable_1<char16_t>* i___System__IEquatable_1_char16_t_();

  static inline void setStaticF_s_categoryForLatin1(::ArrayW<uint8_t> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Char();

  // Ctor Parameters [CppParam { name: "m_value", ty: "char16_t", modifiers: "", def_value: None }]
  constexpr Char(char16_t m_value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2364 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field m_value, offset: 0x0, size: 0x2, def value: None
  char16_t m_value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Char, m_value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Char) == 0x2, "Size mismatch!");

} // namespace System
