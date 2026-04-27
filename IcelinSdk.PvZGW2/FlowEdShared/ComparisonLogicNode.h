#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UISimpleDataSource.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856F98
   RuntimeId:        1979
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1128
   VfTable:          00000001422CB370
   Address (Base):   00000001430FAC90
*/
#pragma pack(push, 8)
class ComparisonLogicNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) In; /* 0x0028 */
  FB_REFARRAY(class UINodePort) Outputs; /* 0x0030 */
  UISimpleDataSource DataSourceInfo; /* 0x0038 */
  FB_BOOLEAN SkipFractionals; /* 0x0048 */
  char pad_0049[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ComparisonLogicNode) == 80);

}
