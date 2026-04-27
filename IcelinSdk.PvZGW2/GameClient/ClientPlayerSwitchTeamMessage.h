#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AA0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232B90
   Address:          00000001430CC2C8
   Default Value:    000000014283FA30
*/
#pragma pack(push, 8)
struct ClientPlayerSwitchTeamMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ClientPlayerSwitchTeamMessage) == 64);

}
