#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Core/SplineCurve.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839578
   RuntimeId:        0692
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FF9
   VfTable:          00000001421FFC48
   Address (Base):   0000000143115E70
*/
#pragma pack(push, 16)
class SplineData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  SplineCurve SplineCurve; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(SplineData) == 256);

}
