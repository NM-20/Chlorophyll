#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/DamageModifierComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E848
   RuntimeId:        1219
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DA5
   VfTable:          0000000142272E30
   Address (Base):   00000001430D6190
*/
#pragma pack(push, 16)
class TeamDamageModifierComponentData : public DamageModifierComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ModifierForFriendly; /* 0x0070 */
  FB_FLOAT32 ModifierForNeutral; /* 0x0074 */
  FB_FLOAT32 ModifierForHostile; /* 0x0078 */
  FB_FLOAT32 HealModifierForFriendly; /* 0x007C */
  FB_FLOAT32 HealModifierForNeutral; /* 0x0080 */
  FB_FLOAT32 HealModifierForHostile; /* 0x0084 */
  char pad_0088[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(TeamDamageModifierComponentData) == 144);

}
