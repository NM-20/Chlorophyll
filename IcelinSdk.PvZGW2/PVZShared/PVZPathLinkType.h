#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872FD0
   RuntimeId:        2B76
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C1048
*/
enum PVZPathLinkType
{
  PVZPathLinkType_None = 0,
  PVZPathLinkType_Vault = 1,
  PVZPathLinkType_JumpDown = 2,
  PVZPathLinkType_HighJump = 3,
  PVZPathLinkType_ZTeleporter = 4,
  PVZPathLinkType_PTeleporter = 5,
  PVZPathLinkType_NTeleporter = 6,
  PVZPathLinkType_Count = 7,
};

}
