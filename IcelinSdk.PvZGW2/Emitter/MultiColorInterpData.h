#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Emitter/MultiColorGradient.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839738
   RuntimeId:        06AE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FF0
   VfTable:          00000001421FFAF8
   Address (Base):   00000001430F10E0
*/
#pragma pack(push, 8)
class MultiColorInterpData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MultiColorGradient Gradient; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MultiColorInterpData) == 32);

}
