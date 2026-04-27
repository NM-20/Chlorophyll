#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SubLevelEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A1F
   TypeInfo Kind:    EntityClassInfo
   ClassId:          025E
   VfTable:          0000000000000000
   Address (Base):   000000014313D530
*/
class ClientSubLevelEntity : public SubLevelEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0048[0x00A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E8 */

static_assert(sizeof(ClientSubLevelEntity) == 232);

}
