#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        07B6
   TypeInfo Kind:    ClassInfo
   ClassId:          0123
   VfTable:          0000000000000000
   Address (Base):   00000001431021D0
*/
class AnimTrackData
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(AnimTrackData) == 32);

}
