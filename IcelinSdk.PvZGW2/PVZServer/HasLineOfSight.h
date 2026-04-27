#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EE58
   RuntimeId:        1D29
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1033
   VfTable:          000000014231DFF8
   Address (Base):   000000014310BD30
*/
#pragma pack(push, 8)
class HasLineOfSight : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(HasLineOfSight) == 16);

}
