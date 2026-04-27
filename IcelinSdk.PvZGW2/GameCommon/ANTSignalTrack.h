#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/LinkTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BDA
   TypeInfo Kind:    ClassInfo
   ClassId:          007A
   VfTable:          0000000000000000
   Address (Base):   0000000143101F50
*/
class ANTSignalTrack : public LinkTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(ANTSignalTrack) == 112);

}
