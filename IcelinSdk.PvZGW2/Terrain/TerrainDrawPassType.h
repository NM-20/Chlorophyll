#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428542A8
   RuntimeId:        1712
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7A68
*/
enum TerrainDrawPassType
{
  TerrainDrawPassType_SinglePass = 0,
  TerrainDrawPassType_MultipassFirst = 1,
  TerrainDrawPassType_MultipassConsecutive = 2,
};

}
