#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428494A0
   RuntimeId:        0D8A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB5C0
*/
enum MessageReciever
{
  MrAll = 0,
  MrTeam = 1,
  MrTeamAndSquad = 2,
  MrPlayer = 3,
};

}
