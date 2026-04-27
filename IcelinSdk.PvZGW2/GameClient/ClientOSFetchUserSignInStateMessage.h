#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A91
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232C60
   Address:          00000001430CC4A8
   Default Value:    000000014283F650
*/
#pragma pack(push, 8)
struct ClientOSFetchUserSignInStateMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ClientOSFetchUserSignInStateMessage) == 48);

}
