#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/UpdatePass.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C0B0
   RuntimeId:        1006
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AD0
   VfTable:          0000000142267BD8
   Address (Base):   00000001431129F0
*/
#pragma pack(push, 8)
class ObjectEnterAreaTriggerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  UpdatePass UpdatePass; /* 0x001C */
  FB_BOOLEAN AutoStart; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ObjectEnterAreaTriggerEntityData) == 40);

}
