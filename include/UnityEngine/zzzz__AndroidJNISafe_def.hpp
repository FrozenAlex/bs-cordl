#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNISafe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNISafe)
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct Span_1;
}
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNISafe;
}
// Write type traits
MARK_REF_T(::UnityEngine::AndroidJNISafe*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AndroidJNISafe*, "UnityEngine", "AndroidJNISafe");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJNISafe
class CORDL_TYPE AndroidJNISafe : public ::System::Object {
public:
  // Declarations
  /// @brief Method CallBooleanMethod, addr 0x6a1b9b0, size 0x70, virtual false, abstract: false, final false
  static inline bool CallBooleanMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallCharMethod, addr 0x6a1b8ac, size 0x70, virtual false, abstract: false, final false
  static inline char16_t CallCharMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallDoubleMethod, addr 0x6a1b7a0, size 0x7c, virtual false, abstract: false, final false
  static inline double_t CallDoubleMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallFloatMethod, addr 0x6a1b694, size 0x7c, virtual false, abstract: false, final false
  static inline float_t CallFloatMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallIntMethod, addr 0x6a1b494, size 0x70, virtual false, abstract: false, final false
  static inline int32_t CallIntMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallLongMethod, addr 0x6a1b594, size 0x70, virtual false, abstract: false, final false
  static inline int64_t CallLongMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallObjectMethod, addr 0x6a24e08, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallObjectMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallObjectMethod, addr 0x6a24e78, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallObjectMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallSByteMethod, addr 0x6a1b294, size 0x70, virtual false, abstract: false, final false
  static inline int8_t CallSByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallShortMethod, addr 0x6a1b394, size 0x70, virtual false, abstract: false, final false
  static inline int16_t CallShortMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticBooleanMethod, addr 0x6a23f18, size 0x70, virtual false, abstract: false, final false
  static inline bool CallStaticBooleanMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticCharMethod, addr 0x6a23c60, size 0x70, virtual false, abstract: false, final false
  static inline char16_t CallStaticCharMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticDoubleMethod, addr 0x6a23cd0, size 0x7c, virtual false, abstract: false, final false
  static inline double_t CallStaticDoubleMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticFloatMethod, addr 0x6a23d4c, size 0x7c, virtual false, abstract: false, final false
  static inline float_t CallStaticFloatMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticIntMethod, addr 0x6a23f88, size 0x70, virtual false, abstract: false, final false
  static inline int32_t CallStaticIntMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticLongMethod, addr 0x6a23dc8, size 0x70, virtual false, abstract: false, final false
  static inline int64_t CallStaticLongMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticObjectMethod, addr 0x6a23ad0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticObjectMethod, addr 0x6a1ac60, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticSByteMethod, addr 0x6a23ea8, size 0x70, virtual false, abstract: false, final false
  static inline int8_t CallStaticSByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticShortMethod, addr 0x6a23e38, size 0x70, virtual false, abstract: false, final false
  static inline int16_t CallStaticShortMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticStringMethod, addr 0x6a23b40, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticStringMethod, addr 0x6a23bb0, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticVoidMethod, addr 0x6a23a60, size 0x70, virtual false, abstract: false, final false
  static inline void CallStaticVoidMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStringMethod, addr 0x6a24ee8, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW CallStringMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallVoidMethod, addr 0x6a24d98, size 0x70, virtual false, abstract: false, final false
  static inline void CallVoidMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CheckException, addr 0x6a22624, size 0x23c, virtual false, abstract: false, final false
  static inline void CheckException();

  /// @brief Method DeleteLocalRef, addr 0x6a2295c, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteLocalRef(::System::IntPtr localref);

  /// @brief Method DeleteWeakGlobalRef, addr 0x6a22918, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteWeakGlobalRef(::System::IntPtr globalref);

  /// @brief Method FindClass, addr 0x6a1ab80, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindClass(::StringW name);

  /// @brief Method FromBooleanArray, addr 0x6a253c8, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<bool> FromBooleanArray(::System::IntPtr array);

  /// @brief Method FromByteArray, addr 0x6a252b8, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromByteArray(::System::IntPtr array);

  /// @brief Method FromCharArray, addr 0x6a24f98, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t> FromCharArray(::System::IntPtr array);

  /// @brief Method FromDoubleArray, addr 0x6a25038, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<double_t> FromDoubleArray(::System::IntPtr array);

  /// @brief Method FromFloatArray, addr 0x6a250d8, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t> FromFloatArray(::System::IntPtr array);

  /// @brief Method FromIntArray, addr 0x6a25438, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t> FromIntArray(::System::IntPtr array);

  /// @brief Method FromLongArray, addr 0x6a25178, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t> FromLongArray(::System::IntPtr array);

  /// @brief Method FromReflectedMethod, addr 0x6a22b60, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::IntPtr FromReflectedMethod(::System::IntPtr refMethod);

