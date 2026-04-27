#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Debris/DebrisCluster.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        064A
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02FC
   VfTable:          0000000000000000
   Address (Base):   000000014311FC50
*/
class ServerDebrisCluster : public DebrisCluster
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0068[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0118 */

static_assert(sizeof(ServerDebrisCluster) == 280);

}
