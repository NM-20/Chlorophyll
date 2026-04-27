#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870028
   RuntimeId:        295B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1B28
   Default Value:    0000000142870040
*/
#pragma pack(push, 8)
struct PVZUISettingsPage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING NameSid; /* 0x0000 */
  FB_STDARRAY(struct PVZUISettingsGroup) SettingsGroups; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZUISettingsPage) == 16);

}
