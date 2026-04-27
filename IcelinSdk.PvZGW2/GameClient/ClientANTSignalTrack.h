#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/ANTSignalTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AE8
   TypeInfo Kind:    ClassInfo
   ClassId:          007B
   VfTable:          0000000000000000
   Address (Base):   0000000143121F60
*/
class ClientANTSignalTrack : public ANTSignalTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(ClientANTSignalTrack) == 112);

}
