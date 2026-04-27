#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/PartComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CDB8
   RuntimeId:        10B6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DBE
   VfTable:          0000000142267320
   Address (Base):   00000001430D0B00
*/
#pragma pack(push, 16)
class ChassisComponentData : public PartComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VehicleConfigData) VehicleConfig; /* 0x0090 */
  FB_HANDLE(class GearboxConfigData) GearboxConfig; /* 0x0098 */
  FB_HANDLE(class CameraRelativeControlData) CameraRelativeControlConfig; /* 0x00A0 */
  FB_REFARRAY(class VehicleWaterEffectData) WaterEffects; /* 0x00A8 */
  FB_REFARRAY(class VehicleWaterEffectData) WaterStreakEffects; /* 0x00B0 */
  FB_FLOAT32 TriggerGroundEffectImpulse; /* 0x00B8 */
  FB_FLOAT32 TriggerGroundEffectHeight; /* 0x00BC */
  FB_FLOAT32 GroundEffectFadeParam; /* 0x00C0 */
  char pad_00C4[0x0004];
  FB_HANDLE(class LandingGearLogicData) LandingGearLogic; /* 0x00C8 */
  FB_BOOLEAN AlwaysFullThrottle; /* 0x00D0 */
  FB_BOOLEAN GroundEffectOnTerrainOnly; /* 0x00D1 */
  FB_BOOLEAN AllowNegativeThrottle; /* 0x00D2 */
  char pad_00D3[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(ChassisComponentData) == 224);

}
