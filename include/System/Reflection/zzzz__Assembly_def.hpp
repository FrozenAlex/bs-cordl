#pragma once
// IWYU pragma private; include "System/Reflection/Assembly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Assembly)
namespace System::Globalization {
class CultureInfo;
}
namespace System::IO {
class Stream;
}
namespace System::Reflection {
struct AssemblyNameFlags;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class Assembly_ResolveEventHolder;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Reflection {
class ManifestResourceInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Runtime::InteropServices {
class _Assembly;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Policy {
class Evidence;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class Assembly_ResolveEventHolder;
}
// Write type traits
MARK_REF_T(::System::Reflection::Assembly*);
MARK_REF_T(::System::Reflection::Assembly_ResolveEventHolder*);
DEFINE_IL2CPP_CLASS(::System::Reflection::Assembly*, "System.Reflection", "Assembly");
DEFINE_IL2CPP_CLASS(::System::Reflection::Assembly_ResolveEventHolder*, "System.Reflection", "Assembly/ResolveEventHolder");
// Dependencies System.Object
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.Assembly/ResolveEventHolder
class CORDL_TYPE Assembly_ResolveEventHolder : public ::System::Object {
public:
  // Declarations
  static inline ::System::Reflection::Assembly_ResolveEventHolder* New_ctor();

  /// @brief Method .ctor, addr 0x5b83b38, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Assembly_ResolveEventHolder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Assembly_ResolveEventHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Assembly_ResolveEventHolder(Assembly_ResolveEventHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Assembly_ResolveEventHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Assembly_ResolveEventHolder(Assembly_ResolveEventHolder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3536 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Reflection::Assembly_ResolveEventHolder) == 0x10, "Size mismatch!");

} // namespace System::Reflection
// Dependencies System.Object
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.Assembly
class CORDL_TYPE Assembly : public ::System::Object {
public:
  // Declarations
  using ResolveEventHolder = ::System::Reflection::Assembly_ResolveEventHolder;

  __declspec(property(get = get_CodeBase)) ::StringW CodeBase;

  __declspec(property(get = get_FullName)) ::StringW FullName;

  __declspec(property(get = get_IsFullyTrusted)) bool IsFullyTrusted;

  __declspec(property(get = get_Location)) ::StringW Location;

  __declspec(property(get = get_MonoAssembly)) ::System::IntPtr MonoAssembly;

  __declspec(property(get = get_ReflectionOnly)) bool ReflectionOnly;

  /// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
  constexpr operator ::System::Reflection::ICustomAttributeProvider*() noexcept;

  /// @brief Convert operator to "::System::Runtime::InteropServices::_Assembly"
  constexpr operator ::System::Runtime::InteropServices::_Assembly*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CreateNIE, addr 0x5b839d4, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateNIE();

  /// @brief Method Equals, addr 0x5b839c8, size 0xc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetAssembly, addr 0x5b82d40, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* GetAssembly(::System::Type* type);

  /// @brief Method GetCallingAssembly, addr 0x5b833c0, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* GetCallingAssembly();

  /// @brief Method GetCustomAttributes, addr 0x5b829fc, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x5b829c4, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*> GetCustomAttributes(bool inherit);

  /// @brief Method GetExecutingAssembly, addr 0x5b83370, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* GetExecutingAssembly();

  /// @brief Method GetFlags, addr 0x5b82c70, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Reflection::AssemblyNameFlags GetFlags();

  /// @brief Method GetHashCode, addr 0x5b839b4, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetManifestResourceInfo, addr 0x5b83944, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::ManifestResourceInfo* GetManifestResourceInfo(::StringW resourceName);

  /// @brief Method GetManifestResourceNames, addr 0x5b833d8, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW> GetManifestResourceNames();

  /// @brief Method GetManifestResourceStream, addr 0x5b82a34, size 0x38, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetManifestResourceStream(::StringW name);

  /// @brief Method GetManifestResourceStream, addr 0x5b82bdc, size 0x10, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetManifestResourceStream(::StringW name, ::by_ref<::System::Threading::StackCrawlMark> stackMark, bool skipSecurityCheck);

  /// @brief Method GetManifestResourceStream, addr 0x5b82a6c, size 0x170, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetManifestResourceStream(::System::Type* type, ::StringW name, bool skipSecurityCheck, ::by_ref<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method GetModule, addr 0x5b83a80, size 0x24, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* GetModule(::StringW name);

  /// @brief Method GetModules, addr 0x5b83ac8, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::Module*> GetModules(bool getResourceModules);

  /// @brief Method GetModulesInternal, addr 0x5b83338, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::Module*> GetModulesInternal();

  /// @brief Method GetName, addr 0x5b82d24, size 0x14, virtual true, abstract: false, final false
  inline ::System::Reflection::AssemblyName* GetName();

