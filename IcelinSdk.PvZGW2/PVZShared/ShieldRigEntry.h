#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863CA8
   RuntimeId:        2167
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4A48
   Default Value:    0000000142BB4E90
*/
#pragma pack(push, 16)
struct ShieldRigEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LinearTransform Transform; /* 0x0000 */
  FB_BOOLEAN ApplyPitch; /* 0x0040 */
  FB_BOOLEAN ApplyYaw; /* 0x0041 */
  char pad_0042[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ShieldRigEntry) == 80);

}
