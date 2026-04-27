#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        092A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142212690
   Address:          00000001430CC968
   Default Value:    000000014283BAB8
*/
#pragma pack(push, 8)
struct BundleManagerBundleUnloadMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(BundleManagerBundleUnloadMessage) == 56);

}
