#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientGrenadeEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CB9
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02CC
   VfTable:          0000000000000000
   Address (Base):   00000001431239A0
*/
class ClientSunDropEntity : public ClientGrenadeEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0420[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0430 */

static_assert(sizeof(ClientSunDropEntity) == 1072);

}
