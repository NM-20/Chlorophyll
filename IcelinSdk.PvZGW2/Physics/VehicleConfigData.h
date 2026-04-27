#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Physics/VehicleInputData.h>
#include <IcelinSdk.PvZGW2/Physics/VehicleMode.h>
#include <IcelinSdk.PvZGW2/Physics/InputThrottle.h>
#include <IcelinSdk.PvZGW2/Physics/AntiRollBars.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851018
   RuntimeId:        142E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0830
   VfTable:          000000014227F700
   Address (Base):   000000014310F630
*/
#pragma pack(push, 16)
class VehicleConfigData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AeroDynamicPhysicsData) AeroDynamicPhysics; /* 0x0010 */
  FB_HANDLE(class MotorbikeData) MotorbikePhysics; /* 0x0018 */
  Vec3 CenterOfMass; /* 0x0020 */
  Vec3 CenterOfMassHandlingOffset; /* 0x0030 */
  Vec3 InertiaOverride; /* 0x0040 */
  Vec3 InertiaModifier; /* 0x0050 */
  Vec3 ProximityExtScale; /* 0x0060 */
  FB_HANDLE(class MotionDampingData) MotionDamping; /* 0x0070 */
  VehicleInputData Input; /* 0x0078 */
  FB_HANDLE(class FloatPhysicsData) FloatPhysics; /* 0x00C8 */
  FB_HANDLE(class StabilizerData) Stabilizer; /* 0x00D0 */
  FB_STDARRAY(struct StabilizerSettings) Stabilizers; /* 0x00D8 */
  FB_STDARRAY(struct ConstantForceData) ConstantForce; /* 0x00E0 */
  VehicleMode VehicleModeAtReset; /* 0x00E8 */
  FB_FLOAT32 BodyMass; /* 0x00EC */
  FB_FLOAT32 GravityModifier; /* 0x00F0 */
  FB_FLOAT32 YawMin; /* 0x00F4 */
  FB_FLOAT32 YawMax; /* 0x00F8 */
  FB_FLOAT32 DownForceBaseFactor; /* 0x00FC */
  FB_FLOAT32 DownForceWheelFactor; /* 0x0100 */
  FB_FLOAT32 VehicleModeChangeEnteringTime; /* 0x0104 */
  FB_FLOAT32 VehicleModeChangeStartingTime; /* 0x0108 */
  FB_FLOAT32 VehicleModeChangeStoppingTime; /* 0x010C */
  FB_FLOAT32 VehicleModeChangeLeavingTime; /* 0x0110 */
  FB_FLOAT32 StandStillLowSpeedTimeLimit; /* 0x0114 */
  FB_FLOAT32 StaticFrictionBreakCollisionMod; /* 0x0118 */
  FB_FLOAT32 StaticFrictionBreakVelocityMod; /* 0x011C */
  FB_FLOAT32 CoefficientOfAirFriction; /* 0x0120 */
  FB_FLOAT32 AirDensity; /* 0x0124 */
  FB_FLOAT32 AirDragArea; /* 0x0128 */
  FB_FLOAT32 WindResistanceBaseFactor; /* 0x012C */
  FB_FLOAT32 WindResistanceVelocityFactor; /* 0x0130 */
  FB_FLOAT32 WindResistanceVelocityFactorMin; /* 0x0134 */
  FB_FLOAT32 WindResistanceVelocityFactorMax; /* 0x0138 */
  InputThrottle UseInputYawAsThrottle; /* 0x013C */
  AntiRollBars AntiRollBars; /* 0x0150 */
  FB_FLOAT32 MaxGroundSpeed; /* 0x0160 */
  FB_FLOAT32 ProximityHeightTranslation; /* 0x0164 */
  FB_FLOAT32 FrictionAtLowVelocity; /* 0x0168 */
  FB_BOOLEAN UseDownForce; /* 0x016C */
  FB_BOOLEAN UseDownForceWheelFactor; /* 0x016D */
  FB_BOOLEAN UseGearbox; /* 0x016E */
  FB_BOOLEAN UseStandStillBrake; /* 0x016F */
  FB_BOOLEAN UseStandStillSleep; /* 0x0170 */
  FB_BOOLEAN UseTurnAroundForce; /* 0x0171 */
  FB_BOOLEAN UseMotorcycleControl; /* 0x0172 */
  FB_BOOLEAN InvertPitchAllowed; /* 0x0173 */
  FB_BOOLEAN UseWindResistance; /* 0x0174 */
  char pad_0175[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0180 */
#pragma pack(pop)

static_assert(sizeof(VehicleConfigData) == 384);

}
