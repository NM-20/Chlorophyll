#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesBaseTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869AE8
   RuntimeId:        24F5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0776
   VfTable:          00000001423559D8
   Address (Base):   00000001430BCDF0
*/
#pragma pack(push, 8)
class StatCategoriesGuidTree : public StatCategoriesBaseTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesGuidTree) == 56);

}
