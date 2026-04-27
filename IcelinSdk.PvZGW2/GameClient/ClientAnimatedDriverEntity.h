#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A49
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0472
   VfTable:          0000000000000000
   Address (Base):   000000014313D2B0
*/
class ClientAnimatedDriverEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(ClientAnimatedDriverEntity) == 128);

}
