#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839638
   RuntimeId:        069E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FEC
   VfTable:          00000001421FFBB8
   Address (Base):   00000001430F1320
*/
#pragma pack(push, 16)
class BoxEvaluatorData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  Vec3 Dimensions; /* 0x0020 */
  Vec3 Pivot; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(BoxEvaluatorData) == 64);

}
