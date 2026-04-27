#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861900
   RuntimeId:        1FB3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5328
   Default Value:    0000000142861918
*/
#pragma pack(push, 8)
struct HostedModeInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING HostedMode; /* 0x0000 */
  FB_HANDLE(class OnlineRichPresenceString) RichPresence; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(HostedModeInfo) == 16);

}
