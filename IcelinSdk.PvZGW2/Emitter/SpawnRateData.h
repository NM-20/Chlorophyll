#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839778
   RuntimeId:        06B2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08D3
   VfTable:          00000001421FFA98
   Address (Base):   00000001430F23A0
*/
#pragma pack(push, 8)
class SpawnRateData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SpawnRate; /* 0x0030 */
  FB_BOOLEAN DistributeOverTime; /* 0x0034 */
  FB_BOOLEAN DistributeOverDistance; /* 0x0035 */
  FB_BOOLEAN SmoothSpawnPosition; /* 0x0036 */
  char pad_0037[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SpawnRateData) == 56);

}
