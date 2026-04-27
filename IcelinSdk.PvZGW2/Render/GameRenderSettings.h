#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852920
   RuntimeId:        15BA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E2B
   VfTable:          0000000142297770
   Address (Base):   00000001430BE070
*/
#pragma pack(push, 8)
class GameRenderSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 InactiveSkipFrameCount; /* 0x0010 */
  FB_FLOAT32 ResolutionScale; /* 0x0014 */
  FB_INT32 MantleEnable; /* 0x0018 */
  FB_FLOAT32 CameraCutMaxFrameTranslation; /* 0x001C */
  FB_FLOAT32 NearPlane; /* 0x0020 */
  FB_FLOAT32 ViewDistance; /* 0x0024 */
  FB_FLOAT32 ForceFov; /* 0x0028 */
  FB_FLOAT32 FovMultiplier; /* 0x002C */
  FB_FLOAT32 ForceOrthoViewSize; /* 0x0030 */
  FB_FLOAT32 EdgeModelScreenAreaScale; /* 0x0034 */
  FB_FLOAT32 EdgeModelViewDistance; /* 0x0038 */
  FB_INT32 EdgeModelForceLod; /* 0x003C */
  FB_FLOAT32 EdgeModelLodScale; /* 0x0040 */
  FB_FLOAT32 StaticModelPartOcclusionMaxScreenArea; /* 0x0044 */
  FB_UINT32 StaticModelCullJobCount; /* 0x0048 */
  FB_UINT32 SplitScreenTestViewCount; /* 0x004C */
  FB_UINT32 SplitScreenTestCase; /* 0x0050 */
  FB_FLOAT32 ForceBlurAmount; /* 0x0054 */
  FB_FLOAT32 ForceWorldFadeAmount; /* 0x0058 */
  FB_FLOAT32 StereoCrosshairMaxHitDepth; /* 0x005C */
  FB_FLOAT32 StereoCrosshairRadius; /* 0x0060 */
  FB_FLOAT32 StereoCrosshairDampingFactor; /* 0x0064 */
  FB_BOOLEAN Enable; /* 0x0068 */
  FB_BOOLEAN NullRendererEnable; /* 0x0069 */
  FB_BOOLEAN JobEnable; /* 0x006A */
  FB_BOOLEAN BuildJobSyncEnable; /* 0x006B */
  FB_BOOLEAN DrawDebugDynamicTextureArrays; /* 0x006C */
  FB_BOOLEAN DrawDebugInfo; /* 0x006D */
  FB_BOOLEAN DrawScreenInfo; /* 0x006E */
  FB_BOOLEAN Fullscreen; /* 0x006F */
  FB_BOOLEAN ForceVSyncEnable; /* 0x0070 */
  FB_BOOLEAN MovieVSyncEnable; /* 0x0071 */
  FB_BOOLEAN VSyncFlashTestEnable; /* 0x0072 */
  FB_BOOLEAN OutputBrightnessTestEnable; /* 0x0073 */
  FB_BOOLEAN GlEnable; /* 0x0074 */
  FB_BOOLEAN Dx11Enable; /* 0x0075 */
  FB_BOOLEAN Dx12Enable; /* 0x0076 */
  FB_BOOLEAN BalsaEnable; /* 0x0077 */
  FB_BOOLEAN Gen4bColorRemap; /* 0x0078 */
  FB_BOOLEAN GpuTextureCompressorEnable; /* 0x0079 */
  FB_BOOLEAN MeshWorldEnable; /* 0x007A */
  FB_BOOLEAN EmittersEnable; /* 0x007B */
  FB_BOOLEAN EntityRenderEnable; /* 0x007C */
  FB_BOOLEAN DebugRendererEnable; /* 0x007D */
  FB_BOOLEAN DebugRenderServiceEnable; /* 0x007E */
  FB_BOOLEAN InitialClearEnable; /* 0x007F */
  FB_BOOLEAN GpuProfilerEnable; /* 0x0080 */
  FB_BOOLEAN ForceOrthoViewEnable; /* 0x0081 */
  FB_BOOLEAN ForceSquareOrthoView; /* 0x0082 */
  FB_BOOLEAN DestructionVolumeDrawEnable; /* 0x0083 */
  FB_BOOLEAN EdgeModelsEnable; /* 0x0084 */
  FB_BOOLEAN EdgeModelCastShadowsEnable; /* 0x0085 */
  FB_BOOLEAN EdgeModelDepthBiasEnable; /* 0x0086 */
  FB_BOOLEAN EdgeModelShadowDepthBiasEnable; /* 0x0087 */
  FB_BOOLEAN EdgeModelUseMainLodEnable; /* 0x0088 */
  FB_BOOLEAN EdgeModelUseLodBox; /* 0x0089 */
  FB_BOOLEAN EdgeModelCullEnable; /* 0x008A */
  FB_BOOLEAN EdgeModelFrustumCullEnable; /* 0x008B */
  FB_BOOLEAN EdgeModelDrawBoxes; /* 0x008C */
  FB_BOOLEAN EdgeModelDrawStats; /* 0x008D */
  FB_BOOLEAN StaticModelEnable; /* 0x008E */
  FB_BOOLEAN StaticModelMeshesEnable; /* 0x008F */
  FB_BOOLEAN StaticModelZPassEnable; /* 0x0090 */
  FB_BOOLEAN StaticModelPartCullEnable; /* 0x0091 */
  FB_BOOLEAN StaticModelPartFrustumCullEnable; /* 0x0092 */
  FB_BOOLEAN StaticModelPartOcclusionCullEnable; /* 0x0093 */
  FB_BOOLEAN StaticModelPartShadowCullEnable; /* 0x0094 */
  FB_BOOLEAN StaticModelDrawBoxes; /* 0x0095 */
  FB_BOOLEAN StaticModelDrawStats; /* 0x0096 */
  FB_BOOLEAN StaticModelCullSpuJobEnable; /* 0x0097 */
  FB_BOOLEAN StaticModelSurfaceShaderTerrainAccessEnable; /* 0x0098 */
  FB_BOOLEAN LockView; /* 0x0099 */
  FB_BOOLEAN ResetLockedView; /* 0x009A */
  FB_BOOLEAN InfiniteProjectionMatrixEnable; /* 0x009B */
  FB_BOOLEAN SecondaryStreamingViewEnable; /* 0x009C */
  FB_BOOLEAN FadeEnable; /* 0x009D */
  FB_BOOLEAN FadeWaitingEnable; /* 0x009E */
  FB_BOOLEAN BlurEnable; /* 0x009F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(GameRenderSettings) == 160);

}
