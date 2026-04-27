#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856FD8
   RuntimeId:        197D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          112A
   VfTable:          00000001422CB330
   Address (Base):   00000001430FABD0
*/
#pragma pack(push, 8)
class ActionNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 ActionKey; /* 0x0028 */
  char pad_002C[0x0004];
  FB_STDARRAY(FB_CSTRING) Params; /* 0x0030 */
  FB_HANDLE(class Asset) ActionAsset; /* 0x0038 */
  FB_HANDLE(class UINodePort) In; /* 0x0040 */
  FB_REFARRAY(class UINodePort) DataInputs; /* 0x0048 */
  FB_HANDLE(class UINodePort) Out; /* 0x0050 */
  FB_BOOLEAN AppendIncomingParams; /* 0x0058 */
  char pad_0059[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(ActionNode) == 96);

}
