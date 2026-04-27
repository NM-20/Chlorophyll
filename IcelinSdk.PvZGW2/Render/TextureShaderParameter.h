#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853318
   RuntimeId:        1650
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C81E8
   Default Value:    0000000142853330
*/
#pragma pack(push, 8)
struct TextureShaderParameter
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING ParameterName; /* 0x0000 */
  FB_HANDLE(class TextureBaseAsset) Value; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TextureShaderParameter) == 16);

}
