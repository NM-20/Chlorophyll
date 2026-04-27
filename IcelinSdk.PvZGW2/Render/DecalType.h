#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428527E0
   RuntimeId:        15A6
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B67F8
*/
enum DecalType
{
  DecalType_VolumeDecal = 0,
  DecalType_ProjectedMeshDecal = 1,
  DecalType_QuadDecal = 2,
  DecalType_Count = 3,
};

}
