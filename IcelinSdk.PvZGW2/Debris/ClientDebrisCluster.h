#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Debris/DebrisCluster.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0647
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02FD
   VfTable:          0000000000000000
   Address (Base):   0000000143124620
*/
class ClientDebrisCluster : public DebrisCluster
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0068[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D8 */

static_assert(sizeof(ClientDebrisCluster) == 216);

}
