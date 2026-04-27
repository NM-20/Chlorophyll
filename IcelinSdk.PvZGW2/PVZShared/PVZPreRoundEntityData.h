#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864868
   RuntimeId:        2217
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AD1
   VfTable:          0000000142352318
   Address (Base):   00000001430D4F90
*/
#pragma pack(push, 8)
class PVZPreRoundEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 RoundStartPlayerCount; /* 0x0018 */
  FB_UINT32 RoundStartCountdown; /* 0x001C */
  FB_INT32 RoundRestartPlayerCount; /* 0x0020 */
  FB_UINT32 RoundRestartCountdown; /* 0x0024 */
  FB_BOOLEAN RequireSpawnedPlayers; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZPreRoundEntityData) == 48);

}
