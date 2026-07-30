#pragma once
// IWYU pragma private; include "System/Reflection/Emit/GenericTypeParameterBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GenericTypeParameterBuilder)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection::Emit {
class GenericTypeParameterBuilder;
}
// Write type traits
MARK_REF_T(::System::Reflection::Emit::GenericTypeParameterBuilder*);
DEFINE_IL2CPP_CLASS(::System::Reflection::Emit::GenericTypeParameterBuilder*, "System.Reflection.Emit", "GenericTypeParameterBuilder");
// Dependencies System.Reflection.TypeInfo
namespace System::Reflection::Emit {
// Is value type: false
// CS Name: System.Reflection.Emit.GenericTypeParameterBuilder
class CORDL_TYPE GenericTypeParameterBuilder : public ::System::Reflection::TypeInfo {
public:
  // Declarations
  __declspec(property(get = get_Assembly)) ::System::Reflection::Assembly* Assembly;

  __declspec(property(get = get_AssemblyQualifiedName)) ::StringW AssemblyQualifiedName;

  __declspec(property(get = get_BaseType)) ::System::Type* BaseType;

  __declspec(property(get = get_FullName)) ::StringW FullName;

  __declspec(property(get = get_GUID)) ::System::Guid GUID;

  __declspec(property(get = get_Module)) ::System::Reflection::Module* Module;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_UnderlyingSystemType)) ::System::Type* UnderlyingSystemType;

  /// @brief Method GetAttributeFlagsImpl, addr 0x5b8e820, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl();

  /// @brief Method GetConstructorImpl, addr 0x5b8e858, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                   ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types,
                                                                   ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// @brief Method GetConstructors, addr 0x5b8e890, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ConstructorInfo*> GetConstructors(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetCustomAttributes, addr 0x5b8e900, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x5b8e8c8, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*> GetCustomAttributes(bool inherit);

  /// @brief Method GetElementType, addr 0x5b8e938, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* GetElementType();

  /// @brief Method GetEvent, addr 0x5b8e970, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::EventInfo* GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetEvents, addr 0x5b8e9a8, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::EventInfo*> GetEvents(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetField, addr 0x5b8e9e0, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::FieldInfo* GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFields, addr 0x5b8ea18, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::FieldInfo*> GetFields(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetInterface, addr 0x5b8ea50, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* GetInterface(::StringW name, bool ignoreCase);

  /// @brief Method GetInterfaces, addr 0x5b8ea88, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*> GetInterfaces();

  /// @brief Method GetMembers, addr 0x5b8eac0, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*> GetMembers(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethodImpl, addr 0x5b8eaf8, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                         ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types,
                                                         ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// @brief Method GetMethods, addr 0x5b8eb30, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MethodInfo*> GetMethods(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetNestedType, addr 0x5b8eb68, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* GetNestedType(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetProperties, addr 0x5b8eba0, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::PropertyInfo*> GetProperties(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetPropertyImpl, addr 0x5b8ebd8, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType,
                                                             ::ArrayW<::System::Type*> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// @brief Method HasElementTypeImpl, addr 0x5b8ec10, size 0x38, virtual true, abstract: false, final false
  inline bool HasElementTypeImpl();

  /// @brief Method InvokeMember, addr 0x5b8ec48, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* InvokeMember(::StringW name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target, ::ArrayW<::System::Object*> args,
                                        ::ArrayW<::System::Reflection::ParameterModifier> modifiers, ::System::Globalization::CultureInfo* culture, ::ArrayW<::StringW> namedParameters);

  /// @brief Method IsArrayImpl, addr 0x5b8ec80, size 0x38, virtual true, abstract: false, final false
  inline bool IsArrayImpl();

  /// @brief Method IsByRefImpl, addr 0x5b8ecb8, size 0x38, virtual true, abstract: false, final false
  inline bool IsByRefImpl();

  /// @brief Method IsCOMObjectImpl, addr 0x5b8ecf0, size 0x38, virtual true, abstract: false, final false
  inline bool IsCOMObjectImpl();

  /// @brief Method IsDefined, addr 0x5b8ed28, size 0x38, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method IsPointerImpl, addr 0x5b8ed60, size 0x38, virtual true, abstract: false, final false
  inline bool IsPointerImpl();

  /// @brief Method IsPrimitiveImpl, addr 0x5b8ed98, size 0x38, virtual true, abstract: false, final false
  inline bool IsPrimitiveImpl();

  /// @brief Method get_Assembly, addr 0x5b8e628, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_AssemblyQualifiedName, addr 0x5b8e660, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_AssemblyQualifiedName();

  /// @brief Method get_BaseType, addr 0x5b8e698, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* get_BaseType();

  /// @brief Method get_FullName, addr 0x5b8e6d0, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_FullName();

  /// @brief Method get_GUID, addr 0x5b8e708, size 0x38, virtual true, abstract: false, final false
  inline ::System::Guid get_GUID();

  /// @brief Method get_Module, addr 0x5b8e740, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_Name, addr 0x5b8e778, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Namespace, addr 0x5b8e7b0, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_UnderlyingSystemType, addr 0x5b8e7e8, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* get_UnderlyingSystemType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericTypeParameterBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericTypeParameterBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericTypeParameterBuilder(GenericTypeParameterBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericTypeParameterBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericTypeParameterBuilder(GenericTypeParameterBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3567 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Reflection::Emit::GenericTypeParameterBuilder) == 0x18, "Size mismatch!");

} // namespace System::Reflection::Emit
