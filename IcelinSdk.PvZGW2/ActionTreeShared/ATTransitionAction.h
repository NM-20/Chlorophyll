#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATActionNode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428321F8
   RuntimeId:        0014
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F28
   VfTable:          00000001421E3380
   Address (Base):   000000014311DD30
*/
#pragma pack(push, 8)
class ATTransitionAction : public ATActionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TransitionTime; /* 0x0028 */
  char pad_002C[0x0004];
  FB_HANDLE(class ATBranchReference) Branch; /* 0x0030 */
  FB_HANDLE(class ATConditionInput) If; /* 0x0038 */
  FB_BOOLEAN NextSibling; /* 0x0040 */
  char pad_0041[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ATTransitionAction) == 72);

}
