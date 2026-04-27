#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142877108
   RuntimeId:        2E61
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B7BC0
   Default Value:    0000000142877120
*/
#pragma pack(push, 8)
struct ZoneStreamerInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_RESOURCEREF GridResource; /* 0x0000 */
  FB_CSTRING SubLevelPath; /* 0x0008 */
  FB_STDARRAY(struct ZoneStreamerZoneInfo) ZoneInfos; /* 0x0010 */
  FB_STDARRAY(FB_INT16) BundleParents; /* 0x0018 */
  FB_STDARRAY(FB_CSTRING) BundleNames; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ZoneStreamerInfo) == 40);

}
