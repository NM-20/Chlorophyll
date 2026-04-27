#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>
#include <IcelinSdk.PvZGW2/Entity/UpdatePass.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C0D0
   RuntimeId:        1008
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A9F
   VfTable:          0000000142267C48
   Address (Base):   00000001430ECE80
*/
#pragma pack(push, 8)
class CameraEnterAreaTriggerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LocalPlayerId LocalPlayerId; /* 0x0018 */
  UpdatePass UpdatePass; /* 0x001C */
  FB_FLOAT32 TimeTreshold; /* 0x0020 */
  FB_BOOLEAN AutoStart; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CameraEnterAreaTriggerEntityData) == 40);

}
