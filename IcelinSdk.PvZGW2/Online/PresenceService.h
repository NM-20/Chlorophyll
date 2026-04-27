#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        19EC
   TypeInfo Kind:    ClassInfo
   ClassId:          000C
   VfTable:          0000000000000000
   Address (Base):   000000014311ECB0
*/
class PresenceService
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */

static_assert(sizeof(PresenceService) == 16);

}
