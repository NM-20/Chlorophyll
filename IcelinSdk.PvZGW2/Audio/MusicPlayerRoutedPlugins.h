#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838010
   RuntimeId:        0576
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCEA8
   Default Value:    0000000142838028
*/
#pragma pack(push, 8)
struct MusicPlayerRoutedPlugins
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct SoundGraphPluginRef) Route; /* 0x0000 */
  SoundGraphPluginRef SndPlayer; /* 0x0008 */
  SoundGraphPluginRef Rechannel; /* 0x000B */
  SoundGraphPluginRef Resample; /* 0x000E */
  SoundGraphPluginRef Pause; /* 0x0011 */
  SoundGraphPluginRef Gain; /* 0x0014 */
  char pad_0017[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MusicPlayerRoutedPlugins) == 24);

}
