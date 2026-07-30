#pragma once
// IWYU pragma private; include "Unity/Collections/FixedString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedString)
namespace Unity::Collections {
struct FixedString128Bytes;
}
namespace Unity::Collections {
struct FixedString512Bytes;
}
// Forward declare root types
namespace Unity::Collections {
class FixedString;
}
// Write type traits
MARK_REF_T(::Unity::Collections::FixedString*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::FixedString*, "Unity.Collections", "FixedString");
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedString
class CORDL_TYPE FixedString : public ::System::Object {
public:
  // Declarations
  /// @brief Method Format, addr 0x64b9d08, size 0x5ac, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0);

  /// @brief Method Format, addr 0x64b9a24, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1);

  /// @brief Method Format, addr 0x64b8fcc, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2);

  /// @brief Method Format, addr 0x64b83d0, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2);

  /// @brief Method Format, addr 0x64b77d8, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64b96a4, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1);

  /// @brief Method Format, addr 0x64b8bdc, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x64b7fc4, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x64b73b8, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64b9338, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1);

  /// @brief Method Format, addr 0x64b87d8, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x64b7bc4, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x64b6fcc, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1, T3 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1, T2 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1, T2 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64b9c1c, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0);

  /// @brief Method Format, addr 0x64b98f8, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1);

  /// @brief Method Format, addr 0x64b8e78, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2);

  /// @brief Method Format, addr 0x64b8280, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2);

  /// @brief Method Format, addr 0x64b766c, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1, T2 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64b958c, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1);

  /// @brief Method Format, addr 0x64b8a8c, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x64b7e80, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x64b7268, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64b920c, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1);

  /// @brief Method Format, addr 0x64b866c, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x64b7a74, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x64b6e78, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64b9b34, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0);

  /// @brief Method Format, addr 0x64b97d0, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1);

  /// @brief Method Format, addr 0x64b8d30, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2);

  /// @brief Method Format, addr 0x64b8114, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2);

  /// @brief Method Format, addr 0x64b7524, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1, T2 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64b9460, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1);

  /// @brief Method Format, addr 0x64b8920, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x64b7d30, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x64b7114, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64b90fc, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1);

  /// @brief Method Format, addr 0x64b8524, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x64b7920, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x64b6d48, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64b6bf0, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b4390, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b1ae4, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b5eb4, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b35e8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b0d48, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b5114, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b286c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64affc0, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b6798, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b3f14, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b165c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b5a38, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b3160, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b089c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b4c8c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b23c0, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64afb38, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b6324, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b3a7c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b11d0, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b55a0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b2cec, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b041c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b4800, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b1f40, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64af6dc, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, T3 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3, typename T4>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, T3 arg2, T4 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, T3 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, T3 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, float_t arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, int32_t arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, T2 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, T2 arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, T2 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, T2 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, float_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, int32_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, T2 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, T2 arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, T2 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, T2 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, float_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b6a7c, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b4218, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b1958, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b5d3c, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b346c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b0bb8, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b4f88, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b26dc, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64afe34, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, T2 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, T2 arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, T2 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, T2 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, float_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, int32_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b6620, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b3d98, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b14cc, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b58bc, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b2ff8, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b0720, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b4afc, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b2244, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64af9c0, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b6198, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b38ec, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b1044, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b5410, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b2b70, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b02a4, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b4674, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b1dc8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64af568, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b690c, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b408c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b17e8, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b5bb0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b32dc, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b0a2c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b4e18, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b2550, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64afcc4, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, T2 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, T2 arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, T2 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, T2 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, float_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b6494, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b3c08, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b1340, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b572c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b2e7c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b05a8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b4970, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b20cc, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64af84c, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b6028, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b3760, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b0ed4, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b5284, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b29f8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b0130, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64b4504, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b1c54, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64af410, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedString(FixedString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedString(FixedString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15585 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::FixedString) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
