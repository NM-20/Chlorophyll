#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        00E7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001421E5310
   Address:          00000001430CD708
   Default Value:    0000000142833168
*/
#pragma pack(push, 8)
struct StreamInstallInstallingMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(StreamInstallInstallingMessage) == 48);

}
