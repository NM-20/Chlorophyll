#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/WorldRender/GroundHeightData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855870
   RuntimeId:        184E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B5C
   VfTable:          00000001422BBC50
   Address (Base):   00000001430E9DC0
*/
#pragma pack(push, 16)
class GroundHeightEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  GroundHeightData Data; /* 0x0060 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(GroundHeightEntityData) == 128);

}
