#pragma once
// IWYU pragma private; include "Unity/Mathematics/int3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::int3_DebuggerProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3_DebuggerProxy::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3_DebuggerProxy::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66595f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Mathematics::int3_DebuggerProxy::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr int32_t const& Unity::Mathematics::int3_DebuggerProxy::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Unity::Mathematics::int3_DebuggerProxy::__cordl_internal_set_x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr int32_t& Unity::Mathematics::int3_DebuggerProxy::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr int32_t const& Unity::Mathematics::int3_DebuggerProxy::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Unity::Mathematics::int3_DebuggerProxy::__cordl_internal_set_y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr int32_t& Unity::Mathematics::int3_DebuggerProxy::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr int32_t const& Unity::Mathematics::int3_DebuggerProxy::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Unity::Mathematics::int3_DebuggerProxy::__cordl_internal_set_z(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
inline void Unity::Mathematics::int3_DebuggerProxy::_ctor(::Unity::Mathematics::int3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::Unity::Mathematics::int3_DebuggerProxy* Unity::Mathematics::int3_DebuggerProxy::New_ctor(::Unity::Mathematics::int3 v) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Mathematics::int3_DebuggerProxy*>(v));
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::int3_DebuggerProxy::int3_DebuggerProxy() {}
//  Writing Method size for method: ::Unity::Mathematics::int3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(int32_t, int32_t, int32_t)>(&::Unity::Mathematics::int3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6658238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(int32_t, ::Unity::Mathematics::int2)>(&::Unity::Mathematics::int3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int2, int32_t)>(&::Unity::Mathematics::int3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(int32_t)>(&::Unity::Mathematics::int3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6658274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(bool)>(&::Unity::Mathematics::int3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::bool3)>(&::Unity::Mathematics::int3::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6658290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(uint32_t)>(&::Unity::Mathematics::int3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66582b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::int3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66582c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(float_t)>(&::Unity::Mathematics::int3::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66582d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::int3::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x66582f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(double_t)>(&::Unity::Mathematics::int3::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6658334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::int3::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6658358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Implicit___Unity__Mathematics__int3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(int32_t)>(&::Unity::Mathematics::int3::op_Implicit___Unity__Mathematics__int3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x665839c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Explicit___Unity__Mathematics__int3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(bool)>(&::Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66583a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Explicit___Unity__Mathematics__int3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::bool3)>(&::Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66583c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Explicit___Unity__Mathematics__int3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(uint32_t)>(&::Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66583dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Explicit___Unity__Mathematics__int3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66583e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Explicit___Unity__Mathematics__int3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(float_t)>(&::Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66583f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Explicit___Unity__Mathematics__int3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6658410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Explicit___Unity__Mathematics__int3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(double_t)>(&::Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6658450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Explicit___Unity__Mathematics__int3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6658470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Multiply)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66584b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_Multiply)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66584cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Multiply)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66584e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Multiply", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Addition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66584fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_Addition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6658518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Addition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6658530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Addition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Subtraction)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x665854c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_Subtraction)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6658568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Subtraction)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6658580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Subtraction", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Division)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x665859c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_Division)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66585b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Division)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66585d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Division", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Modulus)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66585e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_Modulus)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6658610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Modulus)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6658634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Modulus", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Increment)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6658658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Decrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Decrement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6658674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_LessThan)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6658690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_LessThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66586bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_LessThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66586e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_LessThan", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x665870c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(),
                                                             { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6658738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6658760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_GreaterThan)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6658788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_GreaterThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66587b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_GreaterThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66587dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_GreaterThan", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6658804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(),
                                                             { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6658830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6658858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_UnaryPlus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_UnaryPlus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6658894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_LeftShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_LeftShift)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x665889c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_LeftShift", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_RightShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_RightShift)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66588b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_RightShift", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66588cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66588fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6658924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Equality", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Inequality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x665894c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_Inequality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x665897c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_Inequality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66589a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Inequality", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_OnesComplement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_OnesComplement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66589cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_OnesComplement", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66589d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66589e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66589fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_BitwiseOr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6658a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6658a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6658a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_BitwiseOr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6658a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int3::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6658a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6658a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xxxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xxyy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6658adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xxzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xxzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xyxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6658b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xyxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xyyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xyzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xyzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xzxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xzxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xzyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xzyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xzyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xzzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xzzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yxxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yxxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6658ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yxyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yxzx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6658cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yxzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yyxx)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6658d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yyxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yyzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yyzz)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6658dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yzxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yzxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yzyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yzyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yzyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6658e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zxxx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6658e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zxxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zxyx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6658ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zxyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zxyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zxzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zxzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zyxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zyxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zyxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zyyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zyyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6658fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zyzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zzxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6658fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zzxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6658ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6659008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zzyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x665901c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zzyy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6659030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zzyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x665904c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x665905c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6659070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6659080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6659090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x665909c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66590a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66590b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66590c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66590d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.set_xyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::set_xyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66590e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_xyz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66590f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6659100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.set_xzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::set_xzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6659110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_xzy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6659120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6659130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x665913c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6659148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.set_yxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::set_yxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6659158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_yxz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6659168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6659174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6659180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x665918c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.set_yzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::set_yzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x665919c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_yzx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66591a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66591b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66591c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66591d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.set_zxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::set_zxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66591e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_zxy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66591f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6659200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.set_zyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::set_zyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6659210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_zyx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6659220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x665922c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6659238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6659248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6659254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6659260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665926c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.set_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int3::set_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6659274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_xz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_xz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x665927c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.set_xz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int3::set_xz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x665928c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_xz", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x665929c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.set_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int3::set_yx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66592a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66592b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_yz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_yz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66592c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.set_yz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int3::set_yz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66592c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_yz", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66592d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.set_zx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int3::set_zx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66592e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_zx", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66592f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.set_zy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int3::set_zy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66592fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_zy", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_zz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::get_zz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6659308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::int3::*)(int32_t)>(&::Unity::Mathematics::int3::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6659314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3::*)(int32_t, int32_t)>(&::Unity::Mathematics::int3::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665931c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::int3::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6659324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::int3::*)(::System::Object*)>(&::Unity::Mathematics::int3::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6659358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ::i2c::class_of<::Unity::Mathematics::int3>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x66593f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ::i2c::class_of<::Unity::Mathematics::int3>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::int3::*)()>(&::Unity::Mathematics::int3::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x665943c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ::i2c::class_of<::Unity::Mathematics::int3>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::int3::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::int3::ToString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6659514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::int3::setStaticF_zero(::Unity::Mathematics::int3 value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::int3, "zero", ::Unity::Mathematics::int3>(std::forward<::Unity::Mathematics::int3>(value));
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::int3, "zero", ::Unity::Mathematics::int3>();
}
inline void Unity::Mathematics::int3::_ctor(int32_t x, int32_t y, int32_t z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z);
}
inline void Unity::Mathematics::int3::_ctor(int32_t x, ::Unity::Mathematics::int2 yz) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, yz);
}
inline void Unity::Mathematics::int3::_ctor(::Unity::Mathematics::int2 xy, int32_t z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xy, z);
}
inline void Unity::Mathematics::int3::_ctor(::Unity::Mathematics::int3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xyz);
}
inline void Unity::Mathematics::int3::_ctor(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3::_ctor(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3::_ctor(::Unity::Mathematics::bool3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3::_ctor(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3::_ctor(::Unity::Mathematics::uint3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3::_ctor(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3::_ctor(::Unity::Mathematics::float3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3::_ctor(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3::_ctor(::Unity::Mathematics::double3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Implicit___Unity__Mathematics__int3(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::bool3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::uint3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::float3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::double3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Multiply(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Multiply(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Multiply(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Multiply", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Addition(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Addition(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Addition(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Addition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Subtraction(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Subtraction(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Subtraction(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Subtraction", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Division(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Division(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Division(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Division", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Modulus(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Modulus(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Modulus(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Modulus", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Increment(::Unity::Mathematics::int3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_Decrement(::Unity::Mathematics::int3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_LessThan(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_LessThan(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_LessThan(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_LessThan", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_LessThanOrEqual(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(),
                                                           { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_LessThanOrEqual(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_GreaterThan(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_GreaterThan(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_GreaterThan", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_GreaterThanOrEqual(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(),
                                                           { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_GreaterThanOrEqual(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_UnaryNegation(::Unity::Mathematics::int3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_UnaryPlus(::Unity::Mathematics::int3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_LeftShift(::Unity::Mathematics::int3 x, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_LeftShift", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, x, n);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_RightShift(::Unity::Mathematics::int3 x, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_RightShift", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, x, n);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_Equality(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_Equality(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_Equality(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Equality", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_Inequality(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_Inequality(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::int3::op_Inequality(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_Inequality", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_OnesComplement(::Unity::Mathematics::int3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_OnesComplement", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_BitwiseAnd(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_BitwiseAnd(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_BitwiseOr(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_BitwiseOr(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_BitwiseOr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_ExclusiveOr(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_ExclusiveOr(::Unity::Mathematics::int3 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_xzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_yzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int3::get_zzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_xxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_xxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_xxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_xyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_xyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_xyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int3::set_xyz(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_xyz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_xzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_xzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int3::set_xzy(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_xzy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_xzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_yxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_yxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_yxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int3::set_yxz(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_yxz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_yyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_yyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_yyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_yzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int3::set_yzx(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_yzx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_yzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_yzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_zxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_zxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int3::set_zxy(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_zxy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_zxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_zyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int3::set_zyx(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_zyx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_zyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_zyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_zzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_zzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int3::get_zzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int3::get_xx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int3::get_xy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int3::set_xy(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int3::get_xz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_xz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int3::set_xz(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_xz", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int3::get_yx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int3::set_yx(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int3::get_yy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int3::get_yz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_yz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int3::set_yz(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_yz", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int3::get_zx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int3::set_zx(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_zx", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int3::get_zy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int3::set_zy(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_zy", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int3::get_zz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_zz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline int32_t Unity::Mathematics::int3::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, index);
}
inline void Unity::Mathematics::int3::set_Item(int32_t index, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline bool Unity::Mathematics::int3::Equals(::Unity::Mathematics::int3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::int3::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::int3>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::int3::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::int3>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::int3::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::int3>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::int3::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3>"
constexpr Unity::Mathematics::int3::operator ::System::IEquatable_1<::Unity::Mathematics::int3>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::int3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int3>* Unity::Mathematics::int3::i___System__IEquatable_1___Unity__Mathematics__int3_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::int3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::Mathematics::int3::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::int3::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Mathematics::int3::int3(int32_t x, int32_t y, int32_t z) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::int3::int3() {}
