#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A038
   RuntimeId:        073E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBA80
*/
enum EmittableType
{
  EmittableType_Point = 0,
  EmittableType_Quad = 100,
  EmittableType_Mesh = 200,
  EmittableType_Ribbon = 300,
  EmittableType_Beam = 400,
  EmittableType_Decal = 800,
  Point = 801,
  Quad = 802,
  ScreenAlignedQuad = 803,
  DirectionAlignedQuad = 804,
  WorldAlignedQuad = 805,
  ParticleMesh = 806,
  Ribbon = 807,
  Trail = 808,
};

}
