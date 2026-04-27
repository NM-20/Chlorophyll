#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/QualityLevel.h>
#include <IcelinSdk.PvZGW2/Core/PlatformScalableInt.h>

namespace fb
{

/* TypeInfo (Array): 00000001428536C0
   RuntimeId:        1686
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E3F
   VfTable:          00000001422A12B0
   Address (Base):   00000001430D0680
*/
#pragma pack(push, 8)
class ShaderSystemSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 FrameMemoryBufferSize; /* 0x0010 */
  FB_UINT32 FrameMemoryBufferSizeTarget; /* 0x0014 */
  QualityLevel ShaderQualityLevel; /* 0x0018 */
  PlatformScalableInt DrawBlockWarningLimit; /* 0x001C */
  FB_FLOAT32 MipmapBias; /* 0x0040 */
  FB_FLOAT32 MinMipmap; /* 0x0044 */
  FB_FLOAT32 MaxMipmap; /* 0x0048 */
  FB_INT32 ForceMaxAnisotropy; /* 0x004C */
  FB_UINT32 MaxAnisotropyLow; /* 0x0050 */
  FB_UINT32 MaxAnisotropyMedium; /* 0x0054 */
  FB_UINT32 MaxAnisotropyHigh; /* 0x0058 */
  FB_UINT32 MaxAnisotropyUltra; /* 0x005C */
  FB_UINT32 Gen4PerformanceAnisotropyThreshold; /* 0x0060 */
  FB_UINT32 Gen4PerformanceMips; /* 0x0064 */
  FB_UINT32 Gen4PerformanceZ; /* 0x0068 */
  FB_UINT32 DrawCallMultiplier; /* 0x006C */
  FB_CSTRING SingleFrameBlockLogFileName; /* 0x0070 */
  FB_UINT32 OverdrawMaxLayerCount; /* 0x0078 */
  FB_FLOAT32 InstructionCountScale; /* 0x007C */
  FB_UINT32 OrbisMaxInstructionCount; /* 0x0080 */
  FB_UINT32 Gen4aMaxInstructionCount; /* 0x0084 */
  FB_UINT32 DxMaxInstructionCount; /* 0x0088 */
  FB_UINT32 GlslMaxInstructionCount; /* 0x008C */
  FB_FLOAT32 DistortionMaxValueScale; /* 0x0090 */
  FB_FLOAT32 SubSurfaceScatteringMaxWidth; /* 0x0094 */
  FB_INT32 DispatchPrepareJobCount; /* 0x0098 */
  FB_UINT32 DispatchJobMaxChunkCount; /* 0x009C */
  FB_UINT32 MaxInstanceCount; /* 0x00A0 */
  FB_UINT32 DxVsFunctionConstantBufferSize; /* 0x00A4 */
  FB_UINT32 DxPsFunctionConstantBufferSize; /* 0x00A8 */
  FB_UINT32 DxVsExternalConstantBufferSize; /* 0x00AC */
  FB_UINT32 DxPsExternalConstantBufferSize; /* 0x00B0 */
  FB_UINT32 DxDispatchJobMinBlockCount; /* 0x00B4 */
  FB_UINT32 DxDispatchJobBlocksPerCommandList; /* 0x00B8 */
  FB_UINT32 DxInstancingBufferMethod; /* 0x00BC */
  FB_UINT32 DxConstantBufferMethod; /* 0x00C0 */
  FB_INT32 GlesDispatchJobCount; /* 0x00C4 */
  FB_UINT32 GlesDispatchJobMinBlockCount; /* 0x00C8 */
  FB_UINT32 GlesDispatchJobBlocksPerCommandList; /* 0x00CC */
  FB_INT32 GlesDispatchProcessJobCount; /* 0x00D0 */
  FB_UINT32 OrbisDispatchJobMinBlockCount; /* 0x00D4 */
  FB_UINT32 OrbisDispatchJobBlockSize; /* 0x00D8 */
  FB_UINT32 OrbisDesiredPatchCount; /* 0x00DC */
  FB_UINT32 MantleDispatchJobMinBlockCount; /* 0x00E0 */
  FB_UINT32 MantleDispatchJobBlockSize; /* 0x00E4 */
  FB_UINT32 BalsaDispatchJobMinBlockCount; /* 0x00E8 */
  FB_UINT32 BalsaDispatchJobBlockSize; /* 0x00EC */
  FB_BOOLEAN FlushEnable; /* 0x00F0 */
  FB_BOOLEAN DispatchDirectEnable; /* 0x00F1 */
  FB_BOOLEAN DrawStats; /* 0x00F2 */
  FB_BOOLEAN DrawAdvancedStats; /* 0x00F3 */
  FB_BOOLEAN DrawZOnly; /* 0x00F4 */
  FB_BOOLEAN DrawOpaque; /* 0x00F5 */
  FB_BOOLEAN DrawOpaqueAlphaTest; /* 0x00F6 */
  FB_BOOLEAN DrawOpaqueAlphaTestSimple; /* 0x00F7 */
  FB_BOOLEAN DrawTransparent; /* 0x00F8 */
  FB_BOOLEAN DrawTransparentDecal; /* 0x00F9 */
  FB_BOOLEAN DrawTransparentDepth; /* 0x00FA */
  FB_BOOLEAN DrawInlineBlocks; /* 0x00FB */
  FB_BOOLEAN DrawStreamedTextureBlocks; /* 0x00FC */
  FB_BOOLEAN DrawNonStreamedTextureBlocks; /* 0x00FD */
  FB_BOOLEAN DrawInstancedBlocks; /* 0x00FE */
  FB_BOOLEAN DrawNonInstancedBlocks; /* 0x00FF */
  FB_BOOLEAN DrawTileClassifiedBlocks; /* 0x0100 */
  FB_BOOLEAN TileClassificationEnable; /* 0x0101 */
  FB_BOOLEAN OnDemandBuildingEnable; /* 0x0102 */
  FB_BOOLEAN OnDemandPrimingEnable; /* 0x0103 */
  FB_BOOLEAN OnDemandMonitoringEnable; /* 0x0104 */
  FB_BOOLEAN DatabaseLoadingEnable; /* 0x0105 */
  FB_BOOLEAN AlphaBlendEnable; /* 0x0106 */
  FB_BOOLEAN ForceDoubleSided; /* 0x0107 */
  FB_BOOLEAN ForcePointFiltering; /* 0x0108 */
  FB_BOOLEAN ZeroViewportEnable; /* 0x0109 */
  FB_BOOLEAN DepthEnable; /* 0x010A */
  FB_BOOLEAN DepthWriteEnable; /* 0x010B */
  FB_BOOLEAN DepthTestEnable; /* 0x010C */
  FB_BOOLEAN StencilEnable; /* 0x010D */
  FB_BOOLEAN ClipPlanesEnable; /* 0x010E */
  FB_BOOLEAN SinglePrimitiveEnable; /* 0x010F */
  FB_BOOLEAN DrawCallEnable; /* 0x0110 */
  FB_BOOLEAN PixBlockEventsEnable; /* 0x0111 */
  FB_BOOLEAN ShaderPixScopeEnable; /* 0x0112 */
  FB_BOOLEAN GcmReplayMarkersEnable; /* 0x0113 */
  FB_BOOLEAN SortBlocksEnable; /* 0x0114 */
  FB_BOOLEAN SimpleTexturesEnable; /* 0x0115 */
  FB_BOOLEAN SimpleTextureFilteringEnable; /* 0x0116 */
  FB_BOOLEAN LogEnable; /* 0x0117 */
  FB_BOOLEAN SingleFrameBlockLogEnable; /* 0x0118 */
  FB_BOOLEAN ExternalConstantsEnable; /* 0x0119 */
  FB_BOOLEAN SimplePixelShaderEnable; /* 0x011A */
  FB_BOOLEAN SimpleVertexShaderEnable; /* 0x011B */
  FB_BOOLEAN PseudoInstancingEnable; /* 0x011C */
  FB_BOOLEAN StatesEnable; /* 0x011D */
  FB_BOOLEAN PixelConstantsEnable; /* 0x011E */
  FB_BOOLEAN VertexConstantsEnable; /* 0x011F */
  FB_BOOLEAN PixelConstantRedundancyCheckingEnable; /* 0x0120 */
  FB_BOOLEAN VertexConstantRedundancyCheckingEnable; /* 0x0121 */
  FB_BOOLEAN ModifiedViewProjectionEnable; /* 0x0122 */
  FB_BOOLEAN BoneConstantOptimizationEnable; /* 0x0123 */
  FB_BOOLEAN DispatchExecuteEnable; /* 0x0124 */
  FB_BOOLEAN DispatchSetupJobEnable; /* 0x0125 */
  FB_BOOLEAN DispatchPrepareBlockEnable; /* 0x0126 */
  FB_BOOLEAN MultisampleEnable; /* 0x0127 */
  FB_BOOLEAN ParallelShaderLoadingEnable; /* 0x0128 */
  FB_BOOLEAN DxTransparencySupersamplingEnable; /* 0x0129 */
  FB_BOOLEAN DxSamplerStatesEnable; /* 0x012A */
  FB_BOOLEAN DxBatchedSamplerStatesEnable; /* 0x012B */
  FB_BOOLEAN DxBatchedTexturesEnable; /* 0x012C */
  FB_BOOLEAN DxDispatchJobEnable; /* 0x012D */
  FB_BOOLEAN DxDispatchAsync; /* 0x012E */
  FB_BOOLEAN DxNullContextEnable; /* 0x012F */
  FB_BOOLEAN OrbisDispatchJobEnable; /* 0x0130 */
  FB_BOOLEAN OrbisDispatchAsyncEnable; /* 0x0131 */
  FB_BOOLEAN MantlePrimePipelinesEnable; /* 0x0132 */
  FB_BOOLEAN MantleDispatchJobEnable; /* 0x0133 */
  FB_BOOLEAN MantleDispatchAsyncEnable; /* 0x0134 */
  FB_BOOLEAN MantleReZEnable; /* 0x0135 */
  FB_BOOLEAN BalsaPrimePipelinesEnable; /* 0x0136 */
  FB_BOOLEAN BalsaDispatchJobEnable; /* 0x0137 */
  FB_BOOLEAN BalsaDispatchAsyncEnable; /* 0x0138 */
  FB_BOOLEAN Dx12PrimePipelinesEnable; /* 0x0139 */
  FB_BOOLEAN Dx12PrimePipelinesWaitJoinEnable; /* 0x013A */
  FB_BOOLEAN Dx12PipelineCachingEnable; /* 0x013B */
  char pad_013C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */
#pragma pack(pop)

static_assert(sizeof(ShaderSystemSettings) == 320);

}
