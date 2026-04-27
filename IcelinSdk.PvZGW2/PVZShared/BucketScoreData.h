#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ScoringBucket.h>

namespace fb
{

/* TypeInfo (Array): 00000001428699B8
   RuntimeId:        24E3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3788
   Default Value:    00000001428699D0
*/
#pragma pack(push, 4)
struct BucketScoreData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  ScoringBucket Bucket; /* 0x0000 */
  FB_FLOAT32 Score; /* 0x0004 */
  FB_FLOAT32 AdditionalValueMultiplier; /* 0x0008 */
  FB_BOOLEAN AllowGlobalScoreMultiplier; /* 0x000C */
  FB_BOOLEAN AllowBucketModifiers; /* 0x000D */
  char pad_000E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(BucketScoreData) == 16);

}
