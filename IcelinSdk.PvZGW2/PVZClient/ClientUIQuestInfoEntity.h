#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C43
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04EA
   VfTable:          0000000000000000
   Address (Base):   00000001431333F0
*/
class ClientUIQuestInfoEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x00F0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */

static_assert(sizeof(ClientUIQuestInfoEntity) == 272);

}
