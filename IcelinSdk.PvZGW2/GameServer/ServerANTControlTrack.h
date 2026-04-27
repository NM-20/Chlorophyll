#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/ANTControlTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0D0B
   TypeInfo Kind:    ClassInfo
   ClassId:          0079
   VfTable:          0000000000000000
   Address (Base):   0000000143121BA0
*/
class ServerANTControlTrack : public ANTControlTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0098[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */

static_assert(sizeof(ServerANTControlTrack) == 160);

}
