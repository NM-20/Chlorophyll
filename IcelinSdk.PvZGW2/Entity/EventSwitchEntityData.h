#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AD20
   RuntimeId:        084B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AF7
   VfTable:          000000014220BCB8
   Address (Base):   00000001430F05A0
*/
#pragma pack(push, 8)
class EventSwitchEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_UINT32 OutEvents; /* 0x001C */
  FB_BOOLEAN AutoIncrement; /* 0x0020 */
  FB_BOOLEAN Looping; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(EventSwitchEntityData) == 40);

}
