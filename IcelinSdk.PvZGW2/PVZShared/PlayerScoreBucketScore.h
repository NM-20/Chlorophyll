#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868510
   RuntimeId:        23DE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3948
   Default Value:    0000000142BFEC28
*/
#pragma pack(push, 4)
struct PlayerScoreBucketScore
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 ScoringBucket; /* 0x0000 */
  FB_FLOAT32 CappedValue; /* 0x0004 */
  FB_FLOAT32 UncappedValue; /* 0x0008 */
  FB_UINT32 RankBucketPrestigeLevelIndex; /* 0x000C */
  FB_BOOLEAN IsRankBucket; /* 0x0010 */
  char pad_0011[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(PlayerScoreBucketScore) == 20);

}
