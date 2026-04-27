#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/EngineConfigData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Physics/PropellerType.h>
#include <IcelinSdk.PvZGW2/Physics/ForceMagnitudeInputType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428512D0
   RuntimeId:        1458
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1005
   VfTable:          000000014227F5F8
   Address (Base):   00000001430FC0D0
*/
#pragma pack(push, 16)
class PropellerEngineConfigData : public EngineConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 HorisontalForceOffset; /* 0x0070 */
  PropellerType PropellerType; /* 0x0080 */
  char pad_0084[0x0004];
  FB_HANDLE(class RotorParameters) RotorConfig; /* 0x0088 */
  ::fb::ForceMagnitudeInputType ForceMagnitudeInputType; /* 0x0090 */
  FB_UINT32 DirectionVectorIndex; /* 0x0094 */
  FB_FLOAT32 ForceMagnitudeMultiplier; /* 0x0098 */
  FB_FLOAT32 LiftForceSpringConstant; /* 0x009C */
  FB_FLOAT32 LiftForceDampingConstant; /* 0x00A0 */
  FB_FLOAT32 CyclicInputScaleRoll; /* 0x00A4 */
  FB_FLOAT32 CyclicRollLiftMod; /* 0x00A8 */
  FB_FLOAT32 CyclicRollStrafeMod; /* 0x00AC */
  FB_FLOAT32 CyclicInputScalePitch; /* 0x00B0 */
  FB_FLOAT32 CyclicPitchLiftMod; /* 0x00B4 */
  FB_FLOAT32 CyclicPitchStrafeMod; /* 0x00B8 */
  FB_FLOAT32 CyclicPitchStrafeBrakeMod; /* 0x00BC */
  FB_FLOAT32 CollectiveInputIdle; /* 0x00C0 */
  FB_FLOAT32 CollectiveThrottleInputScale; /* 0x00C4 */
  FB_FLOAT32 CollectiveBrakeInputScale; /* 0x00C8 */
  FB_FLOAT32 DefaultAngleOfAttack; /* 0x00CC */
  FB_FLOAT32 AttackAngleMod; /* 0x00D0 */
  FB_FLOAT32 StabilizerMod; /* 0x00D4 */
  FB_FLOAT32 HorisontalMinEffectVelocity; /* 0x00D8 */
  FB_FLOAT32 HorisontalMinEffectMod; /* 0x00DC */
  ::fb::ForceMagnitudeInputType SPForwardInput; /* 0x00E0 */
  ::fb::ForceMagnitudeInputType SPSidewaysInput; /* 0x00E4 */
  ::fb::ForceMagnitudeInputType SPVerticalInput; /* 0x00E8 */
  ::fb::ForceMagnitudeInputType SPPitchInput; /* 0x00EC */
  ::fb::ForceMagnitudeInputType SPYawInput; /* 0x00F0 */
  FB_FLOAT32 SPForwardStrength; /* 0x00F4 */
  FB_FLOAT32 SPSidewaysStrength; /* 0x00F8 */
  FB_FLOAT32 SPVerticalStrength; /* 0x00FC */
  FB_FLOAT32 SPReverseForceMod; /* 0x0100 */
  FB_FLOAT32 PitchStrength; /* 0x0104 */
  FB_FLOAT32 PitchLimit; /* 0x0108 */
  FB_FLOAT32 PitchFromVel; /* 0x010C */
  FB_FLOAT32 VelocityFromPitch; /* 0x0110 */
  FB_FLOAT32 RollStrength; /* 0x0114 */
  FB_FLOAT32 BankingStrength; /* 0x0118 */
  FB_FLOAT32 BankingLimit; /* 0x011C */
  FB_FLOAT32 PitchUpWhenBankStrength; /* 0x0120 */
  FB_FLOAT32 PitchUpWhenBankLimit; /* 0x0124 */
  FB_FLOAT32 GravityMod; /* 0x0128 */
  FB_BOOLEAN ApplyForceAsTorque; /* 0x012C */
  FB_BOOLEAN EnableNewHelicopter; /* 0x012D */
  FB_BOOLEAN SPAllowed; /* 0x012E */
  FB_BOOLEAN SPDefault; /* 0x012F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */
#pragma pack(pop)

static_assert(sizeof(PropellerEngineConfigData) == 304);

}
