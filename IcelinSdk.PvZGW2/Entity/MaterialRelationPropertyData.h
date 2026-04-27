#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BC78
   RuntimeId:        0940
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1155
   VfTable:          0000000142212498
   Address (Base):   00000001430EF100
*/
#pragma pack(push, 8)
class MaterialRelationPropertyData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MaterialRelationPropertyData) == 16);

}
