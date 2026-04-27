#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/UpdatePass.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B1E0
   RuntimeId:        0897
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C8B
   VfTable:          000000014220B468
   Address (Base):   00000001430EF820
*/
#pragma pack(push, 8)
class StopWatchEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  UpdatePass UpdatePass; /* 0x001C */
  FB_FLOAT32 Multiplier; /* 0x0020 */
  FB_FLOAT32 TriggerOnTime; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(StopWatchEntityData) == 40);

}
