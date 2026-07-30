#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/FastTouchscreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FastTouchscreen)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::Controls {
class DoubleControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPhaseControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPressControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastTouchscreen;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::FastTouchscreen*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::FastTouchscreen*, "UnityEngine.InputSystem", "FastTouchscreen");
// Dependencies UnityEngine.InputSystem.Touchscreen
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.FastTouchscreen
class CORDL_TYPE FastTouchscreen : public ::UnityEngine::InputSystem::Touchscreen {
public:
  // Declarations
  /// @brief Method Initialize_ctrlTouchscreendelta, addr 0x6530910, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreendelta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendeltadown, addr 0x6535a1c, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendeltaleft, addr 0x6535c28, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendeltaright, addr 0x6535e34, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                 ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendeltaup, addr 0x6535818, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendeltax, addr 0x6536038, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendeltay, addr 0x6536218, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendisplayIndex, addr 0x6531048, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreendisplayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenposition, addr 0x653072c, size 0x1e4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenposition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenpositionx, addr 0x6535418, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenpositiony, addr 0x6535618, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenpress, addr 0x6530e78, size 0x1d0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreenpress(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenpressure, addr 0x6530ad4, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpressure(::UnityEngine::InputSystem::Utilities::InternedString kAnalogLayout,
                                                                                               ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouch, addr 0x653056c, size 0x1c0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreenprimaryTouch(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdelta, addr 0x6532760, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreenprimaryTouchdelta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                         ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltadown, addr 0x65342bc, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaleft, addr 0x65344c8, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaright, addr 0x65346d4, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaup, addr 0x65340b8, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltax, addr 0x65348d8, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                         ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltay, addr 0x6534ab8, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                         ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdisplayIndex, addr 0x65332e0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchdisplayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchindirectTouch, addr 0x65334c0, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreenprimaryTouchindirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchphase, addr 0x6532d14, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreenprimaryTouchphase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchposition, addr 0x6532554, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchposition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositionx, addr 0x6533cb8, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositiony, addr 0x6533eb8, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchpress, addr 0x6532f00, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreenprimaryTouchpress(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchpressure, addr 0x6532948, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchradius, addr 0x6532b28, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchradius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusx, addr 0x6534c98, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchradiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusy, addr 0x6534e78, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchradiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPosition, addr 0x6533ac0, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchstartPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositionx, addr 0x6535058, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchstartPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                 ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositiony, addr 0x6535238, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchstartPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                 ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartTime, addr 0x65338d4, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreenprimaryTouchstartTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchtap, addr 0x65336c4, size 0x210, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreenprimaryTouchtap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchtapCount, addr 0x6533100, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchtapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchtouchId, addr 0x6532350, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchtouchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenradius, addr 0x6530cb0, size 0x1c8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenradius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenradiusx, addr 0x65363f8, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenradiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenradiusy, addr 0x65365d8, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenradiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0, addr 0x65311f8, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch0(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0delta, addr 0x6536bc8, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch0delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0deltadown, addr 0x6538718, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0deltaleft, addr 0x6538924, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0deltaright, addr 0x6538b30, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0deltaup, addr 0x6538514, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0deltax, addr 0x6538d34, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0deltay, addr 0x6538f14, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0displayIndex, addr 0x6537748, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0indirectTouch, addr 0x6537928, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch0indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0phase, addr 0x653717c, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch0phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0position, addr 0x65369bc, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0positionx, addr 0x6538114, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0positiony, addr 0x6538314, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0press, addr 0x6537368, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch0press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0pressure, addr 0x6536db0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0radius, addr 0x6536f90, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0radiusx, addr 0x65390f4, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0radiusy, addr 0x65392d4, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0startPosition, addr 0x6537f1c, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0startPositionx, addr 0x65394b4, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0startPositiony, addr 0x6539694, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0startTime, addr 0x6537d30, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch0startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0tap, addr 0x6537b2c, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch0tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0tapCount, addr 0x6537568, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0touchId, addr 0x65367b8, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1, addr 0x65313b4, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch1(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1delta, addr 0x6539c84, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch1delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1deltadown, addr 0x653b7d4, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1deltaleft, addr 0x653b9e0, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1deltaright, addr 0x653bbec, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1deltaup, addr 0x653b5d0, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1deltax, addr 0x653bdf0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1deltay, addr 0x653bfd0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1displayIndex, addr 0x653a804, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1indirectTouch, addr 0x653a9e4, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch1indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1phase, addr 0x653a238, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch1phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1position, addr 0x6539a78, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1positionx, addr 0x653b1d0, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1positiony, addr 0x653b3d0, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1press, addr 0x653a424, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch1press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1pressure, addr 0x6539e6c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1radius, addr 0x653a04c, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1radiusx, addr 0x653c1b0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1radiusy, addr 0x653c390, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1startPosition, addr 0x653afd8, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1startPositionx, addr 0x653c570, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1startPositiony, addr 0x653c750, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1startTime, addr 0x653adec, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch1startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1tap, addr 0x653abe8, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch1tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1tapCount, addr 0x653a624, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1touchId, addr 0x6539874, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2, addr 0x6531570, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch2(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2delta, addr 0x653cd40, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch2delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2deltadown, addr 0x653e890, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2deltaleft, addr 0x653ea9c, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2deltaright, addr 0x653eca8, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2deltaup, addr 0x653e68c, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2deltax, addr 0x653eeac, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2deltay, addr 0x653f08c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2displayIndex, addr 0x653d8c0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2indirectTouch, addr 0x653daa0, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch2indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2phase, addr 0x653d2f4, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch2phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2position, addr 0x653cb34, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2positionx, addr 0x653e28c, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2positiony, addr 0x653e48c, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2press, addr 0x653d4e0, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch2press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2pressure, addr 0x653cf28, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2radius, addr 0x653d108, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2radiusx, addr 0x653f26c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2radiusy, addr 0x653f44c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2startPosition, addr 0x653e094, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2startPositionx, addr 0x653f62c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2startPositiony, addr 0x653f80c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2startTime, addr 0x653dea8, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch2startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2tap, addr 0x653dca4, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch2tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2tapCount, addr 0x653d6e0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2touchId, addr 0x653c930, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3, addr 0x653172c, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch3(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3delta, addr 0x653fdfc, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch3delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3deltadown, addr 0x654194c, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3deltaleft, addr 0x6541b58, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3deltaright, addr 0x6541d64, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3deltaup, addr 0x6541748, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3deltax, addr 0x6541f68, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3deltay, addr 0x6542148, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3displayIndex, addr 0x654097c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3indirectTouch, addr 0x6540b5c, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch3indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3phase, addr 0x65403b0, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch3phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3position, addr 0x653fbf0, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3positionx, addr 0x6541348, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3positiony, addr 0x6541548, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3press, addr 0x654059c, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch3press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3pressure, addr 0x653ffe4, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3radius, addr 0x65401c4, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3radiusx, addr 0x6542328, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3radiusy, addr 0x6542508, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3startPosition, addr 0x6541150, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3startPositionx, addr 0x65426e8, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3startPositiony, addr 0x65428c8, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3startTime, addr 0x6540f64, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch3startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3tap, addr 0x6540d60, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch3tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3tapCount, addr 0x654079c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3touchId, addr 0x653f9ec, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4, addr 0x65318e8, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch4(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4delta, addr 0x6542eb8, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch4delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4deltadown, addr 0x6544a08, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4deltaleft, addr 0x6544c14, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4deltaright, addr 0x6544e20, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4deltaup, addr 0x6544804, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4deltax, addr 0x6545024, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4deltay, addr 0x6545204, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4displayIndex, addr 0x6543a38, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4indirectTouch, addr 0x6543c18, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch4indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4phase, addr 0x654346c, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch4phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4position, addr 0x6542cac, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4positionx, addr 0x6544404, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4positiony, addr 0x6544604, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4press, addr 0x6543658, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch4press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4pressure, addr 0x65430a0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4radius, addr 0x6543280, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4radiusx, addr 0x65453e4, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4radiusy, addr 0x65455c4, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4startPosition, addr 0x654420c, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4startPositionx, addr 0x65457a4, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4startPositiony, addr 0x6545984, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4startTime, addr 0x6544020, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch4startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4tap, addr 0x6543e1c, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch4tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4tapCount, addr 0x6543858, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4touchId, addr 0x6542aa8, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5, addr 0x6531aa4, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch5(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5delta, addr 0x6545f74, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch5delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5deltadown, addr 0x6547ac4, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5deltaleft, addr 0x6547cd0, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5deltaright, addr 0x6547edc, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5deltaup, addr 0x65478c0, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5deltax, addr 0x65480e0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5deltay, addr 0x65482c0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5displayIndex, addr 0x6546af4, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5indirectTouch, addr 0x6546cd4, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch5indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5phase, addr 0x6546528, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch5phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5position, addr 0x6545d68, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5positionx, addr 0x65474c0, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5positiony, addr 0x65476c0, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5press, addr 0x6546714, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch5press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5pressure, addr 0x654615c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5radius, addr 0x654633c, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5radiusx, addr 0x65484a0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5radiusy, addr 0x6548680, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5startPosition, addr 0x65472c8, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5startPositionx, addr 0x6548860, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5startPositiony, addr 0x6548a40, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5startTime, addr 0x65470dc, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch5startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5tap, addr 0x6546ed8, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch5tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5tapCount, addr 0x6546914, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5touchId, addr 0x6545b64, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6, addr 0x6531c60, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch6(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6delta, addr 0x6549030, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch6delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6deltadown, addr 0x654ab80, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6deltaleft, addr 0x654ad8c, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6deltaright, addr 0x654af98, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6deltaup, addr 0x654a97c, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6deltax, addr 0x654b19c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6deltay, addr 0x654b37c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6displayIndex, addr 0x6549bb0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6indirectTouch, addr 0x6549d90, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch6indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6phase, addr 0x65495e4, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch6phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6position, addr 0x6548e24, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6positionx, addr 0x654a57c, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6positiony, addr 0x654a77c, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6press, addr 0x65497d0, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch6press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6pressure, addr 0x6549218, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6radius, addr 0x65493f8, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6radiusx, addr 0x654b55c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6radiusy, addr 0x654b73c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6startPosition, addr 0x654a384, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6startPositionx, addr 0x654b91c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6startPositiony, addr 0x654bafc, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6startTime, addr 0x654a198, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch6startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6tap, addr 0x6549f94, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch6tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6tapCount, addr 0x65499d0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6touchId, addr 0x6548c20, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7, addr 0x6531e1c, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch7(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7delta, addr 0x654c0ec, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch7delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7deltadown, addr 0x654dc3c, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7deltaleft, addr 0x654de48, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7deltaright, addr 0x654e054, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7deltaup, addr 0x654da38, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7deltax, addr 0x654e258, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7deltay, addr 0x654e438, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7displayIndex, addr 0x654cc6c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7indirectTouch, addr 0x654ce4c, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch7indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7phase, addr 0x654c6a0, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch7phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7position, addr 0x654bee0, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7positionx, addr 0x654d638, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7positiony, addr 0x654d838, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7press, addr 0x654c88c, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch7press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7pressure, addr 0x654c2d4, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7radius, addr 0x654c4b4, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7radiusx, addr 0x654e618, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7radiusy, addr 0x654e7f8, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7startPosition, addr 0x654d440, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7startPositionx, addr 0x654e9d8, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7startPositiony, addr 0x654ebb8, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7startTime, addr 0x654d254, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch7startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7tap, addr 0x654d050, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch7tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7tapCount, addr 0x654ca8c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7touchId, addr 0x654bcdc, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8, addr 0x6531fd8, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch8(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8delta, addr 0x654f1a8, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch8delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8deltadown, addr 0x6550cf8, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8deltaleft, addr 0x6550f04, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8deltaright, addr 0x6551110, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8deltaup, addr 0x6550af4, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8deltax, addr 0x6551314, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8deltay, addr 0x65514f4, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8displayIndex, addr 0x654fd28, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8indirectTouch, addr 0x654ff08, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch8indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8phase, addr 0x654f75c, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch8phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8position, addr 0x654ef9c, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8positionx, addr 0x65506f4, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8positiony, addr 0x65508f4, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8press, addr 0x654f948, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch8press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8pressure, addr 0x654f390, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8radius, addr 0x654f570, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8radiusx, addr 0x65516d4, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8radiusy, addr 0x65518b4, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8startPosition, addr 0x65504fc, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8startPositionx, addr 0x6551a94, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8startPositiony, addr 0x6551c74, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8startTime, addr 0x6550310, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch8startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8tap, addr 0x655010c, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch8tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8tapCount, addr 0x654fb48, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8touchId, addr 0x654ed98, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9, addr 0x6532194, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch9(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9delta, addr 0x6552264, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch9delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9deltadown, addr 0x6553db4, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9deltaleft, addr 0x6553fc0, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9deltaright, addr 0x65541cc, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9deltaup, addr 0x6553bb0, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9deltax, addr 0x65543d0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9deltay, addr 0x65545b0, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9displayIndex, addr 0x6552de4, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9indirectTouch, addr 0x6552fc4, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch9indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9phase, addr 0x6552818, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch9phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9position, addr 0x6552058, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9positionx, addr 0x65537b0, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9positiony, addr 0x65539b0, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9press, addr 0x6552a04, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch9press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9pressure, addr 0x655244c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9radius, addr 0x655262c, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9radiusx, addr 0x6554790, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9radiusy, addr 0x6554970, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9startPosition, addr 0x65535b8, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9startPositionx, addr 0x6554b50, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9startPositiony, addr 0x6554d30, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9startTime, addr 0x65533cc, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch9startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9tap, addr 0x65531c8, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch9tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9tapCount, addr 0x6552c04, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9touchId, addr 0x6551e54, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  static inline ::UnityEngine::InputSystem::FastTouchscreen* New_ctor();

  /// @brief Method .ctor, addr 0x652d59c, size 0x2fd0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastTouchscreen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastTouchscreen(FastTouchscreen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastTouchscreen(FastTouchscreen const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8705 };

  /// @brief Field metadata offset 0xffffffff size 0x8
  static constexpr ::ConstString metadata{ u"AutoWindowSpace;Touch;Vector2;Delta;Analog;TouchPress;Button;Axis;Integer;TouchPhase;Double;Touchscreen;Pointer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::FastTouchscreen) == 0x1d0, "Size mismatch!");

} // namespace UnityEngine::InputSystem
