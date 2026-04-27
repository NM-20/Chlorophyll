#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852E70
   RuntimeId:        160E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C82A8
*/
enum MeshSubsetCategoryFlags
{
  MeshSubsetCategoryFlags_Opaque = 1,
  MeshSubsetCategoryFlags_Transparent = 2,
  MeshSubsetCategoryFlags_TransparentDecal = 4,
  MeshSubsetCategoryFlags_ZOnly = 8,
  MeshSubsetCategoryFlags_Shadow = 16,
  MeshSubsetCategoryFlags_DynamicReflection = 32,
  MeshSubsetCategoryFlags_PlanarReflection = 64,
  MeshSubsetCategoryFlags_StaticReflection = 128,
  MeshSubsetCategoryFlags_ShadowOverride = 256,
  MeshSubsetCategoryFlags_DynamicReflectionOverride = 512,
  MeshSubsetCategoryFlags_PlanarReflectionOverride = 1024,
  MeshSubsetCategoryFlags_StaticReflectionOverride = 2048,
  MeshSubsetCategoryFlags_Normal = 7,
  MeshSubsetCategoryFlags_All = 65535,
};

}
