#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428570E8
   RuntimeId:        198D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1136
   VfTable:          00000001422CB2F0
   Address (Base):   000000014310D170
*/
#pragma pack(push, 8)
class GlobalNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class UINodePort) Outputs; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(GlobalNode) == 48);

}
