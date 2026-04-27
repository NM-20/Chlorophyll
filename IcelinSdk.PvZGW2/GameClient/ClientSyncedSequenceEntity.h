#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SequenceEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A60
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04D0
   VfTable:          0000000000000000
   Address (Base):   000000014313C810
*/
class ClientSyncedSequenceEntity : public SequenceEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0080[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */

static_assert(sizeof(ClientSyncedSequenceEntity) == 144);

}
