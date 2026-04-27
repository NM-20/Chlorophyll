#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AbstractSelectable.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865878
   RuntimeId:        22FD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EBB
   VfTable:          0000000142351168
   Address (Base):   00000001430E5DA0
*/
#pragma pack(push, 8)
class SelectableUnlock : public AbstractSelectable
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 UnlockIdentifier; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SelectableUnlock) == 40);

}
