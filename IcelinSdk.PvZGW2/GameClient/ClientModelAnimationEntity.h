#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/ModelAnimationEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AED
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03CB
   VfTable:          0000000000000000
   Address (Base):   0000000143127550
*/
class ClientModelAnimationEntity : public ModelAnimationEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0078[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */

static_assert(sizeof(ClientModelAnimationEntity) == 144);

}
