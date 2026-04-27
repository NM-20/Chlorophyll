#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/SwitchCharacterCustomizationEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B98
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0576
   VfTable:          0000000000000000
   Address (Base):   0000000143137450
*/
class ClientSwitchCharacterCustomizationEntity : public SwitchCharacterCustomizationEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ClientSwitchCharacterCustomizationEntity) == 64);

}
