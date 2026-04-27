#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428562A8
   RuntimeId:        18DC
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9D60
*/
enum MipmapFilterMode
{
  MipmapFilterMode_Box = 0,
  MipmapFilterMode_Renormalize = 1,
  MipmapFilterMode_Poisson13 = 2,
  MipmapFilterMode_Poisson13Clamped = 3,
  MipmapFilterMode_BoxAverageEdges = 4,
};

}
