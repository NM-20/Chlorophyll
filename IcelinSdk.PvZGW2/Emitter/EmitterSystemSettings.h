#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/QualityLevel.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A218
   RuntimeId:        075C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F95
   VfTable:          00000001421FF2C0
   Address (Base):   00000001430BE4F0
*/
#pragma pack(push, 8)
class EmitterSystemSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 SkipUpdateMaxCount; /* 0x0010 */
  FB_INT32 ForceJobCount; /* 0x0014 */
  FB_FLOAT32 TimeScale; /* 0x0018 */
  FB_FLOAT32 GlobalResetStartTimeInterval; /* 0x001C */
  FB_UINT32 CollisionRayCastMaxCount; /* 0x0020 */
  FB_UINT32 ProximityPhysicsEntitiesMaxCount; /* 0x0024 */
  QualityLevel EmitterQualityLevel; /* 0x0028 */
  FB_FLOAT32 TemplateTimeoutTime; /* 0x002C */
  FB_FLOAT32 PreciseWindAndForceMaxDistance; /* 0x0030 */
  FB_FLOAT32 TurbulenceMaxDistance; /* 0x0034 */
  FB_FLOAT32 ScreenAreaCullingStart; /* 0x0038 */
  FB_FLOAT32 ScreenAreaCullingEnd; /* 0x003C */
  FB_FLOAT32 ScreenAreaCullingMinTotalArea; /* 0x0040 */
  FB_FLOAT32 ScreenAreaCullingMaxTotalArea; /* 0x0044 */
  FB_FLOAT32 ScreenAreaCullingMaxMultiplier; /* 0x0048 */
  FB_FLOAT32 ProcessJobYieldTime; /* 0x004C */
  FB_FLOAT32 VisibleJobYieldTime; /* 0x0050 */
  FB_UINT32 DrawStats; /* 0x0054 */
  FB_UINT32 DrawMemStats; /* 0x0058 */
  FB_UINT32 DrawBoundingBoxes; /* 0x005C */
  FB_FLOAT32 MinScreenArea; /* 0x0060 */
  FB_UINT32 DrawDebugAtlasMiplevel; /* 0x0064 */
  FB_INT32 DrawDebugAtlasTextureIndex; /* 0x0068 */
  FB_INT32 DrawDebugEmitterExclusionVolumes; /* 0x006C */
  FB_INT32 DrawDebugAtlasPageIndex; /* 0x0070 */
  FB_INT32 QuadTechnique; /* 0x0074 */
  FB_FLOAT32 QuadNearFadeDistance; /* 0x0078 */
  FB_UINT32 QuadMaxCount; /* 0x007C */
  FB_FLOAT32 MeshCullingDistance; /* 0x0080 */
  FB_UINT32 MeshDrawCountLimit; /* 0x0084 */
  FB_FLOAT32 MeshStreamingPriorityMultiplier; /* 0x0088 */
  FB_UINT32 MeshMaxCount; /* 0x008C */
  FB_BOOLEAN Enable; /* 0x0090 */
  FB_BOOLEAN UpdateJobEnable; /* 0x0091 */
  FB_BOOLEAN EnableFixedTimeStep; /* 0x0092 */
  FB_BOOLEAN EnableFixedDelta; /* 0x0093 */
  FB_BOOLEAN EnableJobs; /* 0x0094 */
  FB_BOOLEAN CollisionRayCastEnable; /* 0x0095 */
  FB_BOOLEAN DrawDebugRayCastCollision; /* 0x0096 */
  FB_BOOLEAN MeshEmitterMotionBlurEnable; /* 0x0097 */
  FB_BOOLEAN EnableRendering; /* 0x0098 */
  FB_BOOLEAN HideInactiveStats; /* 0x0099 */
  FB_BOOLEAN SaveListActiveEmitters; /* 0x009A */
  FB_BOOLEAN DrawEmitterName; /* 0x009B */
  FB_BOOLEAN ZBufferCullEnable; /* 0x009C */
  FB_BOOLEAN DrawProjectedBoxes; /* 0x009D */
  FB_BOOLEAN DrawTransforms; /* 0x009E */
  FB_BOOLEAN DrawDebugBaseAtlas; /* 0x009F */
  FB_BOOLEAN DrawDebugNormalAtlas; /* 0x00A0 */
  FB_BOOLEAN DrawDebugAtlasAlpha; /* 0x00A1 */
  FB_BOOLEAN DrawDebugEmitterSunTransmittanceMapGroup; /* 0x00A2 */
  FB_BOOLEAN DrawDebugEmitterSunTransmittanceMapsLinks; /* 0x00A3 */
  FB_BOOLEAN ForceSunTransmittanceOnAllEmitters; /* 0x00A4 */
  FB_BOOLEAN EmitterRenderSunTransmittanceViewsFirst; /* 0x00A5 */
  FB_BOOLEAN DrawDebugEmitterVertexBufferUsage; /* 0x00A6 */
  FB_BOOLEAN EmitterGpuLightingEnable; /* 0x00A7 */
  FB_BOOLEAN EmitterGpuLightingPipelineShadersEnabled; /* 0x00A8 */
  FB_BOOLEAN QuadClipScaleEnable; /* 0x00A9 */
  FB_BOOLEAN QuadEnableRendering; /* 0x00AA */
  FB_BOOLEAN QuadNiceRenderingEnable; /* 0x00AB */
  FB_BOOLEAN QuadSimpleRenderingEnable; /* 0x00AC */
  FB_BOOLEAN QuadEnableOpaque; /* 0x00AD */
  FB_BOOLEAN QuadEnableCustomShader; /* 0x00AE */
  FB_BOOLEAN QuadColorShaderCostsEnable; /* 0x00AF */
  FB_BOOLEAN QuadEnableSorting; /* 0x00B0 */
  FB_BOOLEAN QuadEnableWireframe; /* 0x00B1 */
  FB_BOOLEAN QuadHalfResEnable; /* 0x00B2 */
  FB_BOOLEAN QuadGroupsJoinAll; /* 0x00B3 */
  FB_BOOLEAN QuadGroupsJoinNone; /* 0x00B4 */
  FB_BOOLEAN QuadGroupsJoinNiceAndSimple; /* 0x00B5 */
  FB_BOOLEAN QuadVertexShadowsEnable; /* 0x00B6 */
  FB_BOOLEAN QuadCloudVertexShadowsEnable; /* 0x00B7 */
  FB_BOOLEAN QuadPlanarReflectionEnable; /* 0x00B8 */
  FB_BOOLEAN QuadPointLightsEnable; /* 0x00B9 */
  FB_BOOLEAN QuadSpotLightsEnable; /* 0x00BA */
  FB_BOOLEAN QuadResourceSyncJobEnable; /* 0x00BB */
  FB_BOOLEAN MeshRenderingEnable; /* 0x00BC */
  FB_BOOLEAN MeshDrawTransforms; /* 0x00BD */
  FB_BOOLEAN MeshDrawBoundingBoxes; /* 0x00BE */
  FB_BOOLEAN MeshShadowEnable; /* 0x00BF */
  FB_BOOLEAN MeshPlanarReflectionEnable; /* 0x00C0 */
  FB_BOOLEAN MeshDrawCullStats; /* 0x00C1 */
  FB_BOOLEAN SkipRenderIfProbeIsUninitialized; /* 0x00C2 */
  char pad_00C3[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C8 */
#pragma pack(pop)

static_assert(sizeof(EmitterSystemSettings) == 200);

}
