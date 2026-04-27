#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>
#include <IcelinSdk.PvZGW2/Render/LocalPlayerViewId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856DD8
   RuntimeId:        195D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1137
   VfTable:          00000001422CB430
   Address (Base):   00000001430E8B60
*/
#pragma pack(push, 8)
class StateNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIViewBaseAsset) Screen; /* 0x0028 */
  FB_GUID ScreenPartitionGuid; /* 0x0030 */
  FB_HANDLE(class UINodePort) In; /* 0x0040 */
  FB_HANDLE(class UINodePort) Show; /* 0x0048 */
  FB_HANDLE(class UINodePort) Hide; /* 0x0050 */
  FB_REFARRAY(class UINodePort) Inputs; /* 0x0058 */
  FB_REFARRAY(class UINodePort) Outputs; /* 0x0060 */
  LocalPlayerViewId ViewId; /* 0x0068 */
  FB_BOOLEAN RenderToTexture; /* 0x006C */
  char pad_006D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(StateNode) == 112);

}
