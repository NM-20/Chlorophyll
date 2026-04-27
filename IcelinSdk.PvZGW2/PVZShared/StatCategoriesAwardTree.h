#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesGuidTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869C28
   RuntimeId:        2509
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          077A
   VfTable:          0000000142355960
   Address (Base):   00000001431071D0
*/
#pragma pack(push, 8)
class StatCategoriesAwardTree : public StatCategoriesGuidTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesAwardTree) == 56);

}
