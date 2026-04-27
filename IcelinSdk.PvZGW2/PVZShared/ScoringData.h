#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869998
   RuntimeId:        24E1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07DF
   VfTable:          00000001423559C8
   Address (Base):   00000001431075F0
*/
#pragma pack(push, 8)
class ScoringData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ScoringTypeData) ScoringTypes; /* 0x0018 */
  FB_REFARRAY(class ScoringHandlerData) ScoringHandlers; /* 0x0020 */
  FB_REFARRAY(class ScoringBucketData) Buckets; /* 0x0028 */
  FB_STDARRAY(struct ScoringBucketModifierData) BucketModifiers; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ScoringData) == 56);

}
