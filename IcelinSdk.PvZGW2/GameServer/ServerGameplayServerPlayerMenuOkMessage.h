#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CC4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252C88
   Address:          00000001430C9C48
   Default Value:    00000001428475F8
*/
#pragma pack(push, 8)
struct ServerGameplayServerPlayerMenuOkMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerGameplayServerPlayerMenuOkMessage) == 56);

}
