#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862F30
   RuntimeId:        20D6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4D68
   Default Value:    0000000142BFE750
*/
#pragma pack(push, 4)
struct DamageEntryData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Damage; /* 0x0000 */
  FB_FLOAT32 Timeout; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(DamageEntryData) == 8);

}
