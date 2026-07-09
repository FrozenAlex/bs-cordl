#pragma once
// IWYU pragma private; include "UnityOpus/Library.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityOpus/zzzz__Library_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityOpus/zzzz__ErrorCode_def.hpp"
#include "UnityOpus/zzzz__NumChannels_def.hpp"
#include "UnityOpus/zzzz__OpusApplication_def.hpp"
#include "UnityOpus/zzzz__OpusSignal_def.hpp"
#include "UnityOpus/zzzz__SamplingFrequency_def.hpp"
//  Writing Method size for method: ::UnityOpus::Library.OpusEncoderCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityOpus::SamplingFrequency, ::UnityOpus::NumChannels, ::UnityOpus::OpusApplication, ::by_ref<::UnityOpus::ErrorCode>)>(
    &::UnityOpus::Library::OpusEncoderCreate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5754cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncoderCreate",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityOpus::SamplingFrequency>(), ::i2c::type_of<::UnityOpus::NumChannels>(),
                                                                                              ::i2c::type_of<::UnityOpus::OpusApplication>(), ::i2c::type_of<::by_ref<::UnityOpus::ErrorCode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Library.OpusEncode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<int16_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::UnityOpus::Library::OpusEncode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5754fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncode",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(),
                                                                                              ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Library.OpusEncodeFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::UnityOpus::Library::OpusEncodeFloat)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5754d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncodeFloat",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(),
                                                                                              ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Library.OpusEncoderDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityOpus::Library::OpusEncoderDestroy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5754e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncoderDestroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Library.OpusEncoderSetBitrate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityOpus::Library::OpusEncoderSetBitrate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57549cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncoderSetBitrate", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Library.OpusEncoderSetComplexity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityOpus::Library::OpusEncoderSetComplexity)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5754a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncoderSetComplexity", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Library.OpusEncoderSetSignal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::UnityOpus::OpusSignal)>(&::UnityOpus::Library::OpusEncoderSetSignal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5754b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncoderSetSignal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityOpus::OpusSignal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Library.OpusDecoderCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityOpus::SamplingFrequency, ::UnityOpus::NumChannels, ::by_ref<::UnityOpus::ErrorCode>)>(
    &::UnityOpus::Library::OpusDecoderCreate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x57545c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityOpus::Library*>(),
            { "OpusDecoderCreate", {}, { ::i2c::type_of<::UnityOpus::SamplingFrequency>(), ::i2c::type_of<::UnityOpus::NumChannels>(), ::i2c::type_of<::by_ref<::UnityOpus::ErrorCode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Library.OpusDecode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<uint8_t>, int32_t, ::ArrayW<int16_t>, int32_t, int32_t)>(&::UnityOpus::Library::OpusDecode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5755080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusDecode",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                              ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Library.OpusDecodeFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<uint8_t>, int32_t, ::ArrayW<float_t>, int32_t, int32_t)>(&::UnityOpus::Library::OpusDecodeFloat)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57546bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusDecodeFloat",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                              ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Library.OpusDecoderDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityOpus::Library::OpusDecoderDestroy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5754860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusDecoderDestroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Library.OpusPcmSoftClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, int32_t, ::UnityOpus::NumChannels, ::ArrayW<float_t>)>(&::UnityOpus::Library::OpusPcmSoftClip)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5754780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityOpus::Library*>(),
            { "OpusPcmSoftClip", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityOpus::NumChannels>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Library._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityOpus::Library::*)()>(&::UnityOpus::Library::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5755144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityOpus::Library::OpusEncoderCreate(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels, ::UnityOpus::OpusApplication application,
                                                              ::by_ref<::UnityOpus::ErrorCode> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncoderCreate",
                                                                                          {},
                                                                                          { ::i2c::type_of<::UnityOpus::SamplingFrequency>(), ::i2c::type_of<::UnityOpus::NumChannels>(),
                                                                                            ::i2c::type_of<::UnityOpus::OpusApplication>(), ::i2c::type_of<::by_ref<::UnityOpus::ErrorCode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, samplingFrequency, channels, application, error);
}
inline int32_t UnityOpus::Library::OpusEncode(::System::IntPtr encoder, ::ArrayW<int16_t> pcm, int32_t frameSize, ::ArrayW<uint8_t> data, int32_t maxDataBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncode",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(),
                                                                                            ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, encoder, pcm, frameSize, data, maxDataBytes);
}
inline int32_t UnityOpus::Library::OpusEncodeFloat(::System::IntPtr encoder, ::ArrayW<float_t> pcm, int32_t frameSize, ::ArrayW<uint8_t> data, int32_t maxDataBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncodeFloat",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(),
                                                                                            ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, encoder, pcm, frameSize, data, maxDataBytes);
}
inline void UnityOpus::Library::OpusEncoderDestroy(::System::IntPtr encoder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncoderDestroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, encoder);
}
inline int32_t UnityOpus::Library::OpusEncoderSetBitrate(::System::IntPtr encoder, int32_t bitrate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncoderSetBitrate", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, encoder, bitrate);
}
inline int32_t UnityOpus::Library::OpusEncoderSetComplexity(::System::IntPtr encoder, int32_t complexity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncoderSetComplexity", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, encoder, complexity);
}
inline int32_t UnityOpus::Library::OpusEncoderSetSignal(::System::IntPtr encoder, ::UnityOpus::OpusSignal signal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusEncoderSetSignal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityOpus::OpusSignal>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, encoder, signal);
}
inline ::System::IntPtr UnityOpus::Library::OpusDecoderCreate(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels, ::by_ref<::UnityOpus::ErrorCode> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityOpus::Library*>(),
          { "OpusDecoderCreate", {}, { ::i2c::type_of<::UnityOpus::SamplingFrequency>(), ::i2c::type_of<::UnityOpus::NumChannels>(), ::i2c::type_of<::by_ref<::UnityOpus::ErrorCode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, samplingFrequency, channels, error);
}
inline int32_t UnityOpus::Library::OpusDecode(::System::IntPtr decoder, ::ArrayW<uint8_t> data, int32_t len, ::ArrayW<int16_t> pcm, int32_t frameSize, int32_t decodeFec) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusDecode",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                            ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, decoder, data, len, pcm, frameSize, decodeFec);
}
inline int32_t UnityOpus::Library::OpusDecodeFloat(::System::IntPtr decoder, ::ArrayW<uint8_t> data, int32_t len, ::ArrayW<float_t> pcm, int32_t frameSize, int32_t decodeFec) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusDecodeFloat",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                            ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, decoder, data, len, pcm, frameSize, decodeFec);
}
inline void UnityOpus::Library::OpusDecoderDestroy(::System::IntPtr decoder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { "OpusDecoderDestroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, decoder);
}
inline void UnityOpus::Library::OpusPcmSoftClip(::ArrayW<float_t> pcm, int32_t frameSize, ::UnityOpus::NumChannels channels, ::ArrayW<float_t> softclipMem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityOpus::Library*>(),
          { "OpusPcmSoftClip", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityOpus::NumChannels>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pcm, frameSize, channels, softclipMem);
}
inline void UnityOpus::Library::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityOpus::Library*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityOpus::Library* UnityOpus::Library::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityOpus::Library*>());
}
// Ctor Parameters []
constexpr ::UnityOpus::Library::Library() {}
