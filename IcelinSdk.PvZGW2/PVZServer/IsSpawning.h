#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F4D8
   RuntimeId:        1D91
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1052
   VfTable:          000000014231DAF8
   Address (Base):   000000014310A9B0
*/
#pragma pack(push, 8)
class IsSpawning : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(IsSpawning) == 16);

}
