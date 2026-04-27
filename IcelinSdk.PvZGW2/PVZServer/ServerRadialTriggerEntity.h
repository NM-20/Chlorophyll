#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/RadialTriggerEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F44
   TypeInfo Kind:    EntityClassInfo
   ClassId:          053A
   VfTable:          0000000000000000
   Address (Base):   000000014312C4B0
*/
class ServerRadialTriggerEntity : public RadialTriggerEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0048[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */

static_assert(sizeof(ServerRadialTriggerEntity) == 80);

}
