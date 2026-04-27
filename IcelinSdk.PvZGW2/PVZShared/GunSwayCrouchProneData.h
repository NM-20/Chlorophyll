#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayBaseMoveData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286E0E0
   RuntimeId:        286E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8460
   Default Value:    000000014286E130
*/
#pragma pack(push, 4)
struct GunSwayCrouchProneData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  GunSwayBaseMoveData NoZoom; /* 0x0000 */
  GunSwayBaseMoveData Zoom; /* 0x004C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */
#pragma pack(pop)

static_assert(sizeof(GunSwayCrouchProneData) == 152);

}
