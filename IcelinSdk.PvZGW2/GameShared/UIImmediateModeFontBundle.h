#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/LanguageFormat.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C1B0
   RuntimeId:        1016
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C92E8
   Default Value:    000000014284C1C8
*/
#pragma pack(push, 8)
struct UIImmediateModeFontBundle
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LanguageFormat Language; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING BundlePath; /* 0x0008 */
  FB_REFARRAY(class UITtfAsset) TtfAssets; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIImmediateModeFontBundle) == 24);

}
