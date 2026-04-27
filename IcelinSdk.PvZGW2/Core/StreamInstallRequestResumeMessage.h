#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        00EC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001421E52C0
   Address:          00000001430CD668
   Default Value:    0000000142833278
*/
#pragma pack(push, 8)
struct StreamInstallRequestResumeMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(StreamInstallRequestResumeMessage) == 48);

}
