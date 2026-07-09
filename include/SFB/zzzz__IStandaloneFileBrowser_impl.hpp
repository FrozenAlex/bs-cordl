#pragma once
// IWYU pragma private; include "SFB/IStandaloneFileBrowser.hpp"
#include "SFB/zzzz__IStandaloneFileBrowser_def.hpp"
#include "SFB/zzzz__ExtensionFilter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::SFB::IStandaloneFileBrowser.OpenFilePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>, bool)>(
    &::SFB::IStandaloneFileBrowser::OpenFilePanel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), { ::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::IStandaloneFileBrowser.OpenFolderPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, bool)>(&::SFB::IStandaloneFileBrowser::OpenFolderPanel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), { ::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::IStandaloneFileBrowser.SaveFilePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>)>(
    &::SFB::IStandaloneFileBrowser::SaveFilePanel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), { ::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::IStandaloneFileBrowser.OpenFilePanelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>, bool, ::System::Action_1<::ArrayW<::StringW>>*)>(
    &::SFB::IStandaloneFileBrowser::OpenFilePanelAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), { ::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::IStandaloneFileBrowser.OpenFolderPanelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, bool, ::System::Action_1<::ArrayW<::StringW>>*)>(
    &::SFB::IStandaloneFileBrowser::OpenFolderPanelAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), { ::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::IStandaloneFileBrowser.SaveFilePanelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>, ::System::Action_1<::StringW>*)>(
    &::SFB::IStandaloneFileBrowser::SaveFilePanelAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), { ::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), 5 }));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW> SFB::IStandaloneFileBrowser::OpenFilePanel(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter> extensions, bool multiselect) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, title, directory, extensions, multiselect);
}
inline ::ArrayW<::StringW> SFB::IStandaloneFileBrowser::OpenFolderPanel(::StringW title, ::StringW directory, bool multiselect) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, title, directory, multiselect);
}
inline ::StringW SFB::IStandaloneFileBrowser::SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter> extensions) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, title, directory, defaultName, extensions);
}
inline void SFB::IStandaloneFileBrowser::OpenFilePanelAsync(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter> extensions, bool multiselect,
                                                            ::System::Action_1<::ArrayW<::StringW>>* cb) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, title, directory, extensions, multiselect, cb);
}
inline void SFB::IStandaloneFileBrowser::OpenFolderPanelAsync(::StringW title, ::StringW directory, bool multiselect, ::System::Action_1<::ArrayW<::StringW>>* cb) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, title, directory, multiselect, cb);
}
inline void SFB::IStandaloneFileBrowser::SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter> extensions,
                                                            ::System::Action_1<::StringW>* cb) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::SFB::IStandaloneFileBrowser*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, title, directory, defaultName, extensions, cb);
}
