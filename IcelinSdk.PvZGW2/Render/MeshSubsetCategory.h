#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852E50
   RuntimeId:        160C
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C82C8
*/
enum MeshSubsetCategory
{
  MeshSubsetCategory_Opaque = 0,
  MeshSubsetCategory_Transparent = 1,
  MeshSubsetCategory_TransparentDecal = 2,
  MeshSubsetCategory_ZOnly = 3,
  MeshSubsetCategory_Shadow = 4,
  MeshSubsetCategoryCount = 5,
};

}
