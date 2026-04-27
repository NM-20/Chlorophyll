#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BB10
   RuntimeId:        0FAE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AA0
   VfTable:          0000000142268370
   Address (Base):   00000001430ECF40
*/
#pragma pack(push, 8)
class ConsoleCommandTriggerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING CommandName; /* 0x0018 */
  Realm Realm; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ConsoleCommandTriggerEntityData) == 40);

}
