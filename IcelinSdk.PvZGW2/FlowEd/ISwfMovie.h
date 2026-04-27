#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1917
   TypeInfo Kind:    ClassInfo
   ClassId:          0063
   VfTable:          0000000000000000
   Address (Base):   000000014311EDF0
*/
class ISwfMovie
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */

static_assert(sizeof(ISwfMovie) == 8);

}
