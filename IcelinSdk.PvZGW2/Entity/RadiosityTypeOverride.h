#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A668
   RuntimeId:        07E1
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB9A0
*/
enum RadiosityTypeOverride
{
  RadiosityTypeOverride_None = 0,
  RadiosityTypeOverride_Dynamic = 1,
  RadiosityTypeOverride_LightProbe = 2,
  RadiosityTypeOverride_TerrainProjected = 3,
};

}
