#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        28A8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E4B0
   Address:          00000001430C2768
   Default Value:    000000014286EA00
*/
#pragma pack(push, 8)
struct VoiceVoipTypeChangedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(VoiceVoipTypeChangedMessage) == 56);

}
