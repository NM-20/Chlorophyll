#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCommanderActionType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863148
   RuntimeId:        20F2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A5F
   VfTable:          0000000142353F40
   Address (Base):   00000001430BCEB0
*/
#pragma pack(push, 8)
class PVZCommanderActionBaseData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZCommanderActionType ActionType; /* 0x0018 */
  FB_FLOAT32 CoolDownDurationAfterExecution; /* 0x001C */
  FB_CSTRING DisplayName; /* 0x0020 */
  FB_UINT32 Cost; /* 0x0028 */
  FB_FLOAT32 CameraViewDuration; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZCommanderActionBaseData) == 48);

}
