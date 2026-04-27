#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/LanguageFormat.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C1E8
   RuntimeId:        1018
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C92C8
   Default Value:    000000014284C200
*/
#pragma pack(push, 8)
struct UIImmediateModeFontLookup
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LanguageFormat Language; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING FontAssetPath; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIImmediateModeFontLookup) == 16);

}
