#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C928
   RuntimeId:        2734
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          090D
   VfTable:          0000000142366530
   Address (Base):   00000001430F7330
*/
#pragma pack(push, 8)
class VelocityOverrideBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinSpeedMultiplier; /* 0x0018 */
  FB_FLOAT32 MaxSpeedMultiplier; /* 0x001C */
  FB_FLOAT32 MinPowerThreshold; /* 0x0020 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VelocityOverrideBuffEffectData) == 40);

}
