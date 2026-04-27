#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B42
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142241308
   Address:          00000001430CBAE8
   Default Value:    0000000142841D10
*/
#pragma pack(push, 8)
struct DemoClientReadyForPlaybackMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(DemoClientReadyForPlaybackMessage) == 72);

}
