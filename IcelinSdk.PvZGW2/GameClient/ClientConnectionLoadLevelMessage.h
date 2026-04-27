#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AC9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232900
   Address:          00000001430CBDA8
   Default Value:    0000000142840300
*/
#pragma pack(push, 8)
struct ClientConnectionLoadLevelMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ClientConnectionLoadLevelMessage) == 56);

}
