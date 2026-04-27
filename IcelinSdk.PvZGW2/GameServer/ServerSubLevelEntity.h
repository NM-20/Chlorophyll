#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SubLevelEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C54
   TypeInfo Kind:    EntityClassInfo
   ClassId:          025F
   VfTable:          0000000000000000
   Address (Base):   0000000143142350
*/
class ServerSubLevelEntity : public SubLevelEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0048[0x00E0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0128 */

static_assert(sizeof(ServerSubLevelEntity) == 296);

}
