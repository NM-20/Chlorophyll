#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/TeamAssignMode.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864EF8
   RuntimeId:        226C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A73
   VfTable:          0000000142351D58
   Address (Base):   00000001430D4AB0
*/
#pragma pack(push, 8)
class AutoTeamEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamAssignMode TeamAssignMode; /* 0x0018 */
  FB_UINT32 PlayerCountNeededToAutoBalance; /* 0x001C */
  FB_UINT32 TeamDifferenceToAutoBalance; /* 0x0020 */
  TeamId OneTeamAssignModeTeam; /* 0x0024 */
  FB_BOOLEAN RotateTeamOnNewRound; /* 0x0028 */
  FB_BOOLEAN AutoBalance; /* 0x0029 */
  FB_BOOLEAN ResetIsPlayersFirstRound; /* 0x002A */
  FB_BOOLEAN IsTeamImbalanceLimitEnabled; /* 0x002B */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(AutoTeamEntityData) == 48);

}
