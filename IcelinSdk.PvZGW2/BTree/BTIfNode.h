#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTNodeDataWithChildren.h>

namespace fb
{

/* TypeInfo (Array): 00000001428342D8
   RuntimeId:        01B5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          128A
   VfTable:          00000001421EB648
   Address (Base):   0000000143100F90
*/
#pragma pack(push, 8)
class BTIfNode : public BTNodeDataWithChildren
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BTEvalFunc) Eval; /* 0x0020 */
  FB_BOOLEAN EvalOnResume; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BTIfNode) == 48);

}
