#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F3F8
   RuntimeId:        1D83
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1050
   VfTable:          000000014231DA58
   Address (Base):   000000014310AC50
*/
#pragma pack(push, 8)
class IsMeleeDefending : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(IsMeleeDefending) == 16);

}
