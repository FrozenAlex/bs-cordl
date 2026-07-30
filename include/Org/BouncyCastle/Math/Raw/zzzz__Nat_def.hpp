#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Raw/Nat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Math::Raw::Nat*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Math::Raw::Nat*, "Org.BouncyCastle.Math.Raw", "Nat");
// Dependencies System.Object
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Raw.Nat
class CORDL_TYPE Nat : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x35302d0, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t Add(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method Add33At, addr 0x353074c, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t Add33At(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method Add33At, addr 0x3530664, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t Add33At(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method Add33To, addr 0x3530834, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t Add33To(int32_t len, uint32_t x, ::ArrayW<uint32_t> z);

  /// @brief Method Add33To, addr 0x353089c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t Add33To(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method AddBothTo, addr 0x35309b4, size 0xc4, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method AddBothTo, addr 0x3530918, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method AddDWordAt, addr 0x3530af0, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t AddDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method AddDWordAt, addr 0x3530a78, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t AddDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method AddDWordTo, addr 0x3530b70, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t AddDWordTo(int32_t len, uint64_t x, ::ArrayW<uint32_t> z);

  /// @brief Method AddDWordTo, addr 0x3530bd4, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t AddDWordTo(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method AddTo, addr 0x3530c4c, size 0x98, virtual false, abstract: false, final false
  static inline uint32_t AddTo(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method AddTo, addr 0x3530ce4, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t AddTo(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t cIn);

  /// @brief Method AddTo, addr 0x3530444, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t AddTo(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method AddToEachOther, addr 0x3530d74, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t AddToEachOther(int32_t len, ::ArrayW<uint32_t> u, int32_t uOff, ::ArrayW<uint32_t> v, int32_t vOff);

  /// @brief Method AddWordAt, addr 0x3530e64, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t AddWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method AddWordAt, addr 0x3530e10, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t AddWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method AddWordTo, addr 0x3530ec0, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t AddWordTo(int32_t len, uint32_t x, ::ArrayW<uint32_t> z);

  /// @brief Method AddWordTo, addr 0x3530f08, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t AddWordTo(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method CAdd, addr 0x3530f5c, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t CAdd(int32_t len, int32_t mask, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method CMov, addr 0x353107c, size 0x84, virtual false, abstract: false, final false
  static inline void CMov(int32_t len, int32_t mask, ::ArrayW<int32_t> x, int32_t xOff, ::ArrayW<int32_t> z, int32_t zOff);

  /// @brief Method CMov, addr 0x3530ff8, size 0x84, virtual false, abstract: false, final false
  static inline void CMov(int32_t len, int32_t mask, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method CSub, addr 0x35313d8, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t CSub(int32_t len, int32_t mask, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method CSub, addr 0x353133c, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t CSub(int32_t len, int32_t mask, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method Compare, addr 0x353117c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Compare(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff);

  /// @brief Method Compare, addr 0x3531100, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Compare(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y);

  /// @brief Method Copy, addr 0x352fde4, size 0x80, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> Copy(int32_t len, ::ArrayW<uint32_t> x);

  /// @brief Method Copy, addr 0x3531214, size 0x20, virtual false, abstract: false, final false
  static inline void Copy(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Copy, addr 0x35311f8, size 0x1c, virtual false, abstract: false, final false
  static inline void Copy(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method Copy64, addr 0x3531234, size 0x80, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> Copy64(int32_t len, ::ArrayW<uint64_t> x);

  /// @brief Method Copy64, addr 0x35312d0, size 0x20, virtual false, abstract: false, final false
  static inline void Copy64(int32_t len, ::ArrayW<uint64_t> x, int32_t xOff, ::ArrayW<uint64_t> z, int32_t zOff);

  /// @brief Method Copy64, addr 0x35312b4, size 0x1c, virtual false, abstract: false, final false
  static inline void Copy64(int32_t len, ::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);

  /// @brief Method Create, addr 0x352fe64, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> Create(int32_t len);

  /// @brief Method Create64, addr 0x35312f0, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> Create64(int32_t len);

  /// @brief Method Dec, addr 0x35314f8, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t Dec(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method Dec, addr 0x353149c, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t Dec(int32_t len, ::ArrayW<uint32_t> z);

  /// @brief Method DecAt, addr 0x3531620, size 0x64, virtual false, abstract: false, final false
  static inline int32_t DecAt(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method DecAt, addr 0x35315b4, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t DecAt(int32_t len, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method Eq, addr 0x3531684, size 0x68, virtual false, abstract: false, final false
  static inline bool Eq(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y);

  /// @brief Method FromBigInteger, addr 0x35316ec, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> FromBigInteger(int32_t bits, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method FromBigInteger64, addr 0x35317c4, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> FromBigInteger64(int32_t bits, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method GetBit, addr 0x353189c, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t GetBit(::ArrayW<uint32_t> x, int32_t bit);

  /// @brief Method Gte, addr 0x3530038, size 0x74, virtual false, abstract: false, final false
  static inline bool Gte(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y);

  /// @brief Method Inc, addr 0x3531954, size 0xbc, virtual false, abstract: false, final false
  static inline uint32_t Inc(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method Inc, addr 0x35318f8, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t Inc(int32_t len, ::ArrayW<uint32_t> z);

  /// @brief Method IncAt, addr 0x35307d0, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t IncAt(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method IncAt, addr 0x35306e0, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t IncAt(int32_t len, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method IsOne, addr 0x352fd6c, size 0x78, virtual false, abstract: false, final false
  static inline bool IsOne(int32_t len, ::ArrayW<uint32_t> x);

  /// @brief Method IsZero, addr 0x352fcf8, size 0x74, virtual false, abstract: false, final false
  static inline bool IsZero(int32_t len, ::ArrayW<uint32_t> x);

  /// @brief Method LessThan, addr 0x3531a8c, size 0x94, virtual false, abstract: false, final false
  static inline int32_t LessThan(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff);

  /// @brief Method LessThan, addr 0x3531a10, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t LessThan(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y);

  /// @brief Method Mul, addr 0x3531d10, size 0x11c, virtual false, abstract: false, final false
  static inline void Mul(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method Mul, addr 0x3531b20, size 0xec, virtual false, abstract: false, final false
  static inline void Mul(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz);

  /// @brief Method Mul, addr 0x3531eb4, size 0x124, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t> x, int32_t xOff, int32_t xLen, ::ArrayW<uint32_t> y, int32_t yOff, int32_t yLen, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method Mul31BothAdd, addr 0x353219c, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t Mul31BothAdd(int32_t len, uint32_t a, ::ArrayW<uint32_t> x, uint32_t b, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method MulAddTo, addr 0x35320ac, size 0xf0, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method MulAddTo, addr 0x3531fd8, size 0xd4, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz);

  /// @brief Method MulWord, addr 0x3531e2c, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t MulWord(int32_t len, uint32_t x, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method MulWord, addr 0x3531c0c, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t MulWord(int32_t len, uint32_t x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method MulWordAddTo, addr 0x3531c80, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t MulWordAddTo(int32_t len, uint32_t x, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method MulWordDwordAddAt, addr 0x3532248, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t MulWordDwordAddAt(int32_t len, uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zPos);

  static inline ::Org::BouncyCastle::Math::Raw::Nat* New_ctor();

  /// @brief Method ShiftDownBit, addr 0x3532348, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t> x, uint32_t c, ::ArrayW<uint32_t> z);

  /// @brief Method ShiftDownBit, addr 0x35323b8, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, uint32_t c, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method ShiftDownBit, addr 0x353058c, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t> z, uint32_t c);

  /// @brief Method ShiftDownBit, addr 0x35322e8, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t c);

  /// @brief Method ShiftDownBits, addr 0x35324b0, size 0x8c, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t> x, int32_t bits, uint32_t c, ::ArrayW<uint32_t> z);

  /// @brief Method ShiftDownBits, addr 0x353253c, size 0x98, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, int32_t bits, uint32_t c, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method ShiftDownBits, addr 0x3530518, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t> z, int32_t bits, uint32_t c);

  /// @brief Method ShiftDownBits, addr 0x3532434, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, int32_t bits, uint32_t c);

  /// @brief Method ShiftDownWord, addr 0x35304c4, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownWord(int32_t len, ::ArrayW<uint32_t> z, uint32_t c);

  /// @brief Method ShiftUpBit, addr 0x3532690, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t> x, uint32_t c, ::ArrayW<uint32_t> z);

  /// @brief Method ShiftUpBit, addr 0x3532704, size 0x8c, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, uint32_t c, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method ShiftUpBit, addr 0x35325d4, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t> z, uint32_t c);

  /// @brief Method ShiftUpBit, addr 0x353262c, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t c);

  /// @brief Method ShiftUpBit64, addr 0x3532790, size 0x90, virtual false, abstract: false, final false
  static inline uint64_t ShiftUpBit64(int32_t len, ::ArrayW<uint64_t> x, int32_t xOff, uint64_t c, ::ArrayW<uint64_t> z, int32_t zOff);

  /// @brief Method ShiftUpBits, addr 0x353299c, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t> x, int32_t bits, uint32_t c, ::ArrayW<uint32_t> z);

  /// @brief Method ShiftUpBits, addr 0x3532a2c, size 0xa8, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, int32_t bits, uint32_t c, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method ShiftUpBits, addr 0x3532820, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t> z, int32_t bits, uint32_t c);

  /// @brief Method ShiftUpBits, addr 0x3532894, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, int32_t bits, uint32_t c);

  /// @brief Method ShiftUpBits64, addr 0x3532ad4, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ShiftUpBits64(int32_t len, ::ArrayW<uint64_t> x, int32_t xOff, int32_t bits, uint64_t c, ::ArrayW<uint64_t> z, int32_t zOff);

  /// @brief Method ShiftUpBits64, addr 0x3532914, size 0x88, virtual false, abstract: false, final false
  static inline uint64_t ShiftUpBits64(int32_t len, ::ArrayW<uint64_t> z, int32_t zOff, int32_t bits, uint64_t c);

  /// @brief Method Square, addr 0x3532d5c, size 0x174, virtual false, abstract: false, final false
  static inline void Square(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method Square, addr 0x3532b80, size 0x14c, virtual false, abstract: false, final false
  static inline void Square(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> zz);

  /// @brief Method SquareWordAdd, addr 0x3532ff8, size 0x98, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAdd(::ArrayW<uint32_t> x, int32_t xOff, int32_t xPos, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SquareWordAdd, addr 0x3532f68, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAdd(::ArrayW<uint32_t> x, int32_t xPos, ::ArrayW<uint32_t> z);

  /// @brief Method SquareWordAddTo, addr 0x3532ed0, size 0x98, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAddTo(::ArrayW<uint32_t> x, int32_t xOff, int32_t xPos, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SquareWordAddTo, addr 0x3532ccc, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAddTo(::ArrayW<uint32_t> x, int32_t xPos, ::ArrayW<uint32_t> z);

  /// @brief Method Sub, addr 0x3533090, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t Sub(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Sub, addr 0x35303b0, size 0x94, virtual false, abstract: false, final false
  static inline int32_t Sub(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method Sub33At, addr 0x35331c0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Sub33At(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method Sub33At, addr 0x353314c, size 0x74, virtual false, abstract: false, final false
  static inline int32_t Sub33At(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method Sub33From, addr 0x353323c, size 0x60, virtual false, abstract: false, final false
  static inline int32_t Sub33From(int32_t len, uint32_t x, ::ArrayW<uint32_t> z);

  /// @brief Method Sub33From, addr 0x353329c, size 0x74, virtual false, abstract: false, final false
  static inline int32_t Sub33From(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SubBothFrom, addr 0x35333ac, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t SubBothFrom(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SubBothFrom, addr 0x3533310, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t SubBothFrom(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method SubDWordAt, addr 0x35334e4, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t SubDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method SubDWordAt, addr 0x3533470, size 0x74, virtual false, abstract: false, final false
  static inline int32_t SubDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method SubDWordFrom, addr 0x3533560, size 0x60, virtual false, abstract: false, final false
  static inline int32_t SubDWordFrom(int32_t len, uint64_t x, ::ArrayW<uint32_t> z);

  /// @brief Method SubDWordFrom, addr 0x35335c0, size 0x74, virtual false, abstract: false, final false
  static inline int32_t SubDWordFrom(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SubFrom, addr 0x3533634, size 0x98, virtual false, abstract: false, final false
  static inline int32_t SubFrom(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SubFrom, addr 0x35300ac, size 0x80, virtual false, abstract: false, final false
  static inline int32_t SubFrom(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method SubWordAt, addr 0x3533720, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t SubWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method SubWordAt, addr 0x35336cc, size 0x54, virtual false, abstract: false, final false
  static inline int32_t SubWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method SubWordFrom, addr 0x353377c, size 0x48, virtual false, abstract: false, final false
  static inline int32_t SubWordFrom(int32_t len, uint32_t x, ::ArrayW<uint32_t> z);

  /// @brief Method SubWordFrom, addr 0x35337c4, size 0x54, virtual false, abstract: false, final false
  static inline int32_t SubWordFrom(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method ToBigInteger, addr 0x3533818, size 0xfc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger(int32_t len, ::ArrayW<uint32_t> x);

  /// @brief Method Zero, addr 0x3533914, size 0x40, virtual false, abstract: false, final false
  static inline void Zero(int32_t len, ::ArrayW<uint32_t> z);

  /// @brief Method .ctor, addr 0x3533954, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Nat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Nat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Nat(Nat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Nat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Nat(Nat const&) = delete;

  /// @brief Field M offset 0xffffffff size 0x8
  static constexpr uint64_t M{ static_cast<uint64_t>(0xffffffffu) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1590 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Math::Raw::Nat) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
