#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F0C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0596
   VfTable:          0000000000000000
   Address (Base):   000000014312E170
*/
class ServerAIWaveDifficultyEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ServerAIWaveDifficultyEntity) == 64);

}
