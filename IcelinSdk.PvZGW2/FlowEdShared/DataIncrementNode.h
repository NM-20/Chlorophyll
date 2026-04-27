#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UISimpleDataSource.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856ED8
   RuntimeId:        196D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1130
   VfTable:          00000001422CB3B0
   Address (Base):   00000001430FAED0
*/
#pragma pack(push, 8)
class DataIncrementNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) In; /* 0x0028 */
  FB_HANDLE(class UINodePort) Out; /* 0x0030 */
  FB_FLOAT32 Max; /* 0x0038 */
  FB_FLOAT32 Min; /* 0x003C */
  FB_FLOAT32 IncrementSize; /* 0x0040 */
  char pad_0044[0x0004];
  UISimpleDataSource DataSource; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(DataIncrementNode) == 88);

}
