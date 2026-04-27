#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D0D0
   RuntimeId:        27A4
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C2E08
*/
enum FriendJoinEventType
{
  FriendJoinEventType_None = 0,
  FriendJoinEventType_TargetLeft = 1,
  FriendJoinEventType_TargetIsJoiningFriend = 2,
  FriendJoinEventType_TargetWithFriend = 3,
  FriendJoinEventType_TargetTeam = 4,
  FriendJoinEventType_TeamFull = 5,
  FriendJoinEventType_Aborted = 6,
  FriendJoinEventType_LeftGame = 7,
};

}
