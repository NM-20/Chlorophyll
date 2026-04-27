#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/WaypointData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F048
   RuntimeId:        1287
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EF7
   VfTable:          0000000142274660
   Address (Base):   00000001430FC9D0
*/
#pragma pack(push, 8)
class VehicleWaypointData : public WaypointData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Speed; /* 0x0020 */
  FB_FLOAT32 SpeedOverrideMovingTowards; /* 0x0024 */
  FB_FLOAT32 SpeedLimitOnReached; /* 0x0028 */
  FB_FLOAT32 SpeedLimitMovingTowards; /* 0x002C */
  FB_FLOAT32 Angleoffset; /* 0x0030 */
  FB_FLOAT32 WaitHere; /* 0x0034 */
  FB_FLOAT32 StoppingDeceleration; /* 0x0038 */
  FB_FLOAT32 MinSlowdownSpeed; /* 0x003C */
  FB_FLOAT32 StopHereRadius; /* 0x0040 */
  FB_BOOLEAN StopHere; /* 0x0044 */
  char pad_0045[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(VehicleWaypointData) == 72);

}
