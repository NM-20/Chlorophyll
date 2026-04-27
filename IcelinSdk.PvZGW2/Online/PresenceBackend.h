#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ABD
   TypeInfo Kind:    ClassInfo
   ClassId:          0004
   VfTable:          0000000000000000
   Address (Base):   00000001430D2380
*/
class PresenceBackend
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */

static_assert(sizeof(PresenceBackend) == 80);

}
