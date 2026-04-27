#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864618
   RuntimeId:        21FB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4908
   Default Value:    0000000142864630
*/
#pragma pack(push, 16)
struct SelectTransformInput
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LinearTransform DefaultValue; /* 0x0000 */
  FB_CSTRING Name; /* 0x0040 */
  char pad_0048[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(SelectTransformInput) == 80);

}
