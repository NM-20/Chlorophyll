#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayBaseMoveJumpData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DFA8
   RuntimeId:        286C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8480
   Default Value:    000000014286DFC0
*/
#pragma pack(push, 4)
struct GunSwayStandData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  GunSwayBaseMoveJumpData NoZoom; /* 0x0000 */
  GunSwayBaseMoveJumpData Zoom; /* 0x008C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0118 */
#pragma pack(pop)

static_assert(sizeof(GunSwayStandData) == 280);

}
