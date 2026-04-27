#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428557F8
   RuntimeId:        1848
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B67
   VfTable:          00000001422BBCC0
   Address (Base):   00000001430E9E80
*/
#pragma pack(push, 16)
class RadiosityModifierEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 BounceScale; /* 0x0060 */
  FB_FLOAT32 SunScale; /* 0x0064 */
  char pad_0068[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(RadiosityModifierEntityData) == 112);

}
