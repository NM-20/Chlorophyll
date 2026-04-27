#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857128
   RuntimeId:        1991
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          112E
   VfTable:          00000001422CB2C0
   Address (Base):   00000001430FA9F0
*/
#pragma pack(push, 8)
class JumpNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) In; /* 0x0028 */
  FB_HANDLE(class UINodeData) TargetNode; /* 0x0030 */
  FB_HANDLE(class UINodePort) TargetPort; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(JumpNode) == 64);

}
