#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 00000001428394B0
   RuntimeId:        0688
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FEF
   VfTable:          00000001421FFC90
   Address (Base):   00000001430F1620
*/
#pragma pack(push, 16)
class DefaultEvaluatorData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  Vec4 Values; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(DefaultEvaluatorData) == 48);

}
