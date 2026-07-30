#pragma once
// IWYU pragma private; include "Unity/Mathematics/double2x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double2x3)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool2x3;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct float2x3;
}
namespace Unity::Mathematics {
struct int2x3;
}
namespace Unity::Mathematics {
struct uint2x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double2x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double2x3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double2x3, "Unity.Mathematics", "double2x3");
// Dependencies Unity.Mathematics.double2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double2x3
struct CORDL_TYPE double2x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::double2 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double2x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double2x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x661c114, size 0xcc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x661c0a8, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double2x3 rhs);

  /// @brief Method GetHashCode, addr 0x661c1e0, size 0x9c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x661c27c, size 0x220, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x661c49c, size 0x21c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x661b340, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2);

  /// @brief Method .ctor, addr 0x661b350, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12);

  /// @brief Method .ctor, addr 0x661b390, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x3 v);

  /// @brief Method .ctor, addr 0x661b47c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x3 v);

  /// @brief Method .ctor, addr 0x661b3ec, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x3 v);

  /// @brief Method .ctor, addr 0x661b434, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x3 v);

  /// @brief Method .ctor, addr 0x661b370, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x661b360, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x661b468, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x661b3d8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x661b420, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double2x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x661c0a0, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::double2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double2x3>* i___System__IEquatable_1___Unity__Mathematics__double2x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x661b648, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Addition(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Addition, addr 0x661b670, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Addition(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x661b694, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Addition(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Decrement, addr 0x661b9c8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Decrement(::Unity::Mathematics::double2x3 val);

  /// @brief Method op_Division, addr 0x661b728, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Division(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Division, addr 0x661b750, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Division(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x661b774, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Division(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Equality, addr 0x661be78, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Equality, addr 0x661bedc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x661bf34, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Explicit, addr 0x661b4d4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Explicit___Unity__Mathematics__double2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method op_Explicit, addr 0x661b4b4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Explicit___Unity__Mathematics__double2x3(bool v);

  /// @brief Method op_GreaterThan, addr 0x661bc1c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x661bc80, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x661bcd8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x661bd30, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x661bd94, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x661bdec, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Implicit, addr 0x661b5c0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method op_Implicit, addr 0x661b530, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method op_Implicit, addr 0x661b578, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method op_Implicit, addr 0x661b4a4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(double_t v);

  /// @brief Method op_Implicit, addr 0x661b5ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(float_t v);

  /// @brief Method op_Implicit, addr 0x661b51c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x661b564, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x661b99c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Increment(::Unity::Mathematics::double2x3 val);

  /// @brief Method op_Inequality, addr 0x661bf8c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Inequality, addr 0x661bff0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x661c048, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThan, addr 0x661b9f4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThan, addr 0x661ba58, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x661bab0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x661bb08, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x661bb6c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x661bbc4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Modulus, addr 0x661b798, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Modulus(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Modulus, addr 0x661b848, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Modulus(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x661b8f8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Modulus(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Multiply, addr 0x661b5e0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Multiply(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Multiply, addr 0x661b608, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Multiply(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x661b628, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Multiply(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x661b6b8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Subtraction(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x661b6e0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Subtraction(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x661b704, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Subtraction(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x661be44, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_UnaryNegation(::Unity::Mathematics::double2x3 val);

  /// @brief Method op_UnaryPlus, addr 0x661be64, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_UnaryPlus(::Unity::Mathematics::double2x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double2x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double2x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double2", modifiers: "",
  // def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }]
  constexpr double2x3(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13117 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double2x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x3, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x3, c2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double2x3) == 0x30, "Size mismatch!");

} // namespace Unity::Mathematics
