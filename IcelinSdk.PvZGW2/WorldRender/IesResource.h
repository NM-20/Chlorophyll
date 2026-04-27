#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        18ED
   TypeInfo Kind:    ClassInfo
   ClassId:          006D
   VfTable:          0000000000000000
   Address (Base):   0000000143101960
*/
class IesResource
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */

static_assert(sizeof(IesResource) == 40);

}
