#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850FF8
   RuntimeId:        142C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F0E
   VfTable:          000000014227F6F0
   Address (Base):   000000014310F690
*/
#pragma pack(push, 16)
class MotorbikeData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxLeaningRoll; /* 0x0010 */
  FB_FLOAT32 CounterLeanForce; /* 0x0014 */
  char pad_0018[0x0008];
  Vec3 DampBigJumpImpactCounterForce; /* 0x0020 */
  Vec3 WheelieForce; /* 0x0030 */
  Vec3 WheelieForceBodyOffset; /* 0x0040 */
  FB_FLOAT32 StandStillLeanForce; /* 0x0050 */
  FB_FLOAT32 LeanForce; /* 0x0054 */
  FB_FLOAT32 JumpForwardLeanMinAngle; /* 0x0058 */
  FB_FLOAT32 JumpForwardLeanMomentum; /* 0x005C */
  FB_FLOAT32 JumpForwardLeanMinNoContactTime; /* 0x0060 */
  FB_FLOAT32 LeanForceMaxVel; /* 0x0064 */
  FB_FLOAT32 KickstandRoll; /* 0x0068 */
  FB_FLOAT32 KickstandLinearDamping; /* 0x006C */
  FB_FLOAT32 StandStillRoll; /* 0x0070 */
  FB_FLOAT32 DampBigJumpImpactVelocity; /* 0x0074 */
  FB_FLOAT32 DampBigJumpMaxSpringForceFraction; /* 0x0078 */
  FB_FLOAT32 DampBigJumpImpactVerticalVelocity; /* 0x007C */
  FB_FLOAT32 YawBrakeDampingLerpStartScale; /* 0x0080 */
  FB_FLOAT32 YawBrakeDampingLerpEndScale; /* 0x0084 */
  FB_FLOAT32 StoppieActivationVelocity; /* 0x0088 */
  FB_FLOAT32 StoppieStartVelocity; /* 0x008C */
  FB_FLOAT32 StoppieStopVelocity; /* 0x0090 */
  FB_FLOAT32 StoppieMomentum; /* 0x0094 */
  FB_FLOAT32 ShortOffgroundGravityMultiplier; /* 0x0098 */
  FB_FLOAT32 ShortOffgroundPeriod; /* 0x009C */
  FB_FLOAT32 WheelieSwitchOffNoContactTime; /* 0x00A0 */
  FB_FLOAT32 WheelieMaxNoDownForceContactTime; /* 0x00A4 */
  FB_FLOAT32 WheelieMaxNoContactTime; /* 0x00A8 */
  FB_FLOAT32 WheelieSteeringFactor; /* 0x00AC */
  FB_FLOAT32 WheelieInertia; /* 0x00B0 */
  FB_FLOAT32 WheelieStartVelocity; /* 0x00B4 */
  FB_FLOAT32 WheelieMaxVelocityUndamped; /* 0x00B8 */
  FB_FLOAT32 WheelieMaxVelocityDampRange; /* 0x00BC */
  FB_FLOAT32 WheelieOutAngularMomentum; /* 0x00C0 */
  FB_FLOAT32 WheelieSpringDamping; /* 0x00C4 */
  FB_FLOAT32 WheelieSpringKScale; /* 0x00C8 */
  FB_FLOAT32 WheelieAngularDamping; /* 0x00CC */
  FB_FLOAT32 WheelieAngularDampingSpeed; /* 0x00D0 */
  FB_FLOAT32 WheelieMaxAngle; /* 0x00D4 */
  FB_FLOAT32 WheelieMaxVelocity; /* 0x00D8 */
  FB_FLOAT32 WheelieVelocityForceScale; /* 0x00DC */
  FB_FLOAT32 WheelieAngularStartMomentum; /* 0x00E0 */
  FB_BOOLEAN DampBigJumpImpact; /* 0x00E4 */
  char pad_00E5[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(MotorbikeData) == 240);

}
