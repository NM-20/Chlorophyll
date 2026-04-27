#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        00E8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001421E5300
   Address:          00000001430CD6E8
   Default Value:    00000001428331D0
*/
#pragma pack(push, 8)
struct StreamInstallInstallProgressMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(StreamInstallInstallProgressMessage) == 64);

}
