#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832418
   RuntimeId:        0036
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F30
   VfTable:          00000001421E3230
   Address (Base):   00000001430DD190
*/
#pragma pack(push, 8)
class ATValueNode : public ATNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATValueNode) == 24);

}
