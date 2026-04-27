#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/WorldRender/WorldViewMode.h>
#include <IcelinSdk.PvZGW2/WorldRender/MipmapFilterMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856388
   RuntimeId:        18EA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EDF
   VfTable:          00000001422C4BD0
   Address (Base):   00000001430FB230
*/
#pragma pack(push, 16)
class WorldRenderSettingsBase : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 CullScreenAreaScale; /* 0x0010 */
  FB_FLOAT32 ShadowmapMinFov; /* 0x0014 */
  char pad_0018[0x0008];
  Vec3 MotionBlurClearColor; /* 0x0020 */
  Vec3 DynamicEnvmapDefaultPosition; /* 0x0030 */
  FB_FLOAT32 ShadowmapSizeZScale; /* 0x0040 */
  FB_UINT32 ShadowmapResolution; /* 0x0044 */
  FB_UINT32 ShadowmapQuality; /* 0x0048 */
  FB_FLOAT32 ShadowmapPoissonFilterScale; /* 0x004C */
  FB_UINT32 ShadowmapSliceCount; /* 0x0050 */
  FB_FLOAT32 ShadowmapSliceSchemeWeight; /* 0x0054 */
  FB_FLOAT32 ShadowmapFirstSliceScale; /* 0x0058 */
  FB_FLOAT32 ShadowmapViewDistance; /* 0x005C */
  FB_FLOAT32 ShadowmapExtrusionLength; /* 0x0060 */
  FB_FLOAT32 ShadowmapTransitionBlendAmount; /* 0x0064 */
  FB_INT32 SunPcssMaxSampleCount; /* 0x0068 */
  FB_INT32 SunPcssAdaptiveSampleIncrement; /* 0x006C */
  FB_FLOAT32 MotionBlurScale; /* 0x0070 */
  FB_FLOAT32 MotionBlurFixedShutterTime; /* 0x0074 */
  FB_FLOAT32 MotionBlurMax; /* 0x0078 */
  FB_FLOAT32 MotionBlurRadialBlurMax; /* 0x007C */
  FB_FLOAT32 MotionBlurNoiseScale; /* 0x0080 */
  FB_UINT32 MotionBlurQuality; /* 0x0084 */
  FB_UINT32 MotionBlurDebugMode; /* 0x0088 */
  FB_UINT32 MotionBlurMaxSampleCount; /* 0x008C */
  FB_FLOAT32 ForceMotionBlurDepthCutoff; /* 0x0090 */
  FB_FLOAT32 ForceMotionBlurCutoffGradientScale; /* 0x0094 */
  FB_FLOAT32 MotionBlurDepthCheckThreshold; /* 0x0098 */
  FB_FLOAT32 MotionBlurDepthCheckMaxDistance; /* 0x009C */
  FB_UINT32 MultisampleCount; /* 0x00A0 */
  FB_UINT32 MultisampleQuality; /* 0x00A4 */
  FB_INT32 OnlyShadowmapSlice; /* 0x00A8 */
  WorldViewMode ViewMode; /* 0x00AC */
  FB_UINT32 AdditionalHdrTargetInESRAM; /* 0x00B0 */
  FB_INT32 DrawDebugBlurPyramidMipLevel; /* 0x00B4 */
  FB_UINT32 DrawDebugBuffers; /* 0x00B8 */
  FB_FLOAT32 HalfResDepthMinMaxDitherThreshold; /* 0x00BC */
  FB_UINT32 PhysicalSkyPrecisionHeight; /* 0x00C0 */
  FB_UINT32 PhysicalSkyPrecisionView; /* 0x00C4 */
  FB_UINT32 PhysicalSkyPrecisionSun; /* 0x00C8 */
  FB_UINT32 PhysicalSkyScatteringOrders; /* 0x00CC */
  FB_UINT32 PhysicalSkyAerialPerspectiveTextureWidth; /* 0x00D0 */
  FB_UINT32 PhysicalSkyAerialPerspectiveTextureHeight; /* 0x00D4 */
  FB_UINT32 PhysicalSkyAerialPerspectiveTextureDepth; /* 0x00D8 */
  FB_UINT32 PhysicalSkyScatteringEvalFrameCount; /* 0x00DC */
  FB_FLOAT32 PhysicalSkyAerialPerspectiveMaxDistance; /* 0x00E0 */
  FB_FLOAT32 SkyEnvmapFilterWidth; /* 0x00E4 */
  FB_UINT32 SkyEnvmapResolution; /* 0x00E8 */
  FB_INT32 DrawDebugSkyEnvmapMipLevel; /* 0x00EC */
  MipmapFilterMode SkyEnvmapFilterMode; /* 0x00F0 */
  FB_UINT32 SkyEnvmapSidesPerFrameCount; /* 0x00F4 */
  FB_FLOAT32 SkyEnvmapUpdateCountThreshold; /* 0x00F8 */
  FB_FLOAT32 SkyEnvmapUpdateValueThreshold; /* 0x00FC */
  FB_FLOAT32 DynamicEnvmapFilterWidth; /* 0x0100 */
  FB_INT32 DrawDebugDynamicEnvmapMipLevel; /* 0x0104 */
  MipmapFilterMode DynamicEnvmapFilterMode; /* 0x0108 */
  FB_UINT32 DynamicEnvmapSpecularConvolutionSampleCount; /* 0x010C */
  FB_UINT32 DynamicEnvmapShadowmapResolution; /* 0x0110 */
  FB_INT32 DynamicEnvmapShadowmapFarPlane; /* 0x0114 */
  FB_INT32 DynamicEnvmapShadowmapShadowExtrusion; /* 0x0118 */
  FB_BOOLEAN DeferredShadingEnable; /* 0x011C */
  FB_BOOLEAN ForwardOpaqueEnable; /* 0x011D */
  FB_BOOLEAN FullZPassEnable; /* 0x011E */
  FB_BOOLEAN TileMaterialClassificationEnable; /* 0x011F */
  FB_BOOLEAN ShadowmapsEnable; /* 0x0120 */
  FB_BOOLEAN ShadowmapArrayEnable; /* 0x0121 */
  FB_BOOLEAN TransparencyShadowmapsEnable; /* 0x0122 */
  FB_BOOLEAN TransparencyShadowmapsHalfRes; /* 0x0123 */
  FB_BOOLEAN ShadowmapFixedMovementEnable; /* 0x0124 */
  FB_BOOLEAN ShadowmapFixedDepthEnable; /* 0x0125 */
  FB_BOOLEAN ShadowmapViewDistanceScaleEnable; /* 0x0126 */
  FB_BOOLEAN ShadowmapCullVolumeEnable; /* 0x0127 */
  FB_BOOLEAN ShadowmapAdjustFarPlane; /* 0x0128 */
  FB_BOOLEAN ShadowmapAccumEnable; /* 0x0129 */
  FB_BOOLEAN ShadowmapAccumReuseEnable; /* 0x012A */
  FB_BOOLEAN ShadowmapAccumBilinearEnable; /* 0x012B */
  FB_BOOLEAN ShadowmapAccumStencilEnable; /* 0x012C */
  FB_BOOLEAN ShadowmapAccumStencil2Enable; /* 0x012D */
  FB_BOOLEAN ShadowmapTransitionBlendEnable; /* 0x012E */
  FB_BOOLEAN DxShadowmap16BitEnable; /* 0x012F */
  FB_BOOLEAN DxSpotLightShadowmap16BitEnable; /* 0x0130 */
  FB_BOOLEAN DxDynamicEnvmapShadowmap16BitEnable; /* 0x0131 */
  FB_BOOLEAN ApplyShadowmapsEnable; /* 0x0132 */
  FB_BOOLEAN GenerateShadowmapsEnable; /* 0x0133 */
  FB_BOOLEAN SimpleShadowmapsEnable; /* 0x0134 */
  FB_BOOLEAN EmitterShadowingBlendToggle; /* 0x0135 */
  FB_BOOLEAN EmitterShadowingManySamplesToggle; /* 0x0136 */
  FB_BOOLEAN DxLinearDepth32BitFormatEnable; /* 0x0137 */
  FB_BOOLEAN MotionBlurEnable; /* 0x0138 */
  FB_BOOLEAN MotionBlurForceOn; /* 0x0139 */
  FB_BOOLEAN MotionBlurOptimalStableVelocityFormula; /* 0x013A */
  FB_BOOLEAN MotionBlurStencilPassEnable; /* 0x013B */
  FB_BOOLEAN MotionBlurGeometryPassEnable; /* 0x013C */
  FB_BOOLEAN MotionBlurBackgroundPassEnable; /* 0x013D */
  FB_BOOLEAN MotionBlurCenteredEnable; /* 0x013E */
  FB_BOOLEAN MotionBlurHairPassEnable; /* 0x013F */
  FB_BOOLEAN DrawTransparent; /* 0x0140 */
  FB_BOOLEAN DrawTransparentDecal; /* 0x0141 */
  FB_BOOLEAN TransparentAfterMotionBlur; /* 0x0142 */
  FB_BOOLEAN Enable; /* 0x0143 */
  FB_BOOLEAN HdrEnable; /* 0x0144 */
  FB_BOOLEAN LdrEnable; /* 0x0145 */
  FB_BOOLEAN ReadOnlyDepthEnable; /* 0x0146 */
  FB_BOOLEAN ConsoleRenderTargetPoolSharingEnable; /* 0x0147 */
  FB_BOOLEAN FastHdrEnable; /* 0x0148 */
  FB_BOOLEAN LinearDepthInESRAM; /* 0x0149 */
  FB_BOOLEAN HalfResDepthResolveEnable; /* 0x014A */
  FB_BOOLEAN FinalPostEnable; /* 0x014B */
  FB_BOOLEAN OutputGammaCorrectionEnable; /* 0x014C */
  FB_BOOLEAN ScreenEffectEnable; /* 0x014D */
  FB_BOOLEAN DrawSolidBoundingBoxes; /* 0x014E */
  FB_BOOLEAN DrawLineBoundingBoxes; /* 0x014F */
  FB_BOOLEAN DrawBoundingSpheres; /* 0x0150 */
  FB_BOOLEAN DrawFrustums; /* 0x0151 */
  FB_BOOLEAN DrawLocalIBLFrustums; /* 0x0152 */
  FB_BOOLEAN DrawDebugShadowmaps; /* 0x0153 */
  FB_BOOLEAN DrawDebugSpotLightShadowmaps; /* 0x0154 */
  FB_BOOLEAN DrawDebugSkyEnvmap; /* 0x0155 */
  FB_BOOLEAN DrawDebugVelocityBuffer; /* 0x0156 */
  FB_BOOLEAN DrawDebugZBufferEnable; /* 0x0157 */
  FB_BOOLEAN DrawDebugHalfResEnvironment; /* 0x0158 */
  FB_BOOLEAN DrawDebugDistortion; /* 0x0159 */
  FB_BOOLEAN DrawDebugVisibleEntityTypes; /* 0x015A */
  FB_BOOLEAN DrawDebugSkyTextures; /* 0x015B */
  FB_BOOLEAN DrawDebugMarschnerTextures; /* 0x015C */
  FB_BOOLEAN DrawDebugDof; /* 0x015D */
  FB_BOOLEAN DrawDebugDofFullscreen; /* 0x015E */
  FB_BOOLEAN DrawDebugHalfResHdrTargets; /* 0x015F */
  FB_BOOLEAN DrawDebugHiZMinMaxBufferEnable; /* 0x0160 */
  FB_BOOLEAN DrawDebugScreenSpaceRaytraceBucketsEnable; /* 0x0161 */
  FB_BOOLEAN DrawDebugEmitterSunTransmittanceMaps; /* 0x0162 */
  FB_BOOLEAN DrawDebugBlurPyramid; /* 0x0163 */
  FB_BOOLEAN DrawDebugOcclusionZBuffer; /* 0x0164 */
  FB_BOOLEAN DrawDebugLocalIBLOcclusionZBuffer; /* 0x0165 */
  FB_BOOLEAN WireframeEnable; /* 0x0166 */
  FB_BOOLEAN ZPassEnable; /* 0x0167 */
  FB_BOOLEAN OccluderMeshZPrepassEnable; /* 0x0168 */
  FB_BOOLEAN OccluderMeshZPrepassDebugEnable; /* 0x0169 */
  FB_BOOLEAN HalfResEnable; /* 0x016A */
  FB_BOOLEAN ForceFullResEnable; /* 0x016B */
  FB_BOOLEAN HalfResLensFlaresEnable; /* 0x016C */
  FB_BOOLEAN ForegroundEnable; /* 0x016D */
  FB_BOOLEAN ForegroundDepthClearEnable; /* 0x016E */
  FB_BOOLEAN ForegroundZPassEnable; /* 0x016F */
  FB_BOOLEAN ForegroundTransparentEnable; /* 0x0170 */
  FB_BOOLEAN BilateralHalfResCompositeEnable; /* 0x0171 */
  FB_BOOLEAN HalfResDepthMinMaxDitherEnable; /* 0x0172 */
  FB_BOOLEAN SkyLightingEnable; /* 0x0173 */
  FB_BOOLEAN SkyRenderEnable; /* 0x0174 */
  FB_BOOLEAN SkyDepthFogEnable; /* 0x0175 */
  FB_BOOLEAN SkyHeightFogEnable; /* 0x0176 */
  FB_BOOLEAN SkyForwardScatteringEnable; /* 0x0177 */
  FB_BOOLEAN PhysicalSkyEnabled; /* 0x0178 */
  FB_BOOLEAN PhysicalSkyForcePrecompute; /* 0x0179 */
  FB_BOOLEAN TransparentFoggingEnable; /* 0x017A */
  FB_BOOLEAN DistortionEnable; /* 0x017B */
  FB_BOOLEAN DistortionHalfResEnable; /* 0x017C */
  FB_BOOLEAN Distortion8BitEnable; /* 0x017D */
  FB_BOOLEAN DistortionTilingEnable; /* 0x017E */
  FB_BOOLEAN StaticEnvmapEnable; /* 0x017F */
  FB_BOOLEAN CustomEnvmapEnable; /* 0x0180 */
  FB_BOOLEAN CustomEnvmapMipmapClampEnable; /* 0x0181 */
  FB_BOOLEAN SkyEnvmapEnable; /* 0x0182 */
  FB_BOOLEAN SkyEnvmapMipmapGenEnable; /* 0x0183 */
  FB_BOOLEAN SkyEnvmapUpdateEnable; /* 0x0184 */
  FB_BOOLEAN SkyEnvmapForceUpdateEnable; /* 0x0185 */
  FB_BOOLEAN SkyEnvmapUseFastHDR; /* 0x0186 */
  FB_BOOLEAN SkyEnvmapUse32bitLatLongTexture; /* 0x0187 */
  FB_BOOLEAN SkyEnvmapDebugColorEnable; /* 0x0188 */
  FB_BOOLEAN DynamicEnvmapEnable; /* 0x0189 */
  FB_BOOLEAN DynamicEnvmapMipmapGenEnable; /* 0x018A */
  FB_BOOLEAN DrawDebugDynamicEnvmap; /* 0x018B */
  FB_BOOLEAN DynamicEnvmapShadowmapEnable; /* 0x018C */
  FB_BOOLEAN DynamicEnvmapShadowmapFarPlaneOverride; /* 0x018D */
  FB_BOOLEAN DynamicEnvmapShadowmapShadowExtrusionOverride; /* 0x018E */
  FB_BOOLEAN DrawDebugDynamicEnvmapShadowmap; /* 0x018F */
  FB_BOOLEAN DrawDynamicEnvmapFrustums; /* 0x0190 */
  FB_BOOLEAN HairCoverageEnable; /* 0x0191 */
  FB_BOOLEAN SetupJobEnable; /* 0x0192 */
  FB_BOOLEAN FinishSyncJobsFirstEnable; /* 0x0193 */
  FB_BOOLEAN PrepareDispatchListJobEnable; /* 0x0194 */
  char pad_0195[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01A0 */
#pragma pack(pop)

static_assert(sizeof(WorldRenderSettingsBase) == 416);

}
