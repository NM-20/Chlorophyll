#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/ITerrain.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1754
   TypeInfo Kind:    ClassInfo
   ClassId:          009F
   VfTable:          0000000000000000
   Address (Base):   000000014311F0C0
*/
class IVisualTerrain : public ITerrain
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */

static_assert(sizeof(IVisualTerrain) == 8);

}
