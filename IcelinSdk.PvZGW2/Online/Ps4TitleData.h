#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/Ps4AgeSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858D30
   RuntimeId:        1A93
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9960
   Default Value:    0000000142858D48
*/
#pragma pack(push, 8)
struct Ps4TitleData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING TitleId; /* 0x0000 */
  Ps4AgeSettings AgeSettings; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(Ps4TitleData) == 24);

}
