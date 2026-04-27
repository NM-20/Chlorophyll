#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesGuidTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869BA8
   RuntimeId:        2501
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          077B
   VfTable:          00000001423558C0
   Address (Base):   00000001431072F0
*/
#pragma pack(push, 8)
class StatCategoriesLevelTree : public StatCategoriesGuidTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesLevelTree) == 56);

}
