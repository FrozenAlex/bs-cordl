#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AsyncPreloader.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncPreloader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncPreloader.PreloadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BGLib::AppFlow::Initialization::AsyncPreloader::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncPreloader::PreloadAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncPreloader*>(), { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncPreloader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncPreloader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncPreloader::*)()>(&::BGLib::AppFlow::Initialization::AsyncPreloader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x324f3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncPreloader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::AsyncPreloader::PreloadAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncPreloader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncPreloader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncPreloader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::AsyncPreloader* BGLib::AppFlow::Initialization::AsyncPreloader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::AsyncPreloader*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncPreloader::AsyncPreloader() {}