  /// @brief Method GetName, addr 0x5b82cec, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::AssemblyName* GetName(bool copiedName);

  /// @brief Method GetObjectData, addr 0x5b82954, size 0x38, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetPublicKey, addr 0x5b82c18, size 0x2c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t> GetPublicKey();

  /// @brief Method GetReferencedAssemblies, addr 0x5b83aa4, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::AssemblyName*> GetReferencedAssemblies();

  /// @brief Method GetReferencedAssemblies, addr 0x5b83410, size 0x2b0, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::AssemblyName*> GetReferencedAssemblies(::System::Reflection::Assembly* _cordl_module);

  /// @brief Method GetSimpleName, addr 0x5b82bec, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW GetSimpleName();

  /// @brief Method GetType, addr 0x5b82cd0, size 0x18, virtual true, abstract: false, final false
  inline ::System::Type* GetType(::StringW name);

  /// @brief Method GetType, addr 0x5b82cbc, size 0x14, virtual true, abstract: false, final false
  inline ::System::Type* GetType(::StringW name, bool throwOnError);

  /// @brief Method GetType, addr 0x5b83a5c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* GetType(::StringW name, bool throwOnError, bool ignoreCase);

  /// @brief Method GetTypes, addr 0x5b82ca8, size 0x14, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*> GetTypes();

  /// @brief Method GetTypes, addr 0x5b82c9c, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*> GetTypes(bool exportedOnly);

  /// @brief Method GetVersion, addr 0x5b82c44, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Version* GetVersion();

  /// @brief Method InternalGetReferencedAssemblies, addr 0x5b833d4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr InternalGetReferencedAssemblies(::System::Reflection::Assembly* _cordl_module);

  /// @brief Method InternalGetSatelliteAssembly, addr 0x5b82dc4, size 0x3e8, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeAssembly* InternalGetSatelliteAssembly(::StringW name, ::System::Globalization::CultureInfo* culture, ::System::Version* version, bool throwOnFileNotFound,
                                                                             ::by_ref<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method InternalGetType, addr 0x5b82ce8, size 0x4, virtual false, abstract: false, final false
  inline ::System::Type* InternalGetType(::System::Reflection::Module* _cordl_module, ::StringW name, bool throwOnError, bool ignoreCase);

  /// @brief Method IsDefined, addr 0x5b8298c, size 0x38, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method Load, addr 0x5b83250, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* Load(::StringW assemblyString);

  /// @brief Method LoadFrom, addr 0x5b8324c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* LoadFrom(::StringW assemblyFile, bool refOnly, ::by_ref<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method LoadWithPartialName, addr 0x5b832b8, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* LoadWithPartialName(::StringW partialName);

  /// @brief Method LoadWithPartialName, addr 0x5b832c4, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* LoadWithPartialName(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence);

  /// @brief Method LoadWithPartialName, addr 0x5b832d0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* LoadWithPartialName(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence, bool oldBehavior);

  static inline ::System::Reflection::Assembly* New_ctor();

  /// @brief Method ReflectionOnlyLoad, addr 0x5b83274, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* ReflectionOnlyLoad(::StringW assemblyString);

  /// @brief Method ToString, addr 0x5b82d38, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x5b83b34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodeBase, addr 0x5b82874, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_CodeBase();

  /// @brief Method get_FullName, addr 0x5b828ac, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_FullName();

  /// @brief Method get_IsFullyTrusted, addr 0x5b83a54, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsFullyTrusted();

  /// @brief Method get_Location, addr 0x5b8291c, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_Location();

  /// @brief Method get_MonoAssembly, addr 0x5b828e4, size 0x38, virtual true, abstract: false, final false
  inline ::System::IntPtr get_MonoAssembly();

  /// @brief Method get_ReflectionOnly, addr 0x5b8397c, size 0x38, virtual true, abstract: false, final false
  inline bool get_ReflectionOnly();

  /// @brief Convert to "::System::Reflection::ICustomAttributeProvider"
  constexpr ::System::Reflection::ICustomAttributeProvider* i___System__Reflection__ICustomAttributeProvider() noexcept;

  /// @brief Convert to "::System::Runtime::InteropServices::_Assembly"
  constexpr ::System::Runtime::InteropServices::_Assembly* i___System__Runtime__InteropServices___Assembly() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method load_with_partial_name, addr 0x5b832cc, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* load_with_partial_name(::StringW name, ::System::Security::Policy::Evidence* e);

  /// @brief Method op_Equality, addr 0x5b83aec, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right);

  /// @brief Method op_Inequality, addr 0x5b831f4, size 0x58, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Assembly();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Assembly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Assembly(Assembly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Assembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Assembly(Assembly const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3537 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Reflection::Assembly) == 0x10, "Size mismatch!");

} // namespace System::Reflection
