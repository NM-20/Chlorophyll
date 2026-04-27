#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C3E8
   RuntimeId:        26E0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0934
   VfTable:          0000000142366950
   Address (Base):   00000001430F6B50
*/
#pragma pack(push, 8)
class AIRestrictorBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinPowerThreshold; /* 0x0018 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x001C */
  FB_BOOLEAN PauseAI; /* 0x0020 */
  FB_BOOLEAN RestrictAbilities; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AIRestrictorBuffEffectData) == 40);

}
