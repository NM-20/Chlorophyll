#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F418
   RuntimeId:        1D85
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1060
   VfTable:          000000014231DA38
   Address (Base):   000000014310ABF0
*/
#pragma pack(push, 8)
class IsMeleeEscaping : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(IsMeleeEscaping) == 16);

}
