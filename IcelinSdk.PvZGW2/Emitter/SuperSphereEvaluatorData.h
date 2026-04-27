#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839678
   RuntimeId:        06A2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FF2
   VfTable:          00000001421FFBA0
   Address (Base):   00000001430F1260
*/
#pragma pack(push, 16)
class SuperSphereEvaluatorData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 InnerRadius; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Scale; /* 0x0020 */
  Vec3 Pivot; /* 0x0030 */
  FB_FLOAT32 OuterRadius; /* 0x0040 */
  FB_FLOAT32 StartZenithAngle; /* 0x0044 */
  FB_FLOAT32 EndZenithAngle; /* 0x0048 */
  FB_FLOAT32 InnerRadiusBound; /* 0x004C */
  FB_FLOAT32 StartZenithAngleBound; /* 0x0050 */
  FB_FLOAT32 EndZenithAngleBound; /* 0x0054 */
  FB_FLOAT32 StartAzimuthAngle; /* 0x0058 */
  FB_FLOAT32 EndAzimuthAngle; /* 0x005C */
  FB_FLOAT32 DistributionAlongRadius; /* 0x0060 */
  FB_BOOLEAN OrientAlongZ; /* 0x0064 */
  char pad_0065[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(SuperSphereEvaluatorData) == 112);

}
