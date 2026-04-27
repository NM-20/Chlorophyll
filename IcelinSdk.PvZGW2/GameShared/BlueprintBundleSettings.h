#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/BundleHeapInfo.h>
#include <IcelinSdk.PvZGW2/Entity/BundleSettingsInfo.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D6A8
   RuntimeId:        1133
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAD40
   Default Value:    000000014284D6C0
*/
#pragma pack(push, 8)
struct BlueprintBundleSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  BundleHeapInfo Heap; /* 0x0000 */
  char pad_000C[0x0004];
  BundleSettingsInfo BundleSettingsInfo; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BlueprintBundleSettings) == 32);

}
