#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/ANTSignalTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0D0C
   TypeInfo Kind:    ClassInfo
   ClassId:          007C
   VfTable:          0000000000000000
   Address (Base):   0000000143121B50
*/
class ServerANTSignalTrack : public ANTSignalTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(ServerANTSignalTrack) == 112);

}
