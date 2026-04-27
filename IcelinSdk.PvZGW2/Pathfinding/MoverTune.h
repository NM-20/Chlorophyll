#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Pathfinding/BlockageMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850798
   RuntimeId:        13B5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06B9
   VfTable:          000000014227C740
   Address (Base):   00000001430EB6E0
*/
#pragma pack(push, 8)
class MoverTune : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 speed; /* 0x0018 */
  FB_FLOAT32 maxSpeedFraction; /* 0x001C */
  FB_HANDLE(class RadiusData) radiusData; /* 0x0020 */
  FB_FLOAT32 bulk; /* 0x0028 */
  FB_FLOAT32 cruiseAcc; /* 0x002C */
  FB_FLOAT32 startStopAcc; /* 0x0030 */
  FB_INT32 repulsorType; /* 0x0034 */
  FB_FLOAT32 flockAcc; /* 0x0038 */
  FB_FLOAT32 maxFlockAccDist; /* 0x003C */
  FB_FLOAT32 pathAcc; /* 0x0040 */
  char pad_0044[0x0004];
  FB_HANDLE(class CautionTune) cautionTune; /* 0x0048 */
  FB_FLOAT32 backpedalFraction; /* 0x0050 */
  FB_UINT32 planLayer; /* 0x0054 */
  FB_FLOAT32 pathSharingPenalty; /* 0x0058 */
  BlockageMode obstacleMode; /* 0x005C */
  FB_UINT32 obstacleBlockageFlags; /* 0x0060 */
  char pad_0064[0x0004];
  FB_HANDLE(class AutoObstacleTune) autoObTune; /* 0x0068 */
  FB_UINT32 repulsorBlockageFlags; /* 0x0070 */
  FB_UINT32 repulsorIdentityFlags; /* 0x0074 */
  FB_UINT32 linkUsageFlags; /* 0x0078 */
  char pad_007C[0x0004];
  FB_HANDLE(class PathCreationOptions) pathOptions; /* 0x0080 */
  FB_HANDLE(class JumperTune) jumperTune; /* 0x0088 */
  FB_HANDLE(class ProberTune) proberTune; /* 0x0090 */
  FB_HANDLE(class GoalTune) goalTune; /* 0x0098 */
  FB_HANDLE(class IdleTune) idleTune; /* 0x00A0 */
  FB_HANDLE(class TurnInPlaceTune) turnInPlace; /* 0x00A8 */
  FB_HANDLE(class RepulsionAccelerationTune) repulsionAccelerationTune; /* 0x00B0 */
  FB_HANDLE(class SurfaceOrientTune) surfaceOrientTune; /* 0x00B8 */
  FB_FLOAT32 sidestepFraction; /* 0x00C0 */
  FB_UINT32 customGeoMatchFlags; /* 0x00C4 */
  FB_HANDLE(class FollowerTune) followerTune; /* 0x00C8 */
  FB_BOOLEAN exitPuppetInObstacles; /* 0x00D0 */
  FB_BOOLEAN allowDetour; /* 0x00D1 */
  FB_BOOLEAN clientMotion; /* 0x00D2 */
  char pad_00D3[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D8 */
#pragma pack(pop)

static_assert(sizeof(MoverTune) == 216);

}
