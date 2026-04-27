#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428399F8
   RuntimeId:        06DA
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBBA0
*/
enum TurbulenceNoiseType
{
  TurbulenceNoiseType_Random = 0,
  TurbulenceNoiseType_Perlin = 1,
  TurbulenceNoiseType_PerlinSimplex = 2,
  TurbulenceNoiseType_PerlinCurl = 3,
};

}
