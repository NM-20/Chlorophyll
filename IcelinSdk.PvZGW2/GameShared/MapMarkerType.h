#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849560
   RuntimeId:        0D96
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB5A0
*/
enum MapMarkerType
{
  MMTMissionObjective = 0,
  MMTSecondaryMissionObjective = 1,
  MMTSoldier = 2,
  MMTVehicle = 3,
  MMTAmmoCrate = 4,
  MMTGeneric = 5,
  MMTFlag = 6,
  MMTTactical = 7,
  MMTWarning = 8,
};

}
