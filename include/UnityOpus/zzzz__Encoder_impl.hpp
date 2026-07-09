#pragma once
// IWYU pragma private; include "UnityOpus/Encoder.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityOpus/zzzz__NumChannels_impl.hpp"
#include "UnityOpus/zzzz__OpusSignal_impl.hpp"
#include "UnityOpus/zzzz__Encoder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityOpus/zzzz__NumChannels_def.hpp"
#include "UnityOpus/zzzz__OpusApplication_def.hpp"
#include "UnityOpus/zzzz__OpusSignal_def.hpp"
#include "UnityOpus/zzzz__SamplingFrequency_def.hpp"
//  Writing Method size for method: ::UnityOpus::Encoder.get_Bitrate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityOpus::Encoder::*)()>(&::UnityOpus::Encoder::get_Bitrate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x575499c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "get_Bitrate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.set_Bitrate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityOpus::Encoder::*)(int32_t)>(&::UnityOpus::Encoder::set_Bitrate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57549a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "set_Bitrate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.get_Complexity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityOpus::Encoder::*)()>(&::UnityOpus::Encoder::get_Complexity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5754a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "get_Complexity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.set_Complexity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityOpus::Encoder::*)(int32_t)>(&::UnityOpus::Encoder::set_Complexity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5754a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "set_Complexity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.get_Signal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityOpus::OpusSignal (::UnityOpus::Encoder::*)()>(&::UnityOpus::Encoder::get_Signal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5754b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "get_Signal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.set_Signal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityOpus::Encoder::*)(::UnityOpus::OpusSignal)>(&::UnityOpus::Encoder::set_Signal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5754b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "set_Signal", {}, { ::i2c::type_of<::UnityOpus::OpusSignal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityOpus::Encoder::*)(::UnityOpus::SamplingFrequency, ::UnityOpus::NumChannels, ::UnityOpus::OpusApplication)>(
    &::UnityOpus::Encoder::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5754bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityOpus::SamplingFrequency>(), ::i2c::type_of<::UnityOpus::NumChannels>(), ::i2c::type_of<::UnityOpus::OpusApplication>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityOpus::Encoder::*)(::ArrayW<float_t>, int32_t, ::ArrayW<uint8_t>)>(&::UnityOpus::Encoder::Encode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5754d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "Encode", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityOpus::Encoder::*)(bool)>(&::UnityOpus::Encoder::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5754e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { ::i2c::class_of<::UnityOpus::Encoder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityOpus::Encoder::*)()>(&::UnityOpus::Encoder::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5754f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { ::i2c::class_of<::UnityOpus::Encoder*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityOpus::Encoder::*)()>(&::UnityOpus::Encoder::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5754f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityOpus::Encoder::__cordl_internal_get_bitrate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitrate;
}
constexpr int32_t const& UnityOpus::Encoder::__cordl_internal_get_bitrate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitrate;
}
constexpr void UnityOpus::Encoder::__cordl_internal_set_bitrate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bitrate = value;
}
constexpr int32_t& UnityOpus::Encoder::__cordl_internal_get_complexity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexity;
}
constexpr int32_t const& UnityOpus::Encoder::__cordl_internal_get_complexity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexity;
}
constexpr void UnityOpus::Encoder::__cordl_internal_set_complexity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___complexity = value;
}
constexpr ::UnityOpus::OpusSignal& UnityOpus::Encoder::__cordl_internal_get_signal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signal;
}
constexpr ::UnityOpus::OpusSignal const& UnityOpus::Encoder::__cordl_internal_get_signal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signal;
}
constexpr void UnityOpus::Encoder::__cordl_internal_set_signal(::UnityOpus::OpusSignal value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signal = value;
}
constexpr ::System::IntPtr& UnityOpus::Encoder::__cordl_internal_get_encoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoder;
}
constexpr ::System::IntPtr const& UnityOpus::Encoder::__cordl_internal_get_encoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoder;
}
constexpr void UnityOpus::Encoder::__cordl_internal_set_encoder(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encoder = value;
}
constexpr ::UnityOpus::NumChannels& UnityOpus::Encoder::__cordl_internal_get_channels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channels;
}
constexpr ::UnityOpus::NumChannels const& UnityOpus::Encoder::__cordl_internal_get_channels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channels;
}
constexpr void UnityOpus::Encoder::__cordl_internal_set_channels(::UnityOpus::NumChannels value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___channels = value;
}
constexpr bool& UnityOpus::Encoder::__cordl_internal_get_disposedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr bool const& UnityOpus::Encoder::__cordl_internal_get_disposedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr void UnityOpus::Encoder::__cordl_internal_set_disposedValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposedValue = value;
}
inline int32_t UnityOpus::Encoder::get_Bitrate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "get_Bitrate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityOpus::Encoder::set_Bitrate(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "set_Bitrate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityOpus::Encoder::get_Complexity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "get_Complexity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityOpus::Encoder::set_Complexity(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "set_Complexity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityOpus::OpusSignal UnityOpus::Encoder::get_Signal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "get_Signal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityOpus::OpusSignal>(this, ___internal_method);
}
inline void UnityOpus::Encoder::set_Signal(::UnityOpus::OpusSignal value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "set_Signal", {}, { ::i2c::type_of<::UnityOpus::OpusSignal>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityOpus::Encoder::_ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels, ::UnityOpus::OpusApplication application) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityOpus::SamplingFrequency>(), ::i2c::type_of<::UnityOpus::NumChannels>(), ::i2c::type_of<::UnityOpus::OpusApplication>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplingFrequency, channels, application);
}
inline int32_t UnityOpus::Encoder::Encode(::ArrayW<float_t> pcm, int32_t count, ::ArrayW<uint8_t> output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "Encode", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pcm, count, output);
}
inline void UnityOpus::Encoder::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityOpus::Encoder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityOpus::Encoder::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityOpus::Encoder*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityOpus::Encoder::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Encoder*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityOpus::Encoder* UnityOpus::Encoder::New_ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels, ::UnityOpus::OpusApplication application) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityOpus::Encoder*>(samplingFrequency, channels, application));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityOpus::Encoder::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityOpus::Encoder::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityOpus::Encoder::Encoder() {}
