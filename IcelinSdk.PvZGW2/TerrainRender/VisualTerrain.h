#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TerrainRender/IVisualTerrain.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1757
   TypeInfo Kind:    ClassInfo
   ClassId:          00A0
   VfTable:          0000000000000000
   Address (Base):   000000014311F070
*/
class VisualTerrain : public IVisualTerrain
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x2E28];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x2E30 */

static_assert(sizeof(VisualTerrain) == 11824);

}
