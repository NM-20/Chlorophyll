#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861A10
   RuntimeId:        1FBF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C52A8
   Default Value:    0000000142861A28
*/
#pragma pack(push, 8)
struct CrazyOptionInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING OptionTitle; /* 0x0000 */
  FB_CSTRING OptionDescription; /* 0x0008 */
  FB_CSTRING SettingName; /* 0x0010 */
  FB_HANDLE(class UnlockAssetRef) UnlockRef; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CrazyOptionInfo) == 32);

}
