#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/ANTControlTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09FA
   TypeInfo Kind:    ClassInfo
   ClassId:          0078
   VfTable:          0000000000000000
   Address (Base):   0000000143122500
*/
class ClientANTControlTrack : public ANTControlTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0098[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */

static_assert(sizeof(ClientANTControlTrack) == 176);

}
