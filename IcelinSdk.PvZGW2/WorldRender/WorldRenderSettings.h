#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/WorldRenderSettingsBase.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/QualityLevel.h>
#include <IcelinSdk.PvZGW2/WorldRender/LightTileDebugLightCountMode.h>
#include <IcelinSdk.PvZGW2/WorldRender/PostProcessAAMode.h>
#include <IcelinSdk.PvZGW2/WorldRender/ScaleResampleMode.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableInt.h>
#include <IcelinSdk.PvZGW2/WorldRender/SkyRenderMode.h>
#include <IcelinSdk.PvZGW2/WorldRender/SpotLightShadowmapTextureMode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428563A8
   RuntimeId:        18EC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EE0
   VfTable:          00000001422C4B58
   Address (Base):   00000001430B7350
*/
#pragma pack(push, 16)
class WorldRenderSettings : public WorldRenderSettingsBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 OverlayColor; /* 0x01A0 */
  Vec4 OverlayColorPlants; /* 0x01B0 */
  Vec4 OverlayColorZombies; /* 0x01C0 */
  Vec4 OverlayColorSonar; /* 0x01D0 */
  FB_UINT32 GenericEntityMaxVisibleEntityCount; /* 0x01E0 */
  FB_UINT32 DrawDebugGroundHeight; /* 0x01E4 */
  FB_FLOAT32 DecalVolumeScale; /* 0x01E8 */
  FB_UINT32 MaxLensFlaresPerFrame; /* 0x01EC */
  QualityLevel LensFlaresQualityLevel; /* 0x01F0 */
  FB_UINT32 GBufferLayout; /* 0x01F4 */
  FB_UINT32 GBufferTestCount; /* 0x01F8 */
  FB_FLOAT32 GBufferAlphaTestSimpleSmoothness; /* 0x01FC */
  FB_FLOAT32 GBufferForceSmoothness; /* 0x0200 */
  FB_FLOAT32 GBufferForceSpecularAlbedo; /* 0x0204 */
  FB_UINT32 OutdoorLightTileBatchCount; /* 0x0208 */
  FB_INT32 OnlyLightTileIndex; /* 0x020C */
  FB_UINT32 EmitterSunTransmittanceMapResolution; /* 0x0210 */
  FB_UINT32 MaxDestructionVolumeCount; /* 0x0214 */
  FB_UINT32 MaxDecalVolumeCount; /* 0x0218 */
  FB_UINT32 LightTileCsAvgLightCountPerTile; /* 0x021C */
  FB_FLOAT32 LightCullFrustumExpandDistance; /* 0x0220 */
  LightTileDebugLightCountMode LightTileDebugLightMode; /* 0x0224 */
  FB_INT32 LightTileDebugColorMode; /* 0x0228 */
  FB_UINT32 DebugLightStatsLightCountHighwatermark; /* 0x022C */
  FB_FLOAT32 LightLodFadeArea; /* 0x0230 */
  FB_FLOAT32 LightLodMinArea; /* 0x0234 */
  FB_FLOAT32 LightLodRadiusFactor; /* 0x0238 */
  FB_UINT32 OcclusionCullingWidth; /* 0x023C */
  FB_UINT32 OcclusionCullingHeight; /* 0x0240 */
  FB_UINT32 OcclusionTriangleCount; /* 0x0244 */
  FB_UINT32 ShadowOcclusionCullingWidth; /* 0x0248 */
  FB_UINT32 ShadowOcclusionCullingHeight; /* 0x024C */
  FB_UINT32 ShadowOcclusionTriangleCount; /* 0x0250 */
  FB_FLOAT32 FrustumSilhouetteCullingPadding; /* 0x0254 */
  FB_INT32 SubSurfaceScatteringSampleCount; /* 0x0258 */
  FB_FLOAT32 SubsurfaceBlurPixelRadiusCullThreshold; /* 0x025C */
  FB_INT32 OnlyTileIndex; /* 0x0260 */
  FB_FLOAT32 PlanarReflectionViewScale; /* 0x0264 */
  FB_FLOAT32 PlanarReflectionConvolutionSampleClampThreshold; /* 0x0268 */
  FB_UINT32 PlanarReflectionConvolutionSampleCount; /* 0x026C */
  FB_FLOAT32 PlanarReflectionCullFOV; /* 0x0270 */
  FB_FLOAT32 PlanarReflectionFarPlane; /* 0x0274 */
  FB_UINT32 DrawDebugPlanarReflectionMipLevel; /* 0x0278 */
  FB_UINT32 DrawDebugPlanarReflectionMode; /* 0x027C */
  FB_FLOAT32 ReflectionLodScale; /* 0x0280 */
  PostProcessAAMode PostProcessAntialiasingMode; /* 0x0284 */
  FB_UINT32 TemporalAAJitterCount; /* 0x0288 */
  FB_FLOAT32 TemporalAASharpness; /* 0x028C */
  FB_FLOAT32 TemporalAAMinHistoryBlendFactor; /* 0x0290 */
  FB_FLOAT32 TemporalAAMaxHistoryBlendFactor; /* 0x0294 */
  FB_FLOAT32 TemporalAADisocclusionRejectionFactor; /* 0x0298 */
  FB_FLOAT32 TemporalAALumaContrastFactor; /* 0x029C */
  FB_FLOAT32 TemporalAAMotionSharpeningFactor; /* 0x02A0 */
  FB_FLOAT32 TemporalAAAntiflickerMultiplier; /* 0x02A4 */
  FB_FLOAT32 TemporalAAAntiflickerInDistance; /* 0x02A8 */
  FB_FLOAT32 TemporalAAAntiflickerOutDistance; /* 0x02AC */
  FB_UINT32 DrawDebugTemporalAAAccumulationCount; /* 0x02B0 */
  FB_UINT32 DrawDebugTemporalAADebugMode; /* 0x02B4 */
  FB_FLOAT32 DrawDebugTemporalAAMaxDistance; /* 0x02B8 */
  ScaleResampleMode RenderScaleResampleMode; /* 0x02BC */
  QualityLevel SkyCelestialQuality; /* 0x02C0 */
  QualityScalableInt SkyCelestialMaxQuadCount; /* 0x02C4 */
  SkyRenderMode SkyRenderMode; /* 0x02D4 */
  FB_FLOAT32 InterpupillaryDistance; /* 0x02D8 */
  FB_UINT32 SpotLightShadowmapResolution; /* 0x02DC */
  FB_UINT32 SpotLightShadowmapQuality; /* 0x02E0 */
  FB_FLOAT32 SpotLightShadowmapPoissonFilterScale; /* 0x02E4 */
  SpotLightShadowmapTextureMode SpotLightShadowmapTextureMode; /* 0x02E8 */
  FB_FLOAT32 SpotLightShadowMaxAngle; /* 0x02EC */
  FB_FLOAT32 SpotLightShadowFadeOutRange; /* 0x02F0 */
  FB_UINT32 MaxShadowCount; /* 0x02F4 */
  FB_UINT32 MaxPunctualLightCount; /* 0x02F8 */
  FB_UINT32 MaxPunctualShadowLightCount; /* 0x02FC */
  FB_UINT32 MaxAreaLightCount; /* 0x0300 */
  FB_UINT32 MaxAreaShadowLightCount; /* 0x0304 */
  FB_UINT32 MaxLocalReflectionVolumeCount; /* 0x0308 */
  FB_UINT32 MaxLocalPlanarReflectionCount; /* 0x030C */
  FB_UINT32 MaxPunctualRectangularLightCount; /* 0x0310 */
  QualityLevel PunctualLightShadowLevel; /* 0x0314 */
  QualityLevel AreaLightShadowLevel; /* 0x0318 */
  FB_UINT32 LocalIBLMaxFaceCapture; /* 0x031C */
  FB_UINT32 LocalIBLLightingUpdateCount; /* 0x0320 */
  FB_UINT32 LocalIBLRefreshDelayCount; /* 0x0324 */
  FB_FLOAT32 LocalIBLSunUpdateThreshold; /* 0x0328 */
  FB_UINT32 LocalIBLShadowmapSliceCount; /* 0x032C */
  FB_UINT32 LocalIBLShadowmapResolution; /* 0x0330 */
  FB_UINT32 PBRLocalIBLAcquisitionWaitFrameCount; /* 0x0334 */
  FB_UINT32 PBRDiffuseConvolutionMipLevelOffset; /* 0x0338 */
  FB_UINT32 PBRSpecularConvolutionSampleCount; /* 0x033C */
  FB_UINT32 PBRDebugSpecularConvolutionSampleCount; /* 0x0340 */
  FB_UINT32 LocalIBLResolution; /* 0x0344 */
  FB_FLOAT32 DrawDebugLocalIBLPreviewScale; /* 0x0348 */
  FB_UINT32 DrawDebugLocalIBLIndex; /* 0x034C */
  FB_UINT32 DrawDebugLocalIBLMipLevel; /* 0x0350 */
  FB_UINT32 ContinuousLocalIBLIndex; /* 0x0354 */
  FB_UINT32 MaxLocalPlanarReflectionTargetCount; /* 0x0358 */
  FB_FLOAT32 PBRMaxIlluminanceValue; /* 0x035C */
  FB_FLOAT32 DiffuseRangeSRGBMinLimitValue; /* 0x0360 */
  FB_FLOAT32 DiffuseRangeSRGBMinValue; /* 0x0364 */
  FB_FLOAT32 DiffuseRangeSRGBMaxValue; /* 0x0368 */
  FB_FLOAT32 DiffuseRangeSRGBMaxLimitValue; /* 0x036C */
  FB_FLOAT32 VolumetricLightCascadeBaseVoxelSize; /* 0x0370 */
  FB_FLOAT32 VolumetricLightCascadeVoxelSizeCascadeFactor; /* 0x0374 */
  FB_UINT32 VolumetricLightCascadeResolution; /* 0x0378 */
  FB_FLOAT32 VolumetricDensityCascadeBaseVoxelSize; /* 0x037C */
  FB_FLOAT32 VolumetricDensityCascadeVoxelSizeCascadeFactor; /* 0x0380 */
  FB_UINT32 VolumetricDensityCascadeResolution; /* 0x0384 */
  FB_FLOAT32 VolumetricLightingIncreaseTemporalSmoothingFactor; /* 0x0388 */
  FB_FLOAT32 VolumetricLightingDecreaseTemporalSmoothingFactor; /* 0x038C */
  FB_UINT32 VolumetricShadowQuality; /* 0x0390 */
  FB_UINT32 VolumetricShadowmapResolution; /* 0x0394 */
  FB_UINT32 VolumetricShadowmapMaxCount; /* 0x0398 */
  QualityLevel PunctualLightCastVolumetricShadowmapEnableLevel; /* 0x039C */
  QualityLevel AreaLightCastVolumetricShadowmapEnableLevel; /* 0x03A0 */
  FB_UINT32 VolumetricParticlesInjectionMode; /* 0x03A4 */
  FB_UINT32 DrawDebugVolumetricDensity; /* 0x03A8 */
  FB_UINT32 DrawDebugVolumetricLight; /* 0x03AC */
  FB_FLOAT32 DrawGpuHistogramHDRMinEV; /* 0x03B0 */
  FB_FLOAT32 DrawGpuHistogramHDRMaxEV; /* 0x03B4 */
  FB_UINT32 DrawGpuHistogramBinCount; /* 0x03B8 */
  FB_BOOLEAN TestRenderingEnable; /* 0x03BC */
  FB_BOOLEAN GenericEntityRendererEnable; /* 0x03BD */
  FB_BOOLEAN ZBufferShadowTestEnable; /* 0x03BE */
  FB_BOOLEAN DecalVolumeEnable; /* 0x03BF */
  FB_BOOLEAN DrawDebugDecalVolumes; /* 0x03C0 */
  FB_BOOLEAN DrawDebugDestructionVolumes; /* 0x03C1 */
  FB_BOOLEAN LensFlaresEnable; /* 0x03C2 */
  FB_BOOLEAN DrawDebugLensFlareOccluders; /* 0x03C3 */
  FB_BOOLEAN DrawDebugLensFlares; /* 0x03C4 */
  FB_BOOLEAN LensFlareOcclusionEnable; /* 0x03C5 */
  FB_BOOLEAN CloudShadowEnable; /* 0x03C6 */
  FB_BOOLEAN OverrideDynamicAO; /* 0x03C7 */
  FB_BOOLEAN DrawDebugDynamicAO; /* 0x03C8 */
  FB_BOOLEAN FilmicEffectsEnable; /* 0x03C9 */
  FB_BOOLEAN EmissiveEnable; /* 0x03CA */
  FB_BOOLEAN GBufferClearEnable; /* 0x03CB */
  FB_BOOLEAN DxGBufferLight16BitEnable; /* 0x03CC */
  FB_BOOLEAN DxGBufferNormal16BitEnable; /* 0x03CD */
  FB_BOOLEAN DxGBufferRoughness16BitEnable; /* 0x03CE */
  FB_BOOLEAN GBufferAlphaTestSimpleEnable; /* 0x03CF */
  FB_BOOLEAN Gen4aEsramEnable; /* 0x03D0 */
  FB_BOOLEAN SpecularLightingEnable; /* 0x03D1 */
  FB_BOOLEAN SkinLightingEnable; /* 0x03D2 */
  FB_BOOLEAN TranslucencyLightingEnable; /* 0x03D3 */
  FB_BOOLEAN TranslucencyAutoThicknessEnable; /* 0x03D4 */
  FB_BOOLEAN DynamicEnvmapLightingEnable; /* 0x03D5 */
  FB_BOOLEAN OutdoorLightEnable; /* 0x03D6 */
  FB_BOOLEAN LightStencilMethodEnable; /* 0x03D7 */
  FB_BOOLEAN LightVolumeMethodEnable; /* 0x03D8 */
  FB_BOOLEAN LightVolumeDepthTestEnable; /* 0x03D9 */
  FB_BOOLEAN OutdoorKeyLightEnable; /* 0x03DA */
  FB_BOOLEAN OutdoorSkyLightEnable; /* 0x03DB */
  FB_BOOLEAN OutdoorLightTilingEnable; /* 0x03DC */
  FB_BOOLEAN OutdoorLightTileRenderEnable; /* 0x03DD */
  FB_BOOLEAN OutdoorLightTileBlendEnable; /* 0x03DE */
  FB_BOOLEAN OutdoorLightTileSimpleShaderEnable; /* 0x03DF */
  FB_BOOLEAN EmitterSunTransmittanceMapEnable; /* 0x03E0 */
  FB_BOOLEAN RadiositySpotLightShadowCullingEnable; /* 0x03E1 */
  FB_BOOLEAN LightTileCombineOutdoorLightEnable; /* 0x03E2 */
  FB_BOOLEAN LightTileCsPathEnable; /* 0x03E3 */
  FB_BOOLEAN LightTileAsyncComputeCulling; /* 0x03E4 */
  FB_BOOLEAN LightTileMinMaxUseHTile; /* 0x03E5 */
  FB_BOOLEAN LightTileUseCullingHierarchy; /* 0x03E6 */
  FB_BOOLEAN LightTileUseDetailedGpuTimers; /* 0x03E7 */
  FB_BOOLEAN LightTileUseCsIndirectClears; /* 0x03E8 */
  FB_BOOLEAN DrawDebugLightStats; /* 0x03E9 */
  FB_BOOLEAN DrawDebugLightStatsForward; /* 0x03EA */
  FB_BOOLEAN DrawDebugLightSources; /* 0x03EB */
  FB_BOOLEAN DrawDebugLightShadowSources; /* 0x03EC */
  FB_BOOLEAN DrawDebugLightShadowStats; /* 0x03ED */
  FB_BOOLEAN DrawDebugGBuffer; /* 0x03EE */
  FB_BOOLEAN DrawDebugMaterialInput; /* 0x03EF */
  FB_BOOLEAN DrawDebugMaterialOutput; /* 0x03F0 */
  FB_BOOLEAN DrawDebugLightEmissiveSurface; /* 0x03F1 */
  FB_BOOLEAN UseNewLightCullEnable; /* 0x03F2 */
  FB_BOOLEAN LightCullEnable; /* 0x03F3 */
  FB_BOOLEAN LightOcclusionCullEnable; /* 0x03F4 */
  FB_BOOLEAN LightConeCullEnable; /* 0x03F5 */
  FB_BOOLEAN LocalIBLOcclusionCullingEnable; /* 0x03F6 */
  FB_BOOLEAN ShadowOcclusionCullingEnable; /* 0x03F7 */
  FB_BOOLEAN FrustumSilhouetteCullingEnable; /* 0x03F8 */
  FB_BOOLEAN SubSurfaceScatteringEnable; /* 0x03F9 */
  FB_BOOLEAN TranslucencyEnable; /* 0x03FA */
  FB_BOOLEAN SplitLightingEnable; /* 0x03FB */
  FB_BOOLEAN SubsurfaceBlurComputeEnable; /* 0x03FC */
  FB_BOOLEAN SubsurfaceBlurQuadtreeTileGenEnable; /* 0x03FD */
  FB_BOOLEAN OpaqueSortBySolutionEnable; /* 0x03FE */
  FB_BOOLEAN MainOpaqueZPassEnable; /* 0x03FF */
  FB_BOOLEAN PlanarReflectionEnable; /* 0x0400 */
  FB_BOOLEAN PlanarReflectionFastHdrEnable; /* 0x0401 */
  FB_BOOLEAN PlanarReflectionBlurEnable; /* 0x0402 */
  FB_BOOLEAN PlanarReflectionConvolutionEnable; /* 0x0403 */
  FB_BOOLEAN PlanarReflectionConvolutionRandomSamplesEnable; /* 0x0404 */
  FB_BOOLEAN PlanarReflectionConvolutionPostFilterEnable; /* 0x0405 */
  FB_BOOLEAN PlanarReflectionClippingEnable; /* 0x0406 */
  FB_BOOLEAN DrawDebugPlanarReflection; /* 0x0407 */
  FB_BOOLEAN DrawDebugPlanarReflectionCullFrustum; /* 0x0408 */
  FB_BOOLEAN LocalPlanarReflectionConvolutionEnable; /* 0x0409 */
  FB_BOOLEAN OverlayEnable; /* 0x040A */
  FB_BOOLEAN OverlayZTestEnable; /* 0x040B */
  FB_BOOLEAN SmaaVelocityReprojectionEnable; /* 0x040C */
  FB_BOOLEAN SmaaUseStencil; /* 0x040D */
  FB_BOOLEAN SmaaPredicatedThresholdingEnable; /* 0x040E */
  FB_BOOLEAN TemporalAAJitterUseCmj; /* 0x040F */
  FB_BOOLEAN TemporalAASmoothHistoryFiltering; /* 0x0410 */
  FB_BOOLEAN DrawDebugTemporalAAEnable; /* 0x0411 */
  FB_BOOLEAN TemporalAADofCocFilterEnable; /* 0x0412 */
  FB_BOOLEAN RenderScaleResampleEnable; /* 0x0413 */
  FB_BOOLEAN SkyCelestialEnable; /* 0x0414 */
  FB_BOOLEAN FullscreenLensReflectionEnable; /* 0x0415 */
  FB_BOOLEAN SpriteDOFBeforeMotionBlur; /* 0x0416 */
  FB_BOOLEAN VrHmdLensDistortionEnable; /* 0x0417 */
  FB_BOOLEAN VrHmdLateReprojectionEnable; /* 0x0418 */
  FB_BOOLEAN SpotLightShadowmapEnable; /* 0x0419 */
  FB_BOOLEAN PBRSupportOriginalLight; /* 0x041A */
  FB_BOOLEAN RadiosityShadowCullingEnable; /* 0x041B */
  FB_BOOLEAN PunctualLightsEnable; /* 0x041C */
  FB_BOOLEAN AreaLightsEnable; /* 0x041D */
  FB_BOOLEAN LocalReflectionEnable; /* 0x041E */
  FB_BOOLEAN TilePassPunctualLightsEnable; /* 0x041F */
  FB_BOOLEAN TilePassPunctualLightShadowEnable; /* 0x0420 */
  FB_BOOLEAN TilePassAreaLightsEnable; /* 0x0421 */
  FB_BOOLEAN TilePassAreaLightShadowEnable; /* 0x0422 */
  FB_BOOLEAN TilePassLocalReflectionVolumeEnable; /* 0x0423 */
  FB_BOOLEAN TilePassLocalPlanarReflectionEnable; /* 0x0424 */
  FB_BOOLEAN SphereLightsEnable; /* 0x0425 */
  FB_BOOLEAN PunctualSphereLightsEnable; /* 0x0426 */
  FB_BOOLEAN SpotLightsEnable; /* 0x0427 */
  FB_BOOLEAN PunctualSpotLightsEnable; /* 0x0428 */
  FB_BOOLEAN TubeLightsEnable; /* 0x0429 */
  FB_BOOLEAN PunctualTubeLightsEnable; /* 0x042A */
  FB_BOOLEAN RectangularLightsEnable; /* 0x042B */
  FB_BOOLEAN PunctualRectangularLightsEnable; /* 0x042C */
  FB_BOOLEAN LocalReflectionVolumeSphereEnable; /* 0x042D */
  FB_BOOLEAN LocalReflectionVolumeBoxEnable; /* 0x042E */
  FB_BOOLEAN LocalPlanarReflectionEnable; /* 0x042F */
  FB_BOOLEAN LocalIBLUpdateWithSkyEnable; /* 0x0430 */
  FB_BOOLEAN LocalIBLUpdateWithEnlightenSkyBoxChange; /* 0x0431 */
  FB_BOOLEAN LocalIBLSunSpecularOcclusionEnable; /* 0x0432 */
  FB_BOOLEAN LocalIBLBoxCullingEnable; /* 0x0433 */
  FB_BOOLEAN LocalIBLShadowmapFaceMerging; /* 0x0434 */
  FB_BOOLEAN LocalIBLShadowmapSeparateFrame; /* 0x0435 */
  FB_BOOLEAN PBRLocalIBLFogEnable; /* 0x0436 */
  FB_BOOLEAN PBRDrawDiffuseReference; /* 0x0437 */
  FB_BOOLEAN PBRDrawSpecularReference; /* 0x0438 */
  FB_BOOLEAN PBRDrawLocalIBLReference; /* 0x0439 */
  FB_BOOLEAN PBRDrawDistantIBLReference; /* 0x043A */
  FB_BOOLEAN PBRDrawAreaLightReference; /* 0x043B */
  FB_BOOLEAN PBRConvolutionMISEnable; /* 0x043C */
  FB_BOOLEAN PBRConvolutionHighestMIPEnable; /* 0x043D */
  FB_BOOLEAN PBRConvolutionCubeArrayEnable; /* 0x043E */
  FB_BOOLEAN PBRConvolutionChainEnable; /* 0x043F */
  FB_BOOLEAN DrawDebugLocalIBLEnable; /* 0x0440 */
  FB_BOOLEAN DrawDebugLocalIBLStatsEnable; /* 0x0441 */
  FB_BOOLEAN DrawDebugLocalIBLShadowmaps; /* 0x0442 */
  FB_BOOLEAN DrawDebugPreIntegratedFGTexture; /* 0x0443 */
  FB_BOOLEAN DrawDebugReflectionState; /* 0x0444 */
  FB_BOOLEAN DrawDebugProbeMirrorEnable; /* 0x0445 */
  FB_BOOLEAN DrawDebugProbeDiffuseEnable; /* 0x0446 */
  FB_BOOLEAN DrawDebugProbeScreenEnable; /* 0x0447 */
  FB_BOOLEAN DrawDebugProbeScreenOnRight; /* 0x0448 */
  FB_BOOLEAN ContinuousLocalIBLEnable; /* 0x0449 */
  FB_BOOLEAN PBRConvolutionPrecomputedSampleEnable; /* 0x044A */
  FB_BOOLEAN PBRConvolutionComputeEnable; /* 0x044B */
  FB_BOOLEAN PBRConvolutionRandomRotationEnable; /* 0x044C */
  FB_BOOLEAN DrawDebugLocalPlanarReflections; /* 0x044D */
  FB_BOOLEAN EmitterQuadRenderingEnable; /* 0x044E */
  FB_BOOLEAN EmitterMeshRenderingEnable; /* 0x044F */
  FB_BOOLEAN EmitterPointLightsEnable; /* 0x0450 */
  FB_BOOLEAN EmitterSpotLightsEnable; /* 0x0451 */
  FB_BOOLEAN UseSSSProfileforOATS; /* 0x0452 */
  FB_BOOLEAN DeterministicRenderingEnable; /* 0x0453 */
  FB_BOOLEAN HdrNanInfRemovalEnable; /* 0x0454 */
  FB_BOOLEAN HdrNanInfRemovalForceEnable; /* 0x0455 */
  FB_BOOLEAN VolumetricRenderingEnable; /* 0x0456 */
  FB_BOOLEAN VolumetricCascadePositionUpdateEnable; /* 0x0457 */
  FB_BOOLEAN VolumetricLightingTemporalAAEnable; /* 0x0458 */
  FB_BOOLEAN VolumetricLightingUpsamplePreviousCascade; /* 0x0459 */
  FB_BOOLEAN VolumetricShadowSkipLowerMipSamples; /* 0x045A */
  FB_BOOLEAN VolumetricShadowCascadeBasedQuality; /* 0x045B */
  FB_BOOLEAN VolumetricShadowmapEnable; /* 0x045C */
  FB_BOOLEAN VolumetricParticlesDensityInjectionEnable; /* 0x045D */
  FB_BOOLEAN EmitterVolumetricLightingEnable; /* 0x045E */
  FB_BOOLEAN DrawDebugVolumetricCascadedVolumesEnable; /* 0x045F */
  FB_BOOLEAN DrawDebugVolumetricShadowMaps; /* 0x0460 */
  FB_BOOLEAN DrawDebugVolumetricEmitterInjectingDensityEnable; /* 0x0461 */
  FB_BOOLEAN LightShaftFastHdrEnable; /* 0x0462 */
  FB_BOOLEAN DrawGpuHistogramEnable; /* 0x0463 */
  FB_BOOLEAN DrawGpuHistogramRed; /* 0x0464 */
  FB_BOOLEAN DrawGpuHistogramBlue; /* 0x0465 */
  FB_BOOLEAN DrawGpuHistogramGreen; /* 0x0466 */
  FB_BOOLEAN DrawGpuHistogramLuminance; /* 0x0467 */
  FB_BOOLEAN DrawGpuHistogramHDRMode; /* 0x0468 */
  char pad_0469[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0470 */
#pragma pack(pop)

static_assert(sizeof(WorldRenderSettings) == 1136);

}
