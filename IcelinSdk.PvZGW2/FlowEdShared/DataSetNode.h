#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/DataSetParamType.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UISimpleDataSource.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856E98
   RuntimeId:        1969
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1127
   VfTable:          00000001422CB3F0
   Address (Base):   00000001430FAF90
*/
#pragma pack(push, 8)
class DataSetNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) In; /* 0x0028 */
  FB_HANDLE(class UINodePort) Out; /* 0x0030 */
  FB_CSTRING Param; /* 0x0038 */
  DataSetParamType ParamType; /* 0x0040 */
  char pad_0044[0x0004];
  UISimpleDataSource DataSource; /* 0x0048 */
  FB_BOOLEAN SetToEmptyString; /* 0x0058 */
  FB_BOOLEAN ForceUpdate; /* 0x0059 */
  char pad_005A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(DataSetNode) == 96);

}
