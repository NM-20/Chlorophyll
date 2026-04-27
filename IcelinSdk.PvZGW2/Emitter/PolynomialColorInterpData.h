#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 00000001428396D8
   RuntimeId:        06A8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FF8
   VfTable:          00000001421FFB58
   Address (Base):   00000001430F1140
*/
#pragma pack(push, 16)
class PolynomialColorInterpData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  Vec3 Color0; /* 0x0020 */
  Vec3 Color1; /* 0x0030 */
  Vec4 Coefficients; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PolynomialColorInterpData) == 80);

}
