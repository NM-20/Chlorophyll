#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Render/SurfaceShaderInstanceDataStruct.h>
#include <IcelinSdk.PvZGW2/WorldRender/RenderVolumeTransformType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428556F8
   RuntimeId:        1838
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B37
   VfTable:          00000001422BBEB8
   Address (Base):   00000001430EA120
*/
#pragma pack(push, 16)
class RenderVolumeEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 UserMasks; /* 0x0060 */
  SurfaceShaderInstanceDataStruct Shader; /* 0x0070 */
  RenderVolumeTransformType TransformType; /* 0x0098 */
  FB_BOOLEAN Enabled; /* 0x009C */
  char pad_009D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(RenderVolumeEntityData) == 160);

}
