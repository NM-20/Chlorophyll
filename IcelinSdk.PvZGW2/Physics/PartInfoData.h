#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/AxisAlignedBox.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851F40
   RuntimeId:        1512
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C87C8
   Default Value:    0000000142BA4EC0
*/
#pragma pack(push, 16)
struct PartInfoData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AxisAlignedBox Aabb; /* 0x0000 */
  Vec3 Translation; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PartInfoData) == 48);

}
