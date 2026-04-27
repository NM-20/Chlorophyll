#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1515
   TypeInfo Kind:    ClassInfo
   ClassId:          00D6
   VfTable:          0000000000000000
   Address (Base):   0000000143101D70
*/
class RagdollResource
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(RagdollResource) == 56);

}
