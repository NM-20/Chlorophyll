#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        18F1
   TypeInfo Kind:    ClassInfo
   ClassId:          006A
   VfTable:          0000000000000000
   Address (Base):   0000000143101870
*/
class EnlightenShaderDatabase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */

static_assert(sizeof(EnlightenShaderDatabase) == 96);

}
