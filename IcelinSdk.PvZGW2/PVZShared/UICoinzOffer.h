#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870EA8
   RuntimeId:        2A15
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C18A8
   Default Value:    0000000142870EC0
*/
#pragma pack(push, 8)
struct UICoinzOffer
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 StoreID; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING Price; /* 0x0008 */
  FB_INT32 PriceNumber; /* 0x0010 */
  char pad_0014[0x0004];
  FB_CSTRING OriginalPrice; /* 0x0018 */
  FB_CSTRING CurrencyCode; /* 0x0020 */
  FB_UINT32 Coinz; /* 0x0028 */
  char pad_002C[0x0004];
  FB_CSTRING Title; /* 0x0030 */
  FB_CSTRING TagStringID; /* 0x0038 */
  FB_CSTRING Description; /* 0x0040 */
  FB_CSTRING ImageName; /* 0x0048 */
  FB_BOOLEAN IsEAAccessOffer; /* 0x0050 */
  char pad_0051[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UICoinzOffer) == 88);

}
