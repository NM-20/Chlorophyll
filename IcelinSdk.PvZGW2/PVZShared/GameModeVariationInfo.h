#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428618C8
   RuntimeId:        1FB1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5348
   Default Value:    00000001428618E0
*/
#pragma pack(push, 8)
struct GameModeVariationInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_STDARRAY(FB_CSTRING) ValidGameModeInclusions; /* 0x0008 */
  FB_HANDLE(class GameModeSizeInfo) SizeInfo; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GameModeVariationInfo) == 24);

}
