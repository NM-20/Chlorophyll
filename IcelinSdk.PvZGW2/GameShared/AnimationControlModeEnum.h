#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F6A8
   RuntimeId:        12E3
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B6078
*/
enum AnimationControlModeEnum
{
  AnimationControlModeEnum_DisconnectTrajectoryAndObject = 0,
  AnimationControlModeEnum_PlaceTrajectoryAtObject = 1,
  AnimationControlModeEnum_PlaceObjectAtTrajectory = 2,
  AnimationControlModeEnum_PlaceTrajectoryAtObjectAllowScale = 3,
};

}
