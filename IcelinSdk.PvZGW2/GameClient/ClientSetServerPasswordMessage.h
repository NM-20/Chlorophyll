#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A89
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232CE0
   Address:          00000001430CC5A8
   Default Value:    000000014283F480
*/
#pragma pack(push, 8)
struct ClientSetServerPasswordMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ClientSetServerPasswordMessage) == 56);

}
