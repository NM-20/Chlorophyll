#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C81
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04E3
   VfTable:          0000000000000000
   Address (Base):   0000000143131050
*/
class ClientCommunityChallengeEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0118];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0138 */

static_assert(sizeof(ClientCommunityChallengeEntity) == 312);

}
