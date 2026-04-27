#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B688
   RuntimeId:        0F6D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C58
   VfTable:          00000001422688F8
   Address (Base):   00000001430ED0C0
*/
#pragma pack(push, 8)
class SlowMotionEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 TimeScale; /* 0x001C */
  FB_FLOAT32 ScaleDownTransitionTime; /* 0x0020 */
  FB_FLOAT32 ScaleUpTransitionTime; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SlowMotionEntityData) == 40);

}
