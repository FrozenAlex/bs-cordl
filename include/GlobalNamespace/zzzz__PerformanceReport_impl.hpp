#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceReport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceReport_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport.CreateTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::GlobalNamespace::PerformanceReport::CreateTimestamp)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x57d563c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "CreateTimestamp", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport.CreateReportDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime, ::GlobalNamespace::GameplayCoreSceneSetupData*)>(
    &::GlobalNamespace::PerformanceReport::CreateReportDescriptor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x57d56b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(),
                                                { "CreateReportDescriptor", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport.ListAggregatedFps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<float_t>, float_t)>(&::GlobalNamespace::PerformanceReport::ListAggregatedFps)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x57d5324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "ListAggregatedFps", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport.ListFrameTimes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<float_t>)>(&::GlobalNamespace::PerformanceReport::ListFrameTimes)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x57d5208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "ListFrameTimes", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport.ListStat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<float_t>)>(&::GlobalNamespace::PerformanceReport::ListStat)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x57d5e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "ListStat", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport.ListStat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<int64_t>)>(&::GlobalNamespace::PerformanceReport::ListStat)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x57d5f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "ListStat", {}, { ::i2c::type_of<::ArrayW<int64_t>>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::PerformanceReport::CreateTimestamp(::System::DateTime timestamp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "CreateTimestamp", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, timestamp);
}
inline ::StringW GlobalNamespace::PerformanceReport::CreateReportDescriptor(::System::DateTime timestamp, ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(),
                                              { "CreateReportDescriptor", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, timestamp, sceneSetupData);
}
inline ::StringW GlobalNamespace::PerformanceReport::ListAggregatedFps(::ArrayW<float_t> frameDurations, float_t minWindowSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "ListAggregatedFps", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, frameDurations, minWindowSize);
}
inline ::StringW GlobalNamespace::PerformanceReport::ListFrameTimes(::ArrayW<float_t> frameTimes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "ListFrameTimes", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, frameTimes);
}
inline ::StringW GlobalNamespace::PerformanceReport::ListStat(::ArrayW<float_t> statList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "ListStat", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, statList);
}
inline ::StringW GlobalNamespace::PerformanceReport::ListStat(::ArrayW<int64_t> statList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "ListStat", {}, { ::i2c::type_of<::ArrayW<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, statList);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceReport::PerformanceReport() {}
