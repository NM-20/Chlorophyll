#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854208
   RuntimeId:        1708
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C7AC8
   Default Value:    0000000142BEC91C
*/
#pragma pack(push, 4)
struct TerrainLayerProceduralMask
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 AltitudeMin; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(TerrainLayerProceduralMask) == 4);

}
