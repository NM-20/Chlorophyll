#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A52
   TypeInfo Kind:    ClassInfo
   ClassId:          0097
   VfTable:          0000000000000000
   Address (Base):   0000000143121FB0
*/
class ClientFadeTrack : public TimelineTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(ClientFadeTrack) == 128);

}
