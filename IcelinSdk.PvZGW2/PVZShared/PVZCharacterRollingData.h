#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863048
   RuntimeId:        20E2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07E9
   VfTable:          0000000142353F00
   Address (Base):   0000000143108490
*/
#pragma pack(push, 8)
class PVZCharacterRollingData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffData) RollingBuff; /* 0x0018 */
  FB_FLOAT32 RollingSpeedMultiplier; /* 0x0020 */
  FB_FLOAT32 JumpHeightMultiplier; /* 0x0024 */
  FB_FLOAT32 AccelerationGainMultiplier; /* 0x0028 */
  FB_FLOAT32 DecelerationGainMultiplier; /* 0x002C */
  FB_FLOAT32 DirectionChangeAcclerationGainMultiplier; /* 0x0030 */
  FB_FLOAT32 DirectionChangeThresholdMultiplier; /* 0x0034 */
  FB_HANDLE(class BuffData) BoostingBuff; /* 0x0038 */
  FB_FLOAT32 BoostingSpeedMultiplier; /* 0x0040 */
  FB_FLOAT32 BoostingJumpHeightMultiplier; /* 0x0044 */
  FB_FLOAT32 BoostDuration; /* 0x0048 */
  FB_FLOAT32 BoostCooldown; /* 0x004C */
  FB_HANDLE(class BuffData) DashingBuff; /* 0x0050 */
  FB_FLOAT32 DashingSpeedMultiplier; /* 0x0058 */
  FB_FLOAT32 DashDuration; /* 0x005C */
  FB_FLOAT32 DashCooldown; /* 0x0060 */
  FB_FLOAT32 DashChargeTime; /* 0x0064 */
  FB_FLOAT32 DashChargeSpinSpeed; /* 0x0068 */
  char pad_006C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterRollingData) == 112);

}
