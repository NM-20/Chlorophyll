#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesGuidTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868ED0
   RuntimeId:        243F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          077C
   VfTable:          0000000142356138
   Address (Base):   00000001431079B0
*/
#pragma pack(push, 8)
class StatCategoriesBuffTree : public StatCategoriesGuidTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesBuffTree) == 56);

}
