#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871050
   RuntimeId:        2A27
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1848
   Default Value:    0000000142871068
*/
#pragma pack(push, 8)
struct UIStatQueryEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING StatCode; /* 0x0000 */
  FB_CSTRING StatName; /* 0x0008 */
  FB_FLOAT32 StatValue; /* 0x0010 */
  char pad_0014[0x0004];
  FB_CSTRING FormattedStatValue; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIStatQueryEntry) == 32);

}
