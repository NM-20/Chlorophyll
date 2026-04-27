#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852310
   RuntimeId:        155A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11D8
   VfTable:          000000014228DDE0
   Address (Base):   00000001430DB390
*/
#pragma pack(push, 8)
class BaseDisplaySettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 FullscreenHeight; /* 0x0020 */
  FB_UINT32 FullscreenWidth; /* 0x0024 */
  FB_FLOAT32 FullscreenRefreshRate; /* 0x0028 */
  FB_INT32 FullscreenOutputIndex; /* 0x002C */
  FB_INT32 PresentInterval; /* 0x0030 */
  FB_UINT32 PresentImmediateThreshold; /* 0x0034 */
  FB_INT32 RenderAheadLimit; /* 0x0038 */
  FB_FLOAT32 GpuTimeoutTime; /* 0x003C */
  FB_UINT32 FrameResourceSegmentSize; /* 0x0040 */
  FB_UINT32 FrameResourceNonSegmentSize; /* 0x0044 */
  FB_UINT32 FrameResourceFreeFrameCount; /* 0x0048 */
  FB_FLOAT32 FrameResourceFreeFactor; /* 0x004C */
  FB_FLOAT32 StereoDepth; /* 0x0050 */
  FB_FLOAT32 StereoConvergenceScale; /* 0x0054 */
  FB_FLOAT32 StereoSeparationScale; /* 0x0058 */
  FB_FLOAT32 StereoSoldierZoomConvergenceScale; /* 0x005C */
  FB_BOOLEAN NullDriverEnable; /* 0x0060 */
  FB_BOOLEAN CreateMinimalWindow; /* 0x0061 */
  FB_BOOLEAN FullscreenModeEnable; /* 0x0062 */
  FB_BOOLEAN Fullscreen; /* 0x0063 */
  FB_BOOLEAN PresentEnable; /* 0x0064 */
  FB_BOOLEAN WindowBordersEnable; /* 0x0065 */
  FB_BOOLEAN VSyncEnable; /* 0x0066 */
  FB_BOOLEAN TripleBufferingEnable; /* 0x0067 */
  FB_BOOLEAN AutomaticComputeSyncEnable; /* 0x0068 */
  FB_BOOLEAN FrameResourceFreeEnable; /* 0x0069 */
  FB_BOOLEAN StereoEnable; /* 0x006A */
  FB_BOOLEAN StereoSplitScreenEnable; /* 0x006B */
  FB_BOOLEAN StereoVrEnable; /* 0x006C */
  char pad_006D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(BaseDisplaySettings) == 112);

}
