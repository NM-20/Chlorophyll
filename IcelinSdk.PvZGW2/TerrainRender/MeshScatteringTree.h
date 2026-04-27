#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1760
   TypeInfo Kind:    ClassInfo
   ClassId:          0099
   VfTable:          0000000000000000
   Address (Base):   000000014311EFD0
*/
class MeshScatteringTree
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0980];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0980 */

static_assert(sizeof(MeshScatteringTree) == 2432);

}
