#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849540
   RuntimeId:        0D94
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BB5
   VfTable:          000000014225FFF0
   Address (Base):   00000001430EDCC0
*/
#pragma pack(push, 8)
class MessageEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MessageEntityInfo) MessageInfo; /* 0x0018 */
  FB_CSTRING OverrideMessageSid; /* 0x0020 */
  FB_BOOLEAN Enabled; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MessageEntityData) == 48);

}
