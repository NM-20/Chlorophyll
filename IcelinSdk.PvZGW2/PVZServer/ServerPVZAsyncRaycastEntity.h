#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZAsyncRaycastEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EC7
   TypeInfo Kind:    EntityClassInfo
   ClassId:          032F
   VfTable:          0000000000000000
   Address (Base):   000000014312F070
*/
class ServerPVZAsyncRaycastEntity : public PVZAsyncRaycastEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00B0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */

static_assert(sizeof(ServerPVZAsyncRaycastEntity) == 192);

}
