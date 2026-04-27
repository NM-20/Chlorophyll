#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F940
   RuntimeId:        130D
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8C48
*/
enum MorphDebugRenderFlag
{
  MorphRender_Bones = 0,
  MorphRender_IncludeShapeBlend = 1,
  MorphRender_IncludeFeatureBlend = 2,
  MorphRender_BoneNames = 3,
  MorphRender_BoneHierarchy = 4,
  MorphRender_BoneCoordinates = 5,
};

}
