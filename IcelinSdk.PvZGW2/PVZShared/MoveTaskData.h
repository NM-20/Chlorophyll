#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873110
   RuntimeId:        2B8A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8060
   Default Value:    0000000142873160
*/
#pragma pack(push, 16)
struct MoveTaskData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 WantedPos; /* 0x0000 */
  FB_FLOAT32 WaitTime; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class PVZMoverTuneOverride) MoverTune; /* 0x0018 */
  FB_FLOAT32 AlmostFinishedDistance; /* 0x0020 */
  FB_BOOLEAN OnlySignalAlmostFinishedWhenMovingTowardsWaypoint; /* 0x0024 */
  char pad_0025[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MoveTaskData) == 48);

}
