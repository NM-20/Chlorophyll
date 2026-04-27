#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerGhostProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EE5
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02F0
   VfTable:          0000000000000000
   Address (Base):   000000014312E990
*/
class ServerObjectProjectileEntity : public ServerGhostProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0310[0x0140];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0450 */

static_assert(sizeof(ServerObjectProjectileEntity) == 1104);

}
