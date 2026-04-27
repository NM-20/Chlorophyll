#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23AF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234F5C8
   Address:          00000001430C3EA8
   Default Value:    00000001428674F0
*/
#pragma pack(push, 8)
struct NetworkEnableInstantCaptureMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(NetworkEnableInstantCaptureMessage) == 80);

}
