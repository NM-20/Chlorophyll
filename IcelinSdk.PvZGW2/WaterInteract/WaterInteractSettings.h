#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>
#include <IcelinSdk.PvZGW2/Core/QualityLevel.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableFloat.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876E78
   RuntimeId:        2E36
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11E2
   VfTable:          0000000142395A88
   Address (Base):   00000001430CF900
*/
#pragma pack(push, 8)
class WaterInteractSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 SimulationJobCount; /* 0x0020 */
  QualityLevel WaterQualityLevel; /* 0x0024 */
  FB_UINT32 MaxSimulationCount; /* 0x0028 */
  FB_UINT32 MaxLiveEditingSimulationCount; /* 0x002C */
  FB_FLOAT32 MaxGridScale; /* 0x0030 */
  FB_FLOAT32 MinGridScale; /* 0x0034 */
  FB_FLOAT32 InteractInjectNoiseStrength; /* 0x0038 */
  FB_FLOAT32 InteractMaxSlope; /* 0x003C */
  FB_FLOAT32 InteractUpdateFrequency; /* 0x0040 */
  FB_UINT32 MinAmbientSimulationResolution; /* 0x0044 */
  FB_UINT32 MaxAmbientSimulationResolution; /* 0x0048 */
  FB_UINT32 RenderGridWidth; /* 0x004C */
  FB_UINT32 RenderGridHeight; /* 0x0050 */
  FB_FLOAT32 RenderFixedAimDistance; /* 0x0054 */
  FB_FLOAT32 RenderProjectorFarPlane; /* 0x0058 */
  FB_UINT32 MaxVisibleWaterSurfaceCount; /* 0x005C */
  FB_UINT32 MaxLiveEditingVisibleWaterSurfaceCount; /* 0x0060 */
  QualityScalableFloat PcGridResolutionMultiplier; /* 0x0064 */
  FB_UINT32 RenderOcclusionCullJobCount; /* 0x0074 */
  FB_UINT32 RenderOcclusionGridWidth; /* 0x0078 */
  FB_UINT32 RenderOcclusionGridHeight; /* 0x007C */
  FB_INT32 VirtualHeightfieldAtlasSize; /* 0x0080 */
  FB_INT32 VirtualHeightfieldIndirectionSize; /* 0x0084 */
  FB_FLOAT32 VirtualHeightfieldQuantizationRange; /* 0x0088 */
  FB_BOOLEAN Enable; /* 0x008C */
  FB_BOOLEAN DrawEnable; /* 0x008D */
  FB_BOOLEAN EnableJobs; /* 0x008E */
  FB_BOOLEAN EnableSPUJobs; /* 0x008F */
  FB_BOOLEAN UsePS3CellMemoryBuffers; /* 0x0090 */
  FB_BOOLEAN EnableSimulation; /* 0x0091 */
  FB_BOOLEAN EnableDisturbs; /* 0x0092 */
  FB_BOOLEAN EnableLOD; /* 0x0093 */
  FB_BOOLEAN RenderOcclusionCullEnable; /* 0x0094 */
  FB_BOOLEAN RenderGenerateDisplacementMipmaps; /* 0x0095 */
  FB_BOOLEAN RenderGenerateGradientMipmaps; /* 0x0096 */
  FB_BOOLEAN RenderDebugEnable; /* 0x0097 */
  FB_BOOLEAN RenderDebugTexturesEnable; /* 0x0098 */
  FB_BOOLEAN RenderDebugFreezeViewEnable; /* 0x0099 */
  FB_BOOLEAN DrawGridEnable; /* 0x009A */
  FB_BOOLEAN DrawUpdateEnable; /* 0x009B */
  char pad_009C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(WaterInteractSettings) == 160);

}
