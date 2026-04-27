#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/StateNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857108
   RuntimeId:        198F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1138
   VfTable:          00000001422CB2B0
   Address (Base):   00000001430E8AA0
*/
#pragma pack(push, 8)
class DialogNode : public StateNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING DialogTitle; /* 0x0070 */
  FB_CSTRING DialogText; /* 0x0078 */
  FB_STDARRAY(struct UIPopupButton) Buttons; /* 0x0080 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */
#pragma pack(pop)

static_assert(sizeof(DialogNode) == 136);

}
