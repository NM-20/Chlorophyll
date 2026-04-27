#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        17CE
   TypeInfo Kind:    ClassInfo
   ClassId:          0087
   VfTable:          0000000000000000
   Address (Base):   00000001431214C0
*/
class GroupTrack : public TimelineTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(GroupTrack) == 104);

}
