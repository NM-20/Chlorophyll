#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Emitter/TurbulenceNoiseType.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839A18
   RuntimeId:        06DC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08E3
   VfTable:          00000001421FF838
   Address (Base):   00000001430F1EC0
*/
#pragma pack(push, 16)
class TurbulanceData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Intensity; /* 0x0030 */
  TurbulenceNoiseType NoiseType; /* 0x0034 */
  char pad_0038[0x0008];
  Vec3 Multiplier; /* 0x0040 */
  FB_FLOAT32 PeriodSpace; /* 0x0050 */
  FB_FLOAT32 TurbulenceForceAsInstantVelocity; /* 0x0054 */
  FB_INT32 Octaves; /* 0x0058 */
  FB_FLOAT32 OctavePersistence; /* 0x005C */
  FB_FLOAT32 PerParticleRandomness; /* 0x0060 */
  char pad_0064[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(TurbulanceData) == 112);

}
