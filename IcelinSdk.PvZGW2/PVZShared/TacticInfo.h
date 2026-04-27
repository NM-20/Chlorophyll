#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ETacticType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873AB8
   RuntimeId:        2C16
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0F48
   Default Value:    0000000142BFF6D0
*/
#pragma pack(push, 4)
struct TacticInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  ETacticType Tactic; /* 0x0000 */
  FB_FLOAT32 Weight; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(TacticInfo) == 8);

}
