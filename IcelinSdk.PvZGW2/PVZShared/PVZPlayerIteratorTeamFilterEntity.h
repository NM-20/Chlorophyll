#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZPlayerIteratorFilterEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F8C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04AD
   VfTable:          0000000000000000
   Address (Base):   000000014312B0B0
*/
class PVZPlayerIteratorTeamFilterEntity : public PVZPlayerIteratorFilterEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0030[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(PVZPlayerIteratorTeamFilterEntity) == 56);

}
