#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        19B3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422D4628
   Address:          00000001430C7008
   Default Value:    0000000142857E38
*/
#pragma pack(push, 8)
struct NucleusCloseBrowserMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(NucleusCloseBrowserMessage) == 48);

}
