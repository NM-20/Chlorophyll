#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BD40
   RuntimeId:        26A8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2FA8
   Default Value:    0000000142BB4FDB
*/
#pragma pack(push, 1)
struct CounterHelper
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_BOOLEAN dummy; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0001 */
#pragma pack(pop)

static_assert(sizeof(CounterHelper) == 1);

}
