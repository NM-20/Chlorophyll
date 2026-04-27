#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/SelectionSetTreeNodeBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865838
   RuntimeId:        22F9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EB9
   VfTable:          0000000142351178
   Address (Base):   00000001430D4990
*/
#pragma pack(push, 8)
class AbstractSelectable : public SelectionSetTreeNodeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING SelectionKey; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AbstractSelectable) == 32);

}
