#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868070
   RuntimeId:        23D0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3AC8
   Default Value:    0000000142868088
*/
#pragma pack(push, 8)
struct StatValue
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Code; /* 0x0000 */
  FB_INT32 Id; /* 0x0008 */
  FB_FLOAT32 Value; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(StatValue) == 16);

}
