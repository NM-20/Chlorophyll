#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TargetCameraData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DAC8
   RuntimeId:        1161
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DCC
   VfTable:          0000000142273AC0
   Address (Base):   00000001430FCA30
*/
#pragma pack(push, 16)
class VehicleCameraData : public TargetCameraData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 MoveToPosition; /* 0x00D0 */
  Vec3 MoveToPositionSlopeFactor; /* 0x00E0 */
  Vec3 TargetOffset; /* 0x00F0 */
  Vec3 TargetOffsetSlopeFactor; /* 0x0100 */
  Vec3 RotationFactor; /* 0x0110 */
  FB_FLOAT32 PositionFactor; /* 0x0120 */
  FB_FLOAT32 ResetDistance; /* 0x0124 */
  FB_BOOLEAN FixedPosition; /* 0x0128 */
  FB_BOOLEAN FixedAngleZ; /* 0x0129 */
  FB_BOOLEAN UseTerrainAdjustment; /* 0x012A */
  char pad_012B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */
#pragma pack(pop)

static_assert(sizeof(VehicleCameraData) == 304);

}
