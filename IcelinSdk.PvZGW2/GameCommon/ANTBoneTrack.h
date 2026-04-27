#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/LayeredTransformTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BD8
   TypeInfo Kind:    ClassInfo
   ClassId:          0091
   VfTable:          0000000000000000
   Address (Base):   0000000143121DD0
*/
class ANTBoneTrack : public LayeredTransformTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0120[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */

static_assert(sizeof(ANTBoneTrack) == 304);

}
