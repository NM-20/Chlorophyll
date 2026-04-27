#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Emitter/EmitterCollisionMethod.h>
#include <IcelinSdk.PvZGW2/Emitter/EmitterCollisionPriority.h>
#include <IcelinSdk.PvZGW2/Emitter/EmitterTerrainSnapType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839D38
   RuntimeId:        070E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08E7
   VfTable:          00000001421FF598
   Address (Base):   0000000143115AB0
*/
#pragma pack(push, 8)
class UpdateCollisionData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Restitution; /* 0x0030 */
  FB_FLOAT32 ReflectionBias; /* 0x0034 */
  FB_FLOAT32 RestSpeedThreshold; /* 0x0038 */
  FB_FLOAT32 Randomness; /* 0x003C */
  FB_FLOAT32 CollisionRadiusFactor; /* 0x0040 */
  EmitterCollisionMethod Method; /* 0x0044 */
  EmitterCollisionPriority Priority; /* 0x0048 */
  FB_FLOAT32 SnapOffsetBasedOnEmitter; /* 0x004C */
  FB_FLOAT32 SnapRelativeOffsetFactor; /* 0x0050 */
  EmitterTerrainSnapType SnapType; /* 0x0054 */
  FB_HANDLE(class SoundAsset) Sound; /* 0x0058 */
  FB_BOOLEAN KillOnCollision; /* 0x0060 */
  FB_BOOLEAN SnapOnTerrain; /* 0x0061 */
  char pad_0062[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(UpdateCollisionData) == 104);

}
