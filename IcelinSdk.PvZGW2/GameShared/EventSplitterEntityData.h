#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428496C0
   RuntimeId:        0DAC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AA7
   VfTable:          000000014225FDC0
   Address (Base):   00000001430EE1A0
*/
#pragma pack(push, 8)
class EventSplitterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_BOOLEAN RunOnce; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EventSplitterEntityData) == 32);

}
