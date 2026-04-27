#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837500
   RuntimeId:        04CA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD068
   Default Value:    0000000142B88C90
*/
#pragma pack(push, 1)
struct GrainPlayerPlugins
{
  typedef struct ValueTypeInfo TypeInfo_t;

  SoundGraphPluginRef SndPlayer; /* 0x0000 */
  SoundGraphPluginRef Rechannel; /* 0x0003 */
  SoundGraphPluginRef Resample; /* 0x0006 */
  SoundGraphPluginRef Pause; /* 0x0009 */
  SoundGraphPluginRef Gain; /* 0x000C */
  SoundGraphPluginRef GainFader; /* 0x000F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0012 */
#pragma pack(pop)

static_assert(sizeof(GrainPlayerPlugins) == 18);

}
