#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AE0
   TypeInfo Kind:    ClassInfo
   ClassId:          011F
   VfTable:          0000000000000000
   Address (Base):   0000000143101FF0
*/
class UITtfFontFile
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */

static_assert(sizeof(UITtfFontFile) == 96);

}
