#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CB48
   RuntimeId:        2756
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0923
   VfTable:          00000001423662D8
   Address (Base):   00000001430F5B30
*/
#pragma pack(push, 8)
class ReceivingSupplyBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ReceivingHealthAmount; /* 0x0018 */
  FB_FLOAT32 ReceivingHealthTime; /* 0x001C */
  FB_FLOAT32 Period; /* 0x0020 */
  FB_BOOLEAN ReceivingHealth; /* 0x0024 */
  FB_BOOLEAN ApplyAtStartOfPeriod; /* 0x0025 */
  char pad_0026[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ReceivingSupplyBuffEffectData) == 40);

}
