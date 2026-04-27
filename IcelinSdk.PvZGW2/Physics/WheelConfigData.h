#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Physics/SphereCollisionData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Physics/SpringData.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 00000001428513C0
   RuntimeId:        1464
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E0B
   VfTable:          000000014227F5B0
   Address (Base):   00000001430FC010
*/
#pragma pack(push, 16)
class WheelConfigData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class RotationBodyData) RotationBody; /* 0x0010 */
  SphereCollisionData SphereCollision; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Offset; /* 0x0020 */
  Vec3 Inertia; /* 0x0030 */
  SpringData Spring; /* 0x0040 */
  FB_FLOAT32 Mass; /* 0x0060 */
  FB_FLOAT32 Radius; /* 0x0064 */
  FB_FLOAT32 Width; /* 0x0068 */
  FB_FLOAT32 RollingResistanceInternalBaseFactor; /* 0x006C */
  FB_FLOAT32 RollingResistanceBaseFactor; /* 0x0070 */
  FB_FLOAT32 RollingResistanceVelocityFactor; /* 0x0074 */
  FB_FLOAT32 EngineBrakeVelocityFactor; /* 0x0078 */
  FB_FLOAT32 EngineBrakeMinFactor; /* 0x007C */
  FB_FLOAT32 EngineBrakeMaxFactor; /* 0x0080 */
  char pad_0084[0x0004];
  FB_STDARRAY(struct Vec2) TransmissionLoss; /* 0x0088 */
  FB_FLOAT32 DiffGearRatio; /* 0x0090 */
  FB_FLOAT32 LowSpeedSteeringSensitivity; /* 0x0094 */
  FB_FLOAT32 MidSpeedSteeringSensitivity; /* 0x0098 */
  FB_FLOAT32 HighSpeedSteeringSensitivity; /* 0x009C */
  FB_FLOAT32 SensitivityRangeScale; /* 0x00A0 */
  FB_FLOAT32 LowSpeedSteeringSensitivityLimit; /* 0x00A4 */
  FB_FLOAT32 MidSpeedSteeringSensitivityLimit; /* 0x00A8 */
  FB_FLOAT32 HighSpeedSteeringSensitivityLimit; /* 0x00AC */
  FB_FLOAT32 TrackedTurnSpeedLimit; /* 0x00B0 */
  FB_FLOAT32 TrackedForwardSpeedLimit; /* 0x00B4 */
  FB_FLOAT32 TrackedSlipSteerReductionScale; /* 0x00B8 */
  char pad_00BC[0x0004];
  FB_HANDLE(class Curve2D) SteerInertia; /* 0x00C0 */
  FB_STDARRAY(struct SensitivityAtVelocity) SteeringSensitivity; /* 0x00C8 */
  FB_FLOAT32 TrackedSteeringBoostOnOppositeTorque; /* 0x00D0 */
  FB_FLOAT32 SlopeGripMinAngle; /* 0x00D4 */
  FB_FLOAT32 SlopeGripMaxAngle; /* 0x00D8 */
  FB_INT32 SlopeGripExponent; /* 0x00DC */
  FB_FLOAT32 OffGroundGravityModifier; /* 0x00E0 */
  FB_FLOAT32 SideSlipAngleMaxSlipCondition; /* 0x00E4 */
  FB_FLOAT32 AngularVelocityMinSlipCondition; /* 0x00E8 */
  FB_FLOAT32 WheelVelocityXMinSlipCondition; /* 0x00EC */
  FB_FLOAT32 WheelSlipRatioMaxSlipCondition; /* 0x00F0 */
  FB_FLOAT32 LongitudinalFrictionForceMaxFactor; /* 0x00F4 */
  FB_FLOAT32 LateralFrictionForceMaxFactor; /* 0x00F8 */
  char pad_00FC[0x0004];
  FB_STDARRAY(struct FrictionScaleAtVelocity) LongitudeFrictionScale; /* 0x0100 */
  FB_STDARRAY(struct FrictionScaleAtVelocity) LattitudeFrictionScale; /* 0x0108 */
  FB_FLOAT32 WheelFrictionLattitudeBrakeScale; /* 0x0110 */
  FB_FLOAT32 Resistance; /* 0x0114 */
  FB_FLOAT32 FxTorqueRadiusMultiplier; /* 0x0118 */
  FB_FLOAT32 FrictionMomentVelocityMin; /* 0x011C */
  FB_FLOAT32 FrictionMomentVelocityMax; /* 0x0120 */
  FB_FLOAT32 FrictionMomentMultiplier; /* 0x0124 */
  FB_FLOAT32 FrictionMomentMaxFactor; /* 0x0128 */
  FB_FLOAT32 BrakeFactor; /* 0x012C */
  FB_FLOAT32 BrakeForce; /* 0x0130 */
  FB_FLOAT32 HandBrakeFactor; /* 0x0134 */
  FB_FLOAT32 HandBrakeForce; /* 0x0138 */
  FB_FLOAT32 TotalFrictionScale; /* 0x013C */
  FB_FLOAT32 TotalLateralFrictionScale; /* 0x0140 */
  FB_FLOAT32 LateralPosK; /* 0x0144 */
  FB_FLOAT32 LateralNegK; /* 0x0148 */
  FB_FLOAT32 LongitudinalPosK; /* 0x014C */
  FB_FLOAT32 LongitudinalNegK; /* 0x0150 */
  FB_FLOAT32 AlignMomScale; /* 0x0154 */
  FB_FLOAT32 WheelBaseLateral; /* 0x0158 */
  FB_FLOAT32 WheelBaseLongitudinal; /* 0x015C */
  FB_INT32 DrivingType; /* 0x0160 */
  FB_INT32 SteeringType; /* 0x0164 */
  FB_INT32 FrictionMethod; /* 0x0168 */
  FB_INT32 RotationDirectionIndex; /* 0x016C */
  FB_INT32 SteeringAngleIndex; /* 0x0170 */
  FB_INT32 PacejkaConfigIndex; /* 0x0174 */
  FB_INT32 EngineIndex; /* 0x0178 */
  FB_INT32 AckermanDeviceType; /* 0x017C */
  MaterialDecl CollisionMaterialPair; /* 0x0180 */
  FB_BOOLEAN AllowGripSlipTransition; /* 0x0184 */
  FB_BOOLEAN AutoHandBrakeIfNoThrottleAndSteer; /* 0x0185 */
  FB_BOOLEAN UseRollingResistanceVelocityFactor; /* 0x0186 */
  FB_BOOLEAN UseRollingResistanceBaseFactor; /* 0x0187 */
  FB_BOOLEAN UseEngineBrake; /* 0x0188 */
  FB_BOOLEAN IsAllowedToSpin; /* 0x0189 */
  FB_BOOLEAN HasSteeringInverted; /* 0x018A */
  FB_BOOLEAN UseFrictionMoment; /* 0x018B */
  FB_BOOLEAN UseLowSpeedAutoBrake; /* 0x018C */
  FB_BOOLEAN AdjustWheelRotation; /* 0x018D */
  char pad_018E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0190 */
#pragma pack(pop)

static_assert(sizeof(WheelConfigData) == 400);

}
