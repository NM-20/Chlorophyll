#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A148
   RuntimeId:        0E4A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB460
   Default Value:    0000000142BF4970
*/
#pragma pack(push, 4)
struct PhysicsDrivenAnimationEntityBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef PhysicsMotionTarget; /* 0x0000 */
  AntRef AimLeftRight; /* 0x0014 */
  AntRef AimUpDown; /* 0x0028 */
  AntRef Crouch; /* 0x003C */
  AntRef ForceSetTrajectory; /* 0x0050 */
  AntRef InAir; /* 0x0064 */
  AntRef Skydive; /* 0x0078 */
  AntRef Parachute; /* 0x008C */
  AntRef Swim; /* 0x00A0 */
  AntRef Flying; /* 0x00B4 */
  AntRef InputBackward; /* 0x00C8 */
  AntRef InputForward; /* 0x00DC */
  AntRef InputLeft; /* 0x00F0 */
  AntRef InputRight; /* 0x0104 */
  AntRef InputThrottle; /* 0x0118 */
  AntRef InputStrafe; /* 0x012C */
  AntRef IsEnemy; /* 0x0140 */
  AntRef Jump; /* 0x0154 */
  AntRef DoubleJump; /* 0x0168 */
  AntRef Hover; /* 0x017C */
  AntRef LeanLeftRight; /* 0x0190 */
  AntRef Prone; /* 0x01A4 */
  AntRef Sprint; /* 0x01B8 */
  AntRef GroundSupported; /* 0x01CC */
  AntRef GroundNormal; /* 0x01E0 */
  AntRef GroundDistance; /* 0x01F4 */
  AntRef GroundAngleZ; /* 0x0208 */
  AntRef GroundAngleX; /* 0x021C */
  AntRef GroundAngleFromNormal; /* 0x0230 */
  AntRef IsClientAnimatable; /* 0x0244 */
  AntRef CustomizationScreen; /* 0x0258 */
  AntRef Minimal3pServer; /* 0x026C */
  AntRef VerticalImpact; /* 0x0280 */
  AntRef VerticalImpactSpeed; /* 0x0294 */
  AntRef FalseSignal; /* 0x02A8 */
  AntRef LockArmsToCameraWeight; /* 0x02BC */
  AntRef WindDirection; /* 0x02D0 */
  AntRef WindStrength; /* 0x02E4 */
  AntRef WaterDepth; /* 0x02F8 */
  AntRef EyeWaterDepth; /* 0x030C */
  AntRef VelocityY; /* 0x0320 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0334 */
#pragma pack(pop)

static_assert(sizeof(PhysicsDrivenAnimationEntityBinding) == 820);

}
