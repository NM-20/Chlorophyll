#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865F88
   RuntimeId:        236B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BD838
   Default Value:    0000000142865FA0
*/
#pragma pack(push, 8)
struct LongString
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Id; /* 0x0000 */
  FB_CSTRING Text; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(LongString) == 16);

}
