#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B2E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142241518
   Address:          00000001430CBCA8
   Default Value:    00000001428418D8
*/
#pragma pack(push, 8)
struct ServerAdministrationPasswordMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerAdministrationPasswordMessage) == 56);

}
