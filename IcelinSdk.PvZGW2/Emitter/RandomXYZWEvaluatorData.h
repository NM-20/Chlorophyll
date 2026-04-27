#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Emitter/RandomFrequency.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839618
   RuntimeId:        069C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FF5
   VfTable:          00000001421FFBE8
   Address (Base):   00000001430F1380
*/
#pragma pack(push, 8)
class RandomXYZWEvaluatorData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  RandomFrequency RandomFrequency; /* 0x0018 */
  FB_FLOAT32 MaxX; /* 0x001C */
  FB_FLOAT32 MinX; /* 0x0020 */
  FB_FLOAT32 MaxY; /* 0x0024 */
  FB_FLOAT32 MinY; /* 0x0028 */
  FB_FLOAT32 MaxZ; /* 0x002C */
  FB_FLOAT32 MinZ; /* 0x0030 */
  FB_FLOAT32 MaxW; /* 0x0034 */
  FB_FLOAT32 MinW; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(RandomXYZWEvaluatorData) == 64);

}
