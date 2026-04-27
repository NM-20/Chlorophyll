#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833988
   RuntimeId:        014F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001428339A0
   Default Value:    0000000000000000
*/
#pragma pack(push, 16)
struct LinearTransform
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 right; /* 0x0000 */
  Vec3 up; /* 0x0010 */
  Vec3 forward; /* 0x0020 */
  Vec3 trans; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(LinearTransform) == 64);

}
