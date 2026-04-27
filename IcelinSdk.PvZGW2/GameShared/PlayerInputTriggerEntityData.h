#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C0F0
   RuntimeId:        100A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A88
   VfTable:          0000000142267C10
   Address (Base):   00000001430D6CD0
*/
#pragma pack(push, 8)
class PlayerInputTriggerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_INT32 EntryInputActions; /* 0x001C */
  FB_FLOAT32 ValueModifier; /* 0x0020 */
  FB_FLOAT32 ValueModifierForMouse; /* 0x0024 */
  FB_FLOAT32 HoldDownTime; /* 0x0028 */
  FB_FLOAT32 AccumulatedValueAtStart; /* 0x002C */
  FB_FLOAT32 TrailingValueAtStart; /* 0x0030 */
  FB_BOOLEAN ClampValueAfterMouseModifier; /* 0x0034 */
  FB_BOOLEAN EnabledFromStart; /* 0x0035 */
  FB_BOOLEAN SendTriggerEvents; /* 0x0036 */
  char pad_0037[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PlayerInputTriggerEntityData) == 56);

}
