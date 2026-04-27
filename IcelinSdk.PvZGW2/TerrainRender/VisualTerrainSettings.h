#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/QualityLevel.h>
#include <IcelinSdk.PvZGW2/TerrainRender/TerrainRenderMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854758
   RuntimeId:        175D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E0A
   VfTable:          00000001422B2E08
   Address (Base):   00000001430D0560
*/
#pragma pack(push, 8)
class VisualTerrainSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  QualityLevel MeshScatteringQualityLevel; /* 0x0010 */
  TerrainRenderMode RenderMode; /* 0x0014 */
  FB_FLOAT32 TriangleSizeMin; /* 0x0018 */
  FB_FLOAT32 LodScale; /* 0x001C */
  FB_FLOAT32 LodCenterExtrapolationDistanceMax; /* 0x0020 */
  FB_FLOAT32 LodCenterExtrapolationTime; /* 0x0024 */
  FB_FLOAT32 TextureSkipMipSpeed; /* 0x0028 */
  FB_FLOAT32 TessellationPatchShrink; /* 0x002C */
  FB_UINT32 TessellationPatchFacesPerSide; /* 0x0030 */
  FB_FLOAT32 TessellatedTriWidth; /* 0x0034 */
  FB_FLOAT32 TessellatedTriWidthScaleForReflections; /* 0x0038 */
  FB_FLOAT32 TessellatedTriWidthScaleForShadows; /* 0x003C */
  FB_UINT32 TextureAtlasSampleCountXFactor; /* 0x0040 */
  FB_UINT32 TextureAtlasSampleCountYFactor; /* 0x0044 */
  FB_FLOAT32 TextureSamplesPerMeterMax; /* 0x0048 */
  FB_FLOAT32 TextureDetailFalloffFactor; /* 0x004C */
  FB_FLOAT32 TextureDetailFalloffDistance; /* 0x0050 */
  FB_FLOAT32 TextureDetailFalloffCurve; /* 0x0054 */
  FB_FLOAT32 TextureInvisibleDetailReductionFactor; /* 0x0058 */
  FB_FLOAT32 TextureOccludedDetailReductionFactor; /* 0x005C */
  FB_UINT32 TextureRenderJobCount; /* 0x0060 */
  FB_UINT32 TextureRenderJobsLaunchedPerFrameCountMax; /* 0x0064 */
  FB_UINT32 TextureTileSamplesPerSide; /* 0x0068 */
  FB_UINT32 TextureTileBorderWidth; /* 0x006C */
  FB_INT32 TextureLevelOffset; /* 0x0070 */
  FB_UINT32 TextureClodFrameCount; /* 0x0074 */
  FB_FLOAT32 TextureClodCutoffPriority; /* 0x0078 */
  FB_UINT32 TextureStreamableTextureInstanceBufferSize; /* 0x007C */
  FB_UINT32 TextureCompressJobCount; /* 0x0080 */
  FB_INT32 TextureCompressionQuality; /* 0x0084 */
  FB_FLOAT32 TextureDetailSlopeBoost; /* 0x0088 */
  FB_FLOAT32 TextureGenerationMipBias; /* 0x008C */
  FB_FLOAT32 TextureDirtyRetryRate; /* 0x0090 */
  FB_INT32 TextureForceDrawPass; /* 0x0094 */
  FB_UINT32 TextureQuadsPerTileLevel; /* 0x0098 */
  FB_FLOAT32 DecalZPassDrawDistance; /* 0x009C */
  FB_FLOAT32 DecalOffsetY; /* 0x00A0 */
  FB_FLOAT32 Decal3dFarDrawDistanceScaleFactor; /* 0x00A4 */
  FB_INT32 DrawQuadtreeZoomIndex; /* 0x00A8 */
  FB_FLOAT32 PatchErrorFov; /* 0x00AC */
  FB_FLOAT32 ZPassDistance; /* 0x00B0 */
  FB_FLOAT32 DebugOverlayGridSize; /* 0x00B4 */
  FB_FLOAT32 DebugOverlayIsolineSpacing; /* 0x00B8 */
  FB_UINT32 SlotReuseWaitCount; /* 0x00BC */
  FB_UINT32 BuildJobCount; /* 0x00C0 */
  FB_FLOAT32 DynamicMaskDecalWidthScale; /* 0x00C4 */
  FB_UINT32 MaxNonVisibleTextureUpdateCount; /* 0x00C8 */
  FB_UINT32 PatchFacesPerSide; /* 0x00CC */
  FB_UINT32 TessellationFacesPerSideMin; /* 0x00D0 */
  FB_UINT32 PatchSlotCount; /* 0x00D4 */
  FB_UINT32 OccluderJobCount; /* 0x00D8 */
  FB_UINT32 OccluderPatchFacesPerSide; /* 0x00DC */
  FB_FLOAT32 OccluderLodScale; /* 0x00E0 */
  FB_FLOAT32 OccludedMinDistance; /* 0x00E4 */
  FB_UINT32 MeshScatteringCellPoolCapacity; /* 0x00E8 */
  FB_UINT32 MeshScatteringTreeNodePoolCapacity; /* 0x00EC */
  FB_FLOAT32 MeshScatteringInvisibleCellFovFactor; /* 0x00F0 */
  FB_UINT32 MeshScatteringCullRecordCount; /* 0x00F4 */
  FB_UINT32 MeshScatteringBuildChannelCount; /* 0x00F8 */
  FB_UINT32 MeshScatteringBuildChannelsLaunchedPerFrameCountMax; /* 0x00FC */
  FB_UINT32 MeshScatteringClodFrameCount; /* 0x0100 */
  FB_FLOAT32 MeshScatteringWindSpeed; /* 0x0104 */
  FB_UINT32 MeshScatteringInstancesPerCellMax; /* 0x0108 */
  FB_FLOAT32 MeshScatteringDensityMarginFactor; /* 0x010C */
  FB_FLOAT32 MeshScatteringPregenerationDistanceRatio; /* 0x0110 */
  FB_FLOAT32 MeshScatteringKeepDistanceRatio; /* 0x0114 */
  FB_INT32 MeshScatteringVirtualTextureBlurriness; /* 0x0118 */
  FB_FLOAT32 MeshScatteringDistanceScaleFactor; /* 0x011C */
  FB_UINT32 MeshScatteringInstanceCullJobCount; /* 0x0120 */
  FB_UINT32 MeshScatteringInstanceCullListCount; /* 0x0124 */
  FB_FLOAT32 MeshScatteringSnappingGridMultiplierVertical; /* 0x0128 */
  FB_FLOAT32 MeshScatteringSnappingGridMultiplierHorizontal; /* 0x012C */
  QualityLevel DetailDisplacementQualityLevel; /* 0x0130 */
  FB_INT32 DrawDetailDisplacementTreeLevel; /* 0x0134 */
  FB_FLOAT32 DetailDisplacementMaxTessFactor; /* 0x0138 */
  FB_FLOAT32 DetailDisplacementScale; /* 0x013C */
  FB_FLOAT32 DetailDisplacementBias; /* 0x0140 */
  FB_FLOAT32 DetailDisplacementDensity; /* 0x0144 */
  FB_FLOAT32 DetailDisplacementFadeRange; /* 0x0148 */
  FB_BOOLEAN WireframeEnable; /* 0x014C */
  FB_BOOLEAN Enable; /* 0x014D */
  FB_BOOLEAN EditServiceEnable; /* 0x014E */
  FB_BOOLEAN TessellationEnable; /* 0x014F */
  FB_BOOLEAN TessellationForReflectionsEnable; /* 0x0150 */
  FB_BOOLEAN TessellationForShadowsEnable; /* 0x0151 */
  FB_BOOLEAN DetailDisplacementForReflectionsEnable; /* 0x0152 */
  FB_BOOLEAN DetailDisplacementForShadowsEnable; /* 0x0153 */
  FB_BOOLEAN DensityMapEnable; /* 0x0154 */
  FB_BOOLEAN VertexBufferHeightsEnable; /* 0x0155 */
  FB_BOOLEAN DrawVertexYTextureEnable; /* 0x0156 */
  FB_BOOLEAN TextureVtIndirectionJobEnable; /* 0x0157 */
  FB_BOOLEAN TextureStreamingPrioritizationJobEnable; /* 0x0158 */
  FB_BOOLEAN TextureClodEnable; /* 0x0159 */
  FB_BOOLEAN TextureForceUpdateEnable; /* 0x015A */
  FB_BOOLEAN TextureCompressFastAlgorithmEnable; /* 0x015B */
  FB_BOOLEAN DrawTextureDebugColors; /* 0x015C */
  FB_BOOLEAN TextureDrawTerrainLayersEnable; /* 0x015D */
  FB_BOOLEAN TextureKeepPoolFullEnable; /* 0x015E */
  FB_BOOLEAN TextureLayerCullingEnable; /* 0x015F */
  FB_BOOLEAN GpuTextureCompressionEnable; /* 0x0160 */
  FB_BOOLEAN TextureStreamingPrioritizationEnable; /* 0x0161 */
  FB_BOOLEAN DetailTextureStreamingPrioritizationEnable; /* 0x0162 */
  FB_BOOLEAN MeshScatteringMeshStreamingPrioritizationEnable; /* 0x0163 */
  FB_BOOLEAN PrioritizationOcclusionEnable; /* 0x0164 */
  FB_BOOLEAN DrawEnable; /* 0x0165 */
  FB_BOOLEAN DrawPatchesEnable; /* 0x0166 */
  FB_BOOLEAN DetailOverlayEnable; /* 0x0167 */
  FB_BOOLEAN PatchInstancingEnable; /* 0x0168 */
  FB_BOOLEAN DrawInstancingStats; /* 0x0169 */
  FB_BOOLEAN DecalEnable; /* 0x016A */
  FB_BOOLEAN ForceDecalReducedQuality; /* 0x016B */
  FB_BOOLEAN DrawDecal2dEnable; /* 0x016C */
  FB_BOOLEAN DrawDecal3dEnable; /* 0x016D */
  FB_BOOLEAN DrawDecalZPassEnable; /* 0x016E */
  FB_BOOLEAN DrawOnlyDecalZPassEnable; /* 0x016F */
  FB_BOOLEAN DrawPatchBoxesEnable; /* 0x0170 */
  FB_BOOLEAN DrawBadPatchesEnable; /* 0x0171 */
  FB_BOOLEAN DrawTextureTileBoxesEnable; /* 0x0172 */
  FB_BOOLEAN DrawDebugTextEnable; /* 0x0173 */
  FB_BOOLEAN DrawDebugTexturesEnable; /* 0x0174 */
  FB_BOOLEAN DrawQuadtreesEnable; /* 0x0175 */
  FB_BOOLEAN DrawQuadtreeStatsEnable; /* 0x0176 */
  FB_BOOLEAN DrawQuadtreeAtlasTexturesEnable; /* 0x0177 */
  FB_BOOLEAN DrawDynamicMask; /* 0x0178 */
  FB_BOOLEAN DrawWaterEnable; /* 0x0179 */
  FB_BOOLEAN PatchErrorFovEnable; /* 0x017A */
  FB_BOOLEAN DebugOverlayGridEnable; /* 0x017B */
  FB_BOOLEAN DebugOverlayIsolinesEnable; /* 0x017C */
  FB_BOOLEAN DebugOverlayWireframeEnable; /* 0x017D */
  FB_BOOLEAN DebugOverlaySketchTextureEnable; /* 0x017E */
  FB_BOOLEAN DebugOverlayBrushEnable; /* 0x017F */
  FB_BOOLEAN ForceGraphicsDriverCrash; /* 0x0180 */
  FB_BOOLEAN ForcePatchRebuildEnable; /* 0x0181 */
  FB_BOOLEAN DestroyAll; /* 0x0182 */
  FB_BOOLEAN SlotDebugOutputEnable; /* 0x0183 */
  FB_BOOLEAN UpdateJobsEnable; /* 0x0184 */
  FB_BOOLEAN RegenerateTexturesEnable; /* 0x0185 */
  FB_BOOLEAN DynamicMaskEnable; /* 0x0186 */
  FB_BOOLEAN PatchLodTransitionsEnable; /* 0x0187 */
  FB_BOOLEAN PatchMaterialSortingEnable; /* 0x0188 */
  FB_BOOLEAN CullSampleBoundingBoxHeightEnable; /* 0x0189 */
  FB_BOOLEAN CastShadowsEnable; /* 0x018A */
  FB_BOOLEAN CastPlanarReflectionEnable; /* 0x018B */
  FB_BOOLEAN CastEnvmapReflectionEnable; /* 0x018C */
  FB_BOOLEAN CastDecal3dPlanarReflectionEnable; /* 0x018D */
  FB_BOOLEAN CastDecal3dEnvmapReflectionEnable; /* 0x018E */
  FB_BOOLEAN DetailDisplacementInShadowViewEnable; /* 0x018F */
  FB_BOOLEAN GlobalColormapEnable; /* 0x0190 */
  FB_BOOLEAN OccluderEnable; /* 0x0191 */
  FB_BOOLEAN OccluderJobEnable; /* 0x0192 */
  FB_BOOLEAN OccluderBackFaceCullingEnable; /* 0x0193 */
  FB_BOOLEAN OccludedEnable; /* 0x0194 */
  FB_BOOLEAN MeshScatteringEnable; /* 0x0195 */
  FB_BOOLEAN MeshScatteringJobsEnable; /* 0x0196 */
  FB_BOOLEAN MeshScatteringCastShadowsEnable; /* 0x0197 */
  FB_BOOLEAN DrawMeshScatteringEnable; /* 0x0198 */
  FB_BOOLEAN DrawMeshScatteringCellBoxesEnable; /* 0x0199 */
  FB_BOOLEAN DrawMeshScatteringBatchBoxesEnable; /* 0x019A */
  FB_BOOLEAN DrawMeshScatteringNodeBoxesEnable; /* 0x019B */
  FB_BOOLEAN DrawMeshScatteringCulledCellBoxesEnable; /* 0x019C */
  FB_BOOLEAN DrawMeshScatteringDebugMaskScaleTexturesEnable; /* 0x019D */
  FB_BOOLEAN DrawMeshScatteringStatsEnable; /* 0x019E */
  FB_BOOLEAN DrawMeshScatteringQuadtreeEnable; /* 0x019F */
  FB_BOOLEAN MeshScatteringForceUpdateEnable; /* 0x01A0 */
  FB_BOOLEAN MeshScatteringBuildVisibleFirst; /* 0x01A1 */
  FB_BOOLEAN MeshScatteringMergeInstanceLists; /* 0x01A2 */
  FB_BOOLEAN MeshScatteringInstanceCullBoxTestEnable; /* 0x01A3 */
  FB_BOOLEAN MeshScatteringInstanceNewCodeEnable; /* 0x01A4 */
  FB_BOOLEAN MeshScatteringInstanceFrustumCullEnable; /* 0x01A5 */
  FB_BOOLEAN MeshScatteringInstanceOcclusionCullEnable; /* 0x01A6 */
  FB_BOOLEAN MeshScatteringInstanceAdditionalCullEnable; /* 0x01A7 */
  FB_BOOLEAN DrawMeshScatteringInstanceBoxesEnable; /* 0x01A8 */
  FB_BOOLEAN MeshScatteringInstanceCullDynamicAllocEnable; /* 0x01A9 */
  FB_BOOLEAN MeshScatteringWindEnable; /* 0x01AA */
  FB_BOOLEAN MeshScatteringDrawMotionVectorsEnable; /* 0x01AB */
  FB_BOOLEAN DetailDisplacementEnable; /* 0x01AC */
  FB_BOOLEAN DrawDetailDisplacementEnable; /* 0x01AD */
  FB_BOOLEAN DrawDebugDetailDisplacementEnable; /* 0x01AE */
  char pad_01AF[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01B0 */
#pragma pack(pop)

static_assert(sizeof(VisualTerrainSettings) == 432);

}
