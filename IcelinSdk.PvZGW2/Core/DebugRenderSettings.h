#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832DB0
   RuntimeId:        00CE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FB2
   VfTable:          00000001421E5038
   Address (Base):   00000001430D11C0
*/
#pragma pack(push, 8)
class DebugRenderSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TextViewDistance; /* 0x0010 */
  FB_UINT32 TextQueueMaxLineCount; /* 0x0014 */
  FB_FLOAT32 TextQueueTimeVisible; /* 0x0018 */
  FB_INT32 ProcessJobCount; /* 0x001C */
  FB_UINT32 Ps3SpuFrameBufferSize; /* 0x0020 */
  FB_UINT32 DxMaxVertexCount; /* 0x0024 */
  FB_BOOLEAN Enable; /* 0x0028 */
  FB_BOOLEAN DrawStatsEnable; /* 0x0029 */
  FB_BOOLEAN TextQueueLocationTop; /* 0x002A */
  FB_BOOLEAN Ps3SpuEnable; /* 0x002B */
  FB_BOOLEAN DxLine2dAntialiasingEnable; /* 0x002C */
  FB_BOOLEAN DxLine3dAntialiasingEnable; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(DebugRenderSettings) == 48);

}
