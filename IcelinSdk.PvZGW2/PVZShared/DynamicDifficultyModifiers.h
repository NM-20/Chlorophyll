#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868E00
   RuntimeId:        2433
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B6738
   Default Value:    0000000142868E18
*/
#pragma pack(push, 4)
struct DynamicDifficultyModifiers
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 GlobalResistance; /* 0x0000 */
  FB_FLOAT32 GlobalDamage; /* 0x0004 */
  FB_FLOAT32 GlobalHealth; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(DynamicDifficultyModifiers) == 12);

}
