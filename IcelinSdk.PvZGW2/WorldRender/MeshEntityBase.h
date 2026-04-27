#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1903
   TypeInfo Kind:    ClassInfo
   ClassId:          0065
   VfTable:          0000000000000000
   Address (Base):   00000001430DE280
*/
class MeshEntityBase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0090];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */

static_assert(sizeof(MeshEntityBase) == 144);

}
