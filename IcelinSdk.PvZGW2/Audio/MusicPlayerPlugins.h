#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837FF0
   RuntimeId:        0574
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCEC8
   Default Value:    0000000142B88CE0
*/
#pragma pack(push, 1)
struct MusicPlayerPlugins
{
  typedef struct ValueTypeInfo TypeInfo_t;

  SoundGraphPluginRef SndPlayer; /* 0x0000 */
  SoundGraphPluginRef Rechannel; /* 0x0003 */
  SoundGraphPluginRef Resample; /* 0x0006 */
  SoundGraphPluginRef Pause; /* 0x0009 */
  SoundGraphPluginRef Gain; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000F */
#pragma pack(pop)

static_assert(sizeof(MusicPlayerPlugins) == 15);

}
