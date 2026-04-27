#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B710
   RuntimeId:        2646
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3168
   Default Value:    0000000142867738
*/
#pragma pack(push, 8)
struct CriteriaAward
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class AwardData) Award; /* 0x0000 */
  FB_UINT32 Count; /* 0x0008 */
  char pad_000C[0x0004];
  FB_CSTRING Sid; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CriteriaAward) == 24);

}
