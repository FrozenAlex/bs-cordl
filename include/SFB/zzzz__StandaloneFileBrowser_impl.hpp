#pragma once
// IWYU pragma private; include "SFB/StandaloneFileBrowser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SFB/zzzz__StandaloneFileBrowser_def.hpp"
#include "SFB/zzzz__ExtensionFilter_def.hpp"
#include "SFB/zzzz__IStandaloneFileBrowser_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::SFB::StandaloneFileBrowser.OpenFilePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::StringW, bool)>(&::SFB::StandaloneFileBrowser::OpenFilePanel)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x58395a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(),
                                                { "OpenFilePanel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::StandaloneFileBrowser.OpenFilePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>, bool)>(&::SFB::StandaloneFileBrowser::OpenFilePanel)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58396cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(),
                            { "OpenFilePanel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::SFB::ExtensionFilter>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::StandaloneFileBrowser.OpenFilePanelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, bool, ::System::Action_1<::ArrayW<::StringW>>*)>(&::SFB::StandaloneFileBrowser::OpenFilePanelAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x58397cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(), { "OpenFilePanelAsync",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                                      ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::ArrayW<::StringW>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::StandaloneFileBrowser.OpenFilePanelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>, bool, ::System::Action_1<::ArrayW<::StringW>>*)>(
    &::SFB::StandaloneFileBrowser::OpenFilePanelAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58398fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(), { "OpenFilePanelAsync",
                                                                                {},
                                                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::SFB::ExtensionFilter>>(),
                                                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::ArrayW<::StringW>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::StandaloneFileBrowser.OpenFolderPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, bool)>(&::SFB::StandaloneFileBrowser::OpenFolderPanel)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5839a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(), { "OpenFolderPanel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::StandaloneFileBrowser.OpenFolderPanelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, bool, ::System::Action_1<::ArrayW<::StringW>>*)>(&::SFB::StandaloneFileBrowser::OpenFolderPanelAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5839afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::SFB::StandaloneFileBrowser*>(),
            { "OpenFolderPanelAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::ArrayW<::StringW>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::StandaloneFileBrowser.SaveFilePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::SFB::StandaloneFileBrowser::SaveFilePanel)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5839c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(),
                                                { "SaveFilePanel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::StandaloneFileBrowser.SaveFilePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>)>(&::SFB::StandaloneFileBrowser::SaveFilePanel)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5839d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(),
                            { "SaveFilePanel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::SFB::ExtensionFilter>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::StandaloneFileBrowser.SaveFilePanelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, ::StringW, ::System::Action_1<::StringW>*)>(&::SFB::StandaloneFileBrowser::SaveFilePanelAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5839e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(), { "SaveFilePanelAsync",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                                      ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::StandaloneFileBrowser.SaveFilePanelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>, ::System::Action_1<::StringW>*)>(
    &::SFB::StandaloneFileBrowser::SaveFilePanelAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5839f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(), { "SaveFilePanelAsync",
                                                                                {},
                                                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                  ::i2c::type_of<::ArrayW<::SFB::ExtensionFilter>>(), ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SFB::StandaloneFileBrowser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SFB::StandaloneFileBrowser::*)()>(&::SFB::StandaloneFileBrowser::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x583a068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void SFB::StandaloneFileBrowser::setStaticF__platformWrapper(::SFB::IStandaloneFileBrowser* value) {
  ::cordl_internals::setStaticField<::SFB::IStandaloneFileBrowser*, "_platformWrapper", ::SFB::StandaloneFileBrowser*>(std::forward<::SFB::IStandaloneFileBrowser*>(value));
}
inline ::SFB::IStandaloneFileBrowser* SFB::StandaloneFileBrowser::getStaticF__platformWrapper() {
  return ::cordl_internals::getStaticField<::SFB::IStandaloneFileBrowser*, "_platformWrapper", ::SFB::StandaloneFileBrowser*>();
}
inline ::ArrayW<::StringW> SFB::StandaloneFileBrowser::OpenFilePanel(::StringW title, ::StringW directory, ::StringW extension, bool multiselect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(),
                                              { "OpenFilePanel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, title, directory, extension, multiselect);
}
inline ::ArrayW<::StringW> SFB::StandaloneFileBrowser::OpenFilePanel(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter> extensions, bool multiselect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(),
                          { "OpenFilePanel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::SFB::ExtensionFilter>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, title, directory, extensions, multiselect);
}
inline void SFB::StandaloneFileBrowser::OpenFilePanelAsync(::StringW title, ::StringW directory, ::StringW extension, bool multiselect, ::System::Action_1<::ArrayW<::StringW>>* cb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(), { "OpenFilePanelAsync",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::ArrayW<::StringW>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, title, directory, extension, multiselect, cb);
}
inline void SFB::StandaloneFileBrowser::OpenFilePanelAsync(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter> extensions, bool multiselect,
                                                           ::System::Action_1<::ArrayW<::StringW>>* cb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(), { "OpenFilePanelAsync",
                                                                              {},
                                                                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::SFB::ExtensionFilter>>(),
                                                                                ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::ArrayW<::StringW>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, title, directory, extensions, multiselect, cb);
}
inline ::ArrayW<::StringW> SFB::StandaloneFileBrowser::OpenFolderPanel(::StringW title, ::StringW directory, bool multiselect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(), { "OpenFolderPanel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, title, directory, multiselect);
}
inline void SFB::StandaloneFileBrowser::OpenFolderPanelAsync(::StringW title, ::StringW directory, bool multiselect, ::System::Action_1<::ArrayW<::StringW>>* cb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::SFB::StandaloneFileBrowser*>(),
          { "OpenFolderPanelAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::ArrayW<::StringW>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, title, directory, multiselect, cb);
}
inline ::StringW SFB::StandaloneFileBrowser::SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::StringW extension) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(),
                                              { "SaveFilePanel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, title, directory, defaultName, extension);
}
inline ::StringW SFB::StandaloneFileBrowser::SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter> extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(),
                          { "SaveFilePanel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::SFB::ExtensionFilter>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, title, directory, defaultName, extensions);
}
inline void SFB::StandaloneFileBrowser::SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::StringW extension, ::System::Action_1<::StringW>* cb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(), { "SaveFilePanelAsync",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, title, directory, defaultName, extension, cb);
}
inline void SFB::StandaloneFileBrowser::SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter> extensions,
                                                           ::System::Action_1<::StringW>* cb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(), { "SaveFilePanelAsync",
                                                                              {},
                                                                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                ::i2c::type_of<::ArrayW<::SFB::ExtensionFilter>>(), ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, title, directory, defaultName, extensions, cb);
}
inline void SFB::StandaloneFileBrowser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::SFB::StandaloneFileBrowser*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::SFB::StandaloneFileBrowser* SFB::StandaloneFileBrowser::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SFB::StandaloneFileBrowser*>());
}
// Ctor Parameters []
constexpr ::SFB::StandaloneFileBrowser::StandaloneFileBrowser() {}
