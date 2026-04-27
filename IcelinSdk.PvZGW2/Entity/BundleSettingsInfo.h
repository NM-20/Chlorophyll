#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C070
   RuntimeId:        097C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B69B8
   Default Value:    000000014283C088
*/
#pragma pack(push, 8)
struct BundleSettingsInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 GroupIdentifier; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING GroupName; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(BundleSettingsInfo) == 16);

}
