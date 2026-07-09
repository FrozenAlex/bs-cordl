#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeBloomPrePassLightCollisionEffect.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLightCollisionEffect_def.hpp"
#include "GlobalNamespace/zzzz__InstancedMaterialLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffect::*)()>(&::GlobalNamespace::TubeBloomPrePassLightCollisionEffect::Start)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5863ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffect.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffect::*)()>(&::GlobalNamespace::TubeBloomPrePassLightCollisionEffect::Update)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5863afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffect::*)()>(&::GlobalNamespace::TubeBloomPrePassLightCollisionEffect::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5863efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__tubeBloomPrePassLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLight;
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__tubeBloomPrePassLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLight;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_set__tubeBloomPrePassLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tubeBloomPrePassLight = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__environmentLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__environmentLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentLayerMask;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_set__environmentLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentLayerMask = value;
}
constexpr bool& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__useScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScale;
}
constexpr bool const& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__useScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScale;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_set__useScale(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useScale = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__scaleTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__scaleTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleTransform;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_set__scaleTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scaleTransform = value;
}
constexpr bool& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__showHitPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showHitPoint;
}
constexpr bool const& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__showHitPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showHitPoint;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_set__showHitPoint(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showHitPoint = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__hitPointGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__hitPointGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointGameObject;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_set__hitPointGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hitPointGameObject = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__hitPointTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__hitPointTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointTransform;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_set__hitPointTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hitPointTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId>& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__hitPointLightWithId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointLightWithId;
}
constexpr ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> const& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__hitPointLightWithId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointLightWithId;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_set__hitPointLightWithId(::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hitPointLightWithId = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__hitPointDistanceToAlphaCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointDistanceToAlphaCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__hitPointDistanceToAlphaCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointDistanceToAlphaCurve;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_set__hitPointDistanceToAlphaCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hitPointDistanceToAlphaCurve = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
constexpr bool& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__hitPointState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointState;
}
constexpr bool const& GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_get__hitPointState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointState;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::__cordl_internal_set__hitPointState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hitPointState = value;
}
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TubeBloomPrePassLightCollisionEffect* GlobalNamespace::TubeBloomPrePassLightCollisionEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeBloomPrePassLightCollisionEffect::TubeBloomPrePassLightCollisionEffect() {}
