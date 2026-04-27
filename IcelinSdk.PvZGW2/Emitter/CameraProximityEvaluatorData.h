#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839698
   RuntimeId:        06A4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FEA
   VfTable:          00000001421FFB70
   Address (Base):   00000001430F1200
*/
#pragma pack(push, 16)
class CameraProximityEvaluatorData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ForwardOffset; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Size; /* 0x0020 */
  Vec3 Offset; /* 0x0030 */
  Vec3 InnerRadiusDirection; /* 0x0040 */
  FB_FLOAT32 InnerRadius; /* 0x0050 */
  char pad_0054[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(CameraProximityEvaluatorData) == 96);

}
