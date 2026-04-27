#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AA28
   RuntimeId:        081D
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B5340
*/
enum UpdatePass
{
  UpdatePass_PreSim = 0,
  UpdatePass_PostSim = 1,
  UpdatePass_PostFrame = 2,
  UpdatePass_FrameInterpolation = 3,
  UpdatePass_PreInput = 4,
  UpdatePass_PreFrame = 5,
  UpdatePass_PreAnimation = 6,
  UpdatePass_AnimationAttach = 7,
  UpdatePass_PostAnimation = 8,
  UpdatePass_Count = 9,
};

}
