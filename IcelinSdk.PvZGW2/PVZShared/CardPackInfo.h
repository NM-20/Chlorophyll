#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BA20
   RuntimeId:        2674
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C30A8
   Default Value:    0000000142867808
*/
#pragma pack(push, 8)
struct CardPackInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 Identifier; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING StringId; /* 0x0008 */
  FB_BOOLEAN openUponGrant; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CardPackInfo) == 24);

}
