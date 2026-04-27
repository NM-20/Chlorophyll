#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855EC8
   RuntimeId:        18A2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D76
   VfTable:          00000001422C4F68
   Address (Base):   00000001430E91C0
*/
#pragma pack(push, 16)
class CameraParamsComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0080 */
  FB_FLOAT32 ViewDistance; /* 0x0084 */
  FB_FLOAT32 NearPlane; /* 0x0088 */
  FB_FLOAT32 SunShadowmapViewDistance; /* 0x008C */
  FB_FLOAT32 debrisClusterCullDsitance; /* 0x0090 */
  FB_FLOAT32 globalMeshLODScale; /* 0x0094 */
  FB_FLOAT32 globalCullScreenAreaScale; /* 0x0098 */
  char pad_009C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(CameraParamsComponentData) == 160);

}
