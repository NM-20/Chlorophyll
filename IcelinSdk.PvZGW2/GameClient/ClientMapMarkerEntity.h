#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A56
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02A4
   VfTable:          0000000000000000
   Address (Base):   000000014313CE50
*/
class ClientMapMarkerEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x0268];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0290 */

static_assert(sizeof(ClientMapMarkerEntity) == 656);

}
