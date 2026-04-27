#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/PVZShared/ScreenActionInputEventType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428620C8
   RuntimeId:        201F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09F3
   VfTable:          0000000142343FA8
   Address (Base):   0000000143108C70
*/
#pragma pack(push, 8)
class InputMessageTriggerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  ScreenActionInputEventType EventType; /* 0x001C */
  FB_BOOLEAN EnableAtStart; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(InputMessageTriggerEntityData) == 40);

}
