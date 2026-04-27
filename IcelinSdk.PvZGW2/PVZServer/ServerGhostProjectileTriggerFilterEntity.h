#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/TriggerFilterEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F41
   TypeInfo Kind:    EntityClassInfo
   ClassId:          051E
   VfTable:          0000000000000000
   Address (Base):   000000014312C690
*/
class ServerGhostProjectileTriggerFilterEntity : public TriggerFilterEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0030[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(ServerGhostProjectileTriggerFilterEntity) == 56);

}
