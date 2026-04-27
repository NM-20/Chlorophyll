#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865E08
   RuntimeId:        2353
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C45E8
*/
enum GamePermission
{
  GamePermission_InviteOnly = 0,
  GamePermission_FriendsAndInviteOnly = 1,
  GamePermission_Open = 2,
  GamePermission_Closed = 3,
};

}
