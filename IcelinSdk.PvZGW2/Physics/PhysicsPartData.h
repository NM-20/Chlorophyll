#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/AxisAlignedBox.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851988
   RuntimeId:        14BC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8868
   Default Value:    0000000142BA4EA0
*/
#pragma pack(push, 16)
struct PhysicsPartData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AxisAlignedBox Aabb; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PhysicsPartData) == 32);

}
