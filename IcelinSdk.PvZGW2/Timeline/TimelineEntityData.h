#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/UpdatePass.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854988
   RuntimeId:        1785
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C91
   VfTable:          00000001422B4978
   Address (Base):   00000001430DAF70
*/
#pragma pack(push, 8)
class TimelineEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class TimelineData) TimelineData; /* 0x0020 */
  UpdatePass ClientUpdatePass; /* 0x0028 */
  UpdatePass ServerUpdatePass; /* 0x002C */
  FB_FLOAT32 BlendInTime; /* 0x0030 */
  FB_FLOAT32 BlendOutTime; /* 0x0034 */
  FB_FLOAT32 InitTime; /* 0x0038 */
  FB_FLOAT32 StartTime; /* 0x003C */
  FB_FLOAT32 EndTime; /* 0x0040 */
  FB_FLOAT32 JumpTime; /* 0x0044 */
  FB_FLOAT32 PlaybackRate; /* 0x0048 */
  FB_FLOAT32 ExternalTime; /* 0x004C */
  LocalPlayerId LocalPlayerId; /* 0x0050 */
  FB_BOOLEAN AutoPlay; /* 0x0054 */
  FB_BOOLEAN UseRealTimeClock; /* 0x0055 */
  FB_BOOLEAN AutoInitConnectedProperties; /* 0x0056 */
  FB_BOOLEAN ResetTimeOnStarted; /* 0x0057 */
  FB_BOOLEAN AllowAnimationCarryForward; /* 0x0058 */
  FB_BOOLEAN SyncTimelines; /* 0x0059 */
  FB_UINT8 RuntimeFramerate; /* 0x005A */
  FB_BOOLEAN Looping; /* 0x005B */
  FB_BOOLEAN Infinite; /* 0x005C */
  char pad_005D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(TimelineEntityData) == 96);

}
