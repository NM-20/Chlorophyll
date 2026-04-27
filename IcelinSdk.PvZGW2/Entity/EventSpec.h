#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A488
   RuntimeId:        07C3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B5D38
   Default Value:    0000000142B8A0B8
*/
#pragma pack(push, 4)
struct EventSpec
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 Id; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(EventSpec) == 4);

}
