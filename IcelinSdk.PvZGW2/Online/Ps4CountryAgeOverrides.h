#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858D68
   RuntimeId:        1A95
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C66A8
   Default Value:    0000000142858D80
*/
#pragma pack(push, 8)
struct Ps4CountryAgeOverrides
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING CountryCode; /* 0x0000 */
  FB_INT32 AgeRequirement; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(Ps4CountryAgeOverrides) == 16);

}
