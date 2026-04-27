#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B57
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422411C8
   Address:          00000001430CB888
   Default Value:    00000001428420C0
*/
#pragma pack(push, 8)
struct SessionPlayerJoinedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(SessionPlayerJoinedMessage) == 64);

}
