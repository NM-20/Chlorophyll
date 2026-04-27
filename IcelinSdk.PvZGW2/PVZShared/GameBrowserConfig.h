#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868780
   RuntimeId:        23F1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B90C0
   Default Value:    0000000142868798
*/
#pragma pack(push, 4)
struct GameBrowserConfig
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MinimumInterval; /* 0x0000 */
  FB_FLOAT32 RefreshInterval; /* 0x0004 */
  FB_BOOLEAN RefreshEnabled; /* 0x0008 */
  char pad_0009[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(GameBrowserConfig) == 12);

}
