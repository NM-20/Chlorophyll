#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/PVZShared/HealthBuffHealType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CD08
   RuntimeId:        2772
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          092F
   VfTable:          00000001423661F0
   Address (Base):   00000001430F63D0
*/
#pragma pack(push, 8)
class HealthBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  HealthBuffHealType HealType; /* 0x0018 */
  FB_FLOAT32 Value; /* 0x001C */
  FB_BOOLEAN ValueIsPercentage; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(HealthBuffEffectData) == 40);

}
