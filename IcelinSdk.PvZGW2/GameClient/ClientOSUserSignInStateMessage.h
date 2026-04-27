#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A92
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232C70
   Address:          00000001430CC488
   Default Value:    000000014283F680
*/
#pragma pack(push, 8)
struct ClientOSUserSignInStateMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ClientOSUserSignInStateMessage) == 56);

}
