#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/Ps3AgeLevels.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858C08
   RuntimeId:        1A87
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C66E8
   Default Value:    0000000142858C20
*/
#pragma pack(push, 8)
struct Ps3ParentalLockAgeSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Region; /* 0x0000 */
  Ps3AgeLevels AgeLevels; /* 0x0008 */
  FB_HANDLE(class Ps3ParentalLockAgeSettingsOverrides) CountryOverrides; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(Ps3ParentalLockAgeSettings) == 32);

}
