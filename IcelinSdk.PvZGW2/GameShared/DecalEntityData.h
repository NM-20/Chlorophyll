#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Render/DecalType.h>
#include <IcelinSdk.PvZGW2/Render/DecalAtlasTile.h>
#include <IcelinSdk.PvZGW2/Render/SurfaceShaderInstanceDataStruct.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AC88
   RuntimeId:        0EE3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B3D
   VfTable:          0000000142263140
   Address (Base):   00000001430ED4E0
*/
#pragma pack(push, 16)
class DecalEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  DecalType DecalType; /* 0x0060 */
  DecalAtlasTile AtlasTile; /* 0x0064 */
  SurfaceShaderInstanceDataStruct Shader; /* 0x0078 */
  FB_FLOAT32 ClipAngle; /* 0x00A0 */
  FB_UINT8 SortingPriority; /* 0x00A4 */
  FB_BOOLEAN Enabled; /* 0x00A5 */
  char pad_00A6[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(DecalEntityData) == 176);

}
