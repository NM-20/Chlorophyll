#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/TimeDeltaType.h>

namespace fb
{

/* TypeInfo (Array): 000000014283ADA0
   RuntimeId:        0853
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09D9
   VfTable:          000000014220BBA0
   Address (Base):   00000001430F0420
*/
#pragma pack(push, 8)
class DelayEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Delay; /* 0x0018 */
  Realm Realm; /* 0x001C */
  TimeDeltaType TimeDeltaType; /* 0x0020 */
  FB_BOOLEAN AutoStart; /* 0x0024 */
  FB_BOOLEAN RunOnce; /* 0x0025 */
  FB_BOOLEAN RemoveDuplicateEvents; /* 0x0026 */
  char pad_0027[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(DelayEntityData) == 40);

}
