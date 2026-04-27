#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIViewAsset.h>
#include <IcelinSdk.PvZGW2/GameShared/UIScreenRenderingPass.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857188
   RuntimeId:        1997
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0824
   VfTable:          00000001422CB2A0
   Address (Base):   000000014310D110
*/
#pragma pack(push, 8)
class UIFlowCppScreenData : public UIViewAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UIScreenRenderingPass RenderPass; /* 0x0058 */
  char pad_005C[0x0004];
  FB_HANDLE(class UICppScreenData) ScreenData; /* 0x0060 */
  FB_HANDLE(class UIWidgetBlueprint) RootWidget; /* 0x0068 */
  FB_BOOLEAN RenderTarget; /* 0x0070 */
  char pad_0071[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(UIFlowCppScreenData) == 120);

}
