#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesGuidTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868E90
   RuntimeId:        243B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0780
   VfTable:          00000001423560A0
   Address (Base):   0000000143107A70
*/
#pragma pack(push, 8)
class StatCategoriesAiTree : public StatCategoriesGuidTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesAiTree) == 56);

}
