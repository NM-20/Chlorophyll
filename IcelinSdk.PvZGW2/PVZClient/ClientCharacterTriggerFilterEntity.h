#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/CharacterTriggerFilterEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C10
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0523
   VfTable:          0000000000000000
   Address (Base):   0000000143135150
*/
class ClientCharacterTriggerFilterEntity : public CharacterTriggerFilterEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ClientCharacterTriggerFilterEntity) == 64);

}
