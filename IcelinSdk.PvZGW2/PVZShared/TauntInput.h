#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863800
   RuntimeId:        2126
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4B28
   Default Value:    000000014286189C
*/
#pragma pack(push, 4)
struct TauntInput
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 TauntInputAction; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(TauntInput) == 4);

}
