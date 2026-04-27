#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BasicWaveComposition.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873588
   RuntimeId:        2BC8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EA5
   VfTable:          0000000142379258
   Address (Base):   00000001430F51D0
*/
#pragma pack(push, 8)
class CoopWaveComposition : public BasicWaveComposition
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SpecialWavePercentage; /* 0x0028 */
  FB_BOOLEAN IsHugeWave; /* 0x002C */
  FB_BOOLEAN IsEpicSpawnWave; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(CoopWaveComposition) == 48);

}
