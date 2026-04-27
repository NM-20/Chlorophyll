#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SequenceEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CF3
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04D1
   VfTable:          0000000000000000
   Address (Base):   0000000143139570
*/
class ServerSyncedSequenceEntity : public SequenceEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0080[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */

static_assert(sizeof(ServerSyncedSequenceEntity) == 136);

}
