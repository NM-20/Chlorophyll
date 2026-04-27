#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsBodyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851BF0
   RuntimeId:        14E2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09B3
   VfTable:          000000014227EF08
   Address (Base):   00000001430DB630
*/
#pragma pack(push, 8)
class WaterPhysicsBodyData : public PhysicsBodyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(WaterPhysicsBodyData) == 48);

}
