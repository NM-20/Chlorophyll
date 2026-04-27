#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZAsyncRaycastEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C74
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0330
   VfTable:          0000000000000000
   Address (Base):   00000001431315F0
*/
class ClientPVZAsyncRaycastEntity : public PVZAsyncRaycastEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00B0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */

static_assert(sizeof(ClientPVZAsyncRaycastEntity) == 192);

}
