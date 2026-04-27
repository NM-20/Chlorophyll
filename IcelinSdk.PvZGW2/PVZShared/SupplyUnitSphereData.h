#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DBF8
   RuntimeId:        284A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          087C
   VfTable:          000000014236E970
   Address (Base):   00000001430E43C0
*/
#pragma pack(push, 8)
class SupplyUnitSphereData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0010 */
  FB_FLOAT32 MaxRadius; /* 0x0014 */
  FB_FLOAT32 RadiusChangeTime; /* 0x0018 */
  FB_FLOAT32 SupplyIncSpeed; /* 0x001C */
  FB_FLOAT32 InstantRefill; /* 0x0020 */
  FB_FLOAT32 SupplyPointsRefillSpeed; /* 0x0024 */
  FB_FLOAT32 SupplyPointsCapacity; /* 0x0028 */
  FB_BOOLEAN ForceUseInstantRefill; /* 0x002C */
  FB_BOOLEAN InfiniteCapacity; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SupplyUnitSphereData) == 48);

}
