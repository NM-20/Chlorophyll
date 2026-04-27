#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BB1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223FF88
   Address:          00000001430CAE68
   Default Value:    0000000142844130
*/
#pragma pack(push, 8)
struct UINetworkPlayerKillsTextMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x00A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(UINetworkPlayerKillsTextMessage) == 160);

}
