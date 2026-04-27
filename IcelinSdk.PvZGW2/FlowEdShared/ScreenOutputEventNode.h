#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857078
   RuntimeId:        1987
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1120
   VfTable:          00000001422CB320
   Address (Base):   00000001430FAAB0
*/
#pragma pack(push, 8)
class ScreenOutputEventNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) Out; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ScreenOutputEventNode) == 48);

}
