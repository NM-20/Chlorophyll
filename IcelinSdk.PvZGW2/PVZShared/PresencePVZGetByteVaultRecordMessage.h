#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        28FA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E210
   Address:          00000001430C2128
   Default Value:    000000014286F448
*/
#pragma pack(push, 8)
struct PresencePVZGetByteVaultRecordMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PresencePVZGetByteVaultRecordMessage) == 48);

}
