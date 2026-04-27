#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BE5
   TypeInfo Kind:    ClassInfo
   ClassId:          00E3
   VfTable:          0000000000000000
   Address (Base):   000000014311F520
*/
class Tool
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */

static_assert(sizeof(Tool) == 24);

}
