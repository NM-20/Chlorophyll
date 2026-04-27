#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873BF8
   RuntimeId:        2C28
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A39
   VfTable:          0000000142378DF0
   Address (Base):   00000001430CFAE0
*/
#pragma pack(push, 8)
class AIAreaTriggerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AIAreaTriggerEntityData) == 24);

}
