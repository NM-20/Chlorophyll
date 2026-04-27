#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/WidgetVerticalAlignment.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/WidgetHorisontalAlignment.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856E38
   RuntimeId:        1963
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          112F
   VfTable:          00000001422CB410
   Address (Base):   00000001430FB050
*/
#pragma pack(push, 8)
class WidgetNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIWidgetAsset) WidgetAsset; /* 0x0028 */
  FB_INT32 FocusIndex; /* 0x0030 */
  WidgetVerticalAlignment VerticalAlign; /* 0x0034 */
  WidgetHorisontalAlignment HorisontalAlign; /* 0x0038 */
  FB_INT32 ZDepthLevel; /* 0x003C */
  FB_HANDLE(class UIDataBinding) DataBinding; /* 0x0040 */
  FB_CSTRING InstanceName; /* 0x0048 */
  FB_STDARRAY(struct UIWidgetProperty) WidgetProperties; /* 0x0050 */
  FB_REFARRAY(class UINodePort) Outputs; /* 0x0058 */
  FB_REFARRAY(class UINodePort) Inputs; /* 0x0060 */
  FB_BOOLEAN AlwaysInFocus; /* 0x0068 */
  FB_BOOLEAN IsDisabled; /* 0x0069 */
  char pad_006A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(WidgetNode) == 112);

}
