#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingSessionMode.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingCriteria.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858AD0
   RuntimeId:        1A75
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F24
   VfTable:          00000001422D57E8
   Address (Base):   000000014310CBD0
*/
#pragma pack(push, 8)
class MatchmakingSession : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MatchmakingSessionMode Mode; /* 0x0010 */
  FB_UINT32 DurationMs; /* 0x0014 */
  MatchmakingCriteria Criteria; /* 0x0018 */
  FB_HANDLE(class GameParametersData) CreateGameParams; /* 0x0088 */
  FB_HANDLE(class MatchmakingSession) OnNotFound; /* 0x0090 */
  FB_REFARRAY(class MatchmakingModifier) Modifiers; /* 0x0098 */
  FB_CSTRING ScenarioName; /* 0x00A0 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A8 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingSession) == 168);

}
