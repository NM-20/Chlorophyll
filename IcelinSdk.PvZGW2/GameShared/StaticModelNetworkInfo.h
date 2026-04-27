#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B8D0
   RuntimeId:        0F8C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB1A0
   Default Value:    000000014284B8E8
*/
#pragma pack(push, 8)
struct StaticModelNetworkInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct IndexRange) PartNetworkIdRanges; /* 0x0000 */
  FB_UINT32 NetworkIdCount; /* 0x0008 */
  char pad_000C[0x0004];
  FB_STDARRAY(struct ChildStaticModelNetworkInfo) ChildNetworkInfos; /* 0x0010 */
  FB_UINT32 ChildNetworkIdCount; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(StaticModelNetworkInfo) == 32);

}
