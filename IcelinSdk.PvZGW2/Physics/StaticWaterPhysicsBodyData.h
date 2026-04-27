#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/WaterPhysicsBodyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851C10
   RuntimeId:        14E4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09B4
   VfTable:          000000014227EDF0
   Address (Base):   00000001430EB020
*/
#pragma pack(push, 8)
class StaticWaterPhysicsBodyData : public WaterPhysicsBodyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(StaticWaterPhysicsBodyData) == 48);

}
