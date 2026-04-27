#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B9B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422403B0
   Address:          00000001430CB0A8
   Default Value:    0000000142843980
*/
#pragma pack(push, 8)
struct NetworkLevelInstalledMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(NetworkLevelInstalledMessage) == 72);

}
