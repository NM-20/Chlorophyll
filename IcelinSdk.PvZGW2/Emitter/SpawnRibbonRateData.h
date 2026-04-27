#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839798
   RuntimeId:        06B4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08B7
   VfTable:          00000001421FFAB8
   Address (Base):   0000000143115E10
*/
#pragma pack(push, 8)
class SpawnRibbonRateData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SpawnRate; /* 0x0030 */
  FB_FLOAT32 AngleDeviation; /* 0x0034 */
  FB_BOOLEAN DistributeOverDistance; /* 0x0038 */
  FB_BOOLEAN SmoothSpawnPosition; /* 0x0039 */
  char pad_003A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(SpawnRibbonRateData) == 64);

}
