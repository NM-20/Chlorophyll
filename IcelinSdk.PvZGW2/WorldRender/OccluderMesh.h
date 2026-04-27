#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        18EE
   TypeInfo Kind:    ClassInfo
   ClassId:          006C
   VfTable:          0000000000000000
   Address (Base):   0000000143101910
*/
class OccluderMesh
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */

static_assert(sizeof(OccluderMesh) == 40);

}
