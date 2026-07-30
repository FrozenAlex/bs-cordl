#pragma once
// IWYU pragma private; include "Unity/Mathematics/float4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float4)
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
struct bool4;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
class float4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct half4;
}
namespace Unity::Mathematics {
struct half;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct uint4;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Unity::Mathematics {
class float4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct float4;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::float4_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::float4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float4_DebuggerProxy*, "Unity.Mathematics", "float4/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float4, "Unity.Mathematics", "float4");
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.float4/DebuggerProxy
class CORDL_TYPE float4_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field w, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_w, put = __cordl_internal_set_w)) float_t w;

  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) float_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) float_t y;

  /// @brief Field z, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) float_t z;

  static inline ::Unity::Mathematics::float4_DebuggerProxy* New_ctor(::Unity::Mathematics::float4 v);

  constexpr float_t const& __cordl_internal_get_w() const;

  constexpr float_t& __cordl_internal_get_w();

  constexpr float_t const& __cordl_internal_get_x() const;

  constexpr float_t& __cordl_internal_get_x();

  constexpr float_t const& __cordl_internal_get_y() const;

  constexpr float_t& __cordl_internal_get_y();

  constexpr float_t const& __cordl_internal_get_z() const;

  constexpr float_t& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_w(float_t value);

  constexpr void __cordl_internal_set_x(float_t value);

  constexpr void __cordl_internal_set_y(float_t value);

  constexpr void __cordl_internal_set_z(float_t value);

  /// @brief Method .ctor, addr 0x6642430, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr float4_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "float4_DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  float4_DebuggerProxy(float4_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "float4_DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  float4_DebuggerProxy(float4_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13139 };

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  float_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  float_t ___y;

  /// @brief Field z, offset: 0x18, size: 0x4, def value: None
  float_t ___z;

  /// @brief Field w, offset: 0x1c, size: 0x4, def value: None
  float_t ___w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float4_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4_DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4_DebuggerProxy, ___z) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4_DebuggerProxy, ___w) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float4_DebuggerProxy) == 0x20, "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float4
