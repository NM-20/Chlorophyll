#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/SwitchCharacterCustomizationEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ECF
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0577
   VfTable:          0000000000000000
   Address (Base):   000000014312EB70
*/
class ServerSwitchCharacterCustomizationEntity : public SwitchCharacterCustomizationEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ServerSwitchCharacterCustomizationEntity) == 64);

}
