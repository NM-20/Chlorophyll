#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428698D8
   RuntimeId:        24D5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07D2
   VfTable:          0000000142355AF8
   Address (Base):   00000001431076B0
*/
#pragma pack(push, 8)
class RankParamsAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class RankLevelData) Ranks; /* 0x0018 */
  FB_REFARRAY(class PrestigeLevelData) PrestigeLevels; /* 0x0020 */
  FB_REFARRAY(class PlayerRankLevelData) PlayerRanks; /* 0x0028 */
  FB_REFARRAY(class PlayerRankLevelData) Generations; /* 0x0030 */
  FB_UINT32 PlayerRankLevelRollover; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(RankParamsAsset) == 64);

}
