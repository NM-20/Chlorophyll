#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A9B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232BC0
   Address:          00000001430CC368
   Default Value:    000000014283F940
*/
#pragma pack(push, 8)
struct ClientPlayerExitEntryMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ClientPlayerExitEntryMessage) == 80);

}
