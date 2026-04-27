#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1385
   TypeInfo Kind:    ClassInfo
   ClassId:          00D7
   VfTable:          0000000000000000
   Address (Base):   0000000143101E10
*/
class PathSpec
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */

static_assert(sizeof(PathSpec) == 24);

}
