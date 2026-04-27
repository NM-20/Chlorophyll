#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856F58
   RuntimeId:        1975
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1126
   VfTable:          00000001422CB3A0
   Address (Base):   00000001430FAD50
*/
#pragma pack(push, 8)
class MovieNavigationNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) In; /* 0x0028 */
  FB_HANDLE(class UINodePort) Out; /* 0x0030 */
  FB_CSTRING MovieClipPath; /* 0x0038 */
  FB_CSTRING FrameLabel; /* 0x0040 */
  FB_UINT32 Frame; /* 0x0048 */
  FB_BOOLEAN UseLabel; /* 0x004C */
  FB_BOOLEAN Play; /* 0x004D */
  char pad_004E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(MovieNavigationNode) == 80);

}
