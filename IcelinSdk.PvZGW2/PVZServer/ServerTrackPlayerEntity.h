#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ED0
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0300
   VfTable:          0000000000000000
   Address (Base):   000000014312EAD0
*/
class ServerTrackPlayerEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x0258];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0280 */

static_assert(sizeof(ServerTrackPlayerEntity) == 640);

}
