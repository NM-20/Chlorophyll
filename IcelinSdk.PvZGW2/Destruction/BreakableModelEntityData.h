#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/GamePhysicsEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839090
   RuntimeId:        0664
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B24
   VfTable:          00000001421FDF18
   Address (Base):   00000001430FE350
*/
#pragma pack(push, 16)
class BreakableModelEntityData : public GamePhysicsEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SurfaceShaderBaseAsset) DecalVolumeShader; /* 0x0090 */
  FB_FLOAT32 DecalVolumeScaleFactor; /* 0x0098 */
  char pad_009C[0x0004];
  FB_HANDLE(class MeshAsset) Mesh; /* 0x00A0 */
  FB_UINT32 BoneCount; /* 0x00A8 */
  char pad_00AC[0x0004];
  FB_HANDLE(class EdgeModelLightMapData) EdgeModelLightMapData; /* 0x00B0 */
  char pad_00B8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(BreakableModelEntityData) == 192);

}
