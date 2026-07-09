#pragma once
// IWYU pragma private; include "UnityOpus/Decoder.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityOpus/zzzz__NumChannels_impl.hpp"
#include "UnityOpus/zzzz__Decoder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityOpus/zzzz__NumChannels_def.hpp"
#include "UnityOpus/zzzz__SamplingFrequency_def.hpp"
//  Writing Method size for method: ::UnityOpus::Decoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityOpus::Decoder::*)(::UnityOpus::SamplingFrequency, ::UnityOpus::NumChannels)>(&::UnityOpus::Decoder::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5754490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityOpus::Decoder*>(), { ".ctor", {}, { ::i2c::type_of<::UnityOpus::SamplingFrequency>(), ::i2c::type_of<::UnityOpus::NumChannels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Decoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityOpus::Decoder::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<float_t>, int32_t)>(&::UnityOpus::Decoder::Decode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5754654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Decoder*>(),
                                                { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Decoder.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityOpus::Decoder::*)(bool)>(&::UnityOpus::Decoder::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x575482c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityOpus::Decoder*>(), { ::i2c::class_of<::UnityOpus::Decoder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Decoder.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityOpus::Decoder::*)()>(&::UnityOpus::Decoder::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x57548dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityOpus::Decoder*>(), { ::i2c::class_of<::UnityOpus::Decoder*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Decoder.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityOpus::Decoder::*)()>(&::UnityOpus::Decoder::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x575492c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Decoder*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityOpus::Decoder::__cordl_internal_get_decoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr ::System::IntPtr const& UnityOpus::Decoder::__cordl_internal_get_decoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr void UnityOpus::Decoder::__cordl_internal_set_decoder(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decoder = value;
}
constexpr ::UnityOpus::NumChannels& UnityOpus::Decoder::__cordl_internal_get_channels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channels;
}
constexpr ::UnityOpus::NumChannels const& UnityOpus::Decoder::__cordl_internal_get_channels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channels;
}
constexpr void UnityOpus::Decoder::__cordl_internal_set_channels(::UnityOpus::NumChannels value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___channels = value;
}
constexpr ::ArrayW<float_t>& UnityOpus::Decoder::__cordl_internal_get_softclipMem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___softclipMem;
}
constexpr ::ArrayW<float_t> const& UnityOpus::Decoder::__cordl_internal_get_softclipMem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___softclipMem;
}
constexpr void UnityOpus::Decoder::__cordl_internal_set_softclipMem(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___softclipMem = value;
}
constexpr bool& UnityOpus::Decoder::__cordl_internal_get_disposedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr bool const& UnityOpus::Decoder::__cordl_internal_get_disposedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr void UnityOpus::Decoder::__cordl_internal_set_disposedValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposedValue = value;
}
inline void UnityOpus::Decoder::_ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityOpus::Decoder*>(), { ".ctor", {}, { ::i2c::type_of<::UnityOpus::SamplingFrequency>(), ::i2c::type_of<::UnityOpus::NumChannels>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplingFrequency, channels);
}
inline int32_t UnityOpus::Decoder::Decode(::ArrayW<uint8_t> data, int32_t dataLength, ::ArrayW<float_t> pcm, int32_t decodeFec) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Decoder*>(),
                                              { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, dataLength, pcm, decodeFec);
}
inline void UnityOpus::Decoder::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityOpus::Decoder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityOpus::Decoder::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityOpus::Decoder*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityOpus::Decoder::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Decoder*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityOpus::Decoder* UnityOpus::Decoder::New_ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityOpus::Decoder*>(samplingFrequency, channels));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityOpus::Decoder::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityOpus::Decoder::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityOpus::Decoder::Decoder() {}
