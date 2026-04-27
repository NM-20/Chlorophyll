#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodePort.h>
#include <IcelinSdk.PvZGW2/UI/UIInputAction.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856C28
   RuntimeId:        1945
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          111E
   VfTable:          00000001422CB4D8
   Address (Base):   00000001430FB0B0
*/
#pragma pack(push, 8)
class UIInputEventNodePort : public UINodePort
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UIInputAction InputEventType; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIInputEventNodePort) == 48);

}
