#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SQLResource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SQLResource)
// Forward declare root types
namespace System::Data::SqlTypes {
class SQLResource;
}
// Write type traits
MARK_REF_T(::System::Data::SqlTypes::SQLResource*);
DEFINE_IL2CPP_CLASS(::System::Data::SqlTypes::SQLResource*, "System.Data.SqlTypes", "SQLResource");
// Dependencies System.Object
namespace System::Data::SqlTypes {
// Is value type: false
// CS Name: System.Data.SqlTypes.SQLResource
class CORDL_TYPE SQLResource : public ::System::Object {
public:
  // Declarations
  /// @brief Method InvalidOpStreamClosed, addr 0x607c034, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW InvalidOpStreamClosed(::StringW method);

  /// @brief Method InvalidOpStreamNonReadable, addr 0x607c0d4, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW InvalidOpStreamNonReadable(::StringW method);

  /// @brief Method InvalidOpStreamNonSeekable, addr 0x607c124, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW InvalidOpStreamNonSeekable(::StringW method);

  /// @brief Method InvalidOpStreamNonWritable, addr 0x607c084, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW InvalidOpStreamNonWritable(::StringW method);

  /// @brief Method get_ArithOverflowMessage, addr 0x607bd48, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_ArithOverflowMessage();

  /// @brief Method get_CompareDiffCollationMessage, addr 0x607bee0, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_CompareDiffCollationMessage();

  /// @brief Method get_ConcatDiffCollationMessage, addr 0x607be9c, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_ConcatDiffCollationMessage();

  /// @brief Method get_ConversionOverflowMessage, addr 0x607bf24, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_ConversionOverflowMessage();

  /// @brief Method get_DateTimeOverflowMessage, addr 0x607be58, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_DateTimeOverflowMessage();

  /// @brief Method get_DivideByZeroMessage, addr 0x607bd8c, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_DivideByZeroMessage();

  /// @brief Method get_FormatMessage, addr 0x607bff0, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_FormatMessage();

  /// @brief Method get_InvalidPrecScaleMessage, addr 0x607bfac, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_InvalidPrecScaleMessage();

  /// @brief Method get_NullString, addr 0x607bd04, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_NullString();

  /// @brief Method get_NullValueMessage, addr 0x607bdd0, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_NullValueMessage();

  /// @brief Method get_TimeZoneSpecifiedMessage, addr 0x607bf68, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_TimeZoneSpecifiedMessage();

  /// @brief Method get_TruncationMessage, addr 0x607be14, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_TruncationMessage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SQLResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SQLResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SQLResource(SQLResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SQLResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SQLResource(SQLResource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13855 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Data::SqlTypes::SQLResource) == 0x10, "Size mismatch!");

} // namespace System::Data::SqlTypes
