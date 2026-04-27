#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836B50
   RuntimeId:        0431
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD128
   Default Value:    0000000142B88C58
*/
#pragma pack(push, 8)
struct SoundWaveLocalizationInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class AudioLanguage) Language; /* 0x0000 */
  FB_UINT16 FirstVariationIndex; /* 0x0008 */
  FB_UINT16 VariationCount; /* 0x000A */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SoundWaveLocalizationInfo) == 16);

}
