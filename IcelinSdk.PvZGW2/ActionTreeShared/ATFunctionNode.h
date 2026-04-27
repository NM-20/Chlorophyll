#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATValueNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832438
   RuntimeId:        0038
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F33
   VfTable:          00000001421E3218
   Address (Base):   00000001430BCAA0
*/
#pragma pack(push, 8)
class ATFunctionNode : public ATValueNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATFunctionNode) == 24);

}
