#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        28A9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E4A0
   Address:          00000001430C2748
   Default Value:    000000014286EA38
*/
#pragma pack(push, 8)
struct VoiceVoipVolumeChangedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(VoiceVoipVolumeChangedMessage) == 56);

}
