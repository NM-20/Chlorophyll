#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/LinkTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A20
   TypeInfo Kind:    ClassInfo
   ClassId:          0076
   VfTable:          0000000000000000
   Address (Base):   0000000143122050
*/
class PA2LookAtTrack : public LinkTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A8 */

static_assert(sizeof(PA2LookAtTrack) == 168);

}
