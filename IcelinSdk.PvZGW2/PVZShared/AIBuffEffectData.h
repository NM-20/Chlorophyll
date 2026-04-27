#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/PVZShared/AIBuffEffect.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C428
   RuntimeId:        26E4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0902
   VfTable:          0000000142366920
   Address (Base):   00000001430F6AF0
*/
#pragma pack(push, 8)
class AIBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AIBuffEffect BuffType; /* 0x0018 */
  FB_FLOAT32 AppliedValue; /* 0x001C */
  FB_FLOAT32 MinPowerThreshold; /* 0x0020 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AIBuffEffectData) == 40);

}
