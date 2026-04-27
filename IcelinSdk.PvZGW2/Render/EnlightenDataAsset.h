#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Render/EnlightenOutputFormat.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852880
   RuntimeId:        15B0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07CA
   VfTable:          00000001422977B0
   Address (Base):   000000014310E970
*/
#pragma pack(push, 16)
class EnlightenDataAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Group; /* 0x0018 */
  Vec3 DistantLightprobePosition; /* 0x0020 */
  FB_RESOURCEREF DatabaseResource; /* 0x0030 */
  FB_HANDLE(class TextureAsset) DebugChartTexture; /* 0x0038 */
  FB_HANDLE(class TextureAsset) DebugBackFaceTexture; /* 0x0040 */
  FB_HANDLE(class TextureAsset) SkyVisibilityTexture; /* 0x0048 */
  EnlightenOutputFormat OutputFormat; /* 0x0050 */
  FB_UINT32 SystemGridSize; /* 0x0054 */
  FB_INT32 SystemLightmapSize; /* 0x0058 */
  FB_INT32 MaxSystemLightmapSize; /* 0x005C */
  FB_INT32 MaxLightmapSize; /* 0x0060 */
  FB_FLOAT32 SystemInfluenceRadius; /* 0x0064 */
  FB_FLOAT32 ClusterSize; /* 0x0068 */
  FB_UINT32 IrBudget; /* 0x006C */
  FB_UINT32 IrradianceQualityMultiplier; /* 0x0070 */
  FB_FLOAT32 StitchingDistanceMultiplier; /* 0x0074 */
  FB_FLOAT32 MaxPixelStitchingAngle; /* 0x0078 */
  FB_FLOAT32 DependencyVisibilityThreshold; /* 0x007C */
  FB_UINT32 SamplesPerCluster; /* 0x0080 */
  FB_UINT32 MaxCpuThreadCount; /* 0x0084 */
  FB_UINT32 TerrainProbeRes; /* 0x0088 */
  FB_UINT32 EnvironmentQuality; /* 0x008C */
  FB_BOOLEAN DynamicEnable; /* 0x0090 */
  FB_BOOLEAN LoadDebugData; /* 0x0091 */
  FB_BOOLEAN DynamicGen4aEnable; /* 0x0092 */
  FB_BOOLEAN DynamicGen4bEnable; /* 0x0093 */
  FB_BOOLEAN DynamicWin32Enable; /* 0x0094 */
  FB_BOOLEAN DynamicAndroidEnable; /* 0x0095 */
  FB_BOOLEAN DynamiciOSEnable; /* 0x0096 */
  FB_BOOLEAN DynamicOSXEnable; /* 0x0097 */
  FB_BOOLEAN DirectionalIrradianceRgbEnable; /* 0x0098 */
  FB_BOOLEAN GridBasedSystemGeneration; /* 0x0099 */
  FB_BOOLEAN VoxelBasedLeafClustering; /* 0x009A */
  FB_BOOLEAN PixelStitchingEnable; /* 0x009B */
  FB_BOOLEAN EdgeStitchingEnable; /* 0x009C */
  FB_BOOLEAN TerrainEnable; /* 0x009D */
  char pad_009E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(EnlightenDataAsset) == 160);

}
