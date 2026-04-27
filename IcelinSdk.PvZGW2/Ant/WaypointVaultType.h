#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835658
   RuntimeId:        02EE
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CD408
*/
enum WaypointVaultType
{
  WaypointVaultType_VaultOverHigh = 0,
  WaypointVaultType_VaultOntoLow = 1,
  WaypointVaultType_VaultDownLow = 2,
  WaypointVaultType_VaultDownHigh = 3,
  WaypointVaultType_ClimbUpHigh = 4,
  WaypointVaultType_ClimbOverHigh = 5,
  WaypointVaultType_JumpAcross = 6,
  WaypointVaultType_Count = 7,
};

}
