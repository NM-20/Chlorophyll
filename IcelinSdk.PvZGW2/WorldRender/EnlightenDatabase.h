#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        18F0
   TypeInfo Kind:    ClassInfo
   ClassId:          006B
   VfTable:          0000000000000000
   Address (Base):   00000001431018C0
*/
class EnlightenDatabase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(EnlightenDatabase) == 128);

}
