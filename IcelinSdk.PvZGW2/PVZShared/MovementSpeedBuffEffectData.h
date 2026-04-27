#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C708
   RuntimeId:        2712
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0900
   VfTable:          00000001423666B0
   Address (Base):   00000001430F7390
*/
#pragma pack(push, 8)
class MovementSpeedBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinPowerMultiplier; /* 0x0018 */
  FB_FLOAT32 MaxPowerMultiplier; /* 0x001C */
  FB_FLOAT32 MinPowerThreshold; /* 0x0020 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0024 */
  FB_BOOLEAN IgnoreWeaponUpgrades; /* 0x0028 */
  FB_BOOLEAN InAirOnly; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MovementSpeedBuffEffectData) == 48);

}
