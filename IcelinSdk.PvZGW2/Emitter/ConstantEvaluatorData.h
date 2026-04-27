#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428396B8
   RuntimeId:        06A6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FF1
   VfTable:          00000001421FFB40
   Address (Base):   00000001430F11A0
*/
#pragma pack(push, 8)
class ConstantEvaluatorData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Scale; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ConstantEvaluatorData) == 32);

}
