#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/ObjectAreaQueryEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A58
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0324
   VfTable:          0000000000000000
   Address (Base):   000000014313CD10
*/
class ClientObjectAreaQueryEntity : public ObjectAreaQueryEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ClientObjectAreaQueryEntity) == 64);

}
