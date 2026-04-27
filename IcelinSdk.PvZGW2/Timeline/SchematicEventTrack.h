#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1764
   TypeInfo Kind:    ClassInfo
   ClassId:          0086
   VfTable:          0000000000000000
   Address (Base):   0000000143121650
*/
class SchematicEventTrack : public TimelineTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(SchematicEventTrack) == 120);

}
