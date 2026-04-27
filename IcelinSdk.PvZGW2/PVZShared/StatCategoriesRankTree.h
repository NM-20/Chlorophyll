#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesGuidTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869DA8
   RuntimeId:        2521
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0779
   VfTable:          0000000142355870
   Address (Base):   00000001430F8050
*/
#pragma pack(push, 8)
class StatCategoriesRankTree : public StatCategoriesGuidTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesRankTree) == 56);

}
