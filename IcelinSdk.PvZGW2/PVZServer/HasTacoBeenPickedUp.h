#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EDB8
   RuntimeId:        1D1F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1039
   VfTable:          000000014231E218
   Address (Base):   000000014310BF10
*/
#pragma pack(push, 8)
class HasTacoBeenPickedUp : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN ByMyTeam; /* 0x0010 */
  FB_BOOLEAN ByEnemyTeam; /* 0x0011 */
  char pad_0012[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(HasTacoBeenPickedUp) == 24);

}
