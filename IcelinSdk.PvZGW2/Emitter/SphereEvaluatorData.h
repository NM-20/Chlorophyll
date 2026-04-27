#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839658
   RuntimeId:        06A0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FEE
   VfTable:          00000001421FFB88
   Address (Base):   00000001430F12C0
*/
#pragma pack(push, 16)
class SphereEvaluatorData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Scale; /* 0x0020 */
  Vec3 Pivot; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(SphereEvaluatorData) == 64);

}
