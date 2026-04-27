#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428654C8
   RuntimeId:        22C3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A82
   VfTable:          0000000142351428
   Address (Base):   00000001430E6520
*/
#pragma pack(push, 8)
class ProductInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ProductInfoEntityData) == 24);

}
