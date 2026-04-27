#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        07AD
   TypeInfo Kind:    ClassInfo
   ClassId:          05C6
   VfTable:          0000000000000000
   Address (Base):   00000001430B7300
*/
class EntityEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */

static_assert(sizeof(EntityEvent) == 16);

}
