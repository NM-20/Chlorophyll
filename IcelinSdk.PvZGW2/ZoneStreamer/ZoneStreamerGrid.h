#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2E4C
   TypeInfo Kind:    ClassInfo
   ClassId:          0001
   VfTable:          0000000000000000
   Address (Base):   0000000143101410
*/
class ZoneStreamerGrid
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ZoneStreamerGrid) == 64);

}
