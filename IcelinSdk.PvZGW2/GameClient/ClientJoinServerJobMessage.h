#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A75
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232E30
   Address:          00000001430CC828
   Default Value:    000000014283EF48
*/
#pragma pack(push, 8)
struct ClientJoinServerJobMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ClientJoinServerJobMessage) == 48);

}
