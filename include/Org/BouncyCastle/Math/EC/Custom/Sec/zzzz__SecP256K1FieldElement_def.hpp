#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP256K1FieldElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecP256K1FieldElement)
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP256K1FieldElement;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP256K1FieldElement");
// Dependencies Org.BouncyCastle.Math.EC.AbstractFpFieldElement
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement
class CORDL_TYPE SecP256K1FieldElement : public ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
public:
  // Declarations
  __declspec(property(get = get_FieldName)) ::StringW FieldName;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_IsOne)) bool IsOne;

  __declspec(property(get = get_IsZero)) bool IsZero;

  /// @brief Field Q, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Q, put = setStaticF_Q)) ::Org::BouncyCastle::Math::BigInteger* Q;

  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::ArrayW<uint32_t> x;

  /// @brief Method Add, addr 0x34c8d60, size 0xe4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method AddOne, addr 0x34c8e44, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();

  /// @brief Method Divide, addr 0x34c90a4, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Equals, addr 0x34c9624, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x34c9754, size 0x2c, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement* other);

  /// @brief Method Equals, addr 0x34c96bc, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::ECFieldElement* other);

  /// @brief Method GetHashCode, addr 0x34c9780, size 0xec, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Invert, addr 0x34c92c0, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Invert();

  /// @brief Method Multiply, addr 0x34c8fc0, size 0xe4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Negate, addr 0x34c9190, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Negate();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement* New_ctor();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement* New_ctor(::ArrayW<uint32_t> x);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement* New_ctor(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method Sqrt, addr 0x34c9358, size 0x2cc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();

  /// @brief Method Square, addr 0x34c9228, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Square();

  /// @brief Method Subtract, addr 0x34c8edc, size 0xe4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method TestBitZero, addr 0x34c8c84, size 0x24, virtual true, abstract: false, final false
  inline bool TestBitZero();

  /// @brief Method ToBigInteger, addr 0x34c8ca8, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger();

  constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_x() const;

  constexpr ::ArrayW<uint32_t>& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_x(::ArrayW<uint32_t> value);

  /// @brief Method .ctor, addr 0x34c8c50, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x34c7694, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint32_t> x);

  /// @brief Method .ctor, addr 0x34c70b8, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Q();

  /// @brief Method get_FieldName, addr 0x34c8cb4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_FieldName();

  /// @brief Method get_FieldSize, addr 0x34c8cf8, size 0x68, virtual true, abstract: false, final false
  inline int32_t get_FieldSize();

  /// @brief Method get_IsOne, addr 0x34c8c78, size 0xc, virtual true, abstract: false, final false
  inline bool get_IsOne();

  /// @brief Method get_IsZero, addr 0x34c8c6c, size 0xc, virtual true, abstract: false, final false
  inline bool get_IsZero();

  static inline void setStaticF_Q(::Org::BouncyCastle::Math::BigInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecP256K1FieldElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecP256K1FieldElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecP256K1FieldElement(SecP256K1FieldElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecP256K1FieldElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecP256K1FieldElement(SecP256K1FieldElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1423 };

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t> ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement, ___x) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
