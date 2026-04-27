#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientCharacterCustomizationComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CC1
   TypeInfo Kind:    ClassInfo
   ClassId:          0148
   VfTable:          0000000000000000
   Address (Base):   00000001430CDB40
*/
class ClientPVZCharacterCustomizationComponent : public ClientCharacterCustomizationComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0340[0x0430];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0770 */

static_assert(sizeof(ClientPVZCharacterCustomizationComponent) == 1904);

}
