#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853A00
   RuntimeId:        16BA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0848
   VfTable:          00000001422A1290
   Address (Base):   00000001430DB1B0
*/
#pragma pack(push, 8)
class PerfOverlaySettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 DrawGraphMethod; /* 0x0010 */
  FB_FLOAT32 OverviewWarningGBufferMin; /* 0x0014 */
  FB_FLOAT32 OverviewWarningGBufferMax; /* 0x0018 */
  FB_FLOAT32 OverviewWarningLightingMin; /* 0x001C */
  FB_FLOAT32 OverviewWarningLightingMax; /* 0x0020 */
  FB_FLOAT32 OverviewWarningShadowsMin; /* 0x0024 */
  FB_FLOAT32 OverviewWarningShadowsMax; /* 0x0028 */
  FB_FLOAT32 OverviewWarningTranspMin; /* 0x002C */
  FB_FLOAT32 OverviewWarningTranspMax; /* 0x0030 */
  FB_FLOAT32 OverviewWarningGpuEmitterMin; /* 0x0034 */
  FB_FLOAT32 OverviewWarningGpuEmitterMax; /* 0x0038 */
  FB_FLOAT32 OverviewWarningOtherMin; /* 0x003C */
  FB_FLOAT32 OverviewWarningOtherMax; /* 0x0040 */
  FB_UINT32 DrawFpsMethod; /* 0x0044 */
  FB_FLOAT32 FcatWidth; /* 0x0048 */
  FB_UINT32 LegendDisplayFormat; /* 0x004C */
  FB_FLOAT32 FpsTimePeriod; /* 0x0050 */
  FB_INT32 FpsDisplayFormat; /* 0x0054 */
  FB_FLOAT32 FpsDisplayScale; /* 0x0058 */
  FB_INT32 FpsDisplayOffsetX; /* 0x005C */
  FB_INT32 FpsDisplayOffsetY; /* 0x0060 */
  FB_UINT32 FrameTimeSource; /* 0x0064 */
  FB_BOOLEAN Enable; /* 0x0068 */
  FB_BOOLEAN DrawGraph; /* 0x0069 */
  FB_BOOLEAN DrawCpuGraph; /* 0x006A */
  FB_BOOLEAN DrawGpuGraph; /* 0x006B */
  FB_BOOLEAN DrawFrameGraph; /* 0x006C */
  FB_BOOLEAN DrawOverview; /* 0x006D */
  FB_BOOLEAN DrawFps; /* 0x006E */
  FB_BOOLEAN DrawFcat; /* 0x006F */
  FB_UINT8 FpsDisplayAlpha; /* 0x0070 */
  FB_BOOLEAN TargetFpsIs60; /* 0x0071 */
  FB_BOOLEAN FrameFileLogEnable; /* 0x0072 */
  char pad_0073[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(PerfOverlaySettings) == 120);

}
