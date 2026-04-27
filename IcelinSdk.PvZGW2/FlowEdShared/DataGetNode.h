#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UISimpleDataSource.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIWidgetEventID.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856E58
   RuntimeId:        1965
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1134
   VfTable:          00000001422CB3E0
   Address (Base):   00000001430FAFF0
*/
#pragma pack(push, 8)
class DataGetNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) In; /* 0x0028 */
  FB_HANDLE(class UINodePort) Out; /* 0x0030 */
  UISimpleDataSource DataSource; /* 0x0038 */
  UIWidgetEventID WidgetEvent; /* 0x0048 */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(DataGetNode) == 80);

}
