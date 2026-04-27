#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientUIScreenRenderEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D7C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0502
   VfTable:          0000000000000000
   Address (Base):   0000000143102270
*/
class ClientUILegacyScreenRenderEntity : public ClientUIScreenRenderEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0120[0x00C0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01E0 */

static_assert(sizeof(ClientUILegacyScreenRenderEntity) == 480);

}
