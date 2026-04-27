#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F598
   RuntimeId:        1D9D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          108D
   VfTable:          000000014231D8D0
   Address (Base):   00000001430F9D90
*/
#pragma pack(push, 8)
class PVZBTreeEntityProvider : public EntityProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZBTreeEntityProvider) == 16);

}
