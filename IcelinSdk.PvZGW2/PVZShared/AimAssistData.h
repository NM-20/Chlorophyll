#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DB58
   RuntimeId:        2840
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2CE8
   Default Value:    0000000142BB5B80
*/
#pragma pack(push, 16)
struct AimAssistData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 StickyBoxScale; /* 0x0000 */
  Vec3 StickyDistanceScale; /* 0x0010 */
  Vec3 SnapBoxScale; /* 0x0020 */
  Vec3 SnapDistanceScale; /* 0x0030 */
  Vec3 EyePosOffset; /* 0x0040 */
  FB_STDARRAY(FB_FLOAT32) InputPolynomial; /* 0x0050 */
  FB_STDARRAY(FB_FLOAT32) ZoomedInputPolynomial; /* 0x0058 */
  FB_FLOAT32 AccelerationInputThreshold; /* 0x0060 */
  FB_FLOAT32 AccelerationMultiplier; /* 0x0064 */
  FB_FLOAT32 AccelerationDamping; /* 0x0068 */
  FB_FLOAT32 AccelerationTimeThreshold; /* 0x006C */
  FB_FLOAT32 SquaredAcceleration; /* 0x0070 */
  Vec2 MaxAcceleration; /* 0x0074 */
  FB_FLOAT32 YawSpeedStrength; /* 0x007C */
  FB_FLOAT32 PitchSpeedStrength; /* 0x0080 */
  Vec2 AttractDistanceFallOffs; /* 0x0084 */
  FB_FLOAT32 AttractSoftZone; /* 0x008C */
  FB_FLOAT32 AttractUserInputMultiplier; /* 0x0090 */
  FB_FLOAT32 AttractUserInputMultiplier_NoZoom; /* 0x0094 */
  FB_FLOAT32 AttractOwnSpeedInfluence; /* 0x0098 */
  FB_FLOAT32 AttractTargetSpeedInfluence; /* 0x009C */
  FB_FLOAT32 AttractOwnRequiredMovementForMaximumAttract; /* 0x00A0 */
  FB_FLOAT32 AttractStartInputThreshold; /* 0x00A4 */
  FB_FLOAT32 AttractMoveInputCap; /* 0x00A8 */
  FB_FLOAT32 AttractYawStrength; /* 0x00AC */
  FB_FLOAT32 AttractPitchStrength; /* 0x00B0 */
  FB_FLOAT32 MaxToTargetAngle; /* 0x00B4 */
  FB_FLOAT32 MaxToTargetXZAngle; /* 0x00B8 */
  FB_FLOAT32 ViewObstructedKeepTime; /* 0x00BC */
  FB_FLOAT32 SnapZoomLateralSpeedLimit; /* 0x00C0 */
  FB_FLOAT32 SnapZoomTime; /* 0x00C4 */
  FB_FLOAT32 SnapZoomPostTimeNoInput; /* 0x00C8 */
  FB_FLOAT32 SnapZoomPostTime; /* 0x00CC */
  FB_UINT32 SnapZoomReticlePointPriority; /* 0x00D0 */
  FB_FLOAT32 SnapZoomAutoEngageTime; /* 0x00D4 */
  FB_FLOAT32 SnapZoomBreakTimeAtMaxInput; /* 0x00D8 */
  FB_FLOAT32 SnapZoomBreakMaxInput; /* 0x00DC */
  FB_FLOAT32 SnapZoomBreakMinAngle; /* 0x00E0 */
  FB_FLOAT32 SnapZoomSpamGuardTime; /* 0x00E4 */
  FB_HANDLE(class SkeletonCollisionData) SoldierBackupSkeletonCollisionData; /* 0x00E8 */
  FB_FLOAT32 CheckBoneCenterOnlyDistance; /* 0x00F0 */
  FB_FLOAT32 DisableForcedTargetRecalcDistance; /* 0x00F4 */
  FB_FLOAT32 OverrideAimingRange; /* 0x00F8 */
  FB_FLOAT32 OverrideAimingRangeCrouch; /* 0x00FC */
  FB_FLOAT32 OverrideAimingRangeProne; /* 0x0100 */
  FB_BOOLEAN UseYawAcceleration; /* 0x0104 */
  FB_BOOLEAN UsePitchAcceleration; /* 0x0105 */
  FB_BOOLEAN SnapZoomUserShorterWeaponTime; /* 0x0106 */
  FB_BOOLEAN SnapZoomPostTimeDynamicPoint; /* 0x0107 */
  FB_BOOLEAN ForceSoldierBackupSkeletonCollisionUse; /* 0x0108 */
  char pad_0109[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(AimAssistData) == 272);

}
