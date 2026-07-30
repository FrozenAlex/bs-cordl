#pragma once
// IWYU pragma private; include "Zenject/BindingUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BindingUtil)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct InvalidBindResponses;
}
// Forward declare root types
namespace Zenject {
class BindingUtil;
}
// Write type traits
MARK_REF_T(::Zenject::BindingUtil*);
DEFINE_IL2CPP_CLASS(::Zenject::BindingUtil*, "Zenject", "BindingUtil");
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.BindingUtil
class CORDL_TYPE BindingUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method AssertConcreteTypeListIsNotEmpty, addr 0x6e5abf8, size 0x78, virtual false, abstract: false, final false
  static inline void AssertConcreteTypeListIsNotEmpty(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes);

  /// @brief Method AssertDerivesFromUnityObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertDerivesFromUnityObject();

  /// @brief Method AssertDerivesFromUnityObject, addr 0x6e5970c, size 0xa0, virtual false, abstract: false, final false
  static inline void AssertDerivesFromUnityObject(::System::Type* type);

  /// @brief Method AssertDerivesFromUnityObject, addr 0x6e59478, size 0x294, virtual false, abstract: false, final false
  static inline void AssertDerivesFromUnityObject(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertInstanceDerivesFromOrEqual, addr 0x6e5b53c, size 0xec, virtual false, abstract: false, final false
  static inline void AssertInstanceDerivesFromOrEqual(::System::Object* instance, ::System::Type* baseType);

  /// @brief Method AssertInstanceDerivesFromOrEqual, addr 0x6e5b274, size 0x2c8, virtual false, abstract: false, final false
  static inline void AssertInstanceDerivesFromOrEqual(::System::Object* instance, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertIsComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsComponent();

  /// @brief Method AssertIsComponent, addr 0x6e5a3fc, size 0xd0, virtual false, abstract: false, final false
  static inline void AssertIsComponent(::System::Type* type);

  /// @brief Method AssertIsComponent, addr 0x6e5a168, size 0x294, virtual false, abstract: false, final false
  static inline void AssertIsComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsDerivedFromType, addr 0x6e5aa90, size 0x168, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromType(::System::Type* concreteType, ::System::Type* parentType);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x6e5afc8, size 0x2ac, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Type* concreteType, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x6e5ad20, size 0x2a8, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes,
                                              ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x6e5ac70, size 0xb0, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes,
                                              ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes, ::Zenject::InvalidBindResponses invalidBindResponse);

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsInterfaceOrComponent();

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x6e5a068, size 0x100, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrComponent(::System::Type* type);

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x6e59dd4, size 0x294, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsInterfaceOrScriptableObject();

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x6e59cd4, size 0x100, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrScriptableObject(::System::Type* type);

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x6e59a40, size 0x294, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrScriptableObject(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsNotAbstract, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsNotAbstract();

  /// @brief Method AssertIsNotAbstract, addr 0x6e5a760, size 0x9c, virtual false, abstract: false, final false
  static inline void AssertIsNotAbstract(::System::Type* type);

  /// @brief Method AssertIsNotAbstract, addr 0x6e5a7fc, size 0x294, virtual false, abstract: false, final false
  static inline void AssertIsNotAbstract(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsNotComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsNotComponent();

  /// @brief Method AssertIsNotComponent, addr 0x6e593a4, size 0xd4, virtual false, abstract: false, final false
  static inline void AssertIsNotComponent(::System::Type* type);

  /// @brief Method AssertIsNotComponent, addr 0x6e59110, size 0x294, virtual false, abstract: false, final false
  static inline void AssertIsNotComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsValidGameObject, addr 0x6e5909c, size 0x74, virtual false, abstract: false, final false
  static inline void AssertIsValidGameObject(::UnityEngine::GameObject* gameObject);

  /// @brief Method AssertIsValidPrefab, addr 0x6e55a98, size 0x74, virtual false, abstract: false, final false
  static inline void AssertIsValidPrefab(::UnityEngine::Object* prefab);

  /// @brief Method AssertIsValidResourcePath, addr 0x6e56034, size 0x64, virtual false, abstract: false, final false
  static inline void AssertIsValidResourcePath(::StringW resourcePath);

  /// @brief Method AssertTypesAreNotAbstract, addr 0x6e5a4cc, size 0x294, virtual false, abstract: false, final false
  static inline void AssertTypesAreNotAbstract(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertTypesAreNotComponents, addr 0x6e597ac, size 0x294, virtual false, abstract: false, final false
  static inline void AssertTypesAreNotComponents(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method CreateCachedProvider, addr 0x6e5b628, size 0x108, virtual false, abstract: false, final false
  static inline ::Zenject::IProvider* CreateCachedProvider(::Zenject::IProvider* creator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingUtil(BindingUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingUtil(BindingUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14277 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::BindingUtil) == 0x10, "Size mismatch!");

} // namespace Zenject
