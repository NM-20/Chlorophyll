#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428376E0
   RuntimeId:        04E6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCF68
   Default Value:    00000001428376F8
*/
#pragma pack(push, 8)
struct SoundGraphVoiceInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct SoundGraphPluginInfo) Plugins; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(SoundGraphVoiceInfo) == 8);

}
