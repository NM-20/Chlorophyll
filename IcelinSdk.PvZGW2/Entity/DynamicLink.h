#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A508
   RuntimeId:        07CB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCB88
   Default Value:    0000000142B97D90
*/
#pragma pack(push, 4)
struct DynamicLink
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 Id; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(DynamicLink) == 4);

}
