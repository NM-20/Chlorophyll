#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832458
   RuntimeId:        003A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F40
   VfTable:          00000001421E3200
   Address (Base):   00000001430D1280
*/
#pragma pack(push, 8)
class ATCommandNode : public ATNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATCommandNode) == 24);

}
