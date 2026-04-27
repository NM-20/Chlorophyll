#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B55
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422411A8
   Address:          00000001430CB8C8
   Default Value:    0000000142842000
*/
#pragma pack(push, 8)
struct SessionPlayerLeftMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(SessionPlayerLeftMessage) == 64);

}