struct CORDL_TYPE float4 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::float4_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_ww)) ::Unity::Mathematics::float2 ww;

  __declspec(property(get = get_www)) ::Unity::Mathematics::float3 www;

  __declspec(property(get = get_wwww)) ::Unity::Mathematics::float4 wwww;

  __declspec(property(get = get_wwwx)) ::Unity::Mathematics::float4 wwwx;

  __declspec(property(get = get_wwwy)) ::Unity::Mathematics::float4 wwwy;

  __declspec(property(get = get_wwwz)) ::Unity::Mathematics::float4 wwwz;

  __declspec(property(get = get_wwx)) ::Unity::Mathematics::float3 wwx;

  __declspec(property(get = get_wwxw)) ::Unity::Mathematics::float4 wwxw;

  __declspec(property(get = get_wwxx)) ::Unity::Mathematics::float4 wwxx;

  __declspec(property(get = get_wwxy)) ::Unity::Mathematics::float4 wwxy;

  __declspec(property(get = get_wwxz)) ::Unity::Mathematics::float4 wwxz;

  __declspec(property(get = get_wwy)) ::Unity::Mathematics::float3 wwy;

  __declspec(property(get = get_wwyw)) ::Unity::Mathematics::float4 wwyw;

  __declspec(property(get = get_wwyx)) ::Unity::Mathematics::float4 wwyx;

  __declspec(property(get = get_wwyy)) ::Unity::Mathematics::float4 wwyy;

  __declspec(property(get = get_wwyz)) ::Unity::Mathematics::float4 wwyz;

  __declspec(property(get = get_wwz)) ::Unity::Mathematics::float3 wwz;

  __declspec(property(get = get_wwzw)) ::Unity::Mathematics::float4 wwzw;

  __declspec(property(get = get_wwzx)) ::Unity::Mathematics::float4 wwzx;

  __declspec(property(get = get_wwzy)) ::Unity::Mathematics::float4 wwzy;

  __declspec(property(get = get_wwzz)) ::Unity::Mathematics::float4 wwzz;

  __declspec(property(get = get_wx, put = set_wx)) ::Unity::Mathematics::float2 wx;

  __declspec(property(get = get_wxw)) ::Unity::Mathematics::float3 wxw;

  __declspec(property(get = get_wxww)) ::Unity::Mathematics::float4 wxww;

  __declspec(property(get = get_wxwx)) ::Unity::Mathematics::float4 wxwx;

  __declspec(property(get = get_wxwy)) ::Unity::Mathematics::float4 wxwy;

  __declspec(property(get = get_wxwz)) ::Unity::Mathematics::float4 wxwz;

  __declspec(property(get = get_wxx)) ::Unity::Mathematics::float3 wxx;

  __declspec(property(get = get_wxxw)) ::Unity::Mathematics::float4 wxxw;

  __declspec(property(get = get_wxxx)) ::Unity::Mathematics::float4 wxxx;

  __declspec(property(get = get_wxxy)) ::Unity::Mathematics::float4 wxxy;

  __declspec(property(get = get_wxxz)) ::Unity::Mathematics::float4 wxxz;

  __declspec(property(get = get_wxy, put = set_wxy)) ::Unity::Mathematics::float3 wxy;

  __declspec(property(get = get_wxyw)) ::Unity::Mathematics::float4 wxyw;

  __declspec(property(get = get_wxyx)) ::Unity::Mathematics::float4 wxyx;

  __declspec(property(get = get_wxyy)) ::Unity::Mathematics::float4 wxyy;

  __declspec(property(get = get_wxyz, put = set_wxyz)) ::Unity::Mathematics::float4 wxyz;

  __declspec(property(get = get_wxz, put = set_wxz)) ::Unity::Mathematics::float3 wxz;

  __declspec(property(get = get_wxzw)) ::Unity::Mathematics::float4 wxzw;

  __declspec(property(get = get_wxzx)) ::Unity::Mathematics::float4 wxzx;

  __declspec(property(get = get_wxzy, put = set_wxzy)) ::Unity::Mathematics::float4 wxzy;

  __declspec(property(get = get_wxzz)) ::Unity::Mathematics::float4 wxzz;

  __declspec(property(get = get_wy, put = set_wy)) ::Unity::Mathematics::float2 wy;

  __declspec(property(get = get_wyw)) ::Unity::Mathematics::float3 wyw;

  __declspec(property(get = get_wyww)) ::Unity::Mathematics::float4 wyww;

  __declspec(property(get = get_wywx)) ::Unity::Mathematics::float4 wywx;

  __declspec(property(get = get_wywy)) ::Unity::Mathematics::float4 wywy;

  __declspec(property(get = get_wywz)) ::Unity::Mathematics::float4 wywz;

  __declspec(property(get = get_wyx, put = set_wyx)) ::Unity::Mathematics::float3 wyx;

  __declspec(property(get = get_wyxw)) ::Unity::Mathematics::float4 wyxw;

  __declspec(property(get = get_wyxx)) ::Unity::Mathematics::float4 wyxx;

  __declspec(property(get = get_wyxy)) ::Unity::Mathematics::float4 wyxy;

  __declspec(property(get = get_wyxz, put = set_wyxz)) ::Unity::Mathematics::float4 wyxz;

  __declspec(property(get = get_wyy)) ::Unity::Mathematics::float3 wyy;

  __declspec(property(get = get_wyyw)) ::Unity::Mathematics::float4 wyyw;

  __declspec(property(get = get_wyyx)) ::Unity::Mathematics::float4 wyyx;

  __declspec(property(get = get_wyyy)) ::Unity::Mathematics::float4 wyyy;

  __declspec(property(get = get_wyyz)) ::Unity::Mathematics::float4 wyyz;

  __declspec(property(get = get_wyz, put = set_wyz)) ::Unity::Mathematics::float3 wyz;

  __declspec(property(get = get_wyzw)) ::Unity::Mathematics::float4 wyzw;

  __declspec(property(get = get_wyzx, put = set_wyzx)) ::Unity::Mathematics::float4 wyzx;

  __declspec(property(get = get_wyzy)) ::Unity::Mathematics::float4 wyzy;

  __declspec(property(get = get_wyzz)) ::Unity::Mathematics::float4 wyzz;

  __declspec(property(get = get_wz, put = set_wz)) ::Unity::Mathematics::float2 wz;

  __declspec(property(get = get_wzw)) ::Unity::Mathematics::float3 wzw;

  __declspec(property(get = get_wzww)) ::Unity::Mathematics::float4 wzww;

  __declspec(property(get = get_wzwx)) ::Unity::Mathematics::float4 wzwx;

  __declspec(property(get = get_wzwy)) ::Unity::Mathematics::float4 wzwy;

  __declspec(property(get = get_wzwz)) ::Unity::Mathematics::float4 wzwz;

  __declspec(property(get = get_wzx, put = set_wzx)) ::Unity::Mathematics::float3 wzx;

  __declspec(property(get = get_wzxw)) ::Unity::Mathematics::float4 wzxw;

  __declspec(property(get = get_wzxx)) ::Unity::Mathematics::float4 wzxx;

  __declspec(property(get = get_wzxy, put = set_wzxy)) ::Unity::Mathematics::float4 wzxy;

  __declspec(property(get = get_wzxz)) ::Unity::Mathematics::float4 wzxz;

  __declspec(property(get = get_wzy, put = set_wzy)) ::Unity::Mathematics::float3 wzy;

  __declspec(property(get = get_wzyw)) ::Unity::Mathematics::float4 wzyw;

  __declspec(property(get = get_wzyx, put = set_wzyx)) ::Unity::Mathematics::float4 wzyx;

  __declspec(property(get = get_wzyy)) ::Unity::Mathematics::float4 wzyy;

  __declspec(property(get = get_wzyz)) ::Unity::Mathematics::float4 wzyz;

  __declspec(property(get = get_wzz)) ::Unity::Mathematics::float3 wzz;

  __declspec(property(get = get_wzzw)) ::Unity::Mathematics::float4 wzzw;

  __declspec(property(get = get_wzzx)) ::Unity::Mathematics::float4 wzzx;

  __declspec(property(get = get_wzzy)) ::Unity::Mathematics::float4 wzzy;

  __declspec(property(get = get_wzzz)) ::Unity::Mathematics::float4 wzzz;

  __declspec(property(get = get_xw, put = set_xw)) ::Unity::Mathematics::float2 xw;

  __declspec(property(get = get_xww)) ::Unity::Mathematics::float3 xww;

  __declspec(property(get = get_xwww)) ::Unity::Mathematics::float4 xwww;

  __declspec(property(get = get_xwwx)) ::Unity::Mathematics::float4 xwwx;

  __declspec(property(get = get_xwwy)) ::Unity::Mathematics::float4 xwwy;

  __declspec(property(get = get_xwwz)) ::Unity::Mathematics::float4 xwwz;

  __declspec(property(get = get_xwx)) ::Unity::Mathematics::float3 xwx;

  __declspec(property(get = get_xwxw)) ::Unity::Mathematics::float4 xwxw;

  __declspec(property(get = get_xwxx)) ::Unity::Mathematics::float4 xwxx;

  __declspec(property(get = get_xwxy)) ::Unity::Mathematics::float4 xwxy;

  __declspec(property(get = get_xwxz)) ::Unity::Mathematics::float4 xwxz;

  __declspec(property(get = get_xwy, put = set_xwy)) ::Unity::Mathematics::float3 xwy;

  __declspec(property(get = get_xwyw)) ::Unity::Mathematics::float4 xwyw;

  __declspec(property(get = get_xwyx)) ::Unity::Mathematics::float4 xwyx;

  __declspec(property(get = get_xwyy)) ::Unity::Mathematics::float4 xwyy;

  __declspec(property(get = get_xwyz, put = set_xwyz)) ::Unity::Mathematics::float4 xwyz;

  __declspec(property(get = get_xwz, put = set_xwz)) ::Unity::Mathematics::float3 xwz;

  __declspec(property(get = get_xwzw)) ::Unity::Mathematics::float4 xwzw;

  __declspec(property(get = get_xwzx)) ::Unity::Mathematics::float4 xwzx;

  __declspec(property(get = get_xwzy, put = set_xwzy)) ::Unity::Mathematics::float4 xwzy;

  __declspec(property(get = get_xwzz)) ::Unity::Mathematics::float4 xwzz;

  __declspec(property(get = get_xx)) ::Unity::Mathematics::float2 xx;

  __declspec(property(get = get_xxw)) ::Unity::Mathematics::float3 xxw;

  __declspec(property(get = get_xxww)) ::Unity::Mathematics::float4 xxww;

  __declspec(property(get = get_xxwx)) ::Unity::Mathematics::float4 xxwx;

  __declspec(property(get = get_xxwy)) ::Unity::Mathematics::float4 xxwy;

  __declspec(property(get = get_xxwz)) ::Unity::Mathematics::float4 xxwz;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::float3 xxx;

  __declspec(property(get = get_xxxw)) ::Unity::Mathematics::float4 xxxw;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::float4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::float4 xxxy;

  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::float4 xxxz;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::float3 xxy;

  __declspec(property(get = get_xxyw)) ::Unity::Mathematics::float4 xxyw;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::float4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::float4 xxyy;

  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::float4 xxyz;

  __declspec(property(get = get_xxz)) ::Unity::Mathematics::float3 xxz;

  __declspec(property(get = get_xxzw)) ::Unity::Mathematics::float4 xxzw;

  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::float4 xxzx;

  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::float4 xxzy;

  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::float4 xxzz;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::float2 xy;

  __declspec(property(get = get_xyw, put = set_xyw)) ::Unity::Mathematics::float3 xyw;

  __declspec(property(get = get_xyww)) ::Unity::Mathematics::float4 xyww;

  __declspec(property(get = get_xywx)) ::Unity::Mathematics::float4 xywx;

  __declspec(property(get = get_xywy)) ::Unity::Mathematics::float4 xywy;

  __declspec(property(get = get_xywz, put = set_xywz)) ::Unity::Mathematics::float4 xywz;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::float3 xyx;

  __declspec(property(get = get_xyxw)) ::Unity::Mathematics::float4 xyxw;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::float4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::float4 xyxy;

  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::float4 xyxz;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::float3 xyy;

  __declspec(property(get = get_xyyw)) ::Unity::Mathematics::float4 xyyw;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::float4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::float4 xyyy;

  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::float4 xyyz;

  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::float3 xyz;

  __declspec(property(get = get_xyzw, put = set_xyzw)) ::Unity::Mathematics::float4 xyzw;

  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::float4 xyzx;

  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::float4 xyzy;

  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::float4 xyzz;

  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::float2 xz;

  __declspec(property(get = get_xzw, put = set_xzw)) ::Unity::Mathematics::float3 xzw;

  __declspec(property(get = get_xzww)) ::Unity::Mathematics::float4 xzww;

  __declspec(property(get = get_xzwx)) ::Unity::Mathematics::float4 xzwx;

  __declspec(property(get = get_xzwy, put = set_xzwy)) ::Unity::Mathematics::float4 xzwy;

  __declspec(property(get = get_xzwz)) ::Unity::Mathematics::float4 xzwz;

  __declspec(property(get = get_xzx)) ::Unity::Mathematics::float3 xzx;

  __declspec(property(get = get_xzxw)) ::Unity::Mathematics::float4 xzxw;

  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::float4 xzxx;

  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::float4 xzxy;

  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::float4 xzxz;

  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::float3 xzy;

  __declspec(property(get = get_xzyw, put = set_xzyw)) ::Unity::Mathematics::float4 xzyw;

  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::float4 xzyx;

  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::float4 xzyy;

  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::float4 xzyz;

  __declspec(property(get = get_xzz)) ::Unity::Mathematics::float3 xzz;

  __declspec(property(get = get_xzzw)) ::Unity::Mathematics::float4 xzzw;

  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::float4 xzzx;

  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::float4 xzzy;

  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::float4 xzzz;

  __declspec(property(get = get_yw, put = set_yw)) ::Unity::Mathematics::float2 yw;

  __declspec(property(get = get_yww)) ::Unity::Mathematics::float3 yww;

  __declspec(property(get = get_ywww)) ::Unity::Mathematics::float4 ywww;

  __declspec(property(get = get_ywwx)) ::Unity::Mathematics::float4 ywwx;

  __declspec(property(get = get_ywwy)) ::Unity::Mathematics::float4 ywwy;

  __declspec(property(get = get_ywwz)) ::Unity::Mathematics::float4 ywwz;

  __declspec(property(get = get_ywx, put = set_ywx)) ::Unity::Mathematics::float3 ywx;

  __declspec(property(get = get_ywxw)) ::Unity::Mathematics::float4 ywxw;

  __declspec(property(get = get_ywxx)) ::Unity::Mathematics::float4 ywxx;

  __declspec(property(get = get_ywxy)) ::Unity::Mathematics::float4 ywxy;

  __declspec(property(get = get_ywxz, put = set_ywxz)) ::Unity::Mathematics::float4 ywxz;

  __declspec(property(get = get_ywy)) ::Unity::Mathematics::float3 ywy;

  __declspec(property(get = get_ywyw)) ::Unity::Mathematics::float4 ywyw;

  __declspec(property(get = get_ywyx)) ::Unity::Mathematics::float4 ywyx;

  __declspec(property(get = get_ywyy)) ::Unity::Mathematics::float4 ywyy;

  __declspec(property(get = get_ywyz)) ::Unity::Mathematics::float4 ywyz;

  __declspec(property(get = get_ywz, put = set_ywz)) ::Unity::Mathematics::float3 ywz;

  __declspec(property(get = get_ywzw)) ::Unity::Mathematics::float4 ywzw;

  __declspec(property(get = get_ywzx, put = set_ywzx)) ::Unity::Mathematics::float4 ywzx;

  __declspec(property(get = get_ywzy)) ::Unity::Mathematics::float4 ywzy;

  __declspec(property(get = get_ywzz)) ::Unity::Mathematics::float4 ywzz;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::float2 yx;

  __declspec(property(get = get_yxw, put = set_yxw)) ::Unity::Mathematics::float3 yxw;

  __declspec(property(get = get_yxww)) ::Unity::Mathematics::float4 yxww;

  __declspec(property(get = get_yxwx)) ::Unity::Mathematics::float4 yxwx;

  __declspec(property(get = get_yxwy)) ::Unity::Mathematics::float4 yxwy;

  __declspec(property(get = get_yxwz, put = set_yxwz)) ::Unity::Mathematics::float4 yxwz;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::float3 yxx;

  __declspec(property(get = get_yxxw)) ::Unity::Mathematics::float4 yxxw;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::float4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::float4 yxxy;

  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::float4 yxxz;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::float3 yxy;

  __declspec(property(get = get_yxyw)) ::Unity::Mathematics::float4 yxyw;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::float4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::float4 yxyy;

  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::float4 yxyz;

  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::float3 yxz;

  __declspec(property(get = get_yxzw, put = set_yxzw)) ::Unity::Mathematics::float4 yxzw;

  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::float4 yxzx;

  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::float4 yxzy;

  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::float4 yxzz;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::float2 yy;

  __declspec(property(get = get_yyw)) ::Unity::Mathematics::float3 yyw;

  __declspec(property(get = get_yyww)) ::Unity::Mathematics::float4 yyww;

  __declspec(property(get = get_yywx)) ::Unity::Mathematics::float4 yywx;

  __declspec(property(get = get_yywy)) ::Unity::Mathematics::float4 yywy;

  __declspec(property(get = get_yywz)) ::Unity::Mathematics::float4 yywz;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::float3 yyx;

  __declspec(property(get = get_yyxw)) ::Unity::Mathematics::float4 yyxw;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::float4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::float4 yyxy;

  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::float4 yyxz;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::float3 yyy;

  __declspec(property(get = get_yyyw)) ::Unity::Mathematics::float4 yyyw;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::float4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::float4 yyyy;

  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::float4 yyyz;

  __declspec(property(get = get_yyz)) ::Unity::Mathematics::float3 yyz;

  __declspec(property(get = get_yyzw)) ::Unity::Mathematics::float4 yyzw;

  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::float4 yyzx;

  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::float4 yyzy;

  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::float4 yyzz;

  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::float2 yz;

  __declspec(property(get = get_yzw, put = set_yzw)) ::Unity::Mathematics::float3 yzw;

  __declspec(property(get = get_yzww)) ::Unity::Mathematics::float4 yzww;

  __declspec(property(get = get_yzwx, put = set_yzwx)) ::Unity::Mathematics::float4 yzwx;

  __declspec(property(get = get_yzwy)) ::Unity::Mathematics::float4 yzwy;

  __declspec(property(get = get_yzwz)) ::Unity::Mathematics::float4 yzwz;

  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::float3 yzx;

  __declspec(property(get = get_yzxw, put = set_yzxw)) ::Unity::Mathematics::float4 yzxw;

  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::float4 yzxx;

  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::float4 yzxy;

  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::float4 yzxz;

  __declspec(property(get = get_yzy)) ::Unity::Mathematics::float3 yzy;

  __declspec(property(get = get_yzyw)) ::Unity::Mathematics::float4 yzyw;

  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::float4 yzyx;

  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::float4 yzyy;

  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::float4 yzyz;

  __declspec(property(get = get_yzz)) ::Unity::Mathematics::float3 yzz;

  __declspec(property(get = get_yzzw)) ::Unity::Mathematics::float4 yzzw;

  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::float4 yzzx;

  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::float4 yzzy;

  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::float4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float4 zero;

  __declspec(property(get = get_zw, put = set_zw)) ::Unity::Mathematics::float2 zw;

  __declspec(property(get = get_zww)) ::Unity::Mathematics::float3 zww;

  __declspec(property(get = get_zwww)) ::Unity::Mathematics::float4 zwww;

  __declspec(property(get = get_zwwx)) ::Unity::Mathematics::float4 zwwx;

  __declspec(property(get = get_zwwy)) ::Unity::Mathematics::float4 zwwy;

  __declspec(property(get = get_zwwz)) ::Unity::Mathematics::float4 zwwz;

  __declspec(property(get = get_zwx, put = set_zwx)) ::Unity::Mathematics::float3 zwx;

  __declspec(property(get = get_zwxw)) ::Unity::Mathematics::float4 zwxw;

  __declspec(property(get = get_zwxx)) ::Unity::Mathematics::float4 zwxx;

  __declspec(property(get = get_zwxy, put = set_zwxy)) ::Unity::Mathematics::float4 zwxy;

  __declspec(property(get = get_zwxz)) ::Unity::Mathematics::float4 zwxz;

  __declspec(property(get = get_zwy, put = set_zwy)) ::Unity::Mathematics::float3 zwy;

  __declspec(property(get = get_zwyw)) ::Unity::Mathematics::float4 zwyw;

  __declspec(property(get = get_zwyx, put = set_zwyx)) ::Unity::Mathematics::float4 zwyx;

  __declspec(property(get = get_zwyy)) ::Unity::Mathematics::float4 zwyy;

  __declspec(property(get = get_zwyz)) ::Unity::Mathematics::float4 zwyz;

  __declspec(property(get = get_zwz)) ::Unity::Mathematics::float3 zwz;

  __declspec(property(get = get_zwzw)) ::Unity::Mathematics::float4 zwzw;

  __declspec(property(get = get_zwzx)) ::Unity::Mathematics::float4 zwzx;

  __declspec(property(get = get_zwzy)) ::Unity::Mathematics::float4 zwzy;

  __declspec(property(get = get_zwzz)) ::Unity::Mathematics::float4 zwzz;

  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::float2 zx;

  __declspec(property(get = get_zxw, put = set_zxw)) ::Unity::Mathematics::float3 zxw;

  __declspec(property(get = get_zxww)) ::Unity::Mathematics::float4 zxww;

  __declspec(property(get = get_zxwx)) ::Unity::Mathematics::float4 zxwx;

  __declspec(property(get = get_zxwy, put = set_zxwy)) ::Unity::Mathematics::float4 zxwy;

  __declspec(property(get = get_zxwz)) ::Unity::Mathematics::float4 zxwz;

  __declspec(property(get = get_zxx)) ::Unity::Mathematics::float3 zxx;

  __declspec(property(get = get_zxxw)) ::Unity::Mathematics::float4 zxxw;

  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::float4 zxxx;

  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::float4 zxxy;

  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::float4 zxxz;

  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::float3 zxy;

  __declspec(property(get = get_zxyw, put = set_zxyw)) ::Unity::Mathematics::float4 zxyw;

  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::float4 zxyx;

  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::float4 zxyy;

  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::float4 zxyz;

  __declspec(property(get = get_zxz)) ::Unity::Mathematics::float3 zxz;

  __declspec(property(get = get_zxzw)) ::Unity::Mathematics::float4 zxzw;

  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::float4 zxzx;

  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::float4 zxzy;

  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::float4 zxzz;

  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::float2 zy;

  __declspec(property(get = get_zyw, put = set_zyw)) ::Unity::Mathematics::float3 zyw;

  __declspec(property(get = get_zyww)) ::Unity::Mathematics::float4 zyww;

  __declspec(property(get = get_zywx, put = set_zywx)) ::Unity::Mathematics::float4 zywx;

  __declspec(property(get = get_zywy)) ::Unity::Mathematics::float4 zywy;

  __declspec(property(get = get_zywz)) ::Unity::Mathematics::float4 zywz;

  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::float3 zyx;

  __declspec(property(get = get_zyxw, put = set_zyxw)) ::Unity::Mathematics::float4 zyxw;

  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::float4 zyxx;

  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::float4 zyxy;

  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::float4 zyxz;

  __declspec(property(get = get_zyy)) ::Unity::Mathematics::float3 zyy;

  __declspec(property(get = get_zyyw)) ::Unity::Mathematics::float4 zyyw;

  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::float4 zyyx;

  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::float4 zyyy;

  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::float4 zyyz;

  __declspec(property(get = get_zyz)) ::Unity::Mathematics::float3 zyz;

  __declspec(property(get = get_zyzw)) ::Unity::Mathematics::float4 zyzw;

  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::float4 zyzx;

  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::float4 zyzy;

  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::float4 zyzz;

  __declspec(property(get = get_zz)) ::Unity::Mathematics::float2 zz;

  __declspec(property(get = get_zzw)) ::Unity::Mathematics::float3 zzw;

  __declspec(property(get = get_zzww)) ::Unity::Mathematics::float4 zzww;

  __declspec(property(get = get_zzwx)) ::Unity::Mathematics::float4 zzwx;

  __declspec(property(get = get_zzwy)) ::Unity::Mathematics::float4 zzwy;

  __declspec(property(get = get_zzwz)) ::Unity::Mathematics::float4 zzwz;

  __declspec(property(get = get_zzx)) ::Unity::Mathematics::float3 zzx;

  __declspec(property(get = get_zzxw)) ::Unity::Mathematics::float4 zzxw;

  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::float4 zzxx;

  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::float4 zzxy;

  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::float4 zzxz;

  __declspec(property(get = get_zzy)) ::Unity::Mathematics::float3 zzy;

  __declspec(property(get = get_zzyw)) ::Unity::Mathematics::float4 zzyw;

  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::float4 zzyx;

  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::float4 zzyy;

  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::float4 zzyz;

  __declspec(property(get = get_zzz)) ::Unity::Mathematics::float3 zzz;

  __declspec(property(get = get_zzzw)) ::Unity::Mathematics::float4 zzzw;

  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::float4 zzzx;

  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::float4 zzzy;

  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::float4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6641fe4, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6641fa8, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float4 rhs);

  /// @brief Method GetHashCode, addr 0x6642090, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x66420ec, size 0x1a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x664228c, size 0x19c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x663fe18, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4 v);

  /// @brief Method .ctor, addr 0x663ffe0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4 v);

  /// @brief Method .ctor, addr 0x663feb8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half v);

  /// @brief Method .ctor, addr 0x663ff18, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half4 v);

  /// @brief Method .ctor, addr 0x663fe60, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4 v);

  /// @brief Method .ctor, addr 0x663fe94, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4 v);

  /// @brief Method .ctor, addr 0x663fdfc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x663ffd0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x663fdf0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x663fe50, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x663fe84, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x663fd90, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method .ctor, addr 0x663fd9c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, ::Unity::Mathematics::float2 zw);

  /// @brief Method .ctor, addr 0x663fda8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, ::Unity::Mathematics::float2 yz, float_t w);

  /// @brief Method .ctor, addr 0x663fdb4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, ::Unity::Mathematics::float3 yzw);

  /// @brief Method .ctor, addr 0x663fdc0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 xy, float_t z, float_t w);

  /// @brief Method .ctor, addr 0x663fdcc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 xy, ::Unity::Mathematics::float2 zw);

  /// @brief Method .ctor, addr 0x663fdd8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 xyz, float_t w);

  /// @brief Method .ctor, addr 0x663fde4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 xyzw);

  static inline ::Unity::Mathematics::float4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6641f98, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method get_ww, addr 0x6641f8c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_ww();

  /// @brief Method get_www, addr 0x6641e68, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_www();

  /// @brief Method get_wwww, addr 0x66419ec, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwww();

  /// @brief Method get_wwwx, addr 0x66419b4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwwx();

  /// @brief Method get_wwwy, addr 0x66419c8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwwy();

  /// @brief Method get_wwwz, addr 0x66419dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwwz();

  /// @brief Method get_wwx, addr 0x6641e3c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wwx();

  /// @brief Method get_wwxw, addr 0x6641918, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwxw();

  /// @brief Method get_wwxx, addr 0x66418e4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwxx();

  /// @brief Method get_wwxy, addr 0x66418f8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwxy();

  /// @brief Method get_wwxz, addr 0x6641908, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwxz();

  /// @brief Method get_wwy, addr 0x6641e4c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wwy();

  /// @brief Method get_wwyw, addr 0x6641960, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwyw();

  /// @brief Method get_wwyx, addr 0x664192c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwyx();

  /// @brief Method get_wwyy, addr 0x664193c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwyy();

  /// @brief Method get_wwyz, addr 0x6641950, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwyz();

  /// @brief Method get_wwz, addr 0x6641e5c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wwz();

  /// @brief Method get_wwzw, addr 0x66419a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwzw();

  /// @brief Method get_wwzx, addr 0x6641974, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwzx();

  /// @brief Method get_wwzy, addr 0x6641984, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwzy();

  /// @brief Method get_wwzz, addr 0x6641994, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wwzz();

  /// @brief Method get_wx, addr 0x6641f4c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_wx();

  /// @brief Method get_wxw, addr 0x6641d94, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wxw();

  /// @brief Method get_wxww, addr 0x66416a0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxww();

  /// @brief Method get_wxwx, addr 0x664166c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxwx();

  /// @brief Method get_wxwy, addr 0x6641680, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxwy();

  /// @brief Method get_wxwz, addr 0x6641690, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxwz();

  /// @brief Method get_wxx, addr 0x6641d54, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wxx();

  /// @brief Method get_wxxw, addr 0x66415c8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxxw();

  /// @brief Method get_wxxx, addr 0x6641594, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxxx();

  /// @brief Method get_wxxy, addr 0x66415a8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxxy();

  /// @brief Method get_wxxz, addr 0x66415b8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxxz();

  /// @brief Method get_wxy, addr 0x6641d64, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wxy();

  /// @brief Method get_wxyw, addr 0x6641614, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxyw();

  /// @brief Method get_wxyx, addr 0x66415dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxyx();

  /// @brief Method get_wxyy, addr 0x66415ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxyy();

  /// @brief Method get_wxyz, addr 0x66415fc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxyz();

  /// @brief Method get_wxz, addr 0x6641d7c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wxz();

  /// @brief Method get_wxzw, addr 0x664165c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxzw();

  /// @brief Method get_wxzx, addr 0x6641624, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxzx();

  /// @brief Method get_wxzy, addr 0x6641634, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxzy();

  /// @brief Method get_wxzz, addr 0x664164c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wxzz();

  /// @brief Method get_wy, addr 0x6641f64, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_wy();

  /// @brief Method get_wyw, addr 0x6641de4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wyw();

  /// @brief Method get_wyww, addr 0x66417c0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wyww();

  /// @brief Method get_wywx, addr 0x664178c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wywx();

  /// @brief Method get_wywy, addr 0x664179c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wywy();

  /// @brief Method get_wywz, addr 0x66417b0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wywz();

  /// @brief Method get_wyx, addr 0x6641da4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wyx();

  /// @brief Method get_wyxw, addr 0x66416ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wyxw();

  /// @brief Method get_wyxx, addr 0x66416b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wyxx();

  /// @brief Method get_wyxy, addr 0x66416c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wyxy();

  /// @brief Method get_wyxz, addr 0x66416d4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wyxz();

  /// @brief Method get_wyy, addr 0x6641dbc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wyy();

  /// @brief Method get_wyyw, addr 0x6641730, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wyyw();

  /// @brief Method get_wyyx, addr 0x66416fc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wyyx();

  /// @brief Method get_wyyy, addr 0x664170c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wyyy();

  /// @brief Method get_wyyz, addr 0x6641720, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wyyz();

  /// @brief Method get_wyz, addr 0x6641dcc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wyz();

  /// @brief Method get_wyzw, addr 0x664177c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wyzw();

  /// @brief Method get_wyzx, addr 0x6641744, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wyzx();

  /// @brief Method get_wyzy, addr 0x664175c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wyzy();

  /// @brief Method get_wyzz, addr 0x664176c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wyzz();

  /// @brief Method get_wz, addr 0x6641f7c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_wz();

  /// @brief Method get_wzw, addr 0x6641e30, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wzw();

  /// @brief Method get_wzww, addr 0x66418d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzww();

  /// @brief Method get_wzwx, addr 0x66418a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzwx();

  /// @brief Method get_wzwy, addr 0x66418b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzwy();

  /// @brief Method get_wzwz, addr 0x66418c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzwz();

  /// @brief Method get_wzx, addr 0x6641df4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wzx();

  /// @brief Method get_wzxw, addr 0x664180c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzxw();

  /// @brief Method get_wzxx, addr 0x66417d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzxx();

  /// @brief Method get_wzxy, addr 0x66417e4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzxy();

  /// @brief Method get_wzxz, addr 0x66417fc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzxz();

  /// @brief Method get_wzy, addr 0x6641e0c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wzy();

  /// @brief Method get_wzyw, addr 0x6641854, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzyw();

  /// @brief Method get_wzyx, addr 0x664181c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzyx();

  /// @brief Method get_wzyy, addr 0x6641834, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzyy();

  /// @brief Method get_wzyz, addr 0x6641844, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzyz();

  /// @brief Method get_wzz, addr 0x6641e24, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_wzz();

  /// @brief Method get_wzzw, addr 0x6641894, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzzw();

  /// @brief Method get_wzzx, addr 0x6641864, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzzx();

  /// @brief Method get_wzzy, addr 0x6641874, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzzy();

  /// @brief Method get_wzzz, addr 0x6641884, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_wzzz();

  /// @brief Method get_xw, addr 0x6641eac, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xw();

  /// @brief Method get_xww, addr 0x6641b14, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xww();

  /// @brief Method get_xwww, addr 0x6640cd0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwww();

  /// @brief Method get_xwwx, addr 0x6640c9c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwwx();

  /// @brief Method get_xwwy, addr 0x6640cb0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwwy();

  /// @brief Method get_xwwz, addr 0x6640cc0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwwz();

  /// @brief Method get_xwx, addr 0x6641ad4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xwx();

  /// @brief Method get_xwxw, addr 0x6640bf8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwxw();

  /// @brief Method get_xwxx, addr 0x6640bc4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwxx();

  /// @brief Method get_xwxy, addr 0x6640bd8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwxy();

  /// @brief Method get_xwxz, addr 0x6640be8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwxz();

  /// @brief Method get_xwy, addr 0x6641ae4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xwy();

  /// @brief Method get_xwyw, addr 0x6640c44, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwyw();

  /// @brief Method get_xwyx, addr 0x6640c0c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwyx();

  /// @brief Method get_xwyy, addr 0x6640c1c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwyy();

  /// @brief Method get_xwyz, addr 0x6640c2c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwyz();

  /// @brief Method get_xwz, addr 0x6641afc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xwz();

  /// @brief Method get_xwzw, addr 0x6640c8c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwzw();

  /// @brief Method get_xwzx, addr 0x6640c54, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwzx();

  /// @brief Method get_xwzy, addr 0x6640c64, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwzy();

  /// @brief Method get_xwzz, addr 0x6640c7c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xwzz();

  /// @brief Method get_xx, addr 0x6641e78, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xx();

  /// @brief Method get_xxw, addr 0x6641a2c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxw();

  /// @brief Method get_xxww, addr 0x6640980, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxww();

  /// @brief Method get_xxwx, addr 0x664094c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxwx();

  /// @brief Method get_xxwy, addr 0x6640960, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxwy();

  /// @brief Method get_xxwz, addr 0x6640970, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxwz();

  /// @brief Method get_xxx, addr 0x6641a00, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxx();

  /// @brief Method get_xxxw, addr 0x66408b0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxw();

  /// @brief Method get_xxxx, addr 0x6640878, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x664088c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x664089c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxz();

  /// @brief Method get_xxy, addr 0x6641a10, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxy();

  /// @brief Method get_xxyw, addr 0x66408f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyw();

  /// @brief Method get_xxyx, addr 0x66408c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x66408d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x66408e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyz();

  /// @brief Method get_xxz, addr 0x6641a1c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxz();

  /// @brief Method get_xxzw, addr 0x664093c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxzw();

  /// @brief Method get_xxzx, addr 0x6640904, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x6640918, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x6640928, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxzz();

  /// @brief Method get_xy, addr 0x6641e84, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xy();

  /// @brief Method get_xyw, addr 0x6641a6c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyw();

  /// @brief Method get_xyww, addr 0x6640a94, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyww();

  /// @brief Method get_xywx, addr 0x6640a5c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xywx();

  /// @brief Method get_xywy, addr 0x6640a6c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xywy();

  /// @brief Method get_xywz, addr 0x6640a7c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xywz();

  /// @brief Method get_xyx, addr 0x6641a3c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyx();

  /// @brief Method get_xyxw, addr 0x66409c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxw();

  /// @brief Method get_xyxx, addr 0x6640994, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x66409a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x66409b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxz();

  /// @brief Method get_xyy, addr 0x6641a48, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyy();

  /// @brief Method get_xyyw, addr 0x6640a04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyw();

  /// @brief Method get_xyyx, addr 0x66409d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x66409e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x66409f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyz();

  /// @brief Method get_xyz, addr 0x6641a54, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyz();

  /// @brief Method get_xyzw, addr 0x6640a44, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyzw();

  /// @brief Method get_xyzx, addr 0x6640a14, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x6640a24, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x6640a34, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyzz();

  /// @brief Method get_xz, addr 0x6641e94, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xz();

  /// @brief Method get_xzw, addr 0x6641abc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xzw();

  /// @brief Method get_xzww, addr 0x6640bb4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzww();

  /// @brief Method get_xzwx, addr 0x6640b7c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzwx();

  /// @brief Method get_xzwy, addr 0x6640b8c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzwy();

  /// @brief Method get_xzwz, addr 0x6640ba4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzwz();

  /// @brief Method get_xzx, addr 0x6641a84, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xzx();

  /// @brief Method get_xzxw, addr 0x6640adc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzxw();

  /// @brief Method get_xzxx, addr 0x6640aa4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x6640ab8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x6640ac8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzxz();

  /// @brief Method get_xzy, addr 0x6641a94, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xzy();

  /// @brief Method get_xzyw, addr 0x6640b1c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzyw();

  /// @brief Method get_xzyx, addr 0x6640aec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x6640afc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x6640b0c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzyz();

  /// @brief Method get_xzz, addr 0x6641aac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xzz();

  /// @brief Method get_xzzw, addr 0x6640b6c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzzw();

  /// @brief Method get_xzzx, addr 0x6640b34, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x6640b48, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x6640b58, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzzz();

  /// @brief Method get_yw, addr 0x6641ef0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yw();

  /// @brief Method get_yww, addr 0x6641c2c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yww();

  /// @brief Method get_ywww, addr 0x6641128, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywww();

  /// @brief Method get_ywwx, addr 0x66410f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywwx();

  /// @brief Method get_ywwy, addr 0x6641104, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywwy();

  /// @brief Method get_ywwz, addr 0x6641118, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywwz();

  /// @brief Method get_ywx, addr 0x6641bec, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_ywx();

  /// @brief Method get_ywxw, addr 0x6641050, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywxw();

  /// @brief Method get_ywxx, addr 0x6641018, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywxx();

  /// @brief Method get_ywxy, addr 0x6641028, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywxy();

  /// @brief Method get_ywxz, addr 0x6641038, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywxz();

  /// @brief Method get_ywy, addr 0x6641c04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_ywy();

  /// @brief Method get_ywyw, addr 0x6641094, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywyw();

  /// @brief Method get_ywyx, addr 0x6641060, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywyx();

  /// @brief Method get_ywyy, addr 0x6641070, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywyy();

  /// @brief Method get_ywyz, addr 0x6641084, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywyz();

  /// @brief Method get_ywz, addr 0x6641c14, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_ywz();

  /// @brief Method get_ywzw, addr 0x66410e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywzw();

  /// @brief Method get_ywzx, addr 0x66410a8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywzx();

  /// @brief Method get_ywzy, addr 0x66410c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywzy();

  /// @brief Method get_ywzz, addr 0x66410d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_ywzz();

  /// @brief Method get_yx, addr 0x6641ec4, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yx();

  /// @brief Method get_yxw, addr 0x6641b54, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxw();

  /// @brief Method get_yxww, addr 0x6640de4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxww();

  /// @brief Method get_yxwx, addr 0x6640dac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxwx();

  /// @brief Method get_yxwy, addr 0x6640dbc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxwy();

  /// @brief Method get_yxwz, addr 0x6640dcc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxwz();

  /// @brief Method get_yxx, addr 0x6641b24, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxx();

  /// @brief Method get_yxxw, addr 0x6640d14, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxw();

  /// @brief Method get_yxxx, addr 0x6640ce4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x6640cf4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x6640d04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxz();

  /// @brief Method get_yxy, addr 0x6641b30, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxy();

  /// @brief Method get_yxyw, addr 0x6640d54, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyw();

  /// @brief Method get_yxyx, addr 0x6640d24, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x6640d34, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x6640d44, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyz();

  /// @brief Method get_yxz, addr 0x6641b3c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxz();

  /// @brief Method get_yxzw, addr 0x6640d94, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxzw();

  /// @brief Method get_yxzx, addr 0x6640d64, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x6640d74, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x6640d84, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxzz();

  /// @brief Method get_yy, addr 0x6641ed4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yy();

  /// @brief Method get_yyw, addr 0x6641b94, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyw();

  /// @brief Method get_yyww, addr 0x6640ef0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyww();

  /// @brief Method get_yywx, addr 0x6640ebc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yywx();

  /// @brief Method get_yywy, addr 0x6640ecc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yywy();

  /// @brief Method get_yywz, addr 0x6640ee0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yywz();

  /// @brief Method get_yyx, addr 0x6641b6c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyx();

  /// @brief Method get_yyxw, addr 0x6640e24, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxw();

  /// @brief Method get_yyxx, addr 0x6640df4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x6640e04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x6640e14, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxz();

  /// @brief Method get_yyy, addr 0x6641b78, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyy();

  /// @brief Method get_yyyw, addr 0x6640e68, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyw();

  /// @brief Method get_yyyx, addr 0x6640e34, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x6640e44, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x6640e58, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyz();

  /// @brief Method get_yyz, addr 0x6641b88, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyz();

  /// @brief Method get_yyzw, addr 0x6640eac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyzw();

  /// @brief Method get_yyzx, addr 0x6640e7c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x6640e8c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x6640e9c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyzz();

  /// @brief Method get_yz, addr 0x6641ee0, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yz();

  /// @brief Method get_yzw, addr 0x6641bd4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yzw();

  /// @brief Method get_yzww, addr 0x6641008, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzww();

  /// @brief Method get_yzwx, addr 0x6640fcc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzwx();

  /// @brief Method get_yzwy, addr 0x6640fe8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzwy();

  /// @brief Method get_yzwz, addr 0x6640ff8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzwz();

  /// @brief Method get_yzx, addr 0x6641ba4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yzx();

  /// @brief Method get_yzxw, addr 0x6640f34, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzxw();

  /// @brief Method get_yzxx, addr 0x6640f04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x6640f14, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x6640f24, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzxz();

  /// @brief Method get_yzy, addr 0x6641bbc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yzy();

  /// @brief Method get_yzyw, addr 0x6640f7c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzyw();

  /// @brief Method get_yzyx, addr 0x6640f4c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x6640f5c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x6640f6c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzyz();

  /// @brief Method get_yzz, addr 0x6641bc8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yzz();

  /// @brief Method get_yzzw, addr 0x6640fbc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzzw();

  /// @brief Method get_yzzx, addr 0x6640f8c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x6640f9c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x6640fac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzzz();

  /// @brief Method get_zw, addr 0x6641f3c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_zw();

  /// @brief Method get_zww, addr 0x6641d48, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zww();

  /// @brief Method get_zwww, addr 0x6641584, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwww();

  /// @brief Method get_zwwx, addr 0x6641554, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwwx();

  /// @brief Method get_zwwy, addr 0x6641564, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwwy();

  /// @brief Method get_zwwz, addr 0x6641574, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwwz();

  /// @brief Method get_zwx, addr 0x6641d0c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zwx();

  /// @brief Method get_zwxw, addr 0x66414bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwxw();

  /// @brief Method get_zwxx, addr 0x6641484, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwxx();

  /// @brief Method get_zwxy, addr 0x6641494, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwxy();

  /// @brief Method get_zwxz, addr 0x66414ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwxz();

  /// @brief Method get_zwy, addr 0x6641d24, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zwy();

  /// @brief Method get_zwyw, addr 0x6641504, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwyw();

  /// @brief Method get_zwyx, addr 0x66414cc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwyx();

  /// @brief Method get_zwyy, addr 0x66414e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwyy();

  /// @brief Method get_zwyz, addr 0x66414f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwyz();

  /// @brief Method get_zwz, addr 0x6641d3c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zwz();

  /// @brief Method get_zwzw, addr 0x6641544, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwzw();

  /// @brief Method get_zwzx, addr 0x6641514, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwzx();

  /// @brief Method get_zwzy, addr 0x6641524, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwzy();

  /// @brief Method get_zwzz, addr 0x6641534, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zwzz();

  /// @brief Method get_zx, addr 0x6641f08, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_zx();

  /// @brief Method get_zxw, addr 0x6641c74, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zxw();

  /// @brief Method get_zxww, addr 0x6641250, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxww();

  /// @brief Method get_zxwx, addr 0x6641218, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxwx();

  /// @brief Method get_zxwy, addr 0x6641228, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxwy();

  /// @brief Method get_zxwz, addr 0x6641240, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxwz();

  /// @brief Method get_zxx, addr 0x6641c3c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zxx();

  /// @brief Method get_zxxw, addr 0x6641174, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxxw();

  /// @brief Method get_zxxx, addr 0x664113c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x6641150, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x6641160, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxxz();

  /// @brief Method get_zxy, addr 0x6641c4c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zxy();

  /// @brief Method get_zxyw, addr 0x66411b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxyw();

  /// @brief Method get_zxyx, addr 0x6641184, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x6641194, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x66411a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxyz();

  /// @brief Method get_zxz, addr 0x6641c64, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zxz();

  /// @brief Method get_zxzw, addr 0x6641208, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxzw();

  /// @brief Method get_zxzx, addr 0x66411d0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x66411e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x66411f4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxzz();

  /// @brief Method get_zy, addr 0x6641f20, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_zy();

  /// @brief Method get_zyw, addr 0x6641cbc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zyw();

  /// @brief Method get_zyww, addr 0x6641364, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyww();

  /// @brief Method get_zywx, addr 0x664132c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zywx();

  /// @brief Method get_zywy, addr 0x6641344, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zywy();

  /// @brief Method get_zywz, addr 0x6641354, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zywz();

  /// @brief Method get_zyx, addr 0x6641c8c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zyx();

  /// @brief Method get_zyxw, addr 0x6641290, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyxw();

  /// @brief Method get_zyxx, addr 0x6641260, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x6641270, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x6641280, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyxz();

  /// @brief Method get_zyy, addr 0x6641ca4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zyy();

  /// @brief Method get_zyyw, addr 0x66412dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyyw();

  /// @brief Method get_zyyx, addr 0x66412ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x66412bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x66412cc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyyz();

  /// @brief Method get_zyz, addr 0x6641cb0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zyz();

  /// @brief Method get_zyzw, addr 0x664131c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyzw();

  /// @brief Method get_zyzx, addr 0x66412ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x66412fc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x664130c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyzz();

  /// @brief Method get_zz, addr 0x6641f30, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_zz();

  /// @brief Method get_zzw, addr 0x6641d00, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zzw();

  /// @brief Method get_zzww, addr 0x6641474, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzww();

  /// @brief Method get_zzwx, addr 0x6641444, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzwx();

  /// @brief Method get_zzwy, addr 0x6641454, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzwy();

  /// @brief Method get_zzwz, addr 0x6641464, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzwz();

  /// @brief Method get_zzx, addr 0x6641cd4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zzx();

  /// @brief Method get_zzxw, addr 0x66413ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzxw();

  /// @brief Method get_zzxx, addr 0x6641374, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x6641388, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x6641398, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzxz();

  /// @brief Method get_zzy, addr 0x6641ce4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zzy();

  /// @brief Method get_zzyw, addr 0x66413ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzyw();

  /// @brief Method get_zzyx, addr 0x66413bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x66413cc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x66413dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzyz();

  /// @brief Method get_zzz, addr 0x6641cf0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zzz();

  /// @brief Method get_zzzw, addr 0x6641434, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzzw();

  /// @brief Method get_zzzx, addr 0x66413fc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x6641410, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x6641420, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float4>* i___System__IEquatable_1___Unity__Mathematics__float4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6640248, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Addition(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Addition, addr 0x664025c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Addition(::Unity::Mathematics::float4 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x6640270, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Addition(float_t lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Decrement, addr 0x66404a0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Decrement(::Unity::Mathematics::float4 val);

  /// @brief Method op_Division, addr 0x66402c8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Division(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Division, addr 0x66402dc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Division(::Unity::Mathematics::float4 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x66402f0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Division(float_t lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Equality, addr 0x6640740, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Equality, addr 0x6640774, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::float4 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x66407a8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(float_t lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Explicit, addr 0x664002c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Explicit___Unity__Mathematics__float4(::Unity::Mathematics::bool4 v);

  /// @brief Method op_Explicit, addr 0x66401f4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Explicit___Unity__Mathematics__float4(::Unity::Mathematics::double4 v);

  /// @brief Method op_Explicit, addr 0x664000c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Explicit___Unity__Mathematics__float4(bool v);

  /// @brief Method op_Explicit, addr 0x66401e0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Explicit___Unity__Mathematics__float4(double_t v);

  /// @brief Method op_GreaterThan, addr 0x66405f0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThan(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_GreaterThan, addr 0x6640624, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThan(::Unity::Mathematics::float4 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6640658, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x664068c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x66406c0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(::Unity::Mathematics::float4 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x66406f4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Implicit, addr 0x664242c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::Unity::Mathematics::float4 v);

  /// @brief Method op_Implicit, addr 0x66400b8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Implicit___Unity__Mathematics__float4(::Unity::Mathematics::half v);

  /// @brief Method op_Implicit, addr 0x6640120, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Implicit___Unity__Mathematics__float4(::Unity::Mathematics::half4 v);

  /// @brief Method op_Implicit, addr 0x664006c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Implicit___Unity__Mathematics__float4(::Unity::Mathematics::int4 v);

  /// @brief Method op_Implicit, addr 0x664009c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Implicit___Unity__Mathematics__float4(::Unity::Mathematics::uint4 v);

  /// @brief Method op_Implicit, addr 0x6642428, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Implicit___Unity__Mathematics__float4(::UnityEngine::Vector4 v);

  /// @brief Method op_Implicit, addr 0x663fffc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Implicit___Unity__Mathematics__float4(float_t v);

  /// @brief Method op_Implicit, addr 0x6640058, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Implicit___Unity__Mathematics__float4(int32_t v);

  /// @brief Method op_Implicit, addr 0x6640088, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Implicit___Unity__Mathematics__float4(uint32_t v);

  /// @brief Method op_Increment, addr 0x6640488, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Increment(::Unity::Mathematics::float4 val);

  /// @brief Method op_Inequality, addr 0x66407dc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Inequality, addr 0x6640810, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::float4 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x6640844, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(float_t lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_LessThan, addr 0x66404b8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThan(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_LessThan, addr 0x66404ec, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThan(::Unity::Mathematics::float4 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x6640520, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThan(float_t lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6640554, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6640588, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(::Unity::Mathematics::float4 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x66405bc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Modulus, addr 0x6640308, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Modulus(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Modulus, addr 0x6640394, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Modulus(::Unity::Mathematics::float4 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x6640410, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Modulus(float_t lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Multiply, addr 0x6640208, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Multiply(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Multiply, addr 0x664021c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Multiply(::Unity::Mathematics::float4 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x6640230, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Multiply(float_t lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Subtraction, addr 0x6640288, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Subtraction(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_Subtraction, addr 0x664029c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Subtraction(::Unity::Mathematics::float4 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x66402b0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Subtraction(float_t lhs, ::Unity::Mathematics::float4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6640728, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_UnaryNegation(::Unity::Mathematics::float4 val);

  /// @brief Method op_UnaryPlus, addr 0x664073c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_UnaryPlus(::Unity::Mathematics::float4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::float4 value);

  /// @brief Method set_Item, addr 0x6641fa0, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  /// @brief Method set_wx, addr 0x6641f58, size 0xc, virtual false, abstract: false, final false
  inline void set_wx(::Unity::Mathematics::float2 value);

  /// @brief Method set_wxy, addr 0x6641d70, size 0xc, virtual false, abstract: false, final false
  inline void set_wxy(::Unity::Mathematics::float3 value);

  /// @brief Method set_wxyz, addr 0x6641608, size 0xc, virtual false, abstract: false, final false
  inline void set_wxyz(::Unity::Mathematics::float4 value);

  /// @brief Method set_wxz, addr 0x6641d88, size 0xc, virtual false, abstract: false, final false
  inline void set_wxz(::Unity::Mathematics::float3 value);

  /// @brief Method set_wxzy, addr 0x6641640, size 0xc, virtual false, abstract: false, final false
  inline void set_wxzy(::Unity::Mathematics::float4 value);

  /// @brief Method set_wy, addr 0x6641f70, size 0xc, virtual false, abstract: false, final false
  inline void set_wy(::Unity::Mathematics::float2 value);

  /// @brief Method set_wyx, addr 0x6641db0, size 0xc, virtual false, abstract: false, final false
  inline void set_wyx(::Unity::Mathematics::float3 value);

  /// @brief Method set_wyxz, addr 0x66416e0, size 0xc, virtual false, abstract: false, final false
  inline void set_wyxz(::Unity::Mathematics::float4 value);

  /// @brief Method set_wyz, addr 0x6641dd8, size 0xc, virtual false, abstract: false, final false
  inline void set_wyz(::Unity::Mathematics::float3 value);

  /// @brief Method set_wyzx, addr 0x6641750, size 0xc, virtual false, abstract: false, final false
  inline void set_wyzx(::Unity::Mathematics::float4 value);

  /// @brief Method set_wz, addr 0x6641f84, size 0x8, virtual false, abstract: false, final false
  inline void set_wz(::Unity::Mathematics::float2 value);

  /// @brief Method set_wzx, addr 0x6641e00, size 0xc, virtual false, abstract: false, final false
  inline void set_wzx(::Unity::Mathematics::float3 value);

  /// @brief Method set_wzxy, addr 0x66417f0, size 0xc, virtual false, abstract: false, final false
  inline void set_wzxy(::Unity::Mathematics::float4 value);

  /// @brief Method set_wzy, addr 0x6641e18, size 0xc, virtual false, abstract: false, final false
  inline void set_wzy(::Unity::Mathematics::float3 value);

  /// @brief Method set_wzyx, addr 0x6641828, size 0xc, virtual false, abstract: false, final false
  inline void set_wzyx(::Unity::Mathematics::float4 value);

  /// @brief Method set_xw, addr 0x6641eb8, size 0xc, virtual false, abstract: false, final false
  inline void set_xw(::Unity::Mathematics::float2 value);

  /// @brief Method set_xwy, addr 0x6641af0, size 0xc, virtual false, abstract: false, final false
  inline void set_xwy(::Unity::Mathematics::float3 value);

  /// @brief Method set_xwyz, addr 0x6640c38, size 0xc, virtual false, abstract: false, final false
  inline void set_xwyz(::Unity::Mathematics::float4 value);

  /// @brief Method set_xwz, addr 0x6641b08, size 0xc, virtual false, abstract: false, final false
  inline void set_xwz(::Unity::Mathematics::float3 value);

  /// @brief Method set_xwzy, addr 0x6640c70, size 0xc, virtual false, abstract: false, final false
  inline void set_xwzy(::Unity::Mathematics::float4 value);

  /// @brief Method set_xy, addr 0x6641e8c, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::float2 value);

  /// @brief Method set_xyw, addr 0x6641a78, size 0xc, virtual false, abstract: false, final false
  inline void set_xyw(::Unity::Mathematics::float3 value);

  /// @brief Method set_xywz, addr 0x6640a88, size 0xc, virtual false, abstract: false, final false
  inline void set_xywz(::Unity::Mathematics::float4 value);

  /// @brief Method set_xyz, addr 0x6641a60, size 0xc, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::float3 value);

  /// @brief Method set_xyzw, addr 0x6640a50, size 0xc, virtual false, abstract: false, final false
  inline void set_xyzw(::Unity::Mathematics::float4 value);

  /// @brief Method set_xz, addr 0x6641ea0, size 0xc, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::float2 value);

  /// @brief Method set_xzw, addr 0x6641ac8, size 0xc, virtual false, abstract: false, final false
  inline void set_xzw(::Unity::Mathematics::float3 value);

  /// @brief Method set_xzwy, addr 0x6640b98, size 0xc, virtual false, abstract: false, final false
  inline void set_xzwy(::Unity::Mathematics::float4 value);

  /// @brief Method set_xzy, addr 0x6641aa0, size 0xc, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::float3 value);

  /// @brief Method set_xzyw, addr 0x6640b28, size 0xc, virtual false, abstract: false, final false
  inline void set_xzyw(::Unity::Mathematics::float4 value);

  /// @brief Method set_yw, addr 0x6641efc, size 0xc, virtual false, abstract: false, final false
  inline void set_yw(::Unity::Mathematics::float2 value);

  /// @brief Method set_ywx, addr 0x6641bf8, size 0xc, virtual false, abstract: false, final false
  inline void set_ywx(::Unity::Mathematics::float3 value);

  /// @brief Method set_ywxz, addr 0x6641044, size 0xc, virtual false, abstract: false, final false
  inline void set_ywxz(::Unity::Mathematics::float4 value);

  /// @brief Method set_ywz, addr 0x6641c20, size 0xc, virtual false, abstract: false, final false
  inline void set_ywz(::Unity::Mathematics::float3 value);

  /// @brief Method set_ywzx, addr 0x66410b8, size 0xc, virtual false, abstract: false, final false
  inline void set_ywzx(::Unity::Mathematics::float4 value);

  /// @brief Method set_yx, addr 0x6641ecc, size 0x8, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::float2 value);

  /// @brief Method set_yxw, addr 0x6641b60, size 0xc, virtual false, abstract: false, final false
  inline void set_yxw(::Unity::Mathematics::float3 value);

  /// @brief Method set_yxwz, addr 0x6640dd8, size 0xc, virtual false, abstract: false, final false
  inline void set_yxwz(::Unity::Mathematics::float4 value);

  /// @brief Method set_yxz, addr 0x6641b48, size 0xc, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::float3 value);

  /// @brief Method set_yxzw, addr 0x6640da0, size 0xc, virtual false, abstract: false, final false
  inline void set_yxzw(::Unity::Mathematics::float4 value);

  /// @brief Method set_yz, addr 0x6641ee8, size 0x8, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::float2 value);

  /// @brief Method set_yzw, addr 0x6641be0, size 0xc, virtual false, abstract: false, final false
  inline void set_yzw(::Unity::Mathematics::float3 value);

  /// @brief Method set_yzwx, addr 0x6640fdc, size 0xc, virtual false, abstract: false, final false
  inline void set_yzwx(::Unity::Mathematics::float4 value);

  /// @brief Method set_yzx, addr 0x6641bb0, size 0xc, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::float3 value);

  /// @brief Method set_yzxw, addr 0x6640f40, size 0xc, virtual false, abstract: false, final false
  inline void set_yzxw(::Unity::Mathematics::float4 value);

  /// @brief Method set_zw, addr 0x6641f44, size 0x8, virtual false, abstract: false, final false
  inline void set_zw(::Unity::Mathematics::float2 value);

  /// @brief Method set_zwx, addr 0x6641d18, size 0xc, virtual false, abstract: false, final false
  inline void set_zwx(::Unity::Mathematics::float3 value);

  /// @brief Method set_zwxy, addr 0x66414a0, size 0xc, virtual false, abstract: false, final false
  inline void set_zwxy(::Unity::Mathematics::float4 value);

  /// @brief Method set_zwy, addr 0x6641d30, size 0xc, virtual false, abstract: false, final false
  inline void set_zwy(::Unity::Mathematics::float3 value);

  /// @brief Method set_zwyx, addr 0x66414d8, size 0xc, virtual false, abstract: false, final false
  inline void set_zwyx(::Unity::Mathematics::float4 value);

  /// @brief Method set_zx, addr 0x6641f14, size 0xc, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::float2 value);

  /// @brief Method set_zxw, addr 0x6641c80, size 0xc, virtual false, abstract: false, final false
  inline void set_zxw(::Unity::Mathematics::float3 value);

  /// @brief Method set_zxwy, addr 0x6641234, size 0xc, virtual false, abstract: false, final false
  inline void set_zxwy(::Unity::Mathematics::float4 value);

  /// @brief Method set_zxy, addr 0x6641c58, size 0xc, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::float3 value);

  /// @brief Method set_zxyw, addr 0x66411c4, size 0xc, virtual false, abstract: false, final false
  inline void set_zxyw(::Unity::Mathematics::float4 value);

  /// @brief Method set_zy, addr 0x6641f28, size 0x8, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::float2 value);

  /// @brief Method set_zyw, addr 0x6641cc8, size 0xc, virtual false, abstract: false, final false
  inline void set_zyw(::Unity::Mathematics::float3 value);

  /// @brief Method set_zywx, addr 0x6641338, size 0xc, virtual false, abstract: false, final false
  inline void set_zywx(::Unity::Mathematics::float4 value);

  /// @brief Method set_zyx, addr 0x6641c98, size 0xc, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::float3 value);

  /// @brief Method set_zyxw, addr 0x66412a0, size 0xc, virtual false, abstract: false, final false
  inline void set_zyxw(::Unity::Mathematics::float4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float4();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
  constexpr float4(float_t x, float_t y, float_t z, float_t w) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13140 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  /// @brief Field w, offset: 0xc, size: 0x4, def value: None
  float_t w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4, w) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float4) == 0x10, "Size mismatch!");

} // namespace Unity::Mathematics
