#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A7F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232D80
   Address:          00000001430CC6E8
   Default Value:    000000014283F190
*/
#pragma pack(push, 8)
struct ClientLoadLevelMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0088];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */
#pragma pack(pop)

static_assert(sizeof(ClientLoadLevelMessage) == 136);

}
