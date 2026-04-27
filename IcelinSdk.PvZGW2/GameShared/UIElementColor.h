#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C2E0
   RuntimeId:        1024
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B5CD8
   Default Value:    000000014284C300
*/
#pragma pack(push, 16)
struct UIElementColor
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 Rgb; /* 0x0000 */
  FB_FLOAT32 Alpha; /* 0x0010 */
  char pad_0014[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIElementColor) == 32);

}
