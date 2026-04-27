#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ABC
   TypeInfo Kind:    ClassInfo
   ClassId:          000B
   VfTable:          0000000000000000
   Address (Base):   000000014311EC60
*/
class GameParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0430];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0430 */

static_assert(sizeof(GameParameters) == 1072);

}
