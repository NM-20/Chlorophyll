#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsActionData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851B08
   RuntimeId:        14D4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C7E
   VfTable:          000000014227F000
   Address (Base):   00000001430D5DD0
*/
#pragma pack(push, 8)
class FloatPhysicsActionData : public PhysicsActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(FloatPhysicsActionData) == 24);

}
