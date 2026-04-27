#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C748
   RuntimeId:        2716
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0914
   VfTable:          0000000142366698
   Address (Base):   00000001430F6790
*/
#pragma pack(push, 8)
class ResetAbilityBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Cooldown; /* 0x0018 */
  FB_BOOLEAN LeftAbility; /* 0x001C */
  FB_BOOLEAN RightAbility; /* 0x001D */
  FB_BOOLEAN UpAbility; /* 0x001E */
  char pad_001F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ResetAbilityBuffEffectData) == 32);

}
