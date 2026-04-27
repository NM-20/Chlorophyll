#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861AB0
   RuntimeId:        1FC7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9820
   Default Value:    0000000142861AC8
*/
#pragma pack(push, 8)
struct UILevelStatData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING StatEasy; /* 0x0000 */
  FB_CSTRING StatMedium; /* 0x0008 */
  FB_CSTRING StatHard; /* 0x0010 */
  FB_CSTRING StatHardcore; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UILevelStatData) == 32);

}
