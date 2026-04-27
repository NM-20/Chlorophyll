#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UISimpleDataSource.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856EF8
   RuntimeId:        196F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          112C
   VfTable:          00000001422CB3C0
   Address (Base):   00000001430FAE70
*/
#pragma pack(push, 8)
class DataStepNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) In; /* 0x0028 */
  FB_HANDLE(class UINodePort) Out; /* 0x0030 */
  FB_STDARRAY(FB_FLOAT32) Steps; /* 0x0038 */
  UISimpleDataSource CurrentStepDataSource; /* 0x0040 */
  UISimpleDataSource DataSource; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(DataStepNode) == 96);

}
