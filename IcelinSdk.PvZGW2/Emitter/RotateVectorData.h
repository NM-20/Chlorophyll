#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428395B8
   RuntimeId:        0696
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FF4
   VfTable:          00000001421FFC30
   Address (Base):   00000001430F14A0
*/
#pragma pack(push, 8)
class RotateVectorData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Angle; /* 0x0018 */
  FB_BOOLEAN InputAffectsPhi; /* 0x001C */
  FB_BOOLEAN RotateWithinPlane; /* 0x001D */
  char pad_001E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(RotateVectorData) == 32);

}
