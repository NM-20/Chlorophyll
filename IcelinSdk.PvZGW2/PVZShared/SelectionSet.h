#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/SelectionSetTreeNodeBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865818
   RuntimeId:        22F7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EBE
   VfTable:          00000001423510B0
   Address (Base):   00000001430BEDD0
*/
#pragma pack(push, 8)
class SelectionSet : public SelectionSetTreeNodeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SelectionSetTreeNodeBase) ChildNodes; /* 0x0018 */
  FB_CSTRING SelectionSetTitle; /* 0x0020 */
  FB_UINT32 Identifier; /* 0x0028 */
  FB_UINT32 HasSubsets; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SelectionSet) == 48);

}
