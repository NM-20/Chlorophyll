#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATBranch.h>

namespace fb
{

/* TypeInfo (Array): 00000001428328E8
   RuntimeId:        0082
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F53
   VfTable:          00000001421E2FB8
   Address (Base):   00000001431012F0
*/
#pragma pack(push, 8)
class ATGroup : public ATBranch
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATConditionGraph) ConditionGraph; /* 0x0038 */
  FB_BOOLEAN DirectQueriesOnly; /* 0x0040 */
  char pad_0041[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ATGroup) == 72);

}
