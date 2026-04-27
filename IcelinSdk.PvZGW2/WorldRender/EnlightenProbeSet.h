#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        18F3
   TypeInfo Kind:    ClassInfo
   ClassId:          0068
   VfTable:          0000000000000000
   Address (Base):   000000014311EE40
*/
class EnlightenProbeSet
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x00C0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */

static_assert(sizeof(EnlightenProbeSet) == 192);

}
