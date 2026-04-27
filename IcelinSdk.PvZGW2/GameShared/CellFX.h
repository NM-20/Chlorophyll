#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableFloat.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableInt.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableBool.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A740
   RuntimeId:        0EA2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FB6
   VfTable:          0000000142265310
   Address (Base):   0000000143113BF0
*/
#pragma pack(push, 16)
class CellFX : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  QualityScalableFloat SpawnProbability; /* 0x0010 */
  QualityScalableInt MinSpawnCount; /* 0x0020 */
  QualityScalableInt MaxSpawnCount; /* 0x0030 */
  FB_FLOAT32 PeakBurnPercent; /* 0x0040 */
  FB_FLOAT32 MinPeakFlickerPercent; /* 0x0044 */
  char pad_0048[0x0008];
  Vec3 MinSpawnScale; /* 0x0050 */
  Vec3 MaxSpawnScale; /* 0x0060 */
  FB_FLOAT32 MaxPeakFlickerPercent; /* 0x0070 */
  FB_FLOAT32 MinFlickerAmplitude; /* 0x0074 */
  FB_FLOAT32 MaxFlickerAmplitude; /* 0x0078 */
  FB_FLOAT32 MinFlickerFreq; /* 0x007C */
  FB_FLOAT32 MaxFlickerFreq; /* 0x0080 */
  FB_FLOAT32 SpawnScaleMultiplierX; /* 0x0084 */
  FB_FLOAT32 SpawnScaleMultiplierY; /* 0x0088 */
  FB_FLOAT32 SpawnScaleMultiplierZ; /* 0x008C */
  FB_FLOAT32 PeakGrowthPercent; /* 0x0090 */
  FB_FLOAT32 GrowthOffset; /* 0x0094 */
  FB_FLOAT32 BurnTimeMultiplier; /* 0x0098 */
  char pad_009C[0x0004];
  FB_HANDLE(class ObjectBlueprint) EffectMesh; /* 0x00A0 */
  QualityScalableBool Enabled; /* 0x00A8 */
  FB_BOOLEAN AlignToTerrainNormal; /* 0x00AC */
  char pad_00AD[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(CellFX) == 176);

}
