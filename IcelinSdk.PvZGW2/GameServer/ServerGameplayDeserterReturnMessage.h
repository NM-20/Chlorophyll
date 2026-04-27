#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CC1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252CB8
   Address:          00000001430C9CA8
   Default Value:    0000000142846EE8
*/
#pragma pack(push, 8)
struct ServerGameplayDeserterReturnMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerGameplayDeserterReturnMessage) == 56);

}
