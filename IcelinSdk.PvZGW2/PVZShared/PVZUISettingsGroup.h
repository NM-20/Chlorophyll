#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FFF0
   RuntimeId:        2959
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1B48
   Default Value:    0000000142870008
*/
#pragma pack(push, 8)
struct PVZUISettingsGroup
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING NameSid; /* 0x0000 */
  FB_INT32 ScreenColumn; /* 0x0008 */
  char pad_000C[0x0004];
  FB_STDARRAY(struct PVZUISettingsItem) SettingsItems; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZUISettingsGroup) == 24);

}
