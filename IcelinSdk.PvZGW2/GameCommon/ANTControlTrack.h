#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/LinkTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BD9
   TypeInfo Kind:    ClassInfo
   ClassId:          0077
   VfTable:          0000000000000000
   Address (Base):   00000001430D2880
*/
class ANTControlTrack : public LinkTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */

static_assert(sizeof(ANTControlTrack) == 152);

}
