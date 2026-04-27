#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428659B8
   RuntimeId:        2311
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A34
   VfTable:          0000000142351068
   Address (Base):   00000001430D45D0
*/
#pragma pack(push, 8)
class TeamLifeCounterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId TeamId; /* 0x0018 */
  FB_UINT32 StartLifeCount; /* 0x001C */
  FB_INT32 TeamReviveCounter; /* 0x0020 */
  char pad_0024[0x0004];
  FB_CSTRING TeamReviveConsumableKey; /* 0x0028 */
  FB_BOOLEAN ReviveAllHumansOnWaveComplete; /* 0x0030 */
  FB_BOOLEAN CancelAllManDownsOnTeamWipe; /* 0x0031 */
  char pad_0032[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(TeamLifeCounterEntityData) == 56);

}
