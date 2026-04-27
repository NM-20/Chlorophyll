#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428648E8
   RuntimeId:        221F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BEC
   VfTable:          0000000142352228
   Address (Base):   00000001430D4630
*/
#pragma pack(push, 8)
class PVZSyncedTimerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TotalTime; /* 0x0018 */
  FB_INT32 DebugIndex; /* 0x001C */
  FB_FLOAT32 BumpTime; /* 0x0020 */
  FB_BOOLEAN IsCountdownTimer; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZSyncedTimerEntityData) == 40);

}
