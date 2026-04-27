#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428498C0
   RuntimeId:        0DCC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09EF
   VfTable:          000000014225FAE8
   Address (Base):   0000000143114550
*/
#pragma pack(push, 8)
class EventQueueEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EventQueueEntityData) == 32);

}
