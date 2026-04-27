#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/EventCompareGateType.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849660
   RuntimeId:        0DA6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C25
   VfTable:          000000014225FE30
   Address (Base):   00000001430EE200
*/
#pragma pack(push, 8)
class EventCompareGateEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Value; /* 0x0018 */
  EventCompareGateType CompareType; /* 0x001C */
  Realm Realm; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(EventCompareGateEntityData) == 40);

}
