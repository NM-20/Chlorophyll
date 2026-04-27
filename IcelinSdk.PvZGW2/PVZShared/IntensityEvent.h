#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873828
   RuntimeId:        2BF2
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B7FA0
*/
enum IntensityEvent
{
  Intensity_None = 0,
  Intensity_ProximityToObjective = 1,
  Intensity_ObjectiveCompletion = 2,
  Intensity_RoundTimeLeft = 3,
  Intensity_Health = 4,
  Intensity_Difficulty = 5,
  Intensity_EnemiesClose = 6,
  Intensity_Num = 7,
};

}
