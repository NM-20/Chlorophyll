#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858EE8
   RuntimeId:        1AAB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9920
   Default Value:    0000000142858F00
*/
#pragma pack(push, 8)
struct OnlineEnvironmentUrl
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct OnlineEnvironmentUrlData) Urls; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(OnlineEnvironmentUrl) == 8);

}
