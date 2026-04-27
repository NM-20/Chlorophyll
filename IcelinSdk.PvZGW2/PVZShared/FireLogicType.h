#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AF78
   RuntimeId:        25FC
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B8BC0
*/
enum FireLogicType
{
  fltSingleFire = 0,
  fltSingleFireWithBoltAction = 1,
  fltAutomaticFire = 2,
  fltBurstFire = 3,
  fltHoldAndRelease = 4,
  fltDetonatedFiring = 5,
  fltHoldAndReleaseBurstFire = 6,
  fltPunchOnTriggerDown = 7,
  fltCount = 8,
};

}
