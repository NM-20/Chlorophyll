#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/ITerrain.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1753
   TypeInfo Kind:    ClassInfo
   ClassId:          009E
   VfTable:          0000000000000000
   Address (Base):   00000001431216F0
*/
class Terrain : public ITerrain
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */

static_assert(sizeof(Terrain) == 40);

}
