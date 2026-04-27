#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869FE8
   RuntimeId:        2545
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3688
   Default Value:    0000000142BB4FD0
*/
#pragma pack(push, 1)
struct XdpRawStatExport
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0001 */
#pragma pack(pop)

static_assert(sizeof(XdpRawStatExport) == 1);

}
