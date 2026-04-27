#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865AD8
   RuntimeId:        2323
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AAF
   VfTable:          0000000142350C78
   Address (Base):   00000001430CE5D0
*/
#pragma pack(push, 8)
class PVZPlayerIteratorFilterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZPlayerIteratorFilterEntityData) == 24);

}
