#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool2_def.hpp"
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__half2_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::float2_DebuggerProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2_DebuggerProxy::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2_DebuggerProxy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f7b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Mathematics::float2_DebuggerProxy::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr float_t const& Unity::Mathematics::float2_DebuggerProxy::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Unity::Mathematics::float2_DebuggerProxy::__cordl_internal_set_x(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr float_t& Unity::Mathematics::float2_DebuggerProxy::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr float_t const& Unity::Mathematics::float2_DebuggerProxy::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Unity::Mathematics::float2_DebuggerProxy::__cordl_internal_set_y(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
inline void Unity::Mathematics::float2_DebuggerProxy::_ctor(::Unity::Mathematics::float2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::Unity::Mathematics::float2_DebuggerProxy* Unity::Mathematics::float2_DebuggerProxy::New_ctor(::Unity::Mathematics::float2 v) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Mathematics::float2_DebuggerProxy*>(v));
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::float2_DebuggerProxy::float2_DebuggerProxy() {}
//  Writing Method size for method: ::Unity::Mathematics::float2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(float_t, float_t)>(&::Unity::Mathematics::float2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f713c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f7144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(float_t)>(&::Unity::Mathematics::float2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f714c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(bool)>(&::Unity::Mathematics::float2::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f7154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(::Unity::Mathematics::bool2)>(&::Unity::Mathematics::float2::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64f716c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(int32_t)>(&::Unity::Mathematics::float2::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f7194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::float2::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64f71a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(uint32_t)>(&::Unity::Mathematics::float2::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f71b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::float2::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64f71c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(::Unity::Mathematics::half)>(&::Unity::Mathematics::float2::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64f71d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(::Unity::Mathematics::half2)>(&::Unity::Mathematics::float2::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64f7230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(double_t)>(&::Unity::Mathematics::float2::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f72b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::float2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f72bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Implicit___Unity__Mathematics__float2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(float_t)>(&::Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f72cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Explicit___Unity__Mathematics__float2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(bool)>(&::Unity::Mathematics::float2::op_Explicit___Unity__Mathematics__float2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f72d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Explicit___Unity__Mathematics__float2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::bool2)>(&::Unity::Mathematics::float2::op_Explicit___Unity__Mathematics__float2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64f72ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Implicit___Unity__Mathematics__float2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(int32_t)>(&::Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f7308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Implicit___Unity__Mathematics__float2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Implicit___Unity__Mathematics__float2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(uint32_t)>(&::Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f7324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Implicit___Unity__Mathematics__float2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Implicit___Unity__Mathematics__float2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::half)>(&::Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64f7340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Implicit___Unity__Mathematics__float2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::half2)>(&::Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64f73a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Explicit___Unity__Mathematics__float2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(double_t)>(&::Unity::Mathematics::float2::op_Explicit___Unity__Mathematics__float2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f7420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Explicit___Unity__Mathematics__float2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::float2::op_Explicit___Unity__Mathematics__float2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f742c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Multiply)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f7438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::float2::op_Multiply)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f7444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(float_t, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Multiply)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Multiply", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Addition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f7460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::float2::op_Addition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f746c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(float_t, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Addition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Addition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Subtraction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f7488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                             { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::float2::op_Subtraction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f7494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(float_t, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Subtraction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f74a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Subtraction", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Division)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f74b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                             { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::float2::op_Division)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f74bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(float_t, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Division)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f74c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Division", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Modulus)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64f74d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                             { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::float2::op_Modulus)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64f751c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(float_t, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Modulus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x64f7560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Modulus", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Increment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f75a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Decrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Decrement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f75b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_LessThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f75c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                             { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::float2::op_LessThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f75d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(float_t, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_LessThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f75f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_LessThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(
    &::Unity::Mathematics::float2::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f7608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                             { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::float2::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f7620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(float_t, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f7638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_GreaterThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f7650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                             { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::float2::op_GreaterThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f7668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(float_t, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_GreaterThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f7680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_GreaterThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(
    &::Unity::Mathematics::float2::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f7698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                             { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::float2::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f76b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(float_t, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f76c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_UnaryNegation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f76e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_UnaryPlus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_UnaryPlus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64f76ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Equality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f76f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::float2::op_Equality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f7708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(float_t, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Equality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f7720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Equality", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f7738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::float2::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f7750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(float_t, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f7768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Inequality", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xxxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64f7780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f77a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f77b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f77c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f77d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f77e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f77f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yxxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yyyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64f7874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f7898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f78a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f78b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f78bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f78c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f78d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f78e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f78f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f78fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.set_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::set_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f7904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f790c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.set_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::set_yx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f7914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_yy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::get_yy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f791c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Mathematics::float2::*)(int32_t)>(&::Unity::Mathematics::float2::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f7928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2::*)(int32_t, float_t)>(&::Unity::Mathematics::float2::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f7930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::float2::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64f7938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::float2::*)(::System::Object*)>(&::Unity::Mathematics::float2::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64f795c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ::i2c::class_of<::Unity::Mathematics::float2>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::GetHashCode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x64f79e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ::i2c::class_of<::Unity::Mathematics::float2>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::float2::*)()>(&::Unity::Mathematics::float2::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x64f7a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ::i2c::class_of<::Unity::Mathematics::float2>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::float2::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::float2::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x64f7ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Implicit___UnityEngine__Vector2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64f7b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2.op_Implicit___Unity__Mathematics__float2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::UnityEngine::Vector2)>(&::Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64f7b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::float2::setStaticF_zero(::Unity::Mathematics::float2 value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::float2, "zero", ::Unity::Mathematics::float2>(std::forward<::Unity::Mathematics::float2>(value));
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::float2, "zero", ::Unity::Mathematics::float2>();
}
inline void Unity::Mathematics::float2::_ctor(float_t x, float_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
inline void Unity::Mathematics::float2::_ctor(::Unity::Mathematics::float2 xy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xy);
}
inline void Unity::Mathematics::float2::_ctor(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float2::_ctor(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float2::_ctor(::Unity::Mathematics::bool2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float2::_ctor(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float2::_ctor(::Unity::Mathematics::int2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float2::_ctor(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float2::_ctor(::Unity::Mathematics::uint2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float2::_ctor(::Unity::Mathematics::half v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float2::_ctor(::Unity::Mathematics::half2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float2::_ctor(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float2::_ctor(::Unity::Mathematics::double2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Explicit___Unity__Mathematics__float2(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Explicit___Unity__Mathematics__float2(::Unity::Mathematics::bool2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::int2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::uint2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::half v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::half2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Explicit___Unity__Mathematics__float2(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Explicit___Unity__Mathematics__float2(::Unity::Mathematics::double2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Multiply(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Multiply(::Unity::Mathematics::float2 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Multiply(float_t lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Multiply", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Addition(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Addition(::Unity::Mathematics::float2 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Addition(float_t lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Addition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Subtraction(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Subtraction(::Unity::Mathematics::float2 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Subtraction(float_t lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Subtraction", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Division(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Division(::Unity::Mathematics::float2 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Division(float_t lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Division", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Modulus(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Modulus(::Unity::Mathematics::float2 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Modulus(float_t lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Modulus", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Increment(::Unity::Mathematics::float2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Decrement(::Unity::Mathematics::float2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_LessThan(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_LessThan(::Unity::Mathematics::float2 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_LessThan(float_t lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_LessThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_LessThanOrEqual(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                           { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_LessThanOrEqual(::Unity::Mathematics::float2 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_GreaterThan(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                           { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_GreaterThan(::Unity::Mathematics::float2 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_GreaterThan(float_t lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_GreaterThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_GreaterThanOrEqual(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                           { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_GreaterThanOrEqual(::Unity::Mathematics::float2 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_UnaryNegation(::Unity::Mathematics::float2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_UnaryPlus(::Unity::Mathematics::float2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_Equality(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_Equality(::Unity::Mathematics::float2 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_Equality(float_t lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Equality", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_Inequality(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_Inequality(::Unity::Mathematics::float2 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::float2::op_Inequality(float_t lhs, ::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Inequality", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_xxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_xxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_xxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_xxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_xyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_xyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_xyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_xyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_yxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_yxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_yxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_yxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_yyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_yyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_yyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float2::get_yyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float2::get_xxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float2::get_xxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float2::get_xyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float2::get_xyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float2::get_yxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float2::get_yxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float2::get_yyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float2::get_yyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::get_xx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::get_xy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_xy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline void Unity::Mathematics::float2::set_xy(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::get_yx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline void Unity::Mathematics::float2::set_yx(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::get_yy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_yy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline float_t Unity::Mathematics::float2::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, index);
}
inline void Unity::Mathematics::float2::set_Item(int32_t index, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline bool Unity::Mathematics::float2::Equals(::Unity::Mathematics::float2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::float2::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::float2>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::float2::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::float2>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float2::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::float2>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float2::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline ::UnityEngine::Vector2 Unity::Mathematics::float2::op_Implicit___UnityEngine__Vector2(::Unity::Mathematics::float2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float2::op_Implicit___Unity__Mathematics__float2(::UnityEngine::Vector2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float2>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, v);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2>"
constexpr Unity::Mathematics::float2::operator ::System::IEquatable_1<::Unity::Mathematics::float2>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::float2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float2>* Unity::Mathematics::float2::i___System__IEquatable_1___Unity__Mathematics__float2_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::float2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::Mathematics::float2::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::float2::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Mathematics::float2::float2(float_t x, float_t y) noexcept {
  this->x = x;
  this->y = y;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::float2::float2() {}
