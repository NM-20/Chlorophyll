#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UISimpleDataSource.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856F78
   RuntimeId:        1977
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1129
   VfTable:          00000001422CB360
   Address (Base):   00000001430FACF0
*/
#pragma pack(push, 8)
class BinaryLogicNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) In; /* 0x0028 */
  FB_HANDLE(class UINodePort) True; /* 0x0030 */
  FB_HANDLE(class UINodePort) False; /* 0x0038 */
  UISimpleDataSource DataSourceInfo; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(BinaryLogicNode) == 80);

}
