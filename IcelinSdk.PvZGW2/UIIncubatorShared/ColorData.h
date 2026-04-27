#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 00000001428761F8
   RuntimeId:        2D94
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0648
   Default Value:    0000000142876210
*/
#pragma pack(push, 16)
struct ColorData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 ColorValue; /* 0x0000 */
  FB_CSTRING Name; /* 0x0010 */
  char pad_0018[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ColorData) == 32);

}
