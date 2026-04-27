#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUISettingSymbols.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FFB8
   RuntimeId:        2957
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1B68
   Default Value:    000000014286FFD0
*/
#pragma pack(push, 8)
struct PVZUISettingsItem
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING NameSid; /* 0x0000 */
  PVZUISettingSymbols StartEndSymbols; /* 0x0008 */
  char pad_000C[0x0004];
  FB_HANDLE(class ProfileOptionData) Setting; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZUISettingsItem) == 24);

}
