#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TargetCameraData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D9F8
   RuntimeId:        1159
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DCB
   VfTable:          0000000142273AF8
   Address (Base):   00000001430FCAF0
*/
#pragma pack(push, 16)
class ChaseCameraData : public TargetCameraData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 TargetOffset; /* 0x00D0 */
  Vec3 ToWantedPositionScale; /* 0x00E0 */
  FB_FLOAT32 TargetRotationOffset; /* 0x00F0 */
  FB_FLOAT32 MaxViewRotationAngleDeg; /* 0x00F4 */
  FB_FLOAT32 WantedAngleDeg; /* 0x00F8 */
  FB_FLOAT32 WantedDistance; /* 0x00FC */
  FB_FLOAT32 MaxDistance; /* 0x0100 */
  FB_FLOAT32 SnapDistance; /* 0x0104 */
  FB_FLOAT32 ResetDistance; /* 0x0108 */
  FB_FLOAT32 ForceFieldRadius; /* 0x010C */
  FB_FLOAT32 CollisionRadius; /* 0x0110 */
  FB_FLOAT32 ForceFieldForceScale; /* 0x0114 */
  FB_FLOAT32 AwayFromTargetForceScale; /* 0x0118 */
  FB_FLOAT32 VelocityDrag; /* 0x011C */
  FB_FLOAT32 MaxVelocity; /* 0x0120 */
  FB_FLOAT32 PillMinimumCollisionRadius; /* 0x0124 */
  FB_FLOAT32 PillMaximumCollisionRadius; /* 0x0128 */
  FB_FLOAT32 PillMinimumCollisionLength; /* 0x012C */
  FB_FLOAT32 PillExpandSizeSpeedAcceleration; /* 0x0130 */
  FB_FLOAT32 LookDistanceScale; /* 0x0134 */
  FB_FLOAT32 LookDistanceInFrontOfTarget; /* 0x0138 */
  FB_UINT32 UpdateRate; /* 0x013C */
  FB_BOOLEAN KeepTargetPitch; /* 0x0140 */
  FB_BOOLEAN ShouldRollWithTarget; /* 0x0141 */
  FB_BOOLEAN InheritTargetVelocity; /* 0x0142 */
  FB_BOOLEAN BypassChaseCalculations; /* 0x0143 */
  FB_BOOLEAN HasCollisionAgainstTarget; /* 0x0144 */
  FB_BOOLEAN IgnoreCollisionInChaseCalculations; /* 0x0145 */
  FB_BOOLEAN HasCollision; /* 0x0146 */
  char pad_0147[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */
#pragma pack(pop)

static_assert(sizeof(ChaseCameraData) == 336);

}
