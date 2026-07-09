#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Models/BSLeaderboardFriendsModel.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_impl.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSLeaderboardFriendsModel_def.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSLeaderboardFriendsModel_def.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__LeaderboardEntryWithRankModel_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__IFragment_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method:
//  ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel.set_LeaderboardEntryWithRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::*)(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*)>(
    &::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::
        set_LeaderboardEntryWithRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3208728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<
                ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>(),
            { "set_LeaderboardEntryWithRank", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel.get_LeaderboardEntryWithRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* (
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::
        get_LeaderboardEntryWithRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3208730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<
                ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>(),
            { "get_LeaderboardEntryWithRank", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel.CovertNestedFragments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::*)(
    ::Newtonsoft::Json::Linq::JToken*)>(
    &::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::
        CovertNestedFragments)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3208738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<
                ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>(),
            { "CovertNestedFragments", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel.GetNestedFragment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::GraphQL::Client::GraphQLModel* (
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::
        GetNestedFragment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3208808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<
                ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>(),
            { "GetNestedFragment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3208810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<
                ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>(),
            { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*&
BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::
    __cordl_internal_get__LeaderboardEntryWithRank_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LeaderboardEntryWithRank_k__BackingField;
}
constexpr ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* const&
BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::
    __cordl_internal_get__LeaderboardEntryWithRank_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LeaderboardEntryWithRank_k__BackingField;
}
constexpr void BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::
    __cordl_internal_set__LeaderboardEntryWithRank_k__BackingField(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LeaderboardEntryWithRank_k__BackingField = value;
}
inline void BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::
    set_LeaderboardEntryWithRank(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<
              ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>(),
          { "set_LeaderboardEntryWithRank", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* BeatSaber::Main::GraphQL::Models::
    LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::get_LeaderboardEntryWithRank() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<
              ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>(),
          { "get_LeaderboardEntryWithRank", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::
    CovertNestedFragments(::Newtonsoft::Json::Linq::JToken* token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<
              ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>(),
          { "CovertNestedFragments", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::OculusStudios::GraphQL::Client::GraphQLModel*
BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::GetNestedFragment() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<
              ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>(),
          { "GetNestedFragment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::Client::GraphQLModel*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<
              ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>(),
          { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*
BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::New_ctor() {
  return THROW_UNLESS(
      ::i2c::no_logger{},
      ::i2c::new_ctor<
          ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>());
}
/// @brief Convert operator to "::OculusStudios::GraphQL::Client::IFragment"
constexpr BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::operator ::
    OculusStudios::GraphQL::Client::IFragment*() noexcept {
  return static_cast<::OculusStudios::GraphQL::Client::IFragment*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::Client::IFragment"
constexpr ::OculusStudios::GraphQL::Client::IFragment*
BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::
    i___OculusStudios__GraphQL__Client__IFragment() noexcept {
  return static_cast<::OculusStudios::GraphQL::Client::IFragment*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel::
    LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel() {}
//  Writing Method size for method:
//  ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel.set_Nodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::*)(
        ::System::Collections::Generic::List_1<
            ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>*)>(
        &::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::set_Nodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3208714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<
                ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*>(),
            { "set_Nodes",
              {},
              { ::i2c::type_of<::System::Collections::Generic::List_1<
                  ::BeatSaber::Main::GraphQL::Models::
                      LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel.get_Nodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>* (
    ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::get_Nodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x320871c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<
                ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*>(),
            { "get_Nodes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::*)()>(
        &::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3208724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<
                ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*>(),
            { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>*&
BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::
    __cordl_internal_get__Nodes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Nodes_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>* const&
BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::
    __cordl_internal_get__Nodes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Nodes_k__BackingField;
}
constexpr void BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::
    __cordl_internal_set__Nodes_k__BackingField(
        ::System::Collections::Generic::List_1<
            ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>*
            value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Nodes_k__BackingField = value;
}
inline void BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::set_Nodes(
    ::System::Collections::Generic::List_1<
        ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*>(),
          { "set_Nodes",
            {},
            { ::i2c::type_of<::System::Collections::Generic::List_1<
                ::BeatSaber::Main::GraphQL::Models::
                    LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>*
BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::get_Nodes() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*>(),
          { "get_Nodes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>*>(
      this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*>(),
          { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*
BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::New_ctor() {
  return THROW_UNLESS(
      ::i2c::no_logger{},
      ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel::
    BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel() {}
//  Writing Method size for method:
//  ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel.set_LeaderboardEntriesForUserFriends
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::*)(
    ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*)>(
    &::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::set_LeaderboardEntriesForUserFriends)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3208700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*>(),
            { "set_LeaderboardEntriesForUserFriends",
              {},
              { ::i2c::type_of<
                  ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel.get_LeaderboardEntriesForUserFriends
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel* (
        ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::*)()>(
        &::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::get_LeaderboardEntriesForUserFriends)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3208708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*>(),
                                                { "get_LeaderboardEntriesForUserFriends", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3208710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*>(),
                                                { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*& BeatSaber::Main::
    GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::__cordl_internal_get__LeaderboardEntriesForUserFriends_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LeaderboardEntriesForUserFriends_k__BackingField;
}
constexpr ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel* const&
BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::
    __cordl_internal_get__LeaderboardEntriesForUserFriends_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LeaderboardEntriesForUserFriends_k__BackingField;
}
constexpr void BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::
    __cordl_internal_set__LeaderboardEntriesForUserFriends_k__BackingField(
        ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LeaderboardEntriesForUserFriends_k__BackingField = value;
}
inline void BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::set_LeaderboardEntriesForUserFriends(
    ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*>(),
          { "set_LeaderboardEntriesForUserFriends",
            {},
            { ::i2c::type_of<
                ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*
BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::get_LeaderboardEntriesForUserFriends() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*>(),
                                              { "get_LeaderboardEntriesForUserFriends", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<
      ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*>(this,
                                                                                                                                                                                 ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*>(),
                                              { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*
BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel::
    ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel() {}
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel.set_Beatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::*)(
    ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*)>(
    &::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::set_Beatmap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32086ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*>(),
            { "set_Beatmap", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel.get_Beatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel* (
    ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::get_Beatmap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32086f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*>(), { "get_Beatmap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32086fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*&
BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::__cordl_internal_get__Beatmap_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Beatmap_k__BackingField;
}
constexpr ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel* const&
BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::__cordl_internal_get__Beatmap_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Beatmap_k__BackingField;
}
constexpr void BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::__cordl_internal_set__Beatmap_k__BackingField(
    ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Beatmap_k__BackingField = value;
}
inline void BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::set_Beatmap(
    ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*>(),
          { "set_Beatmap", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*
BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::get_Beatmap() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*>(), { "get_Beatmap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*>(this,
                                                                                                                                                                                  ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*
BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel::
    XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel() {}
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel.set_ActiveDataEnvironment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::*)(
    ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*)>(
    &::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::set_ActiveDataEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32086d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*>(),
            { "set_ActiveDataEnvironment", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel.get_ActiveDataEnvironment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel* (
    ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::get_ActiveDataEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32086e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*>(), { "get_ActiveDataEnvironment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32086e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*&
BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::__cordl_internal_get__ActiveDataEnvironment_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ActiveDataEnvironment_k__BackingField;
}
constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel* const&
BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::__cordl_internal_get__ActiveDataEnvironment_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ActiveDataEnvironment_k__BackingField;
}
constexpr void BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::__cordl_internal_set__ActiveDataEnvironment_k__BackingField(
    ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ActiveDataEnvironment_k__BackingField = value;
}
inline void BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::set_ActiveDataEnvironment(
    ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*>(),
          { "set_ActiveDataEnvironment", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*
BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::get_ActiveDataEnvironment() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*>(), { "get_ActiveDataEnvironment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*
BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel() {}
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel.set_XocBeatGamesCurrentUser
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::*)(
    ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*)>(&::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::set_XocBeatGamesCurrentUser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32086c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*>(),
                                         { "set_XocBeatGamesCurrentUser", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel.get_XocBeatGamesCurrentUser
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel* (
    ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::*)()>(&::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::get_XocBeatGamesCurrentUser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32086cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*>(), { "get_XocBeatGamesCurrentUser", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32086d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*&
BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::__cordl_internal_get__XocBeatGamesCurrentUser_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XocBeatGamesCurrentUser_k__BackingField;
}
constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel* const&
BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::__cordl_internal_get__XocBeatGamesCurrentUser_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XocBeatGamesCurrentUser_k__BackingField;
}
constexpr void BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::__cordl_internal_set__XocBeatGamesCurrentUser_k__BackingField(
    ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____XocBeatGamesCurrentUser_k__BackingField = value;
}
inline void
BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::set_XocBeatGamesCurrentUser(::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*>(),
                                       { "set_XocBeatGamesCurrentUser", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel* BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::get_XocBeatGamesCurrentUser() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*>(), { "get_XocBeatGamesCurrentUser", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel* BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel::BSLeaderboardFriendsModel() {}
