#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836DA0
   RuntimeId:        0454
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD0E8
   Default Value:    0000000142B88C70
*/
#pragma pack(push, 1)
struct DivisibleLoopPlayerPlugins
{
  typedef struct ValueTypeInfo TypeInfo_t;

  SoundGraphPluginRef SndPlayer; /* 0x0000 */
  SoundGraphPluginRef Pause; /* 0x0003 */
  SoundGraphPluginRef Gain; /* 0x0006 */
  SoundGraphPluginRef GainFader; /* 0x0009 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(DivisibleLoopPlayerPlugins) == 12);

}
