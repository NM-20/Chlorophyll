#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/UpdatePass.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849760
   RuntimeId:        0DB6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C3C
   VfTable:          000000014225FCA8
   Address (Base):   00000001430EE0E0
*/
#pragma pack(push, 8)
class AreaProximityEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  UpdatePass UpdatePass; /* 0x001C */
  FB_FLOAT32 ProximityDistance; /* 0x0020 */
  FB_BOOLEAN AutoStart; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AreaProximityEntityData) == 40);

}
