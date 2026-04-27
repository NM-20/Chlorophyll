#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856AA0
   RuntimeId:        192F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C7148
   Default Value:    0000000142856AB8
*/
#pragma pack(push, 8)
struct UIFontMapping
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) ScaleformFontName; /* 0x0000 */
  FB_CSTRING FontLongName; /* 0x0008 */
  FB_BOOLEAN Bold; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIFontMapping) == 24);

}
