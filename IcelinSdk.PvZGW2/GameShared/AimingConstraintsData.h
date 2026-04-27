#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F530
   RuntimeId:        12CD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B6858
   Default Value:    000000014284F548
*/
#pragma pack(push, 4)
struct AimingConstraintsData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MinYaw; /* 0x0000 */
  FB_FLOAT32 MaxYaw; /* 0x0004 */
  FB_FLOAT32 MinPitch; /* 0x0008 */
  FB_FLOAT32 MaxPitch; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AimingConstraintsData) == 16);

}
