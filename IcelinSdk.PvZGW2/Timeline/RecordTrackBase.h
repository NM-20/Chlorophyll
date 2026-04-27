#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/LinkTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1763
   TypeInfo Kind:    ClassInfo
   ClassId:          0072
   VfTable:          0000000000000000
   Address (Base):   00000001430F38D0
*/
class RecordTrackBase : public LinkTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(RecordTrackBase) == 104);

}
