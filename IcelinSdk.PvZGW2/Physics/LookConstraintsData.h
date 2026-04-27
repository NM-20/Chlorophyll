#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851518
   RuntimeId:        1478
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA460
   Default Value:    0000000142851530
*/
#pragma pack(push, 4)
struct LookConstraintsData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MinLookYaw; /* 0x0000 */
  FB_FLOAT32 MaxLookYaw; /* 0x0004 */
  FB_FLOAT32 MinLookPitch; /* 0x0008 */
  FB_FLOAT32 MaxLookPitch; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(LookConstraintsData) == 16);

}
