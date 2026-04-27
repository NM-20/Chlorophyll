#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryGuidData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869D48
   RuntimeId:        251B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EAE
   VfTable:          00000001423558A0
   Address (Base):   00000001431070B0
*/
#pragma pack(push, 8)
class StatsCategoryScoringBucketData : public StatsCategoryGuidData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryScoringBucketData) == 64);

}
