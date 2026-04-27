#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C6A8
   RuntimeId:        270C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0937
   VfTable:          00000001423665C0
   Address (Base):   00000001430F73F0
*/
#pragma pack(push, 8)
class GravityScaleBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinPowerMultiplier; /* 0x0018 */
  FB_FLOAT32 MaxPowerMultiplier; /* 0x001C */
  FB_FLOAT32 MinPowerThreshold; /* 0x0020 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(GravityScaleBuffEffectData) == 40);

}
