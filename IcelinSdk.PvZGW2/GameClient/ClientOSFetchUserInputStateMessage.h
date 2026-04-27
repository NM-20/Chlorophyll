#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A94
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232C50
   Address:          00000001430CC448
   Default Value:    000000014283F6F0
*/
#pragma pack(push, 8)
struct ClientOSFetchUserInputStateMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ClientOSFetchUserInputStateMessage) == 48);

}
