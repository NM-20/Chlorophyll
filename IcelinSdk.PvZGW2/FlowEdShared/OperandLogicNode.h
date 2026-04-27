#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UISimpleDataSource.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UILogicOperator.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856FB8
   RuntimeId:        197B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1125
   VfTable:          00000001422CB380
   Address (Base):   00000001430FAC30
*/
#pragma pack(push, 8)
class OperandLogicNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UISimpleDataSource LeftDataSourceInfo; /* 0x0028 */
  UILogicOperator Operator; /* 0x0038 */
  char pad_003C[0x0004];
  UISimpleDataSource RightDataSourceInfo; /* 0x0040 */
  FB_FLOAT64 RightLiteralOperand; /* 0x0050 */
  FB_HANDLE(class UINodePort) In; /* 0x0058 */
  FB_HANDLE(class UINodePort) True; /* 0x0060 */
  FB_HANDLE(class UINodePort) False; /* 0x0068 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(OperandLogicNode) == 112);

}
