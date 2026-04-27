#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428518E8
   RuntimeId:        14B2
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA400
*/
enum ProximityObjectType
{
  PotProximityDisabled = 0,
  PotVaultableLow = 1,
  PotVaultableHigh = 2,
  PotSupportedShooting = 3,
  PotInteractWith = 4,
  PotBashable = 5,
};

}
