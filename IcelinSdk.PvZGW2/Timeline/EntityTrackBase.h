#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        17C8
   TypeInfo Kind:    ClassInfo
   ClassId:          007D
   VfTable:          0000000000000000
   Address (Base):   00000001430BD240
*/
class EntityTrackBase : public TimelineTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(EntityTrackBase) == 128);

}
