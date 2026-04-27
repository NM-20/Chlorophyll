#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858D00
   RuntimeId:        1A91
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9980
   Default Value:    0000000142858D18
*/
#pragma pack(push, 8)
struct Ps4AgeSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 DefaultAgeRequirement; /* 0x0000 */
  char pad_0004[0x0004];
  FB_STDARRAY(struct Ps4CountryAgeOverrides) AgeOverrides; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(Ps4AgeSettings) == 16);

}
