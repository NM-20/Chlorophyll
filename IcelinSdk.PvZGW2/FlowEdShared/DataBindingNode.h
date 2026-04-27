#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIWidgetEventID.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856F38
   RuntimeId:        1973
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1131
   VfTable:          00000001422CB390
   Address (Base):   00000001430FADB0
*/
#pragma pack(push, 8)
class DataBindingNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) In; /* 0x0028 */
  FB_HANDLE(class UINodePort) Out; /* 0x0030 */
  FB_HANDLE(class UIDataBinding) DataBinding; /* 0x0038 */
  UIWidgetEventID WidgetEvent; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(DataBindingNode) == 72);

}
