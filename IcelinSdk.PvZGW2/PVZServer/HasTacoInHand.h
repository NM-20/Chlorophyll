#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285ED98
   RuntimeId:        1D1D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          101A
   VfTable:          000000014231E238
   Address (Base):   000000014310BF70
*/
#pragma pack(push, 8)
class HasTacoInHand : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(HasTacoInHand) == 16);

}
