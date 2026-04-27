#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ScoringHandlerData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869AA8
   RuntimeId:        24F1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E28
   VfTable:          0000000142355A08
   Address (Base):   00000001430E4DE0
*/
#pragma pack(push, 8)
class LeaderboardScoringHandlerData : public ScoringHandlerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING GunRangeOverallBestName; /* 0x0010 */
  FB_CSTRING GunRangeOverallBestCharacterName; /* 0x0018 */
  FB_CSTRING GunRangePlantOverallBestName; /* 0x0020 */
  FB_CSTRING GunRangePlantOverallBestCharacterName; /* 0x0028 */
  FB_CSTRING GunRangeZombieOverallBestName; /* 0x0030 */
  FB_CSTRING GunRangeZombieOverallBestCharacterName; /* 0x0038 */
  FB_REFARRAY(class PlayerIconData) PlayerIcons; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(LeaderboardScoringHandlerData) == 72);

}
