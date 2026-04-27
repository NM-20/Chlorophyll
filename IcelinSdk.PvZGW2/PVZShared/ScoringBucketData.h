#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/ScoringBucket.h>
#include <IcelinSdk.PvZGW2/PVZShared/ScoringBucketType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869958
   RuntimeId:        24DD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F1F
   VfTable:          0000000142355A38
   Address (Base):   0000000143107650
*/
#pragma pack(push, 8)
class ScoringBucketData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ScoringBucket DestinationBucket; /* 0x0010 */
  ScoringBucketType BucketType; /* 0x0014 */
  FB_CSTRING Name; /* 0x0018 */
  FB_HANDLE(class ConsumableData) ConsumableData; /* 0x0020 */
  FB_FLOAT32 AddToConsumableLimit; /* 0x0028 */
  char pad_002C[0x0004];
  FB_REFARRAY(class StatsCategoryBaseData) ConnectedCategories; /* 0x0030 */
  FB_FLOAT32 ScoringCap; /* 0x0038 */
  FB_BOOLEAN InitScoreFromPersistence; /* 0x003C */
  FB_BOOLEAN RoundScore; /* 0x003D */
  FB_BOOLEAN IncludeInScoreStat; /* 0x003E */
  FB_BOOLEAN IncludeInCoinzStat; /* 0x003F */
  FB_BOOLEAN AddToEntry; /* 0x0040 */
  FB_BOOLEAN IsRankBucket; /* 0x0041 */
  FB_BOOLEAN GhostToClientOnChange; /* 0x0042 */
  FB_BOOLEAN ApplyGlobalScoreMultiplier; /* 0x0043 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ScoringBucketData) == 72);

}
