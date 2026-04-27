#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/ObjectAreaQueryEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CEB
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0323
   VfTable:          0000000000000000
   Address (Base):   0000000143139890
*/
class ServerObjectAreaQueryEntity : public ObjectAreaQueryEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ServerObjectAreaQueryEntity) == 64);

}
