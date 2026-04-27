#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        19E9
   TypeInfo Kind:    ClassInfo
   ClassId:          0059
   VfTable:          0000000000000000
   Address (Base):   00000001430BE900
*/
class PresenceEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */

static_assert(sizeof(PresenceEvent) == 16);

}
