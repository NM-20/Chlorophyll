#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AF08
   RuntimeId:        25F8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8C00
   Default Value:    000000014286AF20
*/
#pragma pack(push, 4)
struct HoldAndReleaseData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MaxHoldTime; /* 0x0000 */
  FB_FLOAT32 MinPowerModifier; /* 0x0004 */
  FB_FLOAT32 MaxPowerModifier; /* 0x0008 */
  FB_FLOAT32 PowerIncreasePerSecond; /* 0x000C */
  FB_FLOAT32 Delay; /* 0x0010 */
  FB_FLOAT32 KilledHoldingPowerModifier; /* 0x0014 */
  FB_FLOAT32 ChargeDelay; /* 0x0018 */
  FB_BOOLEAN ForceFireWhenKilledHolding; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(HoldAndReleaseData) == 32);

}
