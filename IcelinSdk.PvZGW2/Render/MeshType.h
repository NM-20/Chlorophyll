#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852E30
   RuntimeId:        160A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C82E8
*/
enum MeshType
{
  MeshType_Rigid = 0,
  MeshType_Skinned = 1,
  MeshType_Composite = 2,
};

}
