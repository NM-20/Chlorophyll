#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428496A0
   RuntimeId:        0DAA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A5C
   VfTable:          000000014225FE68
   Address (Base):   00000001430D7930
*/
#pragma pack(push, 8)
class EventMemoryEntityData : public EntityData
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

static_assert(sizeof(EventMemoryEntityData) == 32);

}
