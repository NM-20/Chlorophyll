#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C1D
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02A3
   VfTable:          0000000000000000
   Address (Base):   00000001431260B0
*/
class ClientPVZUIMarkerEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */

static_assert(sizeof(ClientPVZUIMarkerEntity) == 80);

}
