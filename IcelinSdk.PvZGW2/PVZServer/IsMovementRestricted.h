#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F158
   RuntimeId:        1D59
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          103E
   VfTable:          000000014231DCF8
   Address (Base):   000000014310B430
*/
#pragma pack(push, 8)
class IsMovementRestricted : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(IsMovementRestricted) == 16);

}
