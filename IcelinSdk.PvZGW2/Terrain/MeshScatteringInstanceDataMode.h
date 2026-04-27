#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428541A8
   RuntimeId:        1702
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7B08
*/
enum MeshScatteringInstanceDataMode
{
  MeshScatteringInstanceDataMode_None = 0,
  MeshScatteringInstanceDataMode_Normal = 1,
  MeshScatteringInstanceDataMode_NormalAndAtlasIndex = 2,
  MeshScatteringInstanceDataMode_NormalAndColor = 3,
  MeshScatteringInstanceDataMode_WindAndAtlasIndex = 4,
  MeshScatteringInstanceDataMode_Wind = 5,
};

}
