#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16C3
   TypeInfo Kind:    ClassInfo
   ClassId:          00A7
   VfTable:          0000000000000000
   Address (Base):   0000000143101B40
*/
class MeshSet
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x01C0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01C0 */

static_assert(sizeof(MeshSet) == 448);

}
