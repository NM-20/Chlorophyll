#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873C18
   RuntimeId:        2C2A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BF3
   VfTable:          0000000142378D40
   Address (Base):   00000001430E16C0
*/
#pragma pack(push, 8)
class AIGameActionEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AIGameActionEntityData) == 24);

}
