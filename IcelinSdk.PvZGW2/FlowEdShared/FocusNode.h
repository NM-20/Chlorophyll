#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857098
   RuntimeId:        1989
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1135
   VfTable:          00000001422CB2E0
   Address (Base):   00000001430FAA50
*/
#pragma pack(push, 8)
class FocusNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodePort) In; /* 0x0028 */
  FB_HANDLE(class UINodePort) Out; /* 0x0030 */
  FB_INT32 FocusIndex; /* 0x0038 */
  FB_BOOLEAN RemoveFocus; /* 0x003C */
  char pad_003D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(FocusNode) == 64);

}
