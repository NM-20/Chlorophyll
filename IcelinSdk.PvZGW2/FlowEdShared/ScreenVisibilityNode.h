#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857148
   RuntimeId:        1993
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          112D
   VfTable:          00000001422CB2D0
   Address (Base):   00000001430FA990
*/
#pragma pack(push, 8)
class ScreenVisibilityNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) In; /* 0x0028 */
  FB_HANDLE(class UINodePort) Out; /* 0x0030 */
  FB_REFARRAY(class UIViewBaseAsset) Screens; /* 0x0038 */
  FB_BOOLEAN Visible; /* 0x0040 */
  FB_BOOLEAN AllScreens; /* 0x0041 */
  char pad_0042[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ScreenVisibilityNode) == 72);

}
