#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/TreeBase.h>

namespace fb
{

/* TypeInfo (Array): 00000001428657F8
   RuntimeId:        22F5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0783
   VfTable:          00000001423510A0
   Address (Base):   0000000143107F50
*/
#pragma pack(push, 8)
class SelectionSetTree : public TreeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SelectionSetTreeNodeBase) SelectionSets; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SelectionSetTree) == 32);

}
