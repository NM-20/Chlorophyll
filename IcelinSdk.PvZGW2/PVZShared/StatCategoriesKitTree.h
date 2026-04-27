#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesGuidTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869C68
   RuntimeId:        250D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          077E
   VfTable:          0000000142355930
   Address (Base):   0000000143107110
*/
#pragma pack(push, 8)
class StatCategoriesKitTree : public StatCategoriesGuidTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesKitTree) == 56);

}
