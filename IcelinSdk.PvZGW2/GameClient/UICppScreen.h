#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A21
   TypeInfo Kind:    ClassInfo
   ClassId:          0120
   VfTable:          0000000000000000
   Address (Base):   0000000143102130
*/
class UICppScreen
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0440];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0440 */

static_assert(sizeof(UICppScreen) == 1088);

}
