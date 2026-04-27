#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A058
   RuntimeId:        0740
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBA60
*/
enum EmittableAlignment
{
  EmittableAlignment_Screen = 0,
  EmittableAlignment_Emitter = 1,
  EmittableAlignment_Emittable = 2,
  EmittableAlignment_Direction = 3,
  EmittableAlignment_WorldFixedRotation = 4,
  EmittableAlignment_World = 5,
  EmittableAlignment_MotionStretch = 6,
  EmittableAlignment_MotionStretchScreen = 7,
  EmittableAlignment_OrientationToPosition = 8,
};

}
