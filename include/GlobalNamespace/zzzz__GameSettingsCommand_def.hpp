#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSettingsCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameSettingsCommand)
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
struct GameSettingsCommand__ExecuteAsync_d__13;
}
namespace GlobalNamespace {
struct GameSettingsCommand__SaveSettingsAsync_d__14;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class GameSettingsCommand;
}
namespace GlobalNamespace {
struct GameSettingsCommand__ExecuteAsync_d__13;
}
namespace GlobalNamespace {
struct GameSettingsCommand__SaveSettingsAsync_d__14;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameSettingsCommand*);
MARK_VAL_T(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13);
MARK_VAL_T(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameSettingsCommand*, "", "GameSettingsCommand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, "", "GameSettingsCommand/<ExecuteAsync>d__13");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14, "", "GameSettingsCommand/<SaveSettingsAsync>d__14");
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameSettingsCommand/<ExecuteAsync>d__13
struct CORDL_TYPE GameSettingsCommand__ExecuteAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x32d6500, size 0x96c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x32d6e6c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameSettingsCommand__ExecuteAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameSettingsCommand*", modifiers:
  // "", def_value: None }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: None }, CppParam { name:
  // "_success_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr GameSettingsCommand__ExecuteAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                    ::GlobalNamespace::GameSettingsCommand* __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages,
                                                    bool _success_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19360 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameSettingsCommand* __4__this;

  /// @brief Field messages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages;

  /// @brief Field <success>5__2, offset: 0x30, size: 0x1, def value: None
  bool _success_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, messages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, _success_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameSettingsCommand/<SaveSettingsAsync>d__14
struct CORDL_TYPE GameSettingsCommand__SaveSettingsAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x32d6eec, size 0x310, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x32d71fc, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameSettingsCommand__SaveSettingsAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameSettingsCommand*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr GameSettingsCommand__SaveSettingsAsync_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                         ::GlobalNamespace::GameSettingsCommand* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19361 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameSettingsCommand* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameSettingsCommand
class CORDL_TYPE GameSettingsCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  using _ExecuteAsync_d__13 = ::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13;

  using _SaveSettingsAsync_d__14 = ::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14;

  /// @brief Field PropertyGetters, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyGetters,
                      put = __cordl_internal_set_PropertyGetters)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_1<::StringW>*>* PropertyGetters;

  /// @brief Field PropertySetters, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertySetters,
                      put = __cordl_internal_set_PropertySetters)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_2<::StringW, bool>*>* PropertySetters;

  /// @brief Field _apply, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__apply, put = __cordl_internal_set__apply)) ::GlobalNamespace::OptionalArgument_1<bool>* _apply;

  /// @brief Field _setting, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__setting, put = __cordl_internal_set__setting)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _setting;

  /// @brief Field _settingsApplicator, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsApplicator, put = __cordl_internal_set__settingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO> _settingsApplicator;

  /// @brief Field _settingsManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _value, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _value;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Field fileStorage, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_fileStorage, put = __cordl_internal_set_fileStorage)) ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Method ExecuteAsync, addr 0x32d3064, size 0xec, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method GetPropertyString, addr 0x32d3200, size 0xb0, virtual false, abstract: false, final false
  inline bool GetPropertyString(::StringW propertyName, ::by_ref<::StringW> propertyValue);

  /// @brief Method Initialize, addr 0x32cfcac, size 0x33b8, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::GameSettingsCommand* New_ctor();

  /// @brief Method SaveSettingsAsync, addr 0x32d3150, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveSettingsAsync();

  /// @brief Method SetPropertyValue, addr 0x32d32b0, size 0x1a8, virtual false, abstract: false, final false
  inline bool SetPropertyValue(::StringW propertyName, ::StringW propertyValue, ::by_ref<::StringW> log);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool SetValue(::StringW text, ::by_ref<T> value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW ToString(::by_ref<T> value);

  /// @brief Method <Initialize>b__12_0, addr 0x32d3618, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_0();

  /// @brief Method <Initialize>b__12_1, addr 0x32d3670, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_1();

  /// @brief Method <Initialize>b__12_10, addr 0x32d3988, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_10();

  /// @brief Method <Initialize>b__12_100, addr 0x32d5ad8, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_100(::StringW value);

  /// @brief Method <Initialize>b__12_101, addr 0x32d5b40, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_101(::StringW value);

  /// @brief Method <Initialize>b__12_102, addr 0x32d5ba8, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_102(::StringW value);

  /// @brief Method <Initialize>b__12_103, addr 0x32d5c10, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_103(::StringW value);

  /// @brief Method <Initialize>b__12_104, addr 0x32d5c78, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_104(::StringW value);

  /// @brief Method <Initialize>b__12_105, addr 0x32d5ce0, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_105(::StringW value);

  /// @brief Method <Initialize>b__12_106, addr 0x32d5d48, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_106(::StringW value);

  /// @brief Method <Initialize>b__12_107, addr 0x32d5db0, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_107(::StringW value);

  /// @brief Method <Initialize>b__12_108, addr 0x32d5e18, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_108(::StringW value);

  /// @brief Method <Initialize>b__12_109, addr 0x32d5e80, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_109(::StringW value);

  /// @brief Method <Initialize>b__12_11, addr 0x32d39e0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_11();

  /// @brief Method <Initialize>b__12_110, addr 0x32d5ee8, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_110(::StringW value);

  /// @brief Method <Initialize>b__12_111, addr 0x32d5f50, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_111(::StringW value);

  /// @brief Method <Initialize>b__12_112, addr 0x32d5fb8, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_112(::StringW value);

  /// @brief Method <Initialize>b__12_113, addr 0x32d6020, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_113(::StringW value);

  /// @brief Method <Initialize>b__12_114, addr 0x32d6088, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_114(::StringW value);

  /// @brief Method <Initialize>b__12_115, addr 0x32d60f0, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_115(::StringW value);

  /// @brief Method <Initialize>b__12_116, addr 0x32d6158, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_116(::StringW value);

  /// @brief Method <Initialize>b__12_117, addr 0x32d61c0, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_117(::StringW value);

  /// @brief Method <Initialize>b__12_118, addr 0x32d6228, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_118(::StringW value);

  /// @brief Method <Initialize>b__12_119, addr 0x32d6290, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_119(::StringW value);

  /// @brief Method <Initialize>b__12_12, addr 0x32d3a38, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_12();

  /// @brief Method <Initialize>b__12_120, addr 0x32d62f8, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_120(::StringW value);

  /// @brief Method <Initialize>b__12_121, addr 0x32d6360, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_121(::StringW value);

  /// @brief Method <Initialize>b__12_122, addr 0x32d63c8, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_122(::StringW value);

  /// @brief Method <Initialize>b__12_123, addr 0x32d6430, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_123(::StringW value);

  /// @brief Method <Initialize>b__12_124, addr 0x32d6498, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_124(::StringW value);

  /// @brief Method <Initialize>b__12_13, addr 0x32d3a90, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_13();

  /// @brief Method <Initialize>b__12_14, addr 0x32d3ae8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_14();

  /// @brief Method <Initialize>b__12_15, addr 0x32d3b40, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_15();

  /// @brief Method <Initialize>b__12_16, addr 0x32d3b98, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_16();

  /// @brief Method <Initialize>b__12_17, addr 0x32d3bf0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_17();

  /// @brief Method <Initialize>b__12_18, addr 0x32d3c48, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_18();

  /// @brief Method <Initialize>b__12_19, addr 0x32d3ca0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_19();

  /// @brief Method <Initialize>b__12_2, addr 0x32d36c8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_2();

  /// @brief Method <Initialize>b__12_20, addr 0x32d3cf8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_20();

  /// @brief Method <Initialize>b__12_21, addr 0x32d3d50, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_21();

  /// @brief Method <Initialize>b__12_22, addr 0x32d3da8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_22();

  /// @brief Method <Initialize>b__12_23, addr 0x32d3e00, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_23();

  /// @brief Method <Initialize>b__12_24, addr 0x32d3e58, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_24();

  /// @brief Method <Initialize>b__12_25, addr 0x32d3eb0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_25();

  /// @brief Method <Initialize>b__12_26, addr 0x32d3f08, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_26();

  /// @brief Method <Initialize>b__12_27, addr 0x32d3f60, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_27();

  /// @brief Method <Initialize>b__12_28, addr 0x32d3fb8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_28();

  /// @brief Method <Initialize>b__12_29, addr 0x32d4010, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_29();

  /// @brief Method <Initialize>b__12_3, addr 0x32d3720, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_3();

  /// @brief Method <Initialize>b__12_30, addr 0x32d4068, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_30();

  /// @brief Method <Initialize>b__12_31, addr 0x32d40c0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_31();

  /// @brief Method <Initialize>b__12_32, addr 0x32d4118, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_32();

  /// @brief Method <Initialize>b__12_33, addr 0x32d4170, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_33();

  /// @brief Method <Initialize>b__12_34, addr 0x32d41c8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_34();

  /// @brief Method <Initialize>b__12_35, addr 0x32d4220, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_35();

  /// @brief Method <Initialize>b__12_36, addr 0x32d4278, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_36();

  /// @brief Method <Initialize>b__12_37, addr 0x32d42d0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_37();

  /// @brief Method <Initialize>b__12_38, addr 0x32d4328, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_38();

  /// @brief Method <Initialize>b__12_39, addr 0x32d4380, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_39();

  /// @brief Method <Initialize>b__12_4, addr 0x32d3778, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_4();

  /// @brief Method <Initialize>b__12_40, addr 0x32d43d8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_40();

  /// @brief Method <Initialize>b__12_41, addr 0x32d4430, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_41();

  /// @brief Method <Initialize>b__12_42, addr 0x32d4488, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_42();

  /// @brief Method <Initialize>b__12_43, addr 0x32d44e0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_43();

  /// @brief Method <Initialize>b__12_44, addr 0x32d4538, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_44();

  /// @brief Method <Initialize>b__12_45, addr 0x32d4590, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_45();

  /// @brief Method <Initialize>b__12_46, addr 0x32d45e8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_46();

  /// @brief Method <Initialize>b__12_47, addr 0x32d4640, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_47();

  /// @brief Method <Initialize>b__12_48, addr 0x32d4698, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_48();

  /// @brief Method <Initialize>b__12_49, addr 0x32d46f0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_49();

  /// @brief Method <Initialize>b__12_5, addr 0x32d37d0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_5();

  /// @brief Method <Initialize>b__12_50, addr 0x32d4748, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_50();

  /// @brief Method <Initialize>b__12_51, addr 0x32d47a0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_51();

  /// @brief Method <Initialize>b__12_52, addr 0x32d47f8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_52();

  /// @brief Method <Initialize>b__12_53, addr 0x32d4850, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_53();

  /// @brief Method <Initialize>b__12_54, addr 0x32d48a8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_54();

  /// @brief Method <Initialize>b__12_55, addr 0x32d4900, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_55();

  /// @brief Method <Initialize>b__12_56, addr 0x32d4958, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_56();

  /// @brief Method <Initialize>b__12_57, addr 0x32d49b0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_57();

  /// @brief Method <Initialize>b__12_58, addr 0x32d4a08, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_58();

  /// @brief Method <Initialize>b__12_59, addr 0x32d4a60, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_59();

  /// @brief Method <Initialize>b__12_6, addr 0x32d3828, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_6();

  /// @brief Method <Initialize>b__12_60, addr 0x32d4ab8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_60();

  /// @brief Method <Initialize>b__12_61, addr 0x32d4b10, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_61();

  /// @brief Method <Initialize>b__12_62, addr 0x32d4b68, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_62(::StringW value);

  /// @brief Method <Initialize>b__12_63, addr 0x32d4bd0, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_63(::StringW value);

  /// @brief Method <Initialize>b__12_64, addr 0x32d4c38, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_64(::StringW value);

  /// @brief Method <Initialize>b__12_65, addr 0x32d4ca0, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_65(::StringW value);

  /// @brief Method <Initialize>b__12_66, addr 0x32d4d08, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_66(::StringW value);

  /// @brief Method <Initialize>b__12_67, addr 0x32d4d70, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_67(::StringW value);

  /// @brief Method <Initialize>b__12_68, addr 0x32d4dd8, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_68(::StringW value);

  /// @brief Method <Initialize>b__12_69, addr 0x32d4e40, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_69(::StringW value);

  /// @brief Method <Initialize>b__12_7, addr 0x32d3880, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_7();

  /// @brief Method <Initialize>b__12_70, addr 0x32d4ea8, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_70(::StringW value);

  /// @brief Method <Initialize>b__12_71, addr 0x32d4f10, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_71(::StringW value);

  /// @brief Method <Initialize>b__12_72, addr 0x32d4f78, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_72(::StringW value);

  /// @brief Method <Initialize>b__12_73, addr 0x32d4fe0, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_73(::StringW value);

  /// @brief Method <Initialize>b__12_74, addr 0x32d5048, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_74(::StringW value);

  /// @brief Method <Initialize>b__12_75, addr 0x32d50b0, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_75(::StringW value);

  /// @brief Method <Initialize>b__12_76, addr 0x32d5118, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_76(::StringW value);

  /// @brief Method <Initialize>b__12_77, addr 0x32d5180, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_77(::StringW value);

  /// @brief Method <Initialize>b__12_78, addr 0x32d51e8, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_78(::StringW value);

  /// @brief Method <Initialize>b__12_79, addr 0x32d5250, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_79(::StringW value);

  /// @brief Method <Initialize>b__12_8, addr 0x32d38d8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_8();

  /// @brief Method <Initialize>b__12_80, addr 0x32d52b8, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_80(::StringW value);

  /// @brief Method <Initialize>b__12_81, addr 0x32d5320, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_81(::StringW value);

  /// @brief Method <Initialize>b__12_82, addr 0x32d5388, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_82(::StringW value);

  /// @brief Method <Initialize>b__12_83, addr 0x32d53f0, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_83(::StringW value);

  /// @brief Method <Initialize>b__12_84, addr 0x32d5458, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_84(::StringW value);

  /// @brief Method <Initialize>b__12_85, addr 0x32d54c0, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_85(::StringW value);

  /// @brief Method <Initialize>b__12_86, addr 0x32d5528, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_86(::StringW value);

  /// @brief Method <Initialize>b__12_87, addr 0x32d5590, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_87(::StringW value);

  /// @brief Method <Initialize>b__12_88, addr 0x32d55f8, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_88(::StringW value);

  /// @brief Method <Initialize>b__12_89, addr 0x32d5660, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_89(::StringW value);

  /// @brief Method <Initialize>b__12_9, addr 0x32d3930, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_9();

  /// @brief Method <Initialize>b__12_90, addr 0x32d56c8, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_90(::StringW value);

  /// @brief Method <Initialize>b__12_91, addr 0x32d5730, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_91(::StringW value);

  /// @brief Method <Initialize>b__12_92, addr 0x32d5798, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_92(::StringW value);

  /// @brief Method <Initialize>b__12_93, addr 0x32d5800, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_93(::StringW value);

  /// @brief Method <Initialize>b__12_94, addr 0x32d5868, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_94(::StringW value);

  /// @brief Method <Initialize>b__12_95, addr 0x32d58d0, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_95(::StringW value);

  /// @brief Method <Initialize>b__12_96, addr 0x32d5938, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_96(::StringW value);

  /// @brief Method <Initialize>b__12_97, addr 0x32d59a0, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_97(::StringW value);

  /// @brief Method <Initialize>b__12_98, addr 0x32d5a08, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_98(::StringW value);

  /// @brief Method <Initialize>b__12_99, addr 0x32d5a70, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_99(::StringW value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_1<::StringW>*>* const& __cordl_internal_get_PropertyGetters() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_1<::StringW>*>*& __cordl_internal_get_PropertyGetters();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_2<::StringW, bool>*>* const& __cordl_internal_get_PropertySetters() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_2<::StringW, bool>*>*& __cordl_internal_get_PropertySetters();

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& __cordl_internal_get__apply() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__apply();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__setting() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__setting();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__settingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__settingsApplicator();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__value() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__value();

  constexpr ::GlobalNamespace::IFileStorage* const& __cordl_internal_get_fileStorage() const;

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get_fileStorage();

  constexpr void __cordl_internal_set_PropertyGetters(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_1<::StringW>*>* value);

  constexpr void __cordl_internal_set_PropertySetters(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_2<::StringW, bool>*>* value);

  constexpr void __cordl_internal_set__apply(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr void __cordl_internal_set__setting(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__value(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value);

  /// @brief Method .ctor, addr 0x32d3458, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32cfc24, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32cfc68, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameSettingsCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameSettingsCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameSettingsCommand(GameSettingsCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameSettingsCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameSettingsCommand(GameSettingsCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19362 };

  /// @brief Field _settingsManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _settingsApplicator, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____settingsApplicator;

  /// @brief Field fileStorage, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ___fileStorage;

  /// @brief Field _setting, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____setting;

  /// @brief Field _value, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____value;

  /// @brief Field _apply, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____apply;

  /// @brief Field PropertyGetters, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_1<::StringW>*>* ___PropertyGetters;

  /// @brief Field PropertySetters, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_2<::StringW, bool>*>* ___PropertySetters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ____settingsManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ____settingsApplicator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ___fileStorage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ____setting) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ____value) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ____apply) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ___PropertyGetters) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ___PropertySetters) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameSettingsCommand) == 0x78, "Size mismatch!");

} // namespace GlobalNamespace
