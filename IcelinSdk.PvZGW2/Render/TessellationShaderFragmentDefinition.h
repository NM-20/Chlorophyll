#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853200
   RuntimeId:        1644
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8248
   Default Value:    0000000142853218
*/
#pragma pack(push, 8)
struct TessellationShaderFragmentDefinition
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Definition; /* 0x0000 */
  FB_BOOLEAN Enabled; /* 0x0008 */
  char pad_0009[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TessellationShaderFragmentDefinition) == 16);

}
