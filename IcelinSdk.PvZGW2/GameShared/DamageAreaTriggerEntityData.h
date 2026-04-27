#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TriggerEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C070
   RuntimeId:        1002
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B73
   VfTable:          0000000142267CF0
   Address (Base):   00000001430DBE70
*/
#pragma pack(push, 16)
class DamageAreaTriggerEntityData : public TriggerEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DamagePerSecond; /* 0x0070 */
  FB_FLOAT32 DamageTime; /* 0x0074 */
  TeamId TeamOfImmortalCharacters; /* 0x0078 */
  FB_BOOLEAN DamageCharacters; /* 0x007C */
  FB_BOOLEAN KillCharactersByAdmin; /* 0x007D */
  FB_BOOLEAN DamageVehicles; /* 0x007E */
  FB_BOOLEAN DamageBangers; /* 0x007F */
  FB_BOOLEAN SetDamageGiverFromEvent; /* 0x0080 */
  FB_BOOLEAN ExcludeImmortalCharactersInTeam; /* 0x0081 */
  FB_BOOLEAN ExcludeShieldedSoldiers; /* 0x0082 */
  FB_BOOLEAN IsNeverTriggeredByPlayer; /* 0x0083 */
  FB_BOOLEAN ExcludeHumanSoldiers; /* 0x0084 */
  FB_BOOLEAN ForceDamage; /* 0x0085 */
  char pad_0086[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(DamageAreaTriggerEntityData) == 144);

}
