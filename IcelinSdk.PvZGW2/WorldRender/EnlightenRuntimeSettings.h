#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855618
   RuntimeId:        182A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11E1
   VfTable:          00000001422BBF60
   Address (Base):   00000001430BDFB0
*/
#pragma pack(push, 16)
class EnlightenRuntimeSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 AlbedoDefaultColor; /* 0x0020 */
  FB_GUID SaveRadiosityTexturesDataAssetGuid; /* 0x0030 */
  FB_FLOAT32 TemporalCoherenceThreshold; /* 0x0040 */
  FB_FLOAT32 MaxPerFrameTemporalSolveTime; /* 0x0044 */
  FB_FLOAT32 DistancePriority; /* 0x0048 */
  FB_FLOAT32 FrustumPriority; /* 0x004C */
  FB_FLOAT32 SkyBoxScale; /* 0x0050 */
  FB_FLOAT32 MaxPerFrameSolveTime; /* 0x0054 */
  FB_UINT32 MinSystemUpdateCount; /* 0x0058 */
  FB_UINT32 JobCount; /* 0x005C */
  FB_UINT32 LightProbeMaxSourceSolveCount; /* 0x0060 */
  FB_UINT32 LightProbeMaxInstanceUpdateCount; /* 0x0064 */
  FB_UINT32 LightProbeTableCellSize; /* 0x0068 */
  FB_FLOAT32 LocalLightForceRadius; /* 0x006C */
  FB_INT32 DrawDebugMeshLod; /* 0x0070 */
  FB_INT32 DrawDebugSystemDependenciesEnable; /* 0x0074 */
  FB_INT32 DrawDebugSystemBoundingBoxEnable; /* 0x0078 */
  FB_FLOAT32 DrawDebugLightProbeSize; /* 0x007C */
  FB_FLOAT32 DrawDebugLightProbeCullDistance; /* 0x0080 */
  FB_BOOLEAN Enable; /* 0x0084 */
  FB_BOOLEAN ForceDynamic; /* 0x0085 */
  FB_BOOLEAN ForceUpdateStaticLightingBuffersEnable; /* 0x0086 */
  FB_BOOLEAN SaveRadiosityTexturesEnable; /* 0x0087 */
  FB_BOOLEAN JobsEnable; /* 0x0088 */
  FB_BOOLEAN ShadowsEnable; /* 0x0089 */
  FB_BOOLEAN SpotLightShadowsEnable; /* 0x008A */
  FB_BOOLEAN CompensateSunShadowHeightScale; /* 0x008B */
  FB_BOOLEAN LightMapsEnable; /* 0x008C */
  FB_BOOLEAN LightProbeEnable; /* 0x008D */
  FB_BOOLEAN LightProbeForceUpdate; /* 0x008E */
  FB_BOOLEAN LightProbeJobsEnable; /* 0x008F */
  FB_BOOLEAN LocalLightsEnable; /* 0x0090 */
  FB_BOOLEAN LocalLightCullingEnable; /* 0x0091 */
  FB_BOOLEAN LocalLightCustumFalloff; /* 0x0092 */
  FB_BOOLEAN DrawDebugEntities; /* 0x0093 */
  FB_BOOLEAN DrawDebugSystemsEnable; /* 0x0094 */
  FB_BOOLEAN DrawDebugLightProbes; /* 0x0095 */
  FB_BOOLEAN DrawDebugLightProbeGrid; /* 0x0096 */
  FB_BOOLEAN DrawDebugLightProbeOcclusion; /* 0x0097 */
  FB_BOOLEAN DrawDebugLightProbeStats; /* 0x0098 */
  FB_BOOLEAN DrawDebugLightProbeBoundingBoxes; /* 0x0099 */
  FB_BOOLEAN DrawSolveTaskPerformanceSummary; /* 0x009A */
  FB_BOOLEAN DrawSolveTaskPerformanceDetails; /* 0x009B */
  FB_BOOLEAN DrawDebugColoringEnable; /* 0x009C */
  FB_BOOLEAN DrawDebugTextures; /* 0x009D */
  FB_BOOLEAN DrawDebugBackFaces; /* 0x009E */
  FB_BOOLEAN DrawDebugTargetMeshes; /* 0x009F */
  FB_BOOLEAN DrawDebugDusterPositions; /* 0x00A0 */
  FB_BOOLEAN DrawDebugClusters; /* 0x00A1 */
  FB_BOOLEAN DrawWarningsEnable; /* 0x00A2 */
  FB_BOOLEAN AlbedoForceUpdateEnable; /* 0x00A3 */
  FB_BOOLEAN AlbedoForceColorEnable; /* 0x00A4 */
  FB_BOOLEAN TerrainMapEnable; /* 0x00A5 */
  FB_BOOLEAN EmissiveEnable; /* 0x00A6 */
  FB_BOOLEAN DebugMeshesEnable; /* 0x00A7 */
  FB_BOOLEAN ValidationEnable; /* 0x00A8 */
  char pad_00A9[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(EnlightenRuntimeSettings) == 176);

}
