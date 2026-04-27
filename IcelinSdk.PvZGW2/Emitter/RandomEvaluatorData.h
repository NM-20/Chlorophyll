#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Emitter/RandomFrequency.h>

namespace fb
{

/* TypeInfo (Array): 00000001428395D8
   RuntimeId:        0698
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FF7
   VfTable:          00000001421FFC00
   Address (Base):   00000001430F1440
*/
#pragma pack(push, 8)
class RandomEvaluatorData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  RandomFrequency RandomFrequency; /* 0x0018 */
  FB_FLOAT32 Max; /* 0x001C */
  FB_FLOAT32 Min; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RandomEvaluatorData) == 40);

}
