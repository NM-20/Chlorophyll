#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingSessionMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870B40
   RuntimeId:        29EB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ADE
   VfTable:          000000014236D0E0
   Address (Base):   00000001430E3A60
*/
#pragma pack(push, 8)
class UIMatchmakingEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MatchmakingSessionMode Mode; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING ScenarioName; /* 0x0020 */
  FB_CSTRING Playlist; /* 0x0028 */
  FB_INT32 Difficulty; /* 0x0030 */
  char pad_0034[0x0004];
  FB_CSTRING Level; /* 0x0038 */
  FB_CSTRING GameModeVariant; /* 0x0040 */
  FB_BOOLEAN TOD; /* 0x0048 */
  FB_BOOLEAN FailedPopupEnabled; /* 0x0049 */
  char pad_004A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UIMatchmakingEntityData) == 80);

}
