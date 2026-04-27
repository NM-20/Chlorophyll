#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863108
   RuntimeId:        20EE
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B94C0
*/
enum PVZCommanderActionType
{
  PVZCommanderActionType_SpotTargets = 0,
  PVZCommanderActionType_Resurrection = 1,
  PVZCommanderActionType_Healing = 2,
  PVZCommanderActionType_AirStrike = 3,
  PVZCommanderActionType_FlyingNPCWave = 4,
  PVZCommanderActionType_SupplyDrops = 5,
  PVZCommanderActionType_AntiCommander = 6,
  PVZCommanderActionType_Capture = 7,
  PVZCommanderActionType_DefenseActivation = 8,
  PVZCommanderActionType_MineField = 9,
  PVZCommanderActionType_FireWeapon = 10,
  PVZCommanderActionType_Count = 11,
  PVZCommanderActionType_None = 12,
};

}
