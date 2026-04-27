#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Emitter/PolynomialOperation.h>
#include <IcelinSdk.PvZGW2/Emitter/PolynomialTempData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839558
   RuntimeId:        0690
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FEB
   VfTable:          00000001421FFC60
   Address (Base):   00000001430F1560
*/
#pragma pack(push, 16)
class PolynomialOperatorData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PolynomialOperation Operation; /* 0x0018 */
  char pad_001C[0x0004];
  PolynomialTempData FirstOperand; /* 0x0020 */
  PolynomialTempData SecondOperand; /* 0x0040 */
  FB_FLOAT32 MinClampResult; /* 0x0060 */
  FB_FLOAT32 MaxClampResult; /* 0x0064 */
  char pad_0068[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PolynomialOperatorData) == 112);

}
