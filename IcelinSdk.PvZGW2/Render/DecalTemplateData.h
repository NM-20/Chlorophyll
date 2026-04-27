#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Render/DecalAtlasTile.h>
#include <IcelinSdk.PvZGW2/Render/SurfaceShaderInstanceDataStruct.h>
#include <IcelinSdk.PvZGW2/Render/DecalType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852820
   RuntimeId:        15AA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0712
   VfTable:          00000001422977E8
   Address (Base):   00000001430DB270
*/
#pragma pack(push, 8)
class DecalTemplateData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Size; /* 0x0018 */
  FB_FLOAT32 RandomSize; /* 0x001C */
  FB_FLOAT32 Rotation; /* 0x0020 */
  FB_FLOAT32 RandomRotation; /* 0x0024 */
  FB_FLOAT32 ClipAngle; /* 0x0028 */
  FB_FLOAT32 ProximityRadiusFactor; /* 0x002C */
  FB_FLOAT32 NormalOffset; /* 0x0030 */
  DecalAtlasTile AtlasTile; /* 0x0034 */
  SurfaceShaderInstanceDataStruct Shader; /* 0x0048 */
  DecalType DecalType; /* 0x0070 */
  FB_INT32 MeshUVIndex; /* 0x0074 */
  FB_UINT8 SortingPriority; /* 0x0078 */
  FB_BOOLEAN ProjectMultiple; /* 0x0079 */
  char pad_007A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(DecalTemplateData) == 128);

}
