#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428387A0
   RuntimeId:        05EC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCE48
   Default Value:    0000000142B88D00
*/
#pragma pack(push, 8)
struct VoiceOverDialogTake
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class SoundWaveAsset) Wave; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverDialogTake) == 8);

}
