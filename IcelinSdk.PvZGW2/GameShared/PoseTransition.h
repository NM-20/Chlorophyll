#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B278
   RuntimeId:        0F31
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C9408
*/
enum PoseTransition
{
  PTStandToProne = 0,
  PTStandToCrouch = 1,
  PTCrouchToStand = 2,
  PTCrouchToProne = 3,
  PTProneToStand = 4,
  PTProneToCrouch = 5,
};

}
