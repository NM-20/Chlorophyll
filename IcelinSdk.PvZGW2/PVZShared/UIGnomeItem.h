#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870F80
   RuntimeId:        2A1D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1888
   Default Value:    0000000142870D58
*/
#pragma pack(push, 8)
struct UIGnomeItem
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Title; /* 0x0000 */
  FB_CSTRING GnomeCode; /* 0x0008 */
  FB_BOOLEAN IsAchieved; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIGnomeItem) == 24);

}
