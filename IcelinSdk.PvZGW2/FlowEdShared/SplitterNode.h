#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857168
   RuntimeId:        1995
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1122
   VfTable:          00000001422CB290
   Address (Base):   00000001430FA930
*/
#pragma pack(push, 8)
class SplitterNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) In; /* 0x0028 */
  FB_REFARRAY(class UINodePort) Outputs; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SplitterNode) == 56);

}
