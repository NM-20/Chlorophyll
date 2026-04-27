#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/DxDisplaySettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852290
   RuntimeId:        1552
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11DD
   VfTable:          000000014228DE20
   Address (Base):   00000001430BFBF0
*/
#pragma pack(push, 8)
class Dx11DisplaySettings : public DxDisplaySettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN RefDriverEnable; /* 0x00A8 */
  FB_BOOLEAN DriverInternalThreadingEnable; /* 0x00A9 */
  FB_BOOLEAN GetDeviceRemovedReasonEnable; /* 0x00AA */
  FB_BOOLEAN MemoryPoolsEnable; /* 0x00AB */
  FB_BOOLEAN NvPerfHudEnable; /* 0x00AC */
  FB_BOOLEAN AnnotationInterfaceEnable; /* 0x00AD */
  FB_BOOLEAN AmdQuadsEnable; /* 0x00AE */
  FB_BOOLEAN DepthBoundsExtensionEnable; /* 0x00AF */
  FB_BOOLEAN AmdCrossfireControlDefaultSync; /* 0x00B0 */
  FB_BOOLEAN AmdCrossfireControlUseBroadcast; /* 0x00B1 */
  FB_BOOLEAN Dx11Dot1Enable; /* 0x00B2 */
  FB_BOOLEAN Dx11Dot1RuntimeEnable; /* 0x00B3 */
  FB_BOOLEAN AsyncCmdListExecutionEnable; /* 0x00B4 */
  FB_BOOLEAN EndFrameJobEnable; /* 0x00B5 */
  FB_BOOLEAN DepthStencilExtensionEnable; /* 0x00B6 */
  FB_BOOLEAN ForceRenderTargetInEsramTest; /* 0x00B7 */
  FB_BOOLEAN ReZEnable; /* 0x00B8 */
  char pad_00B9[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(Dx11DisplaySettings) == 192);

}
