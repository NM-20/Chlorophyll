#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        19FA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C6E28
   Default Value:    0000000000000000
*/
#pragma pack(push, 255)
struct PresenceBlockListRequestMessageBase
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PresenceBlockListRequestMessageBase) == 48);

}
