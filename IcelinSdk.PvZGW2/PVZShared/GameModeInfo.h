#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861930
   RuntimeId:        1FB5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5308
   Default Value:    0000000142861948
*/
#pragma pack(push, 8)
struct GameModeInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_CSTRING ShortName; /* 0x0008 */
  FB_CSTRING MetaIdentifier; /* 0x0010 */
  FB_UINT32 RoundsPerMap; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(struct GameModeVariationInfo) GameModeVariations; /* 0x0020 */
  FB_STDARRAY(struct HostedModeInfo) ValidHostedModeInfos; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(GameModeInfo) == 48);

}
