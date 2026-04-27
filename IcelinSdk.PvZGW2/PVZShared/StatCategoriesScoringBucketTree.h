#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesGuidTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869D68
   RuntimeId:        251D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0781
   VfTable:          00000001423558B0
   Address (Base):   00000001430F80B0
*/
#pragma pack(push, 8)
class StatCategoriesScoringBucketTree : public StatCategoriesGuidTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesScoringBucketTree) == 56);

}
