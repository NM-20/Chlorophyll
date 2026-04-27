#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/Ps3AgeLevels.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858BB0
   RuntimeId:        1A83
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C6708
   Default Value:    0000000142858BC8
*/
#pragma pack(push, 8)
struct Ps3ParentalLockAgeSettingsForCountry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING CountryCode; /* 0x0000 */
  Ps3AgeLevels AgeLevels; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(Ps3ParentalLockAgeSettingsForCountry) == 24);

}
