#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/BundleHeapType.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C0C0
   RuntimeId:        0980
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B5728
   Default Value:    000000014283C0D8
*/
#pragma pack(push, 4)
struct BundleHeapInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  BundleHeapType HeapType; /* 0x0000 */
  FB_UINT32 InitialSize; /* 0x0004 */
  FB_BOOLEAN AllowGrow; /* 0x0008 */
  char pad_0009[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(BundleHeapInfo) == 12);

}
