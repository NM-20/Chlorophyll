#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Physics/ForceCondition.h>
#include <IcelinSdk.PvZGW2/Physics/ForceType.h>
#include <IcelinSdk.PvZGW2/Physics/SpaceType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850FB8
   RuntimeId:        1428
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8928
   Default Value:    0000000142BA4E80
*/
#pragma pack(push, 16)
struct ConstantForceData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 Value; /* 0x0000 */
  ForceCondition Condition; /* 0x0010 */
  ForceType TypeOfForce; /* 0x0014 */
  SpaceType Space; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ConstantForceData) == 32);

}
