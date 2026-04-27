#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AC58
   RuntimeId:        25D4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C32E8
   Default Value:    0000000142BF8FAC
*/
#pragma pack(push, 4)
struct HitMultipleCharacterModifierData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 DamageMultiplier; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(HitMultipleCharacterModifierData) == 4);

}
