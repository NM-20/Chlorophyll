#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EE78
   RuntimeId:        1D2B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1022
   VfTable:          000000014231DFD8
   Address (Base):   000000014310BCD0
*/
#pragma pack(push, 8)
class HasActiveShield : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(HasActiveShield) == 16);

}
