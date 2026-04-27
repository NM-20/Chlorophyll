#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869978
   RuntimeId:        24DF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C37A8
   Default Value:    0000000142866C08
*/
#pragma pack(push, 8)
struct ScoringBucketModifierData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class ScoringBucketData) BucketToModify; /* 0x0000 */
  FB_HANDLE(class ScoringBucketData) ModifierValueBucket; /* 0x0008 */
  FB_STDARRAY(FB_FLOAT32) ModifierMilestones; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ScoringBucketModifierData) == 24);

}
