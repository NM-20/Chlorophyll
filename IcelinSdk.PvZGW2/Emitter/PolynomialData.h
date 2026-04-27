#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 00000001428394D0
   RuntimeId:        068A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FF3
   VfTable:          00000001421FFCA8
   Address (Base):   00000001430F15C0
*/
#pragma pack(push, 16)
class PolynomialData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ScaleValue; /* 0x0018 */
  char pad_001C[0x0004];
  Vec4 Coefficients; /* 0x0020 */
  FB_FLOAT32 MinClamp; /* 0x0030 */
  FB_FLOAT32 MaxClamp; /* 0x0034 */
  char pad_0038[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PolynomialData) == 64);

}
