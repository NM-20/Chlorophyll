#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BasicWaveGroup.h>

namespace fb
{

/* TypeInfo (Array): 00000001428735E8
   RuntimeId:        2BCE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E9F
   VfTable:          0000000142379228
   Address (Base):   00000001430E1960
*/
#pragma pack(push, 8)
class CoopWaveGroup : public BasicWaveGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 WaveNumber; /* 0x0028 */
  FB_FLOAT32 StartDelayTime; /* 0x002C */
  FB_CSTRING IntroSIDOverride; /* 0x0030 */
  FB_CSTRING ChallengeName; /* 0x0038 */
  FB_FLOAT32 TrackablePlayerPoiDistanceTrigger; /* 0x0040 */
  FB_FLOAT32 AdditionalRangeAllowance; /* 0x0044 */
  FB_BOOLEAN MustKillTrackablePlayer; /* 0x0048 */
  FB_BOOLEAN AllowOutOfRangeSpawnPoints; /* 0x0049 */
  char pad_004A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(CoopWaveGroup) == 80);

}
