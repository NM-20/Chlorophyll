#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsBodyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851820
   RuntimeId:        14A6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09BB
   VfTable:          000000014227F358
   Address (Base):   00000001430EB200
*/
#pragma pack(push, 8)
class CharacterPhysicsBodyData : public PhysicsBodyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CharacterPhysicsData) CharacterPhysics; /* 0x0030 */
  FB_FLOAT32 DistanceFromGroundRayCastLength; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(CharacterPhysicsBodyData) == 64);

}
