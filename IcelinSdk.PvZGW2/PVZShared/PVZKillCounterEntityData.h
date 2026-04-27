#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZKillWeight.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865918
   RuntimeId:        2307
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C6B
   VfTable:          0000000142350F18
   Address (Base):   00000001430D4ED0
*/
#pragma pack(push, 8)
class PVZKillCounterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId TeamId; /* 0x0018 */
  FB_UINT32 MaxKillCount; /* 0x001C */
  FB_FLOAT32 EnemyWeight; /* 0x0020 */
  PVZKillWeight NeutralTeamWeight; /* 0x0024 */
  PVZKillWeight TeamKillWeight; /* 0x0030 */
  FB_BOOLEAN IgnoreAI; /* 0x003C */
  FB_BOOLEAN IgnoreAIVictims; /* 0x003D */
  FB_BOOLEAN IgnorePersistentAI; /* 0x003E */
  FB_BOOLEAN IgnorePersistentAIVictims; /* 0x003F */
  FB_BOOLEAN Enabled; /* 0x0040 */
  char pad_0041[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZKillCounterEntityData) == 72);

}
