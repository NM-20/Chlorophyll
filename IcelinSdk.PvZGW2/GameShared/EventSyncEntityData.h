#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A8E0
   RuntimeId:        0EB8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A03
   VfTable:          0000000142264098
   Address (Base):   00000001430D7270
*/
#pragma pack(push, 8)
class EventSyncEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EventSyncEntityData) == 24);

}
