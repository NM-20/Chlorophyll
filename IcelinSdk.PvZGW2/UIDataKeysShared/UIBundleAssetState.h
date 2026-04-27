#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIState.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875AD0
   RuntimeId:        2D46
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C06E8
   Default Value:    0000000142875AE8
*/
#pragma pack(push, 8)
struct UIBundleAssetState
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING StateName; /* 0x0000 */
  UIState UIState; /* 0x0008 */
  char pad_000C[0x0004];
  FB_CSTRING StatePath; /* 0x0010 */
  FB_CSTRING BundlePath; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIBundleAssetState) == 32);

}
