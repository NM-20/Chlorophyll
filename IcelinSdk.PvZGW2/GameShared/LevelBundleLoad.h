#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142848F18
   RuntimeId:        0D38
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9828
   Default Value:    0000000142848F30
*/
#pragma pack(push, 8)
struct LevelBundleLoad
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_BOOLEAN TryKeepBetweenLevels; /* 0x0008 */
  char pad_0009[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(LevelBundleLoad) == 16);

}
