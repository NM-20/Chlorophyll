#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A8D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232CA0
   Address:          00000001430CC528
   Default Value:    000000014283F5A0
*/
#pragma pack(push, 8)
struct ClientMetricsUIActionMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ClientMetricsUIActionMessage) == 64);

}
