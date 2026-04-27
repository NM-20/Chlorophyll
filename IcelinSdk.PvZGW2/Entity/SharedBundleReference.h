#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/BundleHeapInfo.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B6A8
   RuntimeId:        08E0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCA28
   Default Value:    000000014283B6C0
*/
#pragma pack(push, 8)
struct SharedBundleReference
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  BundleHeapInfo Heap; /* 0x0008 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SharedBundleReference) == 24);

}
