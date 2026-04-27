#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        17D3
   TypeInfo Kind:    ClassInfo
   ClassId:          0094
   VfTable:          0000000000000000
   Address (Base):   000000014311EE90
*/
class TransformLayer : public TimelineTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(TransformLayer) == 112);

}
