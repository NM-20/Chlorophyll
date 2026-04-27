#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858F40
   RuntimeId:        1AAF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B6778
   Default Value:    0000000142858F58
*/
#pragma pack(push, 8)
struct OnlineEnvironmentConsoleUrl
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct OnlineEnvironmentConsoleUrlData) Urls; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(OnlineEnvironmentConsoleUrl) == 8);

}
