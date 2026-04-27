#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838068
   RuntimeId:        057A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCE68
   Default Value:    0000000142838080
*/
#pragma pack(push, 8)
struct MusicPlayerRoutedVoice
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct MusicPlayerRoutedPlugins) RoutedPlugins; /* 0x0000 */
  FB_STDARRAY(struct MusicPlayerRoutedTargetPlugins) RoutedTargetPlugins; /* 0x0008 */
  FB_UINT8 LayerCount; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MusicPlayerRoutedVoice) == 24);

}
