#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833A08
   RuntimeId:        0153
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          0000000142833A20
   Default Value:    0000000000000000
*/
#pragma pack(push, 16)
struct AxisAlignedBox
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 min; /* 0x0000 */
  Vec3 max; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AxisAlignedBox) == 32);

}
