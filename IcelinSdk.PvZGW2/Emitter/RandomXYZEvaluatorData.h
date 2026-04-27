#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Emitter/RandomFrequency.h>

namespace fb
{

/* TypeInfo (Array): 00000001428395F8
   RuntimeId:        069A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FED
   VfTable:          00000001421FFBD0
   Address (Base):   00000001430F13E0
*/
#pragma pack(push, 8)
class RandomXYZEvaluatorData : public EvaluatorData
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
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(RandomXYZEvaluatorData) == 56);

}
