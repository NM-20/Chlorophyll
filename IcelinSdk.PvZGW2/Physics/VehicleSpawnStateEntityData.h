#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 00000001428514F8
   RuntimeId:        1476
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09EC
   VfTable:          000000014227F500
   Address (Base):   00000001430FBA10
*/
#pragma pack(push, 16)
class VehicleSpawnStateEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 StartupDelayModifier; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 InitialVelocity; /* 0x0020 */
  FB_FLOAT32 InitialThrottle; /* 0x0030 */
  FB_UINT32 EngineIndex; /* 0x0034 */
  FB_FLOAT32 InitialRpmModifier; /* 0x0038 */
  FB_FLOAT32 HeightOffset; /* 0x003C */
  FB_FLOAT32 Radius; /* 0x0040 */
  char pad_0044[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(VehicleSpawnStateEntityData) == 80);

}
