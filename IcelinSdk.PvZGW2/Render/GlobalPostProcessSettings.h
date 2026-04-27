#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Render/PostProcessDebugMode.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Render/AutoExposureMethod.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>
#include <IcelinSdk.PvZGW2/Render/ColorGradingQualityMode.h>
#include <IcelinSdk.PvZGW2/Render/DofMethod.h>
#include <IcelinSdk.PvZGW2/Render/BlurMethod.h>
#include <IcelinSdk.PvZGW2/Render/DynamicAOMethod.h>
#include <IcelinSdk.PvZGW2/Render/BlurFilter.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853140
   RuntimeId:        1638
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E04
   VfTable:          00000001422A1430
   Address (Base):   00000001430EAD80
*/
#pragma pack(push, 16)
class GlobalPostProcessSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PostProcessDebugMode DebugMode; /* 0x0010 */
  FB_UINT32 DebugModeStep; /* 0x0014 */
  char pad_0018[0x0008];
  Vec3 ForceBloomScale; /* 0x0020 */
  Vec4 ForceVignetteColor; /* 0x0030 */
  Vec3 FilmGrainColorScale; /* 0x0040 */
  Vec3 Brightness; /* 0x0050 */
  Vec3 Contrast; /* 0x0060 */
  Vec3 Saturation; /* 0x0070 */
  FB_FLOAT32 ForceEVCompensation; /* 0x0080 */
  FB_FLOAT32 ForceEV; /* 0x0084 */
  FB_INT32 BloomFFTMipLevel; /* 0x0088 */
  FB_INT32 BloomFFTProceduralKernelSize; /* 0x008C */
  FB_UINT32 BlurPyramidFinalLevel; /* 0x0090 */
  FB_FLOAT32 BlurPyramidLdrRange; /* 0x0094 */
  FB_FLOAT32 DebugColorGraphMinValue; /* 0x0098 */
  FB_FLOAT32 DebugColorGraphMaxValue; /* 0x009C */
  FB_INT32 DebugColorGraphLineNumber; /* 0x00A0 */
  AutoExposureMethod AutoExposureMethod; /* 0x00A4 */
  FB_UINT32 AutoExposureHistogramBinCount; /* 0x00A8 */
  FB_UINT32 AutoExposureHistogramMipUsed; /* 0x00AC */
  FB_FLOAT32 AutoExposureHistogramMinValue; /* 0x00B0 */
  FB_FLOAT32 AutoExposureHistogramMaxValue; /* 0x00B4 */
  FB_UINT32 DownsampleAverageStartMipmap; /* 0x00B8 */
  FB_INT32 ForceDofEnable; /* 0x00BC */
  FB_FLOAT32 ForceDofBlurFactor; /* 0x00C0 */
  FB_FLOAT32 ForceDofBlurAdd; /* 0x00C4 */
  FB_FLOAT32 ForceDofFocusDistance; /* 0x00C8 */
  FB_FLOAT32 ForceSimpleDofNearStart; /* 0x00CC */
  FB_FLOAT32 ForceSimpleDofNearEnd; /* 0x00D0 */
  FB_FLOAT32 ForceSimpleDofFarStart; /* 0x00D4 */
  FB_FLOAT32 ForceSimpleDofFarEnd; /* 0x00D8 */
  FB_FLOAT32 ForceSimpleDofBlurMax; /* 0x00DC */
  FB_FLOAT32 ForceSpriteDofNearStart; /* 0x00E0 */
  FB_FLOAT32 ForceSpriteDofNearEnd; /* 0x00E4 */
  FB_FLOAT32 ForceSpriteDofFarStart; /* 0x00E8 */
  FB_FLOAT32 ForceSpriteDofFarEnd; /* 0x00EC */
  FB_FLOAT32 ForceSpriteDofBlurMax; /* 0x00F0 */
  Vec2 ForceVignetteScale; /* 0x00F4 */
  FB_FLOAT32 ForceVignetteExponent; /* 0x00FC */
  FB_FLOAT32 FxaaComputeSubPixelRemoval; /* 0x0100 */
  FB_FLOAT32 FxaaComputeContrastThreshold; /* 0x0104 */
  FB_INT32 ForceTonemapMethod; /* 0x0108 */
  ColorGradingQualityMode ColorGradingHighQualityMode; /* 0x010C */
  FB_INT32 ForceChromostereopsisEnable; /* 0x0110 */
  FB_INT32 ForceChromostereopsisOffset; /* 0x0114 */
  FB_FLOAT32 ForceChromostereopsisScale; /* 0x0118 */
  Vec2 FilmGrainTextureScale; /* 0x011C */
  FB_FLOAT32 LensScopeColorScale; /* 0x0124 */
  FB_FLOAT32 HalfResEdgeDetectThreshold; /* 0x0128 */
  FB_FLOAT32 Hue; /* 0x012C */
  FB_FLOAT32 UIBrightnessNorm; /* 0x0130 */
  FB_FLOAT32 UserBrightnessMin; /* 0x0134 */
  FB_FLOAT32 UserBrightnessMax; /* 0x0138 */
  FB_FLOAT32 UserBrightnessAddScale; /* 0x013C */
  FB_FLOAT32 UserBrightnessMulScale; /* 0x0140 */
  FB_FLOAT32 LUTGammaR; /* 0x0144 */
  FB_FLOAT32 LUTGammaG; /* 0x0148 */
  FB_FLOAT32 LUTGammaB; /* 0x014C */
  FB_FLOAT32 LUTGammaCurbOffset; /* 0x0150 */
  DofMethod DofMethod; /* 0x0154 */
  BlurMethod BlurMethod; /* 0x0158 */
  FB_FLOAT32 SpriteDofMinRadiusLayer1; /* 0x015C */
  FB_FLOAT32 SpriteDofMinRadiusLayer2; /* 0x0160 */
  FB_FLOAT32 SpriteDofMaxRadiusGatherPass; /* 0x0164 */
  FB_FLOAT32 SpriteDofMergeColorThreshold; /* 0x0168 */
  FB_FLOAT32 SpriteDofMergeRadiusThreshold; /* 0x016C */
  FB_FLOAT32 SpriteDofDepthDiscontinuityThreshold; /* 0x0170 */
  FB_UINT32 SpriteDofActiveLayer; /* 0x0174 */
  FB_FLOAT32 SpriteDofInfocusMultiplier; /* 0x0178 */
  FB_FLOAT32 SpriteDofMaxBlurScale; /* 0x017C */
  FB_FLOAT32 SpriteDofEnergyScaler; /* 0x0180 */
  FB_UINT32 SpriteDofMultilayerForegroundCount; /* 0x0184 */
  FB_FLOAT32 SpriteDofMultilayerForegroundCocSpan; /* 0x0188 */
  FB_FLOAT32 SpriteDofForegroundReweightExponent; /* 0x018C */
  FB_FLOAT32 SpriteDofMultilayerForegroundLayerExtension; /* 0x0190 */
  FB_UINT32 SpriteDofMultilayerForegroundActiveLayer; /* 0x0194 */
  DynamicAOMethod DynamicAOMethod; /* 0x0198 */
  FB_INT32 ScreenSpaceRaytraceDebug; /* 0x019C */
  FB_INT32 ScreenSpaceRaytraceQuality; /* 0x01A0 */
  FB_UINT32 IronsightsDofResolutionFactor; /* 0x01A4 */
  BlurFilter IronsightsBlurFilter; /* 0x01A8 */
  BlurFilter IronsightsBlurFilter720p; /* 0x01AC */
  FB_FLOAT32 IronsightsHDRCompression; /* 0x01B0 */
  FB_FLOAT32 IronsightsCoCScale; /* 0x01B4 */
  FB_FLOAT32 OverrideIronsightsHipFade; /* 0x01B8 */
  FB_FLOAT32 OverrideIronsightsStartFade; /* 0x01BC */
  FB_FLOAT32 OverrideIronsightsFocalDistance; /* 0x01C0 */
  FB_FLOAT32 OverrideIronsightsDofCircleDistance; /* 0x01C4 */
  FB_UINT32 DynamicAOSampleTemporalCount; /* 0x01C8 */
  FB_UINT32 DynamicAOSampleStepCount; /* 0x01CC */
  FB_UINT32 DynamicAOSampleDirCount; /* 0x01D0 */
  FB_FLOAT32 DynamicAOMaxFootprintRadius; /* 0x01D4 */
  FB_UINT32 DynamicAOBilateralBlurRadius; /* 0x01D8 */
  FB_FLOAT32 DynamicAOBilateralBlurSharpness; /* 0x01DC */
  FB_FLOAT32 DynamicAONormalInfluence; /* 0x01E0 */
  FB_FLOAT32 DynamicAOTemporalSharpness; /* 0x01E4 */
  FB_FLOAT32 DynamicAOTemporalMinHistoryBlendFactor; /* 0x01E8 */
  FB_FLOAT32 DynamicAOTemporalMaxHistoryBlendFactor; /* 0x01EC */
  FB_FLOAT32 DynamicAOTemporalDisocclusionRejectionFactor; /* 0x01F0 */
  FB_FLOAT32 DynamicAOTemporalLumaContrastFactor; /* 0x01F4 */
  FB_FLOAT32 DynamicAOTemporalMotionSharpeningFactor; /* 0x01F8 */
  FB_FLOAT32 DynamicAOTemporalAntiflickerMultiplier; /* 0x01FC */
  FB_FLOAT32 DynamicAOTemporalAntiflickerInDistance; /* 0x0200 */
  FB_FLOAT32 DynamicAOTemporalAntiflickerOutDistance; /* 0x0204 */
  FB_UINT32 DrawDebugDynamicAOTemporalAccumulationCount; /* 0x0208 */
  FB_UINT32 DrawDebugDynamicAOTemporalDebugMode; /* 0x020C */
  FB_FLOAT32 DrawDebugDynamicAOTemporalMaxDistance; /* 0x0210 */
  FB_BOOLEAN HdrBlurEnable; /* 0x0214 */
  FB_BOOLEAN EVClampEnable; /* 0x0215 */
  FB_BOOLEAN AdaptationTimeEnable; /* 0x0216 */
  FB_BOOLEAN ForceEVCompensationEnable; /* 0x0217 */
  FB_BOOLEAN ForceEVEnable; /* 0x0218 */
  FB_BOOLEAN DrawDebugInfo; /* 0x0219 */
  FB_BOOLEAN DrawExposureDebugInfo; /* 0x021A */
  FB_BOOLEAN RenderTargetLoadOptsEnable; /* 0x021B */
  FB_BOOLEAN BlurEnable; /* 0x021C */
  FB_BOOLEAN QuarterDownsamplingEnable; /* 0x021D */
  FB_BOOLEAN BlurBlendEnable; /* 0x021E */
  FB_BOOLEAN BloomEnable; /* 0x021F */
  FB_BOOLEAN BloomTestEnable; /* 0x0220 */
  FB_BOOLEAN BloomFFTEnable; /* 0x0221 */
  FB_BOOLEAN DrawDebugFFTEnable; /* 0x0222 */
  FB_BOOLEAN BlurPyramidEnable; /* 0x0223 */
  FB_BOOLEAN BlurPyramidQuarterResEnable; /* 0x0224 */
  FB_BOOLEAN BlurPyramidHdrEnable; /* 0x0225 */
  FB_BOOLEAN BlurPyramidFastHdrEnable; /* 0x0226 */
  FB_BOOLEAN BlurPyramidSinglePassEnable; /* 0x0227 */
  FB_BOOLEAN DebugColorGraphEnable; /* 0x0228 */
  FB_BOOLEAN DownsampleLogAverageEnable; /* 0x0229 */
  FB_BOOLEAN DownsampleBeforeBlurEnable; /* 0x022A */
  FB_BOOLEAN VignetteEnable; /* 0x022B */
  FB_BOOLEAN FxaaComputeDebug; /* 0x022C */
  FB_BOOLEAN ColorGradingEnable; /* 0x022D */
  FB_BOOLEAN ColorGradingComputeEnable; /* 0x022E */
  FB_BOOLEAN ColorGradingDebugEnable; /* 0x022F */
  FB_BOOLEAN ColorTransformEnable; /* 0x0230 */
  FB_BOOLEAN ColorGradingForceUpdateAlways; /* 0x0231 */
  FB_BOOLEAN FilmGrainEnable; /* 0x0232 */
  FB_BOOLEAN FilmGrainLinearFilteringEnable; /* 0x0233 */
  FB_BOOLEAN FilmGrainRandomEnable; /* 0x0234 */
  FB_BOOLEAN LensScopeEnable; /* 0x0235 */
  FB_BOOLEAN UserBrightnessLUTEnable; /* 0x0236 */
  FB_BOOLEAN DrawDebugUserBrightnessLUT; /* 0x0237 */
  FB_BOOLEAN SpriteDofEnable; /* 0x0238 */
  FB_BOOLEAN SpriteDofMergeEnable; /* 0x0239 */
  FB_BOOLEAN SpriteDofForegroundEnable; /* 0x023A */
  FB_BOOLEAN SpriteDofDepthFilterEnable; /* 0x023B */
  FB_BOOLEAN SpriteDofBuffer32bitEnable; /* 0x023C */
  FB_BOOLEAN SpriteDofHalfResolutionEnable; /* 0x023D */
  FB_BOOLEAN SpriteDofInstancingEnable; /* 0x023E */
  FB_BOOLEAN SpriteDofNearGatherEnable; /* 0x023F */
  FB_BOOLEAN SpriteDofMultilayerForegroundEnable; /* 0x0240 */
  FB_BOOLEAN SpriteDofDebugEnable; /* 0x0241 */
  FB_BOOLEAN DynamicAOEnable; /* 0x0242 */
  FB_BOOLEAN SsaoBlurEnable; /* 0x0243 */
  FB_BOOLEAN ScreenSpaceRaytraceEnable; /* 0x0244 */
  FB_BOOLEAN ScreenSpaceRaytraceDeferredResolveEnable; /* 0x0245 */
  FB_BOOLEAN ScreenSpaceRaytraceSeparateCoverageEnable; /* 0x0246 */
  FB_BOOLEAN ScreenSpaceRaytraceFullresEnable; /* 0x0247 */
  FB_BOOLEAN IronsightsDofEnable; /* 0x0248 */
  FB_BOOLEAN ForceIronsightsDofActive; /* 0x0249 */
  FB_BOOLEAN OverrideIronsightsDofParams; /* 0x024A */
  FB_BOOLEAN OverrideIronsightsDofCircleBlur; /* 0x024B */
  FB_BOOLEAN ForceLensScopeActive; /* 0x024C */
  FB_BOOLEAN DynamicAOHorizonBased; /* 0x024D */
  FB_BOOLEAN DynamicAOBilateralBlurEnable; /* 0x024E */
  FB_BOOLEAN DynamicAONormalEnable; /* 0x024F */
  FB_BOOLEAN DynamicAOUseAsyncCompute; /* 0x0250 */
  FB_BOOLEAN DynamicAOTemporalFilterEnable; /* 0x0251 */
  FB_BOOLEAN DynamicAOTemporalSmoothHistoryFiltering; /* 0x0252 */
  FB_BOOLEAN DrawDebugDynamicAOTemporalEnable; /* 0x0253 */
  char pad_0254[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0260 */
#pragma pack(pop)

static_assert(sizeof(GlobalPostProcessSettings) == 608);

}
