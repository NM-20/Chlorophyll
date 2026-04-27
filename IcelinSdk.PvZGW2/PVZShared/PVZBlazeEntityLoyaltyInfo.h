#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FC18
   RuntimeId:        2926
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1C08
   Default Value:    000000014286FC30
*/
#pragma pack(push, 8)
struct PVZBlazeEntityLoyaltyInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING ImageUrl; /* 0x0000 */
  FB_CSTRING Title; /* 0x0008 */
  FB_CSTRING Description; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZBlazeEntityLoyaltyInfo) == 24);

}
