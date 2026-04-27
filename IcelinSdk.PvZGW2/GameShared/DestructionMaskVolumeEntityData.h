#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Render/SurfaceShaderInstanceDataStruct.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AC48
   RuntimeId:        0EDF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B7D
   VfTable:          00000001422630D8
   Address (Base):   0000000143113AD0
*/
#pragma pack(push, 16)
class DestructionMaskVolumeEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 DustAccumulationCurve; /* 0x0060 */
  Vec4 ShaderUserMasks; /* 0x0070 */
  FB_FLOAT32 Radius; /* 0x0080 */
  FB_FLOAT32 DustAccumulationLifeTime; /* 0x0084 */
  SurfaceShaderInstanceDataStruct Shader; /* 0x0088 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(DestructionMaskVolumeEntityData) == 176);

}
