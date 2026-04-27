#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Network/EngineConnection.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        137F
   TypeInfo Kind:    ClassInfo
   ClassId:          00DA
   VfTable:          0000000000000000
   Address (Base):   000000014311F390
*/
class EngineConnectionPeer : public EngineConnection
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_06D0[0x2440];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x2B10 */

static_assert(sizeof(EngineConnectionPeer) == 11024);

}
