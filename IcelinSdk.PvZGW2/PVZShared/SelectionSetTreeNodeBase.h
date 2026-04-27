#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/TreeNodeBase.h>

namespace fb
{

/* TypeInfo (Array): 00000001428657D8
   RuntimeId:        22F3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EB8
   VfTable:          00000001423510C0
   Address (Base):   00000001430E7DE0
*/
#pragma pack(push, 8)
class SelectionSetTreeNodeBase : public TreeNodeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SelectionSetTreeNodeBase) == 24);

}
