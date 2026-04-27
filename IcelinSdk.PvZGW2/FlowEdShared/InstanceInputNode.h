#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857018
   RuntimeId:        1981
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1124
   VfTable:          00000001422CB350
   Address (Base):   00000001430DA9D0
*/
#pragma pack(push, 8)
class InstanceInputNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) Out; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(InstanceInputNode) == 48);

}