  /// @brief Method FromSByteArray, addr 0x6a25328, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int8_t> FromSByteArray(::System::IntPtr array);

  /// @brief Method FromShortArray, addr 0x6a25218, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int16_t> FromShortArray(::System::IntPtr array);

  /// @brief Method GetArrayLength, addr 0x6a259e0, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t GetArrayLength(::System::IntPtr array);

  /// @brief Method GetBooleanField, addr 0x6a24c48, size 0xa8, virtual false, abstract: false, final false
  static inline bool GetBooleanField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetCharField, addr 0x6a24840, size 0xa8, virtual false, abstract: false, final false
  static inline char16_t GetCharField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetDoubleField, addr 0x6a248e8, size 0xb4, virtual false, abstract: false, final false
  static inline double_t GetDoubleField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetFieldID, addr 0x6a22a80, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetFloatField, addr 0x6a2499c, size 0xb4, virtual false, abstract: false, final false
  static inline float_t GetFloatField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetIntField, addr 0x6a24cf0, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t GetIntField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetLongField, addr 0x6a24a50, size 0xa8, virtual false, abstract: false, final false
  static inline int64_t GetLongField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetMethodID, addr 0x6a1b194, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr obj, ::StringW name, ::StringW sig);

  /// @brief Method GetObjectArrayElement, addr 0x6a25938, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetObjectArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetObjectClass, addr 0x6a1b0f4, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetObjectClass(::System::IntPtr ptr);

  /// @brief Method GetObjectField, addr 0x6a24728, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetObjectField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetSByteField, addr 0x6a24ba0, size 0xa8, virtual false, abstract: false, final false
  static inline int8_t GetSByteField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetShortField, addr 0x6a24af8, size 0xa8, virtual false, abstract: false, final false
  static inline int16_t GetShortField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetStaticBooleanField, addr 0x6a23910, size 0xa8, virtual false, abstract: false, final false
  static inline bool GetStaticBooleanField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticCharField, addr 0x6a23508, size 0xa8, virtual false, abstract: false, final false
  static inline char16_t GetStaticCharField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticDoubleField, addr 0x6a235b0, size 0xb4, virtual false, abstract: false, final false
  static inline double_t GetStaticDoubleField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticFieldID, addr 0x6a22af0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticFieldID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetStaticFloatField, addr 0x6a23664, size 0xb4, virtual false, abstract: false, final false
  static inline float_t GetStaticFloatField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticIntField, addr 0x6a239b8, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t GetStaticIntField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticLongField, addr 0x6a23718, size 0xa8, virtual false, abstract: false, final false
  static inline int64_t GetStaticLongField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticMethodID, addr 0x6a1abf0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticMethodID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetStaticObjectField, addr 0x6a233f0, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticObjectField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticSByteField, addr 0x6a23868, size 0xa8, virtual false, abstract: false, final false
  static inline int8_t GetStaticSByteField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticShortField, addr 0x6a237c0, size 0xa8, virtual false, abstract: false, final false
  static inline int16_t GetStaticShortField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticStringField, addr 0x6a23498, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW GetStaticStringField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStringChars, addr 0x6a22a10, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW GetStringChars(::System::IntPtr str);

  /// @brief Method GetStringField, addr 0x6a247d0, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW GetStringField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method NewObject, addr 0x6a22c50, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewObject(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method NewString, addr 0x6a229a0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewString(::StringW chars);

  /// @brief Method PushLocalFrame, addr 0x6a22c00, size 0x50, virtual false, abstract: false, final false
  static inline void PushLocalFrame(int32_t capacity);

  /// @brief Method QueueDeleteGlobalRef, addr 0x6a228d4, size 0x44, virtual false, abstract: false, final false
  static inline void QueueDeleteGlobalRef(::System::IntPtr globalref);

  /// @brief Method SetBooleanField, addr 0x6a245a8, size 0xc0, virtual false, abstract: false, final false
  static inline void SetBooleanField(::System::IntPtr obj, ::System::IntPtr fieldID, bool val);

  /// @brief Method SetCharField, addr 0x6a24128, size 0xc0, virtual false, abstract: false, final false
  static inline void SetCharField(::System::IntPtr obj, ::System::IntPtr fieldID, char16_t val);

  /// @brief Method SetDoubleField, addr 0x6a241e8, size 0xc0, virtual false, abstract: false, final false
  static inline void SetDoubleField(::System::IntPtr obj, ::System::IntPtr fieldID, double_t val);

  /// @brief Method SetFloatField, addr 0x6a242a8, size 0xc0, virtual false, abstract: false, final false
  static inline void SetFloatField(::System::IntPtr obj, ::System::IntPtr fieldID, float_t val);

  /// @brief Method SetIntField, addr 0x6a24668, size 0xc0, virtual false, abstract: false, final false
  static inline void SetIntField(::System::IntPtr obj, ::System::IntPtr fieldID, int32_t val);

  /// @brief Method SetLongField, addr 0x6a24368, size 0xc0, virtual false, abstract: false, final false
  static inline void SetLongField(::System::IntPtr obj, ::System::IntPtr fieldID, int64_t val);

  /// @brief Method SetObjectField, addr 0x6a23ff8, size 0xc0, virtual false, abstract: false, final false
  static inline void SetObjectField(::System::IntPtr obj, ::System::IntPtr fieldID, ::System::IntPtr val);

  /// @brief Method SetSByteField, addr 0x6a244e8, size 0xc0, virtual false, abstract: false, final false
  static inline void SetSByteField(::System::IntPtr obj, ::System::IntPtr fieldID, int8_t val);

  /// @brief Method SetShortField, addr 0x6a24428, size 0xc0, virtual false, abstract: false, final false
  static inline void SetShortField(::System::IntPtr obj, ::System::IntPtr fieldID, int16_t val);

  /// @brief Method SetStaticBooleanField, addr 0x6a23270, size 0xc0, virtual false, abstract: false, final false
  static inline void SetStaticBooleanField(::System::IntPtr clazz, ::System::IntPtr fieldID, bool val);

  /// @brief Method SetStaticCharField, addr 0x6a22df0, size 0xc0, virtual false, abstract: false, final false
  static inline void SetStaticCharField(::System::IntPtr clazz, ::System::IntPtr fieldID, char16_t val);

  /// @brief Method SetStaticDoubleField, addr 0x6a22eb0, size 0xc0, virtual false, abstract: false, final false
  static inline void SetStaticDoubleField(::System::IntPtr clazz, ::System::IntPtr fieldID, double_t val);

  /// @brief Method SetStaticFloatField, addr 0x6a22f70, size 0xc0, virtual false, abstract: false, final false
  static inline void SetStaticFloatField(::System::IntPtr clazz, ::System::IntPtr fieldID, float_t val);

  /// @brief Method SetStaticIntField, addr 0x6a23330, size 0xc0, virtual false, abstract: false, final false
  static inline void SetStaticIntField(::System::IntPtr clazz, ::System::IntPtr fieldID, int32_t val);

  /// @brief Method SetStaticLongField, addr 0x6a23030, size 0xc0, virtual false, abstract: false, final false
  static inline void SetStaticLongField(::System::IntPtr clazz, ::System::IntPtr fieldID, int64_t val);

  /// @brief Method SetStaticObjectField, addr 0x6a22cc0, size 0xc0, virtual false, abstract: false, final false
  static inline void SetStaticObjectField(::System::IntPtr clazz, ::System::IntPtr fieldID, ::System::IntPtr val);

  /// @brief Method SetStaticSByteField, addr 0x6a231b0, size 0xc0, virtual false, abstract: false, final false
  static inline void SetStaticSByteField(::System::IntPtr clazz, ::System::IntPtr fieldID, int8_t val);

  /// @brief Method SetStaticShortField, addr 0x6a230f0, size 0xc0, virtual false, abstract: false, final false
  static inline void SetStaticShortField(::System::IntPtr clazz, ::System::IntPtr fieldID, int16_t val);

  /// @brief Method SetStaticStringField, addr 0x6a22d80, size 0x70, virtual false, abstract: false, final false
  static inline void SetStaticStringField(::System::IntPtr clazz, ::System::IntPtr fieldID, ::StringW val);

  /// @brief Method SetStringField, addr 0x6a240b8, size 0x70, virtual false, abstract: false, final false
  static inline void SetStringField(::System::IntPtr obj, ::System::IntPtr fieldID, ::StringW val);

  /// @brief Method ToBooleanArray, addr 0x6a25858, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToBooleanArray(::ArrayW<bool> array);

  /// @brief Method ToByteArray, addr 0x6a25778, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToByteArray(::ArrayW<uint8_t> array);

  /// @brief Method ToCharArray, addr 0x6a25548, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToCharArray(::ArrayW<char16_t> array);

  /// @brief Method ToDoubleArray, addr 0x6a255b8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToDoubleArray(::ArrayW<double_t> array);

  /// @brief Method ToFloatArray, addr 0x6a25628, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToFloatArray(::ArrayW<float_t> array);

  /// @brief Method ToIntArray, addr 0x6a258c8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToIntArray(::ArrayW<int32_t> array);

  /// @brief Method ToLongArray, addr 0x6a25698, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToLongArray(::ArrayW<int64_t> array);

  /// @brief Method ToObjectArray, addr 0x6a254d8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr> array, ::System::IntPtr type);

  /// @brief Method ToSByteArray, addr 0x6a257e8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToSByteArray(::ArrayW<int8_t> array);

  /// @brief Method ToShortArray, addr 0x6a25708, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToShortArray(::ArrayW<int16_t> array);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJNISafe();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJNISafe(AndroidJNISafe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJNISafe(AndroidJNISafe const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20117 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AndroidJNISafe) == 0x10, "Size mismatch!");

} // namespace UnityEngine
