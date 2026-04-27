#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874B58
   RuntimeId:        2C85
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B7118
   Default Value:    0000000142874678
*/
#pragma pack(push, 8)
struct RawJsonString
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING RawJson; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(RawJsonString) == 8);

}
