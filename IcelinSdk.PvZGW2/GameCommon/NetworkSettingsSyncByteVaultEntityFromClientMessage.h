#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B9F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422401D0
   Address:          00000001430CB028
   Default Value:    0000000142843BD0
*/
#pragma pack(push, 8)
struct NetworkSettingsSyncByteVaultEntityFromClientMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(NetworkSettingsSyncByteVaultEntityFromClientMessage) == 104);

}
