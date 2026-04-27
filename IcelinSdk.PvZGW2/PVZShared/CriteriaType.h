#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BD20
   RuntimeId:        26A6
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B6658
*/
enum CriteriaType
{
  CriteriaType_IAR_InARound = 0,
  CriteriaType_IAR_InARoundResetIfValueNotChanged = 1,
  CriteriaType_IAR_InARoundHighestValue = 2,
  CriteriaType_IAS_InASpawn = 3,
  CriteriaType_IAS_InASpawnNotResetable = 4,
  CriteriaType_IAS_InASpawnWithoutTakingDamage = 5,
  CriteriaType_LEVEL_HighestValue = 6,
  CriteriaType_GLOBAL_AllTimeTotal = 7,
  CriteriaType_GLOBAL_AllTimeTotalResettable = 8,
  CriteriaType_GLOBAL_HighestValue = 9,
  CriteriaType_GLOBAL_HighestValueAlways = 10,
  CriteriaType_GLOBAL_HighestValueInASpawn = 11,
  CriteriaType_GLOBAL_LowestValueAlways = 12,
  CriteriaType_GivenValue = 13,
  CriteriaType_IAD_InADeathStreak = 14,
  CriteriaType_LAST_ITEM = 15,
};

}
